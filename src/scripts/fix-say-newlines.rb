#!/usr/bin/env ruby

require 'optparse'
require 'fileutils'

DEFAULT_GLOB = '*-idg.xml'
PATTERN = '</say><say'
HEADING_REGEX = /(?<=.)(?<![\r\n])(<h[234]\b)/
DTP_BEFORE_REGEX = /(?<=.)(?<![\r\n])(<\?dtp\b)/
DTP_AFTER_REGEX = /(<\?dtp\b.*?\?>)(?=[^\r\n])/

repo_root = File.expand_path('../..', __dir__)
default_dir = File.join(repo_root, 'InDesign', 'shinosawa2-idgxml')

options = {
  dir: default_dir,
  glob: DEFAULT_GLOB,
  apply: false,
  backup: true,
  verbose: false,
}

OptionParser.new do |opts|
  opts.banner = "Usage: #{File.basename($PROGRAM_NAME)} [options]"

  opts.on('--dir DIR', 'Target directory (default: repo/InDesign/shinosawa2-idgxml)') do |v|
    options[:dir] = v
  end

  opts.on('--glob GLOB', "Target file glob inside dir (default: #{DEFAULT_GLOB})") do |v|
    options[:glob] = v
  end

  opts.on('--apply', 'Actually rewrite files (default: dry-run)') do
    options[:apply] = true
  end

  opts.on('--no-backup', 'Do not create backup files when --apply is used') do
    options[:backup] = false
  end

  opts.on('--verbose', 'Verbose output') do
    options[:verbose] = true
  end

  opts.on('-h', '--help', 'Show help') do
    puts opts
    exit 0
  end
end.parse!

dir = File.expand_path(options[:dir])
pattern = File.join(dir, options[:glob])
paths = Dir.glob(pattern).select { |p| File.file?(p) }.sort

if paths.empty?
  warn "No files matched: #{pattern}"
  exit 1
end

total_matches = 0
changed_files = 0

paths.each do |path|
  content = File.binread(path)
  newline = content.include?("\r\n") ? "\r\n" : "\n"

  say_count = content.scan(PATTERN).length
  heading_count = content.scan(HEADING_REGEX).length
  dtp_before_count = content.scan(DTP_BEFORE_REGEX).length
  dtp_after_count = content.scan(DTP_AFTER_REGEX).length
  dtp_count = dtp_before_count + dtp_after_count

  count = say_count + heading_count + dtp_count
  next if count == 0

  total_matches += count
  changed_files += 1

  if options[:apply]
    backup_path = nil
    if options[:backup]
      ts = Time.now.strftime('%Y%m%d-%H%M%S')
      backup_path = "#{path}.bak.#{ts}"
      FileUtils.cp(path, backup_path)
    end

    replaced = content
      .gsub(PATTERN, "</say>#{newline}<say")
      .gsub(HEADING_REGEX, "#{newline}\\1")
      .gsub(DTP_BEFORE_REGEX, "#{newline}\\1")
      .gsub(DTP_AFTER_REGEX, "\\1#{newline}")
    File.binwrite(path, replaced)

    if options[:verbose]
      details = "total=#{count} say=#{say_count} heading=#{heading_count} dtp=#{dtp_count}(before=#{dtp_before_count},after=#{dtp_after_count})"
      if backup_path
        puts "APPLY #{path} (#{details}) backup=#{backup_path}"
      else
        puts "APPLY #{path} (#{details})"
      end
    end
  else
    puts "DRYRUN #{path} (total=#{count} say=#{say_count} heading=#{heading_count} dtp=#{dtp_count}(before=#{dtp_before_count},after=#{dtp_after_count}))"
  end
end

if options[:apply]
  puts "DONE files=#{paths.length} changed=#{changed_files} replacements=#{total_matches}"
else
  puts "SUMMARY files=#{paths.length} affected=#{changed_files} replacements=#{total_matches}"
end
