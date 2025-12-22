#!/usr/bin/env ruby

require 'optparse'
require 'fileutils'

DEFAULT_GLOB = '*-idg.xml'
PATTERN = '</say><say'

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
  next unless content.include?(PATTERN)

  newline = content.include?("\r\n") ? "\r\n" : "\n"
  count = content.scan(PATTERN).length
  total_matches += count

  if count > 0
    changed_files += 1
  end

  if options[:apply]
    backup_path = nil
    if options[:backup]
      ts = Time.now.strftime('%Y%m%d-%H%M%S')
      backup_path = "#{path}.bak.#{ts}"
      FileUtils.cp(path, backup_path)
    end

    replaced = content.gsub(PATTERN, "</say>#{newline}<say")
    File.binwrite(path, replaced)

    if options[:verbose]
      if backup_path
        puts "APPLY #{path} (#{count} replacements) backup=#{backup_path}"
      else
        puts "APPLY #{path} (#{count} replacements)"
      end
    end
  else
    puts "DRYRUN #{path} (#{count} replacements)"
  end
end

if options[:apply]
  puts "DONE files=#{paths.length} changed=#{changed_files} replacements=#{total_matches}"
else
  puts "SUMMARY files=#{paths.length} affected=#{changed_files} replacements=#{total_matches}"
end
