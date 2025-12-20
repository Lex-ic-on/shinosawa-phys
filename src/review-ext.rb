module ReVIEW
  module BuilderOverride
    attr_reader :mbib_cnt, :mbib_index, :thm_cnt, :thm_index

    Compiler.definline :ustrong
    Compiler.definline :delstrong
    Compiler.definline :person
    Compiler.defsingle :eqnum, 1
    Compiler.defsingle :eqnminus, 1
    Compiler.defsingle :mbibpaper, 2
    Compiler.definline :mbib
    Compiler.defsingle :beginthm, 0..3
    Compiler.defsingle :endthm, 0
    Compiler.definline :thm
    Compiler.defsingle :say, 2
    Compiler.defsingle :beginsay, 1
    Compiler.defsingle :endsay, 0
    

    def initialize(strict = false, *_args, img_math: nil, img_graph: nil)
      @strict = strict
      @output = nil
      @logger = ReVIEW.logger
      @doc_status = {}
      @dictionary = {}
      @img_math = img_math
      @img_graph = img_graph
      @shown_endnotes = true
      @mbib_cnt = {}
      @mbib_index = {}
      @thm_cnt = {}
      @thm_index = {}
    end

    def inline_ustrong(s)
      return "\\reviewstrong{\\reviewunderline{" + s + "}}"
    end

    def inline_delstrong(s)
      return "\\reviewstrong{\\reviewstrike{" + s + "}}"
    end

    def inline_small(s)
      return "{\\small #{s}}"
    end

    def inline_person(s)
      return "\\noindent\\reviewstrong{" + s + "}　"
    end

    def eqnum(n)
      # nil
    end

    def eqnminus(n)
      # nil
    end

    def mbibpaper(id, lines)
      # nil
    end

    def mbib_getno(id)
      ans = 0
      if !@mbib_index[id] or id.blank?
        if @mbib_cnt[@chapter.number]
          @mbib_cnt[@chapter.number] += 1
        else
          @mbib_cnt[@chapter.number] = 1
        end
        ans = @mbib_cnt[@chapter.number]
        if !@mbib_index[id]
          @mbib_index[id] = ans
        end
      else
        ans = @mbib_index[id]
      end
      return ans
    end

    def inline_mbib(id)
      number = mbib_getno(id)
      return %Q([#{number.to_s}])
    end

    def say(name, line)
      
    end

    def beginsay(name)
      
    end

    def endsay()
      
    end

    def beginthm(id = nil, caption = '', type = '定理')

    end

    def endthm()

    end
    
    def inline_thm(id)
      return %Q(#{@thm_index[id]})
    end
  end

  class Builder
    prepend BuilderOverride
  end

  module IndexBuilderOverride
    attr_reader :eqn, :blkn

    def initialize(strict = false, *args)
      super
      @eqn = 0
      @blkn = 0
    end

    Compiler.defsingle :eqnum, 1
    def eqnum(n)
      @eqn = n.to_i - 1
    end

    Compiler.defsingle :eqnminus, 1
    def eqnminus(n)
      @eqn -= n.to_i
    end

    def texequation(_lines, id = nil, caption = '')
      @blkn += 1
      check_id(id)
      without_beginend = _lines.join(' ').gsub(/\\begin\{.*?\}[\s\S]*?\\end\{.*?\}/, '')
      rows = 1 + without_beginend.scan('\\\\').size - without_beginend.scan('\\notag').size
      for i in 1..rows do
        if id.present?
          if i == 1
            item = ReVIEW::Book::Index::Item.new(id, @eqn + 1)
          else
            item = ReVIEW::Book::Index::Item.new(id + '-' + i.to_s, @eqn + 1)
          end
        else
          item = ReVIEW::Book::Index::Item.new('eq-' + @chapter.number.to_s + '-' + @blkn.to_s + '-' + i.to_s, @eqn + 1)
        end
        @equation_index.add_item(item)
        @eqn += 1
      end
      compile_inline(caption)
    end
  end

  class IndexBuilder
    prepend IndexBuilderOverride
  end

  module LATEXBuilderOverride

    attr_reader :blkn

    def builder_init_file
      super
      @chapter.book.image_types = %w[.ai .eps .pdf .tif .tiff .png .bmp .jpg .jpeg .gif]
      @blank_needed = false
      @latex_tsize = nil
      @tsize = nil
      @cellwidth = nil
      @ol_num = nil
      @first_line_num = nil
      @foottext = {}
      @blkn = 0
      setup_index
      initialize_metachars(@book.config['texcommand'])
    end
    private :builder_init_file

    def mbibpaper(id, lines)
      number = mbib_getno(id)
      compiled = compile_inline(lines)
      puts %Q([#{number}] \\quad #{compiled}\\par\n)
    end

    def say(name, line)
      puts %Q(\\say{#{name}}{#{compile_inline(line)}})
    end

    def beginsay(name)
      puts %Q(\\say{#{name}}{)
    end

    def endsay()
      puts %Q(})
    end

    def inline_b(str)
      if @book.config.check_version('2', exception: false)
        macro('textbf', compile_inline(str))
      else
        macro('reviewbold', compile_inline(str))
      end
    end

    def beginthm(id = nil, caption = '', type = '定理')
      if @thm_cnt[@chapter.number]
        @thm_cnt[@chapter.number] += 1
      else
        @thm_cnt[@chapter.number] = 1
      end
      ans = @thm_cnt[@chapter.number]
      
      if id.present?
        @thm_index[id] = ans
      end

      puts '\\begin{reviewminicolumn}'
      puts %Q({\\large #{type} #{ans}: #{compile_inline(caption)}})
    end

    def endthm()
      puts '\\end{reviewminicolumn}'
    end

    def texequation(lines, id = nil, caption = '')
      blank
      @blkn += 1
      captionstr = nil
      nonum = false

      begin
        eqnum = if id.present?
          @chapter.equation(id).number
        else
          @chapter.equation(%Q(eq-#{@chapter.number}-#{@blkn}-1)).number
        end

        puts macro('begin', 'reviewequationblock')
        captionstr = if get_chap.nil?
                        macro('reviewequationcaption', "#{I18n.t('equation')}#{I18n.t('format_number_header_without_chapter', [eqnum])}#{I18n.t('caption_prefix')}#{compile_inline(caption)}")
                      else
                        macro('reviewequationcaption', "#{I18n.t('equation')}#{I18n.t('format_number_header', [get_chap, eqnum])}#{I18n.t('caption_prefix')}#{compile_inline(caption)}")
                      end

        if caption_top?('equation') && captionstr
          puts captionstr
        end

      rescue KeyError
        nonum = true
      end

      puts "\\begingroup"
      puts "\\setlength{\\abovedisplayskip}{0pt}"
      puts macro('begin', 'align')
      lines.each do |line|
        puts line
      end
      puts macro('end', 'align')
      puts "\\endgroup"

      if !caption_top?('equation') && captionstr
        puts captionstr
      end

      if !nonum
        puts macro('end', 'reviewequationblock')
      end
      blank
    end
  end

  class LATEXBuilder
    prepend LATEXBuilderOverride
  end

  module IDGXMLBuilderOverride
    Compiler.definline :ustrong
    Compiler.definline :delstrong
    Compiler.definline :person

    def inline_ustrong(s)
      return %Q(<underlinestrong>#{s}</underlinestrong>)
    end

    def inline_delstrong(s)
      return %Q(<delstrong>#{s}</delstrong>)
    end

    def inline_small(s)
      return %Q(<small>#{s}</small>)
    end

    def inline_person(s)
      return %Q(<person>#{s}</person>　)
    end

    def mbibpaper(id, lines)
      number = mbib_getno(id)
      compiled = compile_inline(lines)
      puts %Q(<span type='bibno'>[#{number}] </span>)
      puts %Q(<bibitem id="bib-#{id}">)
      puts compiled
      puts '</bibitem>'
    end

    def say(name, line)
      puts %Q(<say>)
      puts %Q(<name>#{name}</name>)
      puts %Q(<line>#{compile_inline(line)}</line>)
      puts %Q(</say>)
    end

    def beginsay(name)
      puts %Q(<say>)
      puts %Q(<name>#{name}</name>)
      puts %Q(<line>)
    end

    def endsay()
      puts %Q(</line>)
      puts %Q(</say>)
    end

    def inline_b(str)
      %Q(<b>#{compile_inline(str)}</b>)
    end

    def inline_mbib(id)
      number = mbib_getno(id)
      return %Q(<span type='bibno'>[#{number}] </span>)
    end

    def beginthm(id = nil, caption = '', type = '定理')
      print %Q(<theorem type = '#{type}'>)
      puts "<title aid:pstyle='theorem-title'>#{compile_inline(caption)}</title>" if caption.present?
    end

    def endthm()
      puts "</theorem>"
    end

    def inline_m(str)
      @texinlineequation += 1
      if @book.config['math_format'] == 'imgmath'
        math_str = '$\\rule[-5pt]{0.01pt}{0.01pt}' + str + '$'
        key = Digest::SHA256.hexdigest(str)
        if File.exist?(%Q(images/_review_math_cache/_gen_#{key}.pdf))
          img_path = %Q(images/_review_math/_gen_#{key}.pdf)
          File.open("images/_review_math_cache/cache_hits", "a") do |file|
            file.puts %Q(images/_review_math_cache/_gen_#{key}.pdf)
          end
        else
          img_path = @img_math.defer_math_image(math_str, key)
        end
        %Q(<inlineequation><Image href="file://#{img_path}" type="inline" /></inlineequation>)
      else
        %Q(<replace idref="texinline-#{@texinlineequation}"><pre>#{escape(str)}</pre></replace>)
      end
    end

    def texequation(lines, id = nil, caption = '')
      @texblockequation += 1
      caption_str = nil
      if id
        puts '<equationblock>'
        caption_str = if get_chap.nil?
                        %Q(<caption>#{I18n.t('equation')}#{I18n.t('format_number_without_chapter', [@chapter.equation(id).number])}#{I18n.t('caption_prefix_idgxml')}#{compile_inline(caption)}</caption>)
                      else
                        %Q(<caption>#{I18n.t('equation')}#{I18n.t('format_number', [get_chap, @chapter.equation(id).number])}#{I18n.t('caption_prefix_idgxml')}#{compile_inline(caption)}</caption>)
                      end
        puts caption_str if caption_top?('equation')
      end

      if @book.config['math_format'] == 'imgmath'
        fontsize = @book.config['imgmath_options']['fontsize'].to_f
        lineheight = @book.config['imgmath_options']['lineheight'].to_f

        begin
          eqnum = if id.present?
            @chapter.equation(id).number
          else
            @chapter.equation(%Q(eq-#{@chapter.number}-#{@texblockequation}-1)).number
          end
          math_str = "\\setcounter{section}{#{@chapter.number}}\n\\setcounter{equation}{#{eqnum}}\n\\begin{align}\n\\fontsize{#{fontsize}}{#{lineheight}}\\selectfont\n#{lines.join("\n")}\n\\end{align}\\begin{center}$\\rule[#{lineheight}pt]{0.01pt}{0.01pt}$\\end{center}\n"
        rescue KeyError
          math_str = "\\begin{align*}\n\\fontsize{#{fontsize}}{#{lineheight}}\\selectfont\n#{lines.join("\n")}\n\\end{align*}\\begin{center}$\\rule[#{lineheight}pt]{0.01pt}{0.01pt}$\\end{center}\n"
        end

        key = Digest::SHA256.hexdigest(lines.join("\n") + %Q(#{@chapter.number}.#{@texblockequation}))
        if File.exist?(%Q(images/_review_math_cache/_gen_#{key}.pdf))
          img_path = %Q(images/_review_math/_gen_#{key}.pdf)
          File.open("images/_review_math_cache/cache_hits", "a") do |file|
            file.puts %Q(images/_review_math_cache/_gen_#{key}.pdf)
          end
        else
          img_path = @img_math.defer_math_image(math_str, key)
        end
        puts '<equationimage>'
        puts %Q(<Image href="file://#{img_path}" />)
        puts '</equationimage>'
      else
        puts %Q(<replace idref="texblock-#{@texblockequation}">)
        puts '<pre>'
        puts lines.join("\n")
        puts '</pre>'
        puts '</replace>'
      end

      if id
        puts caption_str unless caption_top?('equation')
        puts '</equationblock>'
      end
    end
  end

  class IDGXMLBuilder
    prepend IDGXMLBuilderOverride
  end
end
