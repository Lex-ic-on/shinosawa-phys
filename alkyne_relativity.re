= 篠澤広に教わる! 相対性理論(その2)

==[nonum] はじめに

本稿は、『篠澤広に物理学を解説してもらう合同』に寄稿した、「篠澤広に教わる！特殊相対論」の続きとなっています@<fn>{fn1}。本稿から、いよいよ一般相対論についての準備に入っていきます。

もし誤りなど見つけましたら、作者(@Alkatalynest)まで教えていただけますと大変ありがたいです。質問・批評・感想でも構いません。Xで呟いていただけましたらできるかぎり反応させていただきます。お手柔らかにお願いいたします……

==[nonum]{day4-わたしたちやればできる-計量と反変共変} Day4　わたしたち、やればできる？　～計量と反変・共変～

倉本さんは今日、朝からずっと落ち込んでいた。

//say[千奈][「うう……またやってしまいましたわ……」]

//say[千P][「どうしたのですか？」]

//say[千奈][「じ、実は……」]

話を聞くと、どうやら昨日倉本さんは佑芽さんと共用スペースのキッチンで料理をしていたらしい。

倉本さんがスイーツを食べたい、と提案したらしく、それに乗っかった佑芽さんが特大ホットケーキを作ろう、と言い出して、ホットケーキミックスまるまる一袋を使ってホットケーキを作ろうとしたそうだ。

その時に、生地を一気にフライパンに流し込んで、フライパンの深さの八分目まで入れてしまったらしい。

そのまま加熱しても当然なかなか火が通るわけがなくひっくり返せないので、強火にしたうえで、蒸しパンみたいに蒸して加熱してみようと、フライパンに蓋をしてしまったようだった。

ホットケーキミックスには、二酸化炭素が発生する成分が含まれていて、この二酸化炭素が生地を膨らませてふわふわに仕上がる。

蓋をしたことでこの二酸化炭素や水蒸気の逃げ場がなくなって圧力がかかり、生焼けの生地が吹き出してキッチンが大惨事になった、というのが事件の顛末である。

キッチンはホットケーキ臭くなった上、フライパンは焦げ付いて使い物にならなくなって、生地は色々なところに飛散してこびりつき、煙は立ち上って、それはもう大変なことになったそうだ。

とりあえず、やけどは特になかったと聞いて一安心した。

その後二人は、匂いと煙に気づいてやってきた寮長の有村さんから、長めのお説教と、しばらくの間は許可なくキッチンを使うことを禁止されたようで、倉本さんはそれを少し引きずっているようだった。

//blankline

//say[千奈][「デザートくらいなら簡単に作れると思いましたのに！」]

//say[千P][「料理には適量というものがありますからね……」]

//say[広][「今朝、キッチンが封鎖されてたのって、そういうことだったんだ。」]

//say[千奈][「あ、篠澤さん！」]

篠澤さんがどこからともなくやってくる。

毎回、気配がなくすっと話に入ってくる気がするのだが、なにか彼女の特殊能力みたいなものなのだろうか。

//say[広][「プロデューサーの言う通り。料理をするときは何でも量をはかってやらないと。」]

//say[千奈][「……そ、それはそうですけれど！大きいホットケーキには夢がありますわ！それに、篠澤さんは細かすぎるんですの！」]

//say[広][「料理は、科学だから。」]

//say[千奈][「この前、そう言ってソースの調味料の混ぜ合わせを超厳密にやろうとして、ソースを作るのに時間をかけすぎて、思い切り料理を焦がしてましたわよね！？」]

//say[広][「そのレシピの味を再現するなら、ちゃんとメニスカスを見て適量で合わせないと。」]

//say[千P][「……確かに適量が重要とはいえ、それはそれで問題がある気がしますが。」]

//centering{
～（ゼミ開始）～
//}

//say[広][「……さて、さっきの料理のくだりもあったことだし、今日は計量の話から入ろうか。」]

//say[千奈][「けい……りょう？って、計量カップとかのあの計量ですの？」]

//say[広][「そう。量を計ることの、計量。」]

//say[広][「突然だけど、千奈。ノルムは覚えてるかな。」]

//say[千奈][「はい、確か2種類あって、Euclid（ユークリッド）ノルムと、みん……何たらノルムですわ。」]

//say[広][「Minkowski（ミンコフスキ）ノルム。」]

//say[千奈][「そう、それですわ！」]

//say[広][「じゃあ、まずこの前までの話を振り返って、それぞれの定義を言ってみて。」]

//say[千奈][「点@<m>{(x,y,z,ct)}と点@<m>{(x',y',z',ct')}があったときに、Euclidノルムは@<m>$\sqrt{(x'-x)^2 + (y'-y)^2 + (z'-z)^2}$、Minkowskiノルムは@<m>$\sqrt{\left\lvert(x'-x)^2 + (y'-y)^2 + (z'-z)^2 - (ct' - ct)^2\right\rvert}$ですわ。」]

//say[広][「うん。そして、Euclidノルムは空間座標に対して、ある瞬間の物体の長さを計るために使うのだった。では、Minkowskiノルムは何に使うのかな。」]

//say[千奈][「……そういえば、意味をちゃんと話されていない気がしますわ。」]

//say[広][「実はこのノルムのことを話したときは、固有時間の話を出す前だったから、ちゃんと説明していなかった。固有時間を思い出すと、このノルムの意味がわかる。千奈、自分から見て速さ@<m>{v}で動いている物体の固有時間@<m>{\tau}は、自分の時空の時間@<m>{t}を使ってどう書き表されるか、覚えてるかな。」]

//say[千奈][「ノートを見返しますわ……あ、あった！@<m>$\tau = t/\gamma = \sqrt{1-\beta^2}t = \sqrt{1-(v/c)^2}t$ですわ！」]

//say[広][「そう。ここで、今回は@<m>$\bm{v} = (dx/dt, dy/dt, dz/dt)$と書くことにして、自分にとって時間が@<m>{dt}だけ進む間に、物体の固有時間@<m>{\tau}がどれだけ進むかを考えてみる。かなり雑な計算だけど、@<m>{d\tau}は次のように計算できる。」]

//texequation{
  d\tau &= dt \cdot \sqrt{1-\frac{1}{c^2} \left\{\left(\frac{dx}{dt}\right)^2 + \left(\frac{dy}{dt}\right)^2 + \left(\frac{dz}{dt}\right)^2\right\}}\\
  &= \frac{1}{c} \cdot \sqrt{c^2 (dt)^2- (dt)^2 \left\{\left(\frac{dx}{dt}\right)^2 + \left(\frac{dy}{dt}\right)^2 + \left(\frac{dz}{dt}\right)^2\right\}}\\
  &= \frac{1}{c} \cdot \sqrt{(c\,dt)^2- (dx^2 + dy^2 + dz^2)}\\
  \iff c\,d\tau &= \sqrt{(c\,dt)^2- (dx^2 + dy^2 + dz^2)}
//}

//say[広][「最後の形、見覚えがないかな。」]

//say[千奈][「あ！Minkowskiノルムっぽい形がありますわ！」]

//say[広][「そう。この式が表しているのは、ある時空において、それぞれ@<m>{dx,dy,dz,c\,dt}だけ離れた2点のMinkowskiノルムを計算することで、その点の間の固有時間が求まるということ。」]

//say[広][「これをもう少しわかりやすく言ってみると、次のとおりになる。例えば、千奈から見て、佑芽が点@<m>{(x,y,z,ct)}から点@<m>{(x+\Delta x,y+\Delta y,z+\Delta z,ct + c\,\Delta t)}まで、ある許された世界線で移動したとする。このときに千奈にとって経過した時間は@<m>{\Delta t}だけど、この佑芽の世界線のMinkowskiノルムによる長さを計ることで、佑芽にとって経過した時間@<m>{\Delta \tau}を知ることができる、ということになる。つまり、固有時間というのは、世界線の長さに対応しているということ。」]

//image[day04_fig01][]

//say[千奈][「なるほど！つまり世界線の長さが計ることができれば、その人にとっての固有時間を計ることができる、ということですのね！」]

//say[広][「そういうこと。このように相対論では、世界線の長さを測ることが重要になってくる。長さを測るためには、一番最初にも言ったけど、定義や基準が必要になる。こういった、距離を定める関数のことを計量という。」]

//say[広][「もう少し噛み砕いて言えば、Minkowskiノルムは、この相対論における世界線の長さを定めてくれる計量で、これによって固有時間が測れる、ということ。」]

//say[広][「うん。じゃあ例題。千奈から見て、5秒間に等速度で@<m>{3c}の距離を進んだ物体にとって、固有時間はどれくらい進んでいるかな。」]

//say[千奈][「Minkowskiノルムを使って考えれば、@<m>$\sqrt{(5c)^2 - (3c)^2}/c = 4c/c = 4$ですから、4秒ですわ！」]

//say[広][「その通り。」]

//image[day04_fig02][]

//say[千奈][「……あれ、でもよくよく考えたら世界線って直線とは限らないですわよね？曲線の長さってどう定めるのかしら……」]

//say[広][「じゃあ、とりあえずEuclidノルムを計量とする、これまでの普通の座標の世界に戻って、曲線の長さについて考えてみよう。」]

//say[広][「まずはシンプルに2次元の直交座標系を考える。@<m>{x^2 + y^2 = 1}で表される、半径1の円の円周の長さを考えてみよう。千奈、まずこの円周は求められるよね。」]

//say[千奈][「@<m>{2\pi}ですわ。」]

//say[広][「うん。そしたら、次。この円は、ある@<m>{\theta}というパラメータを使うと、@<m>{(x,y) = (\cos\theta, \sin\theta)}と表される。パラメータが@<m>{d\theta}だけ微小に変化したときに、@<m>{x,y}の変化する量@<m>{dx,dy}はどうなるかな。」]

//say[千奈][「微分の考え方を使えば……こうなるはずですわ！」]

//texequation{
(dx,dy) = \left(\frac{dx}{d\theta}\cdot d\theta, \frac{dy}{d\theta}\cdot d\theta \right) = (-\sin\theta \,d\theta, \cos\theta\,d\theta)
//}

//say[広][「そうなる。じゃあ、パラメータが@<m>{d\theta}だけ変化したときに、この点@<m>{(x,y) = (\cos\theta, \sin\theta)}が移動する微小距離@<m>{ds}を求めて。」]

//say[千奈][「Euclidノルムを使えば……こうなるはずですわ。」]

//texequation{
ds = \sqrt{dx^2 + dy^2} = \sqrt{(-\sin\theta\,d\theta)^2 + (\cos\theta\,d\theta)^2} = d\theta
//}

//say[広][「うん、正しい。最後に、@<m>{\theta}は今回は角度とみなせるけど、これは0から@<m>{2\pi}まで変化するから、積分の考え方を使って点の微小な移動距離@<m>{ds}を積分してみれば、円周の長さ@<m>{s}が求まって、こうなる。」]

//texequation{
s = \int_0^{2\pi} d\theta = \boxed{2\pi}
//}

//say[千奈][「……同じ結果になりましたけど、なんだか当たり前過ぎてつまらないですわ……」]

//say[広][「じゃあもう一問。これと同じ要領で、@<m>{y=x^2}の@<m>{-1/2 \le x \le 1/2}の部分の曲線の長さを求めてみて。」]

//say[千奈][「わかりましたわ！まずパラメータ@<m>{t}を使えば、@<m>{(x,y) = (t,t^2)}とおけますから、@<m>{dt}だけ変化したら……」]

//texequation{
(dx,dy) = (dt, 2t\,dt)
//}

//say[千奈][「ここから動く距離@<m>{ds}を求めて……」]

//texequation{
ds = \sqrt{dx^2 + dy^2} = \sqrt{dt^2 + 4t^2 \,dt^2} = \sqrt{1 + 4t^2}\,dt
//}

//say[千奈][「@<m>{t}は@<m>{x}と同じで@<m>{-1/2}から1/2を動きますから……」]

//texequation{
s = \int_{-1/2}^{1/2} \sqrt{1 + 4t^2}\,dt
//}

//say[千奈][「この積分解けませんわ～！！！」]

//say[広][「落ち着いて。@<m>$t = \dfrac{1}{2}\tan \theta$と置換すれば、大丈夫。」]

//texequation{
s = \int_{-\pi/4}^{\pi/4} \sqrt{1+\tan^2 \theta} \cdot \frac{1}{2\cos^2 \theta}\,d\theta = \frac{1}{2} \int_{-\pi/4}^{\pi/4} \frac{d\theta}{\cos^3 \theta} = \int_{0}^{\pi/4} \frac{d\theta}{\cos^3 \theta}
//}

//say[千奈][「ど、どこが大丈夫ですの！？」]

//say[広][「焦らず、落ち着いて。」]

//texequation{
\int_{0}^{\pi/4} \frac{d\theta}{\cos^3 \theta} = \int_{0}^{\pi/4} \frac{\cos\theta\,d\theta}{\cos^4 \theta} = \int_{0}^{\pi/4} \frac{\cos\theta\,d\theta}{(1-\sin^2 \theta)^2}
//}
@<m>{w = \sin \theta}とおくと、@<m>{dw = \cos\theta \,d\theta}より
//texequation{
\int_{0}^{\pi/4} \frac{\cos\theta\,d\theta}{(1-\sin^2 \theta)^2} = \int_{0}^{1/\sqrt{2}} \frac{dw}{(1-w^2)^2} = \int_{0}^{1/\sqrt{2}} \frac{dw}{(1+w)^2 (1-w)^2}
//}
//texequation{
\frac{1}{(1+w)^2 (1-w)^2} = \frac{1}{4} \left(\frac{1}{1-w} + \frac{1}{1+w} + \frac{1}{(1-w)^2} + \frac{1}{(1+w)^2}\right)
//}
//texequation{
  \therefore s &= \int_{0}^{1/\sqrt{2}} \frac{1}{4} \left(\frac{1}{1-w} + \frac{1}{1+w} + \frac{1}{(1-w)^2} + \frac{1}{(1+w)^2}\right) \,dw\\
  &=\frac{1}{4} \left[-\log (1-w) + \log (1+w) + \frac{1}{1-w} - \frac{1}{1+w}\right]_0^{1/\sqrt{2}}\\
  &=\frac{1}{4} \left(\log \frac{1+(1/\sqrt{2})}{1-(1/\sqrt{2})}  + \frac{1}{1-(1/\sqrt{2})} - \frac{1}{1+(1/\sqrt{2})}\right)\\
  &= \frac{1}{4} \left(\log \frac{\sqrt{2}+1}{\sqrt{2}-1} + \frac{\sqrt{2}}{\sqrt{2}-1} - \frac{\sqrt{2}}{\sqrt{2}+1}\right)\\
  &= \boxed{\frac{\log (2\sqrt{2} + 3)}{4} + \frac{1}{\sqrt{2}}}
//}

//say[広][「ほら。落ち着けば、とっても簡単。」]

//say[千奈][「全然簡単じゃないですわ！」]

//say[広][「そうかな……さて、ここまででわかったと思うけど、あるパラメータ@<m>{t}を用いて、@<m>{(x,y) = (x(t),y(t))}で表される曲線の、@<m>{t=\alpha}の点から@<m>{t = \beta}の点までの長さ@<m>{s}は、次の式で表すことができる。」]
//texequation{
s = \int_\alpha^\beta \sqrt{\left(\frac{dx}{dt}\right)^2 + \left(\frac{dy}{dt}\right)^2} \,dt
//}

//say[広P][「曲線が@<m>{y=f(x)}と表されている場合は次のように書くことができます。これは、上の式で@<m>{t=x}とおけばよいので、基本的に覚えておくのは上の式だけで十分です。」]
//texequation{
s = \int_\alpha^\beta \sqrt{1 + \{f'(x)\}^2} \,dx
//}

//say[広][「世界線の長さを測るときにも同じ。要するに、千奈の時刻@<m>{t}に対して、千奈から見た物体の位置@<m>{(x,y,z)}を見てあげて、その位置を@<m>{x(t),y(t),z(t)}とみなしてあげれば、時刻@<m>{t=\alpha}から@<m>{t=\beta}にかけて経過したその物体の固有時間@<m>{\Delta \tau}は次のように計算できる。」]

//texequation{
\Delta \tau = \int_\alpha^\beta \sqrt{1 - \frac{1}{c^2}\left\{\left(\frac{dx}{dt}\right)^2 + \left(\frac{dy}{dt}\right)^2 + \left(\frac{dz}{dt}\right)^2\right\}}\,dt = \int_\alpha^\beta \sqrt{1-\frac{v^2 (t)}{c^2}} \,dt
//}

//say[千奈][「なるほど、完全に理解しましたわ！この式を使えば、どんなときでも固有時間が計算できますわね！」]

//say[広][「実は、話はそんなに単純ではない。」]

//say[千奈][「え！？」]

//say[広][「じゃあ千奈、質問だけど、もし千奈が曲線座標で考えていたら、この長さの計算って使えるかな。」]

//say[千奈][「確かに、曲線座標ってどうやって長さを決めればよいのかわかりませんわね……」]

//say[広][「そう。これまでは直交座標で色々考えてきたので、式も単純だった。でも、実際は直交座標ですべてを議論するとは限らない。だから、今までに紹介した式が使えない場合もある。」]

//say[千奈][「……で、でも、座標の取り方で長さが変わるってなんかおかしい気がしますわ……」]

//say[千奈][「わたくしが仮に座標の取り方を変えたとしても、わたくしの身の回りのものの長さは変わらないですわよね……？それってつまり、直交座標ではかっても、曲線座標ではかっても、長さって同じになってもらわないと、なんかおかしい気がしますの！」]

//say[広][「いや、別に長さが変わるのは、おかしくはないよ。それはただ単に、基準となる1の長さを変えて測っただけ。」]

//say[千奈][「そ、それは確かに……でも！」]

//say[広][「千奈の気持ちもわかる。測り方を変えただけで、ものの長さが変わるということは、測り方を変えると基準の長さも変わる、ということになってしまうけど、座標の取り方を変えるだけでいちいち長さの基準を変えてしまうのも面倒。」]

//say[広][「だから、千奈の言う通り、座標の取り方を変えても、ものの長さが同じになるようにしたい。そこで登場するのが、計量テンソル。」]

//say[千奈][「テンソル……ってなんですの？」]

//say[広][「それは後で説明するから、安心して。」]

//say[千奈][「わかりましたわ。」]

//say[広][「さて、話をもう一度2次元の平面座標に戻そう。いきなり曲線座標の議論をするのは難しいので、とりあえずまずは斜交座標系から考える。」]

//say[広][「まず、斜交座標系を一つ定めるには、原点Oの位置と、互いに一次独立な二つのベクトル@<m>$\bm{e}_1,\bm{e}_2$が必要になる。この組@<m>$(\mathrm{O}; \bm{e}_1, \bm{e}_2)$をフレームという。」]

//say[千奈][「なにか当たり前すぎる気がしますの……」]

//say[広][「今は当たり前に聞こえると思うけど、曲がった座標系がでてきたときに重要になるから、このフレームという概念は覚えていてほしい。」]

//say[広][「……じゃあ、千奈に質問。この斜交座標系では、@<m>$x^1 \bm{e}_1 + x^2 \bm{e}_2$のように点の位置ベクトルが表される。このときに、@<m>{x^1,x^2}はこの斜交座標系で考えたときの座標にあたる。添字が上付きなのは、座標は反変ベクトルだから@<fn>{fn2}。この座標だけを使って、原点とこの点の間をつなぐ線分の長さを表現できるかな。」]

//image[day04_fig03][]

//say[千奈][「うーん……難しいですわ。」]

//say[広][「ヒント……というか、もう答えだけど、ベクトルを二乗してみて。」]

//say[千奈][「こう……ですの？」]

//texequation{
(x^1 \bm{e}_1 + x^2 \bm{e}_2)^2 = (x^1)^2 (\bm{e}_1)^2 + 2x^1 x^2 (\bm{e}_1 \bullet \bm{e}_2) + (x^2)^2 (\bm{e}_2)^2
//}

//say[千奈][「……あ、そういえばベクトルの二乗って、長さの二乗でしたの！」]

//say[広][「そう。つまりこの式のルートをとれば、長さになる。この式は、座標@<m>{x^1,x^2}の他にも、基底ベクトルに関する情報が紛れ込んでいるのがわかると思う。つまり、斜交座標では、座標以外に、基底ベクトルもきちんとわかっていないといけない、ということになる。」]

//say[広][「そこで、@<m>$g_{ij} := \bm{e}_i \bullet \bm{e}_j$という量を定義する。千奈、この@<m>$g_{ij}$を使って、上の式を書き直してみて。」]

//say[千奈][「こうですわ。」]

//texequation{
s^2 = (x^1 \bm{e}_1 + x^2 \bm{e}_2)^2 = (x^1)^2 g_{11} + 2x^1 x^2 g_{12} + (x^2)^2 g_{22}
//}

//say[広][「うん、正しい。@<m>$\bm{e}_i \bullet \bm{e}_j = \bm{e}_j \bullet \bm{e}_i$、つまり@<m>$g_{ij} = g_{ji}$であることを使えば、こうなる。」]

//texequation[nagasa_eq]{
  s^2 = (x^1 \bm{e}_1 + x^2 \bm{e}_2)^2 = (x^1)^2 g_{11} + x^1 x^2 g_{12} + x^2 x^1 g_{21} + (x^2)^2 g_{22} = \sum_{i=1}^2 \sum_{j=1}^2 g_{ij} x^i x^j
//}

//say[広][「さらに、行列を使えばこうなる。」]

//texequation{
s^2 = (x^1 \bm{e}_1 + x^2 \bm{e}_2)^2 = \begin{pmatrix}
    x^1 & x^2
  \end{pmatrix}\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}\begin{pmatrix}
    x^1\\
    x^2
  \end{pmatrix}
//}

//say[広][「この式の真ん中にでてきた、@<m>$g_{ij}$の行列のことを、計量テンソルという。」]

//say[千奈][「つまり、計量テンソルというのは、長さを表すのに必要な基底ベクトルの情報を含んだ行列、ということですのね！」]

//say[広][「そう考えて大丈夫。」]

//say[広P][「ここで、@<m>$g_{11},g_{22}$など、@<m>$g_{ii}$という成分は@<m>$\bm{e}_i$の長さを規定していて、@<m>$g_{12}(g_{21})$など、@<m>{i\ne j}のときの@<m>$g_{ij}$の成分は、@<m>$\bm{e}_i,\bm{e}_j$の成す角度を規定しています。つまり、計量テンソルによって、基底ベクトルがどのように配置されているかの情報が書かれていることになります。」]

//say[広][「……さて、ここで基底ベクトルを縦ベクトルであるとすると、実は計量テンソルは、こんなふうにも導ける。」]

//texequation{
  s^2 &= (x^1 \bm{e}_1 + x^2 \bm{e}_2)^2 = (x^1 \bm{e}_1 + x^2 \bm{e}_2)^\top (x^1 \bm{e}_1 + x^2 \bm{e}_2)\\
  &= \left\{\begin{pmatrix}
    \bm{e}_1 & \bm{e}_2
  \end{pmatrix}\begin{pmatrix}
    x^1\\
    x^2
  \end{pmatrix}\right\}^\top \left\{\begin{pmatrix}
    \bm{e}_1 & \bm{e}_2
  \end{pmatrix}\begin{pmatrix}
    x^1\\
    x^2
  \end{pmatrix}\right\}\\
  &= \begin{pmatrix}
    x^1 & x^2
  \end{pmatrix}\begin{pmatrix}
    \bm{e}_1^\top \\
    \bm{e}_2^\top
  \end{pmatrix}\begin{pmatrix}
    \bm{e}_1 & \bm{e}_2
  \end{pmatrix}\begin{pmatrix}
    x^1\\
    x^2
  \end{pmatrix}\\
  &= \begin{pmatrix}
    x^1 & x^2
  \end{pmatrix}\begin{pmatrix}
    \bm{e}_1^\top \bm{e}_1 & \bm{e}_1^\top \bm{e}_2\\
    \bm{e}_2^\top \bm{e}_1 & \bm{e}_2^\top \bm{e}_2\\
  \end{pmatrix}\begin{pmatrix}
    x^1\\
    x^2
  \end{pmatrix}\\
  &= \begin{pmatrix}
    x^1 & x^2
  \end{pmatrix}\begin{pmatrix}
    \bm{e}_1 \bullet \bm{e}_1 & \bm{e}_1 \bullet \bm{e}_2\\
    \bm{e}_2 \bullet \bm{e}_1 & \bm{e}_2 \bullet \bm{e}_2\\
  \end{pmatrix}\begin{pmatrix}
    x^1\\
    x^2
  \end{pmatrix}\\
  &= \begin{pmatrix}
    x^1 & x^2
  \end{pmatrix}\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}\begin{pmatrix}
    x^1\\
    x^2
  \end{pmatrix}
//}

//say[広][「この式変形には、テンソルっぽさが含まれているんだけど……そろそろ、テンソルの話をしたほうが良いかな。」]

//say[千奈][「でましたわ、テンソル！テンソルって何ですの？」]

//say[広][「かなりざっくり言えば、ベクトル、行列とかの概念を、ひとまとまりにできるもの。とりあえず、一つずつ説明する。」]

//say[広][「まず、テンソルには階数という概念がある。1階のテンソル、2階のテンソル、3階のテンソル……というように、階数が@<m>{n}のテンソルを@<m>{n}階のテンソルという。1階のテンソルはベクトル、2階のテンソルは行列、と原則は考えて大丈夫。」]

//say[千奈][「確か、ベクトルの成分は1つの添字で、行列の成分は行と列の2つの添字で区別されてましたわよね。階数というのは、この添字の数、という考え方で良いんですの……？」]

//say[広][「うん、そう考えてOK。」]

//say[広][「次にテンソルの定義だけど、とりあえずまずは2階のテンソルから考える。次のような4つの性質を満たす、2つのベクトル変数の関数@<m>$\bm{T}(\heartsuit,\diamondsuit)$を、2階のテンソルという。」]

//texequation{
\begin{cases}
  \bm{T}(\bm{u}_1 + \bm{u}_2, \bm{v}) &= \bm{T}(\bm{u}_1,\bm{v}) + \bm{T}(\bm{u}_2,\bm{v})\\
  \bm{T}(k\bm{u},\bm{v}) &= k\bm{T}(\bm{u},\bm{v})
\end{cases}
//}

//texequation{
\begin{cases}
  \bm{T}(\bm{u}, \bm{v}_1 + \bm{v}_2) &= \bm{T}(\bm{u},\bm{v}_1) + \bm{T}(\bm{u},\bm{v}_2)\\
  \bm{T}(\bm{u},k\bm{v}) &= k\bm{T}(\bm{u},\bm{v})
\end{cases}
//}

//say[千奈][「よくわかりませんわ……」]

//say[広][「例えば、さっきの@<m>$g_{ij} = \bm{e}_i \bullet \bm{e}_j$を、関数@<m>$\bm{g}(\bm{e}_i,\bm{e}_j)$とみなしてみる。つまり、@<m>$\bm{g}(\heartsuit,\diamondsuit) = \heartsuit\bullet\diamondsuit$とする。このとき、この関数はさっきの4つの性質を満たす。」]

//texequation{
\begin{cases}
  \bm{g}(\bm{u}_1 + \bm{u}_2, \bm{v}) &= (\bm{u}_1 + \bm{u}_2)\bullet \bm{v}\\
  &=\bm{u}_1 \bullet \bm{v} + \bm{u}_2 \bullet \bm{v}\\
  &= \bm{g}(\bm{u}_1,\bm{v}) + \bm{g}(\bm{u}_2,\bm{v})\\
  \bm{g}(k\bm{u},\bm{v}) &= (k\bm{u}) \bullet \bm{v}\\
  &=k(\bm{u} \bullet \bm{v})\\
  &=k\bm{g}(\bm{u},\bm{v})
\end{cases}
//}

//texequation{
\begin{cases}
  \bm{g}(\bm{u}, \bm{v}_1 + \bm{v}_2) &=\bm{u} \bullet (\bm{v}_1 + \bm{v}_2)\\
  &=\bm{u} \bullet \bm{v}_1 + \bm{u} \bullet \bm{v}_2\\
  &= \bm{g}(\bm{u},\bm{v}_1) + \bm{g}(\bm{u},\bm{v}_2)\\
  \bm{g}(\bm{u},k\bm{v}) &= \bm{u} \bullet (k\bm{v})\\
  &=k(\bm{u} \bullet \bm{v})\\
  &=k\bm{g}(\bm{u},\bm{v})
\end{cases}
//}

//say[広][「つまり、@<m>$\bm{g}(\heartsuit,\diamondsuit)$は2階のテンソルになる。」]

//say[千奈][「うーん……なんかわかったようなわからないような……でもこれってさっきの@<m>$g_{ij}$とどう関係がありますの？」]

//say[広][「うん。さっき行列が2階のテンソルと言ったのに、今度は関数がテンソル、と言い出して、ここがよくわからなくなると思う。」]

//say[広][「でも千奈。ベクトルは必ず基底を使って表せることを思い出して。」]

//say[千奈][「えーっと……それって例えば、@<m>$\bm{u} = u^1 \bm{e}_1 + u^{2} \bm{e}_2$で表せるってことですわよね？」]

//say[広][「そう。この形を使って、@<m>$\bm{g}(\bm{u},\bm{v})$を書き下すと、どうなるかな。」]

//say[千奈][「やってみますわ。」]

//texequation{
  \bm{g} (\bm{u},\bm{v}) &= (u^1 \bm{e}_1 + u^{2} \bm{e}_2) \bullet (v^1 \bm{e}_1 + v^{2} \bm{e}_2)\\
  &= u^1 v^1 \bm{e}_1 \bullet \bm{e}_1 + u^1 v^2 \bm{e}_1 \bullet \bm{e}_2 + u^2 v^1 \bm{e}_2 \bullet \bm{e}_1 + u^2 v^2 \bm{e}_2 \bullet \bm{e}_2\\
  &= u^1 v^1 g_{11} + u^1 v^2 g_{12} + u^2 v^1 g_{21} + u^2 v^2 g_{22}\\
  &= \sum_{i=1}^2 \sum_{j=1}^2 g_{ij} u^i v^j\\
  &= \begin{pmatrix}
    u^1 & u^2
  \end{pmatrix}\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}\begin{pmatrix}
    v^1\\
    v^2
  \end{pmatrix}
//}

//say[千奈][「……あれ、そういえばこんな形どこかで……」]

//say[広][「さっきの長さのところ。」]

//say[千奈][「ほんとですわ！」]

//say[広][「ここからわかることは、@<m>$\bm{u},\bm{v}$の座標が分かっているとき、関数@<m>$\bm{g}$の値は、@<m>$g_{ij}$さえ分かれば計算できる、ということ。つまり、この例においては、@<m>$g_{ij}$の4つの値がわかっていれば、あとはベクトル変数の座標を与えることで関数の値が計算できる、ということになる。そういう意味で、さっきの@<m>$g_{ij}$の行列を、関数@<m>$\bm{g}$と同一視して、行列のことをテンソルと言っていた、というわけ。」]

//say[千奈][「なるほど、なんとなくわかりましたわ！ところで、4つの条件を2つずつに分けているのはなにか理由がありますの……？」]

//say[広][「まずそもそも、ある関数@<m>{f(\heartsuit)}が線形性を満たすとは、次のようなことをいう。」]

//texequation{
\begin{cases}
  f(x_1 + x_2) &= f(x_1) + f(x_2)\\
  f(kx) &= kf(x)
\end{cases}
//}

//say[千奈][「なぜこれが線形性なんですの？」]

//say[広][「これを満たす関数として、@<m>{f(x)=ax}が挙げられる。これはグラフで書くと、原点を通る直線になっている。この直線のようにふるまう、変数と関数の値が比例するような性質を線形性という。」]

//say[広][「2階のテンソルの定義をよく見ると、前半は第1のベクトル変数に対する線形性、後半は第2のベクトル変数に対する線形性になっている。つまりどちらのベクトル変数に対しても線形性が成り立っていることを要求している。これを双線形性という。」]

//say[千奈][「なるほど、確かに2つの変数に対して独立に線形性が成り立ってますわね！」]

//say[千奈][「……あれ、ところでさっきは3階のテンソル、とかありましたわよね？階数が3より大きいテンソルって……」]

//say[広][「3階以上の一般の階数のテンソルも同じように考えれば、大丈夫。つまり、@<m>{n}階のテンソルとは、@<m>{n}個のベクトル変数を持つ関数で、それぞれの変数に対して線形性を要求したもの。このように複数の変数に対して線形性を要求したものを、多重線形性という。」]

//say[広P][「ベクトルが1階のテンソルと呼ばれる理由は、@<m>$\bm{a} (\bm{v}) = \bm{a} \bullet \bm{v}$のような関数を考えるとわかります。これは、ベクトル変数@<m>$\bm{v}$に対して線形性が成り立つことが簡単に確認できると思います。つまり、ベクトル@<m>$\bm{a}$は、1個のベクトル変数に対し線形性を持つ関数とも捉えられるので、1階のテンソルと呼ばれるわけです。」]

//say[広][「……さて、次にテンソル積という概念を紹介する。これは、@<m>{m}階のテンソルと、@<m>{n}階のテンソルから、@<m>{m+n}階のテンソルを作るような演算で、とても単純。」]

//say[広][「テンソル積は、さっきの線形性の話よりも、階数が添え字の数に対応しているという話を思い出したほうが、わかりやすい。まず2つの1階のテンソル、つまりベクトル@<m>$\bm{a},\bm{b}$がテンソル積によって2階のテンソル@<m>$\bm{T}$を作ろうとすると、次のようになる。」]

//texequation{
T_{ij} = a_i b_j
//}

//say[千奈][「これは要するに、@<m>$\bm{T}$を行列とみなしたときに、@<m>{i}行@<m>{j}列の成分が@<m>{a_i b_j}になるってことですの？」]

//say[広][「そう。こうしてできる@<m>$\bm{T}$を、@<m>$\bm{a} \otimes \bm{b}$と書く。もし@<m>$\bm{a}$が@<m>{d_a}次元のベクトル、@<m>$\bm{b}$が@<m>{d_b}次元のベクトルだったら、あえて行列っぽく書けば、次のようになる。」]

//texequation{
\bm{T} = \bm{a} \otimes \bm{b} = \begin{pmatrix}
    a_1 \bm{b}^\top\\
    a_2 \bm{b}^\top\\
    \vdots\\
    a_{d_a} \bm{b}^\top
  \end{pmatrix} = \begin{pmatrix}
    a_1 b_1 & a_1 b_2 & \cdots & a_1 b_{d_b}\\
    a_2 b_1 & a_2 b_2 & \cdots & a_2 b_{d_b}\\
    \vdots & \vdots & \ddots & \vdots\\
    a_{d_a} b_1 & a_{d_a} b_2 & \cdots & a_{d_a} b_{d_b}\\
  \end{pmatrix}
//}

//say[広][「この計算で@<m>$\bm{b}$を@<m>$\bm{b}^\top$としたのは、形を行列のようにするためで、本質的な操作ではない。重要なのは、一方のベクトルをもう一方のベクトルの中に入れ込んでいるような計算操作をする、ということ。テンソル自体は、行列っぽく書く必要は必ずしもないから、別に次のように長いベクトルのように書いても問題はないよ。ただしどこにテンソルのどの成分が対応しているかは、しっかり明示しておいたほうが良い。」]

//texequation{
\bm{T} = \bm{a} \otimes \bm{b} = \begin{pmatrix}
    a_1 \bm{b}\\
    a_2 \bm{b}\\
    \vdots\\
    a_{d_a} \bm{b}
  \end{pmatrix} = \begin{pmatrix}
    a_1 b_1\\
    \vdots\\
    a_1 b_{d_b}\\
    a_2 b_1\\
    \vdots\\
    a_2 b_{d_b}\\
    \vdots\\
    a_{d_a} b_1\\
    \vdots\\
    a_{d_a} b_{d_b}
  \end{pmatrix} = \begin{pmatrix}
    T_{11}\\
    \vdots\\
    T_{1d_b}\\
    T_{21}\\
    \vdots\\
    T_{2d_b}\\
    \vdots\\
    T_{{d_a}1}\\
    \vdots\\
    T_{{d_a}{d_b}}
  \end{pmatrix}
//}

//say[広][「でも、2階のテンソルは実用上行列のように書くと、計算の表記がしばしば楽になるので、基本的には行列で表示することが多い。計量テンソルでも、行列で表示することで、行列の計算のきまりを使って計算を表現できるから、行列以外の形式の表示は滅多にない。」]

//say[千奈][「わかりましたわ！」]

//say[広][「一つだけ注意なのは、@<m>$\bm{a} \otimes \bm{b} \ne \bm{b} \otimes \bm{a}$であること。これは、@<m>$T_{ij}$が@<m>{a_i b_j}となるか、@<m>{b_i a_j}となるか、という問題になって、この2つは全然一緒ではない。さっきのような行列の書き方をすれば、なんで違うかはわかると思う@<fn>{fn3}。」]

//say[広][「より一般に、@<m>{m}階のテンソル@<m>$\bm{S}$と、@<m>{n}階のテンソル@<m>$\bm{T}$から作られるテンソル@<m>$\bm{S} \otimes \bm{T}$は@<m>{m+n}階で、次のようになる。」]

//texequation{
(\bm{S} \otimes \bm{T})_{i_1 i_2 \dots i_m j_1 j_2 \dots j_n} = S_{i_1 i_2 \dots i_m} T_{j_1 j_2 \dots j_n}
//}

//say[広][「これは見た目は難しそうだけど、言っていることはとても単純で、@<m>$\bm{S}$の添字@<m>{i_1 i_2 \dots i_m}で表せられる成分と、@<m>$\bm{T}$の添字@<m>{j_1 j_2 \dots j_n}で表せられる成分の積で、@<m>$\bm{S} \otimes \bm{T}$の添字@<m>{i_1 i_2 \dots i_m j_1 j_2 \dots j_n}で表される成分ができている、ということ。」]

//say[千奈][「なるほど、意外に単純ですわね。」]

//say[広][「じゃあ、例題。2階テンソル@<m>$\bm{S},\bm{T}$があって、それぞれが@<m>{2 \times 2}の行列で次のように示されているとする。」]

//texequation{
\bm{S} = \begin{pmatrix}
    s_{11} & s_{12}\\
    s_{21} & s_{22}
  \end{pmatrix}, \bm{T} = \begin{pmatrix}
    t_{11} & t_{12}\\
    t_{21} & t_{22}
  \end{pmatrix}
//}

//say[広][「このとき、@<m>$\bm{R} = \bm{S}\otimes \bm{T}$はどうなるかな。」]

//say[千奈][「2階のときはまだやってませんわ！」]

//say[広][「1階のときの計算を思い出してみて。」]

//say[千奈][「うーん……こうすればいいのかしら……」]

//texequation{
\bm{R} = \bm{S} \otimes \bm{T} = \begin{pmatrix}
    s_{11}\bm{T} & s_{12}\bm{T}\\
    s_{21}\bm{T} & s_{22}\bm{T}
  \end{pmatrix} = \left( \begin{array}{cc|cc}
    s_{11}t_{11} & s_{11}t_{12} & s_{12}t_{11} & s_{12}t_{12} \\ 
    s_{11}t_{21} & s_{11}t_{22} & s_{12}t_{21} & s_{12}t_{22} \\
    \hline 
    s_{21}t_{11} & s_{21}t_{12} & s_{22}t_{11} & s_{22}t_{12} \\ 
    s_{21}t_{21} & s_{21}t_{22} & s_{22}t_{21} & s_{22}t_{22}
  \end{array} \right) = \\ \left( \begin{array}{cc|cc}
    r_{1111} & r_{1112} & r_{1211} & r_{1212} \\ 
    r_{1121} & r_{1122} & r_{1221} & r_{1222} \\
    \hline 
    r_{2111} & r_{2112} & r_{2211} & r_{2212} \\ 
    r_{2121} & r_{2122} & r_{2221} & r_{2222}
  \end{array} \right)
//}

//say[広][「そう、それであってる。」]

//say[千奈][「何となくテンソルがわかった気がしますわ！」]

//say[広][「良かった。このテンソルの話は、今後出てくるから、頭の片隅に置いておいて。」]

//say[千奈][「了解ですわ！」]

//say[広][「じゃあ、話を計量テンソルに戻そう。さっきの長さに関する式@<eq>{nagasa_eq}を思い出すと、微小な座標の変化@<m>{dx^1,dx^2}に対する線の長さ@<m>{ds}は次のように書ける。」]

//texequation[keiryomae]{
  ds^2 = \sum_{i=1}^2 \sum_{j=1}^2 g_{ij} \,dx^i \,dx^j = \begin{pmatrix}
    dx^1 & dx^2
  \end{pmatrix}\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}\begin{pmatrix}
    dx^1\\
    dx^2
  \end{pmatrix}
//}

//say[広][「ここで、基底@<m>$\bm{e}_1,\bm{e}_2$を取り替えて、新しい基底@<m>$\bm{e}'_1,\bm{e}'_2$で座標を考えるとする。つまり、新しいフレームは、@<m>$(\mathrm{O};\bm{e}'_1,\bm{e}'_2)$。この、新しい基底に対する座標を@<m>{x'^1,x'^2}、計量テンソルを@<m>$g'_{ij}$とおくと、長さを座標の取り方によらないようにしたいから、@<m>{ds}は次のようにも書けるはず。」]

//texequation[keiryoato]{
  ds^2 = \sum_{i=1}^2 \sum_{j=1}^2 g'_{ij} \,dx'^i \,dx'^j = \begin{pmatrix}
    dx'^1 & dx'^2
  \end{pmatrix}\begin{pmatrix}
    g'_{11} & g'_{12}\\
    g'_{21} & g'_{22}
  \end{pmatrix}\begin{pmatrix}
    dx'^1\\
    dx'^2
  \end{pmatrix}
//}

//say[千奈][「この@<m>$g_{ij}$と@<m>$g'_{ij}$の関係が知りたいですわね……」]

//say[広][「うん。そのために、まずは@<m>{dx^1,dx^2}と@<m>{dx'^1,dx'^2}の関係から、考えてみる。」]

//say[広][「まず、新しい基底@<m>$\bm{e}'_1,\bm{e}'_2$で、前の基底@<m>$\bm{e}_1,\bm{e}_2$を表すことを考えることで、@<m>$x^1 \bm{e}_1 + x^2 \bm{e}_2$を@<m>$\bm{e}'_1,\bm{e}'_2$で表すことができる。すると、この@<m>$\bm{e}'_1,\bm{e}'_2$の係数がそれぞれ@<m>{x'^1,x'^2}となるので、これらは@<m>{x^1,x^2}の関数として表されるはず。そして、逆も然り。」]

//say[千奈][「えーっと……つまり、座標上の点を動かして、@<m>{x^1,x^2}を変えると、@<m>{x'^1,x'^2}も、それに連動して動くってことかしら？」]

//say[広][「まぁ、そういうこと。このとき、@<m>{dx^1,dx^2}だけ動かしたときの@<m>{dx'^1,dx'^2}の変化は、それぞれ次のように書ける。」]

//texequation[zenbibun]{
  dx'^1 = \frac{\partial x'^1}{\partial x^1} \,dx^1 + \frac{\partial x'^1}{\partial x^2} \,dx^2, \qquad dx'^2 = \frac{\partial x'^2}{\partial x^1} \,dx^1 + \frac{\partial x'^2}{\partial x^2} \,dx^2
//}

//say[千奈][「この、にょろん、とした記号はなんですの？何だか、微分っぽい形をしていますわ……」]

//say[広][「……あ。そういえば、説明忘れてた。これは、偏微分。」]

//say[千奈][「へんびぶん……？」]

//say[広][「そう。例えば、@<m>{f=f(x,y)}のよぅな関数が、あったとする。このとき、@<m>$\dfrac{\partial f}{\partial x}$というのは、@<m>{x}以外の変数を定数とみなして、@<m>{x}について、微分する操作を示す。」]

//texequation{
\dfrac{\partial f}{\partial x} := \lim_{h \to 0} \frac{f(x+h,y)-f(x,y)}{h}
//}

//say[千奈][「その……つまり、どういうことですの？」]

//say[広][「@<m>{f(x,y) = 5x^2 + 3xy + 2y^2}だったら、@<m>{x}についての偏微分@<m>$\dfrac{\partial f}{\partial x}$は、@<m>{y}を定数とみなして、@<m>{x}について微分して、@<m>{10x+3y}になる。」]

//say[千奈][「なるほど、であれば、@<m>{y}についての偏微分はこうかしら？」]

//texequation{
\frac{\partial f}{\partial y} = 3x + 4y
//}

//say[広][「そうなる。ちなみに、@<m>{\partial}は、「デル」と呼ぶことが多い。3変数以上でも同じで、例えば@<m>{f=f(x,y,z)}なら、@<m>{z}についての偏微分は、@<m>{z}以外の変数、つまり@<m>{x,y}を定数とみなして、微分すればOK。」]

//say[千奈][「なるほど、計算の仕方はわかりましたわ。でもこれってどういう意味を持っているんですの……？」]

//say[広][「まず、関数@<m>{f(x)}に対して、導関数@<m>$\dfrac{df}{dx}$は、どのような意味を持っていたか、覚えてるかな。」]

//say[千奈][「@<m>{x}をちょっとだけ動かしたときに、@<m>{f(x)}がどれだけ変わるかを表した、変化率のことですわ。」]

//say[広][「うん、そうだった。偏微分の場合も、基本的には、この微分の考え方と、同じ。」]

//say[広][「関数が2変数以上を持っている場合、それぞれの変数に対して、ある変数以外は全部固定された状態で、注目した変数だけがちょっと動いたときに、関数の値がどれだけ変わるかを見たい。この、一つの変数だけをちょっと動かしたときに、関数の値がどれだけ変化したかを表す変化率こそが、偏微分。」]

//say[千奈][「なるほど、確かに意味を考えれば、納得ですわ！」]

//say[広][「あともう一つ、全微分についても、説明しておく。」]

//say[広][「全微分というのは、例えば@<m>{f=f(x,y)}に対して、@<m>{f(x,y)}から@<m>{f(x+dx,y+dy)}に動いたときの、関数@<m>{f}の値の変化@<m>{df}のこと。」]

//say[千奈][「つまり、ある点から@<m>{x}方向に@<m>{dx}、@<m>{y}方向に@<m>{dy}だけ進んだときに、関数の値がどれだけ変わるか、ということかしら？」]

//say[広][「そう。全微分がどう表せるかを考えるときは、山登りを考えるとわかりやすい。」]

//say[広][「たとえば、山の高さが@<m>{f(x,y)}で表せるとすると、@<m>{(x,y)}から、@<m>{(x+dx,y),(x,y+dy)}にそれぞれ移動したときに、登ったり下ったりする量は、どう表せるかな。」]

//say[千奈][「えーっと、偏微分を使えば……それぞれ@<m>$\dfrac{\partial f}{\partial x} \,dx$と@<m>$\dfrac{\partial f}{\partial y} \,dy$ですわ！」]

//say[広][「うん、そうなる。このことから、@<m>{(x+dx,y+dy)}に移動したときはどう表せるかな。」]

//say[千奈][「@<m>{x}向きに進んでから、@<m>{y}向きに進んだと考えれば……@<m>$\dfrac{\partial f}{\partial x} \,dx + \dfrac{\partial f}{\partial y} \,dy$になると思いますわ！」]

//say[広][「大正解。つまり、次のような関係が、成り立つ。」]

//texequation{
df = \dfrac{\partial f}{\partial x} \,dx + \dfrac{\partial f}{\partial y} \,dy
//}

//image[day04_fig04][]

//say[広][「3変数以上でも、例えば@<m>{f=f(u_1, \dots, u_n)}なら、次のようになる。」]

//texequation{
df = \sum_{k=1}^n \frac{\partial f}{\partial u_k}\,du_k
//}

//say[千奈][「つまり、偏微分と変化分を掛け算したものを、変数について全部足し合わせればよい、ということですわね！」]

//say[広][「うん。今は、そう考えておいてOK。」]

//say[広P][「篠澤さん、この話が一次近似での話であることを強調するために、ついでにTaylorの定理についても触れておくべきではないでしょうか。」]

//say[広][「プロデューサー、それはまた後で、曲面の話のときに扱うから、安心して。」]

//say[広P][「了解です。」]

//say[広][「……さて、この全微分が分かれば、偏微分のチェーンルールも、理解できるようになる。」]

//say[広][「例えば、関数@<m>{f(x,y)}を、新しい座標@<m>{(x',y')}で考えた時に、元の座標@<m>{(x,y)}は、新しい座標@<m>{(x',y')}の関数に、そして新しい座標@<m>{(x',y')}は、元の座標@<m>{(x,y)}の関数になるから、次のように書けるはず。」]

//texequation{
f(x,y) = f(x(x',y'),y(x',y')) \quad (=f(x',y'))
//}

//say[広][「千奈。ここで、@<m>$\dfrac{\partial f}{\partial x'}$を計算してみて。」]

//say[千奈][「これってつまり、@<m>{y'}を止めて、@<m>{x'}だけを動かしたときの@<m>{f}の値の変化の割合……ということですわよね？でも、@<m>{x'}を動かすと、@<m>{x}も@<m>{y}も変化してしまいますわ！」]

//say[広][「そう、だね。じゃあ、どうすればいいかな。」]

//say[千奈][「……そうだ、全微分の考え方を使えそうですわ！」]

//texequation{
df = \frac{\partial f}{\partial x} \,dx + \frac{\partial f}{\partial y} \,dy
//}

//say[千奈][「今回求めたいのは、@<m>{x'}だけを動かしたときの@<m>{f}の値の変化ですから、@<m>{df}は@<m>$\dfrac{\partial f}{\partial x'}\,dx'$と書けそうですわね。それから、同じように考えれば、@<m>{x'}だけを動かしたときの@<m>{x}の値の変化は@<m>$\dfrac{\partial x}{\partial x'}\,dx'$、@<m>{y}の値の変化は@<m>$\dfrac{\partial y}{\partial x'}\,dx'$になりますわ。つまりこれを使って@<m>{dx,dy}も書き換えれば……」]

//texequation{
\dfrac{\partial f}{\partial x'}\,dx' = \frac{\partial f}{\partial x} \dfrac{\partial x}{\partial x'}\,dx' + \frac{\partial f}{\partial y} \dfrac{\partial y}{\partial x'}\,dx'
//}

//say[千奈][「できましたわ！あとは@<m>{dx'}が余計ですから……こうですわ！！」]

//texequation{
\dfrac{\partial f}{\partial x'} = \frac{\partial f}{\partial x} \dfrac{\partial x}{\partial x'} + \frac{\partial f}{\partial y} \dfrac{\partial y}{\partial x'}
//}

//say[広][「そう、よくできました。これが、チェーンルール。これは、多変数でも成り立つから、覚えておいて。」]

@<m>{f = f(u_1, \dots, u_n)}とし、各@<m>{u_i}に対して@<m>{u_i = u_i (v_1, \dots, v_m)}のとき、

//texequation{
\frac{\partial f}{\partial v_j} = \sum_{i=1}^n \frac{\partial f}{\partial u_i} \frac{\partial u_i}{\partial v_j}
//}

//say[広][「ここまで話をして、ようやくさっきの、式@<eq>{zenbibun}の話ができる。@<m>{x'^1 = x'^1 (x^1,x^2),x'^2 = x'^2 (x^1,x^2)}だから、全微分を考えれば、あの式のようになって、行列で書けば、次の通り。」]

//texequation[hanpen_henkan]{
  \begin{pmatrix}
    dx'^1\\
    dx'^2
  \end{pmatrix}=\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^1}{\partial x^2}\\
    \dfrac{\partial x'^2}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}\begin{pmatrix}
    dx^1\\
    dx^2
  \end{pmatrix}
//}

//say[広][「これを、式@<eq>{keiryoato}に代入すると、次のとおりになる。」]

//texequation{
  ds^2 &=\begin{pmatrix}
    dx'^1 & dx'^2
  \end{pmatrix}\begin{pmatrix}
    g'_{11} & g'_{12}\\
    g'_{21} & g'_{22}
  \end{pmatrix}\begin{pmatrix}
    dx'^1\\
    dx'^2
  \end{pmatrix}\\
  &=\begin{pmatrix}
    dx^1 & dx^2
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^1}\\
    \dfrac{\partial x'^1}{\partial x^2} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}\begin{pmatrix}
    g'_{11} & g'_{12}\\
    g'_{21} & g'_{22}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^1}{\partial x^2}\\
    \dfrac{\partial x'^2}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}\begin{pmatrix}
    dx^1\\
    dx^2
  \end{pmatrix}
//}

//say[広][「これを、式@<eq>{keiryomae}と見比べると、次のようになる。」]

//texequation{
\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}=\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^1}\\
    \dfrac{\partial x'^1}{\partial x^2} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}\begin{pmatrix}
    g'_{11} & g'_{12}\\
    g'_{21} & g'_{22}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^1}{\partial x^2}\\
    \dfrac{\partial x'^2}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}
//}

//say[広][「これを、@<m>$g'_{ij}$について解きたい。」]

//say[千奈][「これって……解けるんですの？」]

//say[広][「ものすごく簡単な方法が、ある。それは、プライム付きからプライムを外して、プライムなしにプライムを付ける、という方法。」]

//say[千奈][「えぇ！？なんでそれで良いんですの？」]

//say[広][「今は、変換前をプライムなし、変換後をプライムあり、としているけど、この座標変換の逆変換は、変換前をプライムあり、変換後をプライムなし、にしているはず。つまり、単純に変換前後の立場を入れ替えるだけでいい、ということになる。」]

//texequation[keiryo_henkan]{
  \begin{pmatrix}
    g'_{11} & g'_{12}\\
    g'_{21} & g'_{22}
  \end{pmatrix}=\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^1}\\
    \dfrac{\partial x^1}{\partial x'^2} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^1}{\partial x'^2}\\
    \dfrac{\partial x^2}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}
//}

//say[千奈][「何だか、これって本当に正しいんですの……？」]

//say[広][「検算して、みる？」]

//say[千奈][「検算ってどうすれば……」]

//say[広][「じゃあ千奈、この等式の、右側の行列を、計算して。」]

//texequation{
\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}=\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^1}\\
    \dfrac{\partial x'^1}{\partial x^2} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^1}\\
    \dfrac{\partial x^1}{\partial x'^2} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^1}{\partial x'^2}\\
    \dfrac{\partial x^2}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^1}{\partial x^2}\\
    \dfrac{\partial x'^2}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}
//}

//say[広][「さっきの、私の考えが正しければ、この等式が、成り立つはず。」]

//say[千奈][「やってみますわ！」]

//texequation{
\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^1}\\
    \dfrac{\partial x'^1}{\partial x^2} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^1}\\
    \dfrac{\partial x^1}{\partial x'^2} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix} =
\begin{pmatrix}
  \dfrac{\partial x'^1}{\partial x^1}\dfrac{\partial x^1}{\partial x'^1}
  +\dfrac{\partial x'^2}{\partial x^1}\dfrac{\partial x^1}{\partial x'^2}
  &
  \dfrac{\partial x'^1}{\partial x^1}\dfrac{\partial x^2}{\partial x'^1}
  +\dfrac{\partial x'^2}{\partial x^1}\dfrac{\partial x^2}{\partial x'^2}
  \\[8pt]
  \dfrac{\partial x'^1}{\partial x^2}\dfrac{\partial x^1}{\partial x'^1}
  +\dfrac{\partial x'^2}{\partial x^2}\dfrac{\partial x^1}{\partial x'^2}
  &
  \dfrac{\partial x'^1}{\partial x^2}\dfrac{\partial x^2}{\partial x'^1}
  +\dfrac{\partial x'^2}{\partial x^2}\dfrac{\partial x^2}{\partial x'^2}
\end{pmatrix}
//}

//say[千奈][「あれ、早速わかりませんわ……」]

//say[広][「確かに、ここは、少し難しい。でも、@<m>{x^1,x^2}は@<m>{x'^1,x'^2}の関数になっていて、逆も然り、ということを使うと、チェーンルールを使えば、こうなる。」]

//texequation{
\begin{pmatrix}
  \dfrac{\partial x'^1}{\partial x^1}\dfrac{\partial x^1}{\partial x'^1}
  +\dfrac{\partial x'^2}{\partial x^1}\dfrac{\partial x^1}{\partial x'^2}
  &
  \dfrac{\partial x'^1}{\partial x^1}\dfrac{\partial x^2}{\partial x'^1}
  +\dfrac{\partial x'^2}{\partial x^1}\dfrac{\partial x^2}{\partial x'^2}
  \\[8pt]
  \dfrac{\partial x'^1}{\partial x^2}\dfrac{\partial x^1}{\partial x'^1}
  +\dfrac{\partial x'^2}{\partial x^2}\dfrac{\partial x^1}{\partial x'^2}
  &
  \dfrac{\partial x'^1}{\partial x^2}\dfrac{\partial x^2}{\partial x'^1}
  +\dfrac{\partial x'^2}{\partial x^2}\dfrac{\partial x^2}{\partial x'^2}
\end{pmatrix} = \begin{pmatrix}
  \dfrac{\partial x^1}{\partial x^1} & \dfrac{\partial x^2}{\partial x^1}\\
  \dfrac{\partial x^1}{\partial x^2} & \dfrac{\partial x^2}{\partial x^2}
\end{pmatrix} = \begin{pmatrix}
  1 & 0\\
  0 & 1
\end{pmatrix}
//}

//texequation{
\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^1}{\partial x'^2}\\
    \dfrac{\partial x^2}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^1}{\partial x^2}\\
    \dfrac{\partial x'^2}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix} = \left(\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^1}\\
    \dfrac{\partial x'^1}{\partial x^2} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^1}\\
    \dfrac{\partial x^1}{\partial x'^2} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}\right)^\top = \begin{pmatrix}
  1 & 0\\
  0 & 1
\end{pmatrix}^\top = \begin{pmatrix}
  1 & 0\\
  0 & 1
\end{pmatrix}
//}

//texequation{
\therefore \begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^1}\\
    \dfrac{\partial x'^1}{\partial x^2} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^1}\\
    \dfrac{\partial x^1}{\partial x'^2} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}\begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^1}{\partial x'^2}\\
    \dfrac{\partial x^2}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}\begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^1}{\partial x^2}\\
    \dfrac{\partial x'^2}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix} = \begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix}
//}

//say[千奈][「あれ、でも例えば@<m>$\dfrac{\partial x^1}{\partial x^2}$って0で良いんですの……？」]

//say[広][「@<m>{x^1 = x^1 (x'^1,x'^2)}であって、@<m>{x^2}の関数にはなってない。そもそも、@<m>{x^1,x^2}は、独立な変数と考えている。だから、これで大丈夫。」]

//say[千奈][「なるほど、納得できましたわ。」]

//say[広][「さっきの等式が成りたったので、式@<eq>{keiryo_henkan}の変換は、正しいことがわかった。ここで、式@<eq>{hanpen_henkan}のときにでてきた変換行列を、@<m>{J}とおく。」]

//texequation{
J := \begin{pmatrix}
    \dfrac{\partial x'^1}{\partial x^1} & \dfrac{\partial x'^1}{\partial x^2}\\
    \dfrac{\partial x'^2}{\partial x^1} & \dfrac{\partial x'^2}{\partial x^2}
  \end{pmatrix} = \left(\dfrac{\partial x'^i}{\partial x^j}\right)_{ij}
//}

//say[千奈][「最後の等号のやつは、なんですの？」]

//say[広][「これは、@<m>$\dfrac{\partial x'^i}{\partial x^j}$を、@<m>{ij}成分に持つ行列の、略記。これを使うと、@<m>$J^\top = \left(\dfrac{\partial x'^j}{\partial x^i}\right)_{ij}$と、簡単に表せる。」]

//say[広][「逆行列@<m>$J^{-1}$はどうなってたかというと、次の通り。」]

//texequation{
J^{-1} = \begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^1}{\partial x'^2}\\
    \dfrac{\partial x^2}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix} = \left(\dfrac{\partial x^i}{\partial x'^j}\right)_{ij}
//}

//say[広][「これらを使えば、式@<eq>{keiryo_henkan}は、次のようにして書ける。そして、@<m>$g'_{ij}$は次の通りになる@<fn>{fn4}。」]

//texequation{
\begin{pmatrix}
    g'_{11} & g'_{12}\\
    g'_{21} & g'_{22}
  \end{pmatrix}= (J^{-1})^\top \begin{pmatrix}
    g_{11} & g_{12}\\
    g_{21} & g_{22}
  \end{pmatrix} J^{-1}
//}
//texequation[shomei_1]{
  g'_{ij} = \sum_{k=1}^2 \sum_{\ell=1}^2 \frac{\partial x^k}{\partial x'^i} \frac{\partial x^\ell}{\partial x'^j} g_{k\ell}
//}

//say[広][「ここで、わかることとしては、まず、反変ベクトルである座標は、行列@<m>{J}によって変換を受ける、ということ。つまり、座標変換を担う行列@<m>{J}は、反変ベクトルの変換行列にもなっている、ということ。この、座標変換の変換行列@<m>{J}をヤコビ行列という。」]

//say[広][「そして、@<m>$J^{-1}$は、基底の変換に対応することになるので、共変ベクトルの変換行列になる@<fn>{fn5}。この行列による変換を、添字の個数分だけ、つまり2回施すことで、@<m>$g_{ij}$から@<m>$g'_{ij}$へと変換できる。@<m>$g_{ij}$のように、下付きの添字が2個ついているテンソルを、二階の共変テンソル、という。」]

//say[千奈][「何となくですけれど、二階の反変テンソルとかもありそうですわ。」]

//say[広][「うん。ある、よ。例えば、双対基底@<m>$\bm{e}^1,\bm{e}^2$を考えて、次のような計量@<m>$g^{ij}$を定義する。」]

//texequation{
g^{ij} := \bm{e}^i \bullet \bm{e}^j
//}

//say[広][「これは、同じく双対基底@<m>$\bm{e}'^1,\bm{e}'^2$に対して、@<m>$g'^{ij} := \bm{e}'^i \bullet \bm{e}'^j$とすれば、次のような二階の反変テンソルの、変換規則を満たす@<fn>{fn6}。」]

//texequation[shomei_2]{
  g'^{ij} = \sum_{k=1}^2 \sum_{\ell=1}^2 \frac{\partial x'^i}{\partial x^k} \frac{\partial x'^j}{\partial x^\ell} g^{k\ell}
//}

//say[千奈][「ちょ、ちょっと待ってくださいまし！双対基底って……」]

//say[広][「双対基底は、次を満たすような、基底。」]

//texequation{
\bm{e}^1 \bullet \bm{e}_1 = \bm{e}^2 \bullet \bm{e}_2 = 1, \qquad \bm{e}^1 \bullet \bm{e}_2 = \bm{e}^1 \bullet \bm{e}_2 = 0
//}

//say[広][「双対基底は、反変ベクトルの変換規則に従う。つまり、双対基底に対応する座標@<m>{x_1,x_2}は、共変ベクトルの変換規則に従う。これを使えば、@<m>{ds}は次の通りになる@<fn>{fn7}。」]

//texequation{
ds^2 = \sum_{i=1}^2 \sum_{j=1}^2 g^{ij} \,dx_i \,dx_j
//}

//say[千奈][「……何だかわからないですが、さっきまでの@<m>{ds}の式と似てますわね。ただ単純に、添字が上か下かが違うだけで……」]

//say[広][「このあたりは難しいけど、扱った話だから、1日目のノートを、見直してみて。」]

//say[千奈][「あとで、見直しておこうと思いますわ。」]

//say[広][「さて、と。まだまだ、やることは、たくさんある。」]

//say[広][「まずは、@<m>{x^1,x^2}と@<m>{x_1,x_2}の間には、次のような関係が成り立つ。」]

//texequation{
x_i = \sum_{j=1}^2 g_{ij} x^j, \qquad x^i = \sum_{j=1}^2 g^{ij} x_j
//}

//say[広][「これは、@<m>$g_{ij}$の定義を考えれば、当たり前。まず、定義を代入して、式を整理すると、こうなる。」]

//texequation{
\sum_{j=1}^2 g_{ij} x^j = \sum_{j=1}^2 x^j (\bm{e}_i \bullet \bm{e}_j) = \sum_{j=1}^2 \bm{e}_i \bullet (x^j \bm{e}_j) = \bm{e}_i \bullet \left( \sum_{j=1}^2 x^j \bm{e}_j \right) = \bm{e}_i \bullet (x^1 \bm{e}_1 + x^2 \bm{e}_2)
//}

//say[広][「@<m>$x^1 \bm{e}_1 + x^2 \bm{e}_2 = x_1 \bm{e}^1 + x_2 \bm{e}^2$なので、これはこうなる。」]

//texequation{
\bm{e}_i \bullet (x^1 \bm{e}_1 + x^2 \bm{e}_2) = \bm{e}_i \bullet (x_1 \bm{e}^1 + x_2 \bm{e}^2) = x_1 \bm{e}_i \bullet \bm{e}^1 + x_2 \bm{e}_i \bullet \bm{e}^2
//}

//say[広][「ここで、双対基底の定義から、添字@<m>{i}と同じ数字の方だけが生き残る。つまり、計算結果は@<m>{x_i}になるので、証明できた。」]

//say[千奈][「なるほど！よく見たら、この式って何だか、上と下にある添字@<m>{j}が打ち消されている感じがしますわ……」]

//say[広][「うん。式@<eq>{shomei_1}も、実は@<m>$\partial_i := \dfrac{\partial}{\partial x^i}$などとすれば、次のように書ける。」]

//texequation{
g'_{ij} = \sum_{k=1}^2 \sum_{\ell =1}^2 \partial'_i x^k \partial'_j x^\ell g_{k\ell}
//}

//texequation{
g'^{ij} = \sum_{k=1}^2 \sum_{\ell =1}^2  \partial_k x'^i \partial_\ell x'^j g^{k\ell}
//}

//say[広][「この式も、上と下の添字で共通するものについて和をとって、結果はあたかも、その添字が打ち消されている、ように見える。そこで、@<b>{上と下に同じ文字の添え字があった場合に、その文字で総和をとる}と、約束する。これを、Einsteinの縮約記法、という。さっきまでの式を、この記法に従って書けば、こうなる。」]

//texequation{
x_i = g_{ij} x^j, \quad x^i = g^{ij} x_j, \quad g'_{ij} = \partial'_i x^k \partial'_j x^\ell g_{k\ell} \cdots
//}

//say[千奈][「さっきまでの和の記号を使わなくて良くなって、式がシンプルに見やすくなりましたわね！」]

//say[千奈][「……あれ、でも、ちょっと待ってくださいまし。@<m>$\dfrac{\partial}{\partial x^i}$を@<m>{\partial_i}と書くということは、これは共変ってことですの……？」]

//say[広][「千奈にしては、鋭い。実はチェーンルールのところを見直すと、次のようになっている。」]

//texequation{
\begin{pmatrix}
    \partial'_1 f\\
    \partial'_2 f
  \end{pmatrix} = \begin{pmatrix}
    \dfrac{\partial x^1}{\partial x'^1} & \dfrac{\partial x^2}{\partial x'^1}\\
    \dfrac{\partial x^1}{\partial x'^2} & \dfrac{\partial x^2}{\partial x'^2}
  \end{pmatrix}\begin{pmatrix}
    \partial_1 f\\
    \partial_2 f
  \end{pmatrix}
//}

//say[広][「この変換行列は、共変ベクトルの変換と同じになっている。」]

//say[千奈][「ほんとですわ！」]

//say[広][「それから、計量テンソルの性質を使うと、次が成り立つ。」]

//texequation{
g_{ij} g^{jk} x_k = g_{ij} x^j = x_i \qquad \therefore g_{ij} g^{jk} = \delta_i^k
//}

//say[千奈][「@<m>{\delta_i^k}って何ですの？」]

//say[広][「そういえば、これも、説明していなかったっけ。これは、Kroneckerのデルタ、といって、@<m>{i=k}のときに@<m>{\delta_i^k =1}、それ以外の時は0になる、というようなもの。」]

//say[広][「@<m>{\delta_i^k x_k}と書いた時、これは、@<m>{k}について和をとっている。このとき、@<m>{\delta_i^k}は@<m>{i=k}の時だけ値を持って、@<m>{x_i}だけを抜き出すような働きをする。このKroneckerのデルタが出てきた時は、添字を取り替える役割、と考えてもOK。」]

//say[千奈][「なるほど、確かに添字が入れ替わっていますわね！」]

//say[広][「それから、今のうちに、総和をとる添字について、もう一つ注意しておきたいことが、ある。それは、総和が取られるなら、添字を変えてもいい、というルール。」]

//say[広][「たとえば、さっきの例では、途中の計算があったから@<m>{k}を使ってたけど、別に@<m>{\delta_i^k x_k}という式自体は、@<m>{k}の代わりに@<m>{j}を使って、@<m>{\delta_i^j x_j}と書いても、同じこと。このように総和が取られる添字は、ラベルの付け替えが可能なので、ダミー変数という。」]

//say[千奈][「当たり前すぎて、わざわざ言うまでもない気もしますわ……」]

//say[広][「千奈。実はこの後には、想像を絶するような、添字地獄が待ち受けてる、よ。今のうちに、こうしたルールに慣れておかないと、地獄に取り残される、ことになる。」]

//say[広][「だから、今まで話したことは、全部きっちり、覚えておいて、ね。」]

//say[千奈][「な、なるほど！地獄に、備えますわ！」]

//say[広][「……さて。ここまで話してきた計量テンソルの話は、2次元じゃなくても成り立つ。もちろん、相対性理論の時空座標でも同じ。でも、いちいち@<m>{(x,y,z,ct)}と@<m>{(x',y',z',ct')}と書くのは面倒くさい。そこで、これからは、時間成分の座標を@<m>{x^0}、空間成分の座標を@<m>{x^1,x^2,x^3}のようにして、それぞれ示すことにする。そして、今後時空間の座標を区別なく考える時は、添字を@<m>{\mu,\nu,\rho,\sigma}などのギリシャ文字で、時間と空間を区別して空間座標だけで議論する時は、添字を@<m>{i,j,k,\ell}などのアルファベットで示すことにする。」]

//say[広][「まずはこれまでのおさらい。千奈、Minkowskiノルムを次の計量@<m>{\eta}を使って表せるかな。」]

//texequation{
(\eta_{\mu\nu})_{\mu\nu} = \begin{pmatrix}
    1 & 0 &.0 & 0\\
    0 & -1 & 0 & 0\\
    0 & 0 & -1 & 0\\
    0 & 0 & 0 & -1
  \end{pmatrix}
//}

//say[千奈][「こうですの？」]

//texequation{
c\,d\tau = \sqrt{\eta_{\mu\nu}\,dx^\mu \,dx^\nu}
//}

//say[広][「うん、そうなる。この計量テンソル@<m>$\eta_{\mu\nu}$を、Minkowski計量テンソルという。」]

//say[広][「計量を使うことで、観測者がどのような座標系を使おうと、世界線の長さ、つまり、固有時間は、変わらない。そもそも、@<m>{ds}の式を見ると、共変な量と反変な量の、積になっている。これは、座標変換の作用が打ち消し合うので、座標変換の影響を受けず、結果的に、座標によらない不変量になるということ、だよ。」]

//say[千奈][「なるほど、つまり世界線上に固有時間の目盛りをつけた時に、その目盛りは座標変換によって変わらない、ということですわね！」]

//image[day04_fig05][]

//say[広][「次に、共変・反変について。@<m>{A}をある物理量とする。空間座標の基底の取り方を変えると、@<m>{A}が共変か反変かによって、次が成り立つ。」]

//texequation{
A'^i = (\partial_j x'^i) A^j, \quad A'_i = (\partial'_i x^j) A_j
//}

//say[広][「ある物理量が、基底の取り替えでどのように変換されるかは、上付きの添字、下付きの添字の分だけ、この共変・反変の変換を、繰り返してあげれば良い。さっきまでは共変だけ、反変だけとなる場合を扱ってきたけど、一般には、両方の変換ルールが、混在していても良い。この混在した変換ルールに従うようなテンソルを、混合テンソルともいう。」]

//say[広][「たとえば、二階の共変テンソル@<m>$A_{ij}$と、二階の反変テンソル@<m>$B^{ij}$から作られるテンソル@<m>$C_{ij}^{k\ell} := A_{ij} B^{k\ell}$は、次のような変換則に従う。」]

//texequation{
{C'}_{ij}^{k\ell} = (\partial'_i x^m) (\partial'_j x^n) (\partial_o x'^k) (\partial_p x'^\ell) C_{mn}^{op}
//}

//say[広][「それから、たとえば@<m>$g_{ij}g^{jk}= \delta_i^k$のように、テンソル積を考える際に、もし上付きの添字と、下付きの添字に、同じものがあった場合、その共通した添字が消滅して他の添字はそのまま残って、階数の低いテンソルができる。これを、テンソルの縮約、という。さっきの例を使えば、こういうこと。」]

//texequation{
A_{ij} B^{ki} = C_{ij}^{ki} =: D_j^k
//}

//say[千奈][「縮約が、何でそうなるのか、よく分かりませんわ……」]

//say[広][「そういう時は、変換性に立ち戻って、考えると良い、よ@<fn>{fn8}。」]

//texequation{
  {C'}_{ij}^{ki} &= (\partial'_i x^m) (\partial'_j x^n) (\partial_o x'^k) (\partial_p x'^i) C_{mn}^{op}\\
  &= \{(\partial_p x'^i)(\partial'_i x^m)\} (\partial'_j x^n) (\partial_o x'^k) C_{mn}^{op}\\
  &= (\partial_p x^m)(\partial'_j x^n) (\partial_o x'^k)C_{mn}^{op}\\
  &= \delta_p^m (\partial'_j x^n) (\partial_o x'^k) C_{mn}^{op}\\
  &= (\partial'_j x^n) (\partial_o x'^k)C_{mn}^{om}
//}

//say[広][「これは、最終式をよく見ると、添字@<m>{j,k}に対してしか、変換がされていない。よって、@<m>$C_{ij}^{ki}$は、@<m>{D_j^k}のように見なしても、良いということになる。」]

//say[千奈][「確かに、変換が減りましたわね！」]

//say[広][「最後に、添字の上げ下げ。これは、次のように、計量テンソルを使えば、解決。」]

//texequation{
A_i = g_{ij} A^j, \quad A^i = g^{ij} A_j
//}

//say[広][「これらは、高階のテンソルにも、使える、よ。」]

//texequation{
C_i^{jk\ell} =g^{\ell m} C_{im}^{jk}, \quad D_{ijk}^{\ell m} = g_{kn} g^{mo} D_{ijo}^{\ell n}
//}

//say[広][「今までの話は、イメージしやすいように、空間座標の基底を変えた、という前提で話したから、添字は全部アルファベットだったけど、これは時間の座標も含めた、時空座標でも成り立つ話。要は、添字は全部ギリシャ文字でも、同じことが成り立つ、よ。」]

//say[広P][「時空座標をイメージする際、『時間座標の基底』という概念が、一体なんのことを言っているのかわからなくなると思いますが、このあたりの話は、Day3で篠澤さんが話していた、同時性の相対性を思い出すと、何となく雰囲気が掴めると思います。あの話で、倉本さんと佑芽さんそれぞれにとっての同時刻の線が一致しないことが、この時刻の座標の基底の不一致に対応しています。」]

//say[広P][「それから、もう一つ。ここでは煩雑になるため、テンソルと行列をほぼ同義のものとして扱いましたが、行列とテンソルの明確な違いは、基底の概念があるかどうか、というところにあります。実は、行列はただの数の羅列として捉えられる一方で、テンソルには基底の概念が隠れていて、座標変換によって、ともに変換を受けます。テンソルについて、@<m>{a^i}の基底は@<m>$\bm{e}_i$、@<m>{a_j}の基底は@<m>$\bm{e}^j$であることを用いて、@<m>$a^{i_1} b^{i_2}$の基底を@<m>$\bm{e}_{i_1} \otimes \bm{e}_{i_2}$、@<m>$a_{j_1} b_{j_2}$の基底を@<m>$\bm{e}^{j_1} \otimes \bm{e}^{j_2}$、@<m>{a^i b_j}の基底を@<m>$\bm{e}_{i} \otimes \bm{e}^{j}$などと定めれば、テンソル@<m>$T^{i_1 i_2 \dots i_n}_{j_1 j_2 \dots j_m}$に対して、このテンソルの各成分の基底は、@<m>$\bm{e}_{i_1} \otimes \cdots \otimes \bm{e}_{i_n} \otimes \bm{e}^{j_1} \otimes \cdots \otimes \bm{e}^{j_m}$となります。ただし、上付き添字の基底と下付き添字の基底は@<m>{\otimes}に対して入れ替え可能で、下付き添字の基底同士、上付き添字の基底同士は、並び替えが不可であるとします。計算がわからない場合は、以下を参考にすると良いと思います。ただし、以下では縮約記法を用いていることに注意してください。」]

@<m>$\bm{a} := a^i \bm{e}_i, \bm{b} := b_j \bm{e}^j$とすると、テンソル@<m>{a^i b_j}の基底による表示は
//texequation{
\bm{a} \otimes \bm{b} = a^i b_j \bm{e}_i \otimes \bm{e}^j
//}

//say[広][「最後に、計量を通して、双対基底の図形的なイメージをして、終わりにしよう。突然だけど、千奈、方眼紙は持ってるかな。」]

//say[千奈][「はい、ちょっと待ってくださいまし……持ってきましたわ！」]

//say[広][「じゃあ、今から、作図、するよ。まず、斜交座標の基底として、次のような基底を考える。」]

//image[day04_fig06][]

//say[広][「この、今書いた基底のうち、真横に伸びたものを@<m>$\bm{e}_1 = (1,0)$、斜めに伸びたものを@<m>$\bm{e}_2 = (1,1)$としよう。今、1の長さが、2マス分に対応していることに、気を付けて。」]

//say[広][「そしたら次に、この方眼紙に、直交座標系で(3,2)に対応するベクトルを、書けるかな。」]

//say[千奈][「2マスで長さが1ですから……こうですわね。」]

//image[day04_fig07][]

//say[広][「うん、そうなる。じゃあ、この今書いたベクトルを@<m>$\bm{v}$として、@<m>$\bm{v}$は斜交座標系の基底を使って、どう表せるかな。」]

//say[千奈][「@<m>$\bm{v} = \bm{e}_1 + 2\bm{e}_2$ですわ！」]

//image[day04_fig08][]

//say[広][「そう。そしたら、次。千奈、@<m>$\bm{e}_1,\bm{e}_2$に対応する、双対基底を、書けるかな。」]

//say[千奈][「難しいですけれど、双対基底の性質を思い出せば……@<m>$\bm{e}^1 = (1,-1),\bm{e}^2 = (0,1)$になりそうですわね！そうしたら……」]

//image[day04_fig09][]

//say[千奈][「書けましたわ！」]

//say[広][「OK。じゃあ、さっき求めた@<m>$\bm{v}$の基底@<m>$\bm{e}_1,\bm{e}_2$を使った表示を思い出して。@<m>$\bm{v} = v^1 \bm{e}_1 + v^2 \bm{e}_2$として、@<m>$\dfrac{\bm{e}^1}{v^1}, \dfrac{\bm{e}^2}{v^2}$を図示して。」]

//say[千奈][「@<m>{v^1=1,v^2 =2}ですから、こうなりますわね。」]

//image[day04_fig10][]

//say[広][「そしたら、最後。整数@<m>{n}に対して、@<m>$n\dfrac{\bm{e}^1}{v^1}, n\dfrac{\bm{e}^2}{v^2}$で表される2点を繋いで、線を引いて。」]

//say[千奈][「えっと……要するに、@<m>$\dfrac{\bm{e}^1}{v^1}, \dfrac{\bm{e}^2}{v^2}$を1目盛りとして、原点から数えて、@<m>{n}個目の目盛り同士を、結べばよいのかしら？」]

//say[広][「そう。」]

//say[千奈][「……できましたわ！」]

//image[day04_fig11][]

//say[広][「じゃあ、今引いた線が、(3,2)に対応するベクトルをいくつに分割しているか、数えてみて。」]

//say[千奈][「えーっと……13個ですわね。」]

//say[広][「ちなみに、(3,2)のベクトルの大きさの2乗は、いくつかな。Euclidノルムで、計算してみて。」]

//say[千奈][「……あ！13ですわ！」]

//say[広][「うん。なんと、分割の個数と同じ、13になる。」]

//say[広][「実は、ある基底に対して考えられた双対基底は、元の基底の世界における、『等高線』を描くための、ツールとして使える。この先、物理でよく使うけど、ポテンシャルに対する勾配ベクトルの向きは、接平面のうち、傾斜が最もきつい方向。このときの双対基底の線は、等高線と、本当に同じ働きをする。難しい話だけど、頭の片隅で覚えておくと、この後の話が、理解しやすくなるかも。」]

//say[千奈][「わかりましたわ！」]

//say[広][「今日は、このくらいかな。お疲れ様。」]

==[nonum]{day5-世界を飛び回るアイドル-曲線と曲面} Day5　世界を飛び回るアイドル　～曲線と曲面～

部屋に入ると、すでに倉本さんと篠澤さんが話していた。

//say[千奈][「……それで、お姉さまが……」]

どうやら倉本さんは、また星南さんについて話しているようだ。というのも、星南さんは今、アメリカでのライブの予定があって、海外遠征に行っている最中である。そしてつい先日、そのライブの様子が、動画サイトやSNSで公開されたのだ。当然、初星学園内は、その話題で持ちきりになり、どこへ行っても星南さんの話が持ち出された。それもあって今日は、倉本さんの星南会長トークが止まらない一日だった。

//say[千P][「今日はずっと星南さんについての話をしていますね。」]

//say[千奈][「わたくし、星南お姉さまが本当に憧れで、それで、ライブが、とっても眩しくって！」]

//say[千P][「それにしても、アメリカでも、すごい人気でしたね。」]

//say[千奈][「もう、何度でも同じシーンを見返してしまいますわ！」]

私も、ライブの映像を何回か見たが、本当に『完全無欠』という四字がぴったり当てはまるような、そんなオーラを纏っていた。

//say[広][「アメリカかぁ。わたしも、何度か、行ったことある、よ。」]

//say[千奈][「えぇ！？篠澤さんも、世界デビューを果たしていたんですの！？」]

//say[広][「うん。学会で、ね。」]

//say[千奈][「……って、そっち！？」]

//say[広][「アイドルとしては、まだ、行ったこと、ない。学会以外の思い出は、マサチューセッツで、積分の大会に出て、優勝したぐらい、かな。」]

//say[広P][「……そのエピソード、初耳なんですが。」]

篠澤さんから、強烈なエピソードが語られる。というか、担当Pですら知らない情報がこのタイミングで出てくるって、一体どれだけインパクトの強い来歴なんだ……

//say[広][「その、マサチューセッツの大学に行ったときに、特別に、参加させてもらった。まぁ、教授陣が腕をふるって、作問したらしくて、それなりに、解く手応えはあったけど、まだまだ、だね。」]

//say[千P][「ますます、なんでそんな人がこの学園に来たのか、謎が深まりますね。」]

ひょんなことから始まった相対論ゼミも、もう5日目になる。

倉本さんは、あれから随分と数学についてはマスターしてきたみたいで、ちょっとした難しい高校数学の問題も、時間をかければ解けてしまうほどの腕前になっていた。

この調子で、アイドルとしても腕前を上げて、憧れの星南さんに一歩ずつ近づいていってほしいものだが……

//say[千奈][「……あ！」]

慌てて、倉本さんが席を立って、コンビニの袋を持ってキッチンへ向かう。

//say[千奈][「お姉さまに気を取られて、すっかりアイスを冷蔵庫に入れるの忘れてましたわ……」]

まだまだ、先は長そうだ。

//centering{
〜（ゼミ開始）〜
//}

//say[広][「せっかく世界を飛び回る話が出てきたから、今日は、地球上のおはなしから、考えてみよう。」]

//say[広][「千奈、突然だけど、自分が地球上のどこにいるか、説明してみて。」]

//say[千奈][「日本ですわ！」]

//say[広][「うん。普通なら、それでいい。でも今回は、自分がどこにいるかを1点に定められるように、説明、できるかな。」]

//say[千奈][「えぇ！？初星学園……とか？」]

//say[広][「まだ、広い。それに、初星学園を知らない人には、場所が伝わらない。」]

//say[千奈][「確かに……自分の位置を言うのって、意外と難しいですわ……」]

//say[広][「でも、一つだけ、自分の正確な位置を言える道具がある、よ。」]

//say[千奈][「なんですの？」]

//say[広][「それは、緯度と、経度。」]

//say[千奈][「……はぁっ！？確かに！」]

//say[広][「ふふ、忘れてた？緯度と経度を使えば、地球上のどこにいても、一意に自分の場所を定められる。」]

//say[広][「これは、緯度と経度が、地球上に設定された、地球表面の座標、ともみなせる。」]

//say[千奈][「なるほど！」]

//image[day05_fig01][]

//say[広][「基本的に、このように空間内の曲面は2つの独立なパラメータで表現できる。曲線であれば、1つのパラメータで表現できる。」]

//say[千奈][「曲線って、1つのパラメータだけで表現できるんですの？」]

//say[広][「例えば、曲線上のある点を原点として、それに沿った数直線を考えれば、それだけで、曲線上の任意の点を表すことができる。」]

//say[千奈][「考えてみれば、当たり前ですわね。」]

//image[day05_fig02][]

//say[広][「さて、次に、世界地図について、考えよう。地球上の緯線と経線を直交する直線で表して、二次元の座標みたいにすると、地球上の陸地を、平面図で表すことができる。こうして、できたのが、メルカトル図法の、世界地図。」]

//image[day05_fig03][]

//say[千奈][「よく見る、世界地図ですわよね。これが、どうしたんですの？」]

//say[広][「この地図は、実は、陸地の実際の大きさを、全然反映できていない。」]

//say[千奈][「え、そうなんですの？」]

//say[広][「うん。そもそも、この地図を球面に貼り付けることは、できないはず。つまり、地図を書いた時点で、球面から図が歪んでいる、ということ。」]

//say[千奈][「確かに、言われてみれば……」]

//say[広][「どう歪んでいるか、具体的に考えたかったら、緯線を考えるとわかりやすい。本来、緯度の低いところと高いところで、緯線の長さは、違うはず。でも、メルカトル図法の世界地図では、その緯線の長さの違いは、反映されていない。」]

//say[千奈][「つまりこの地図って、北や南に向かうほど、大きく歪められているってことかしら？」]

//say[広][「うん、そのとおり。地図で見えるほど、南極大陸は大きくない、よ。」]

//image[day05_fig04][]

//say[広][「でも、世界規模ではなくて、ある特定の場所の、狭い範囲を写した地図になると、話は変わってくる。例えば、道に迷って地図を使う時、道の形や建物の形は、地図に描いてある通りで、歪んではいない、はず。」]

//say[千奈][「確かに、地球は大きくて、地表に立っているときは、自分の周りは平面のように広がって見えますものね。」]

//image[day05_fig05][]

//say[広][「そう。曲面上のはずなのに、局所的には、二次元の平面座標と同じ考え方ができる。これが、とても、大事。」]

//say[千奈][「何でですの？」]

//say[広][「平面座標と同じ考え方ができる、ということは、曲面上での関数などの数学的な議論を、Euclid空間上での議論に、することができるから、だよ。」]

//say[千奈][「ユークリッド、空間……ってなんですの？」]

//say[広][「Euclidノルムが距離になる、これまで考えてきたような、空間のこと。例えば、2次元のEuclid空間なら、@<m>{x,y}、3次元のEuclid空間なら、@<m>{x,y,z}で表される直交座標の空間のこと。」]

//say[千奈][「えーっと、要するに、さっきまで考えてきた、普通の空間のこと……という理解で良いんですの？」]

//say[広][「まぁ、そういうこと、かな。」]

//say[千奈][「なるほど……それで、なんでEuclid空間上での議論にできると、嬉しいんですの？」]

//say[広][「それは、Euclid空間で使えるような、微分や積分などのツールを通して、解析ができるから。」]

//say[千奈][「要するに、曲面上のはなしを、これまで慣れ親しんできた道具で議論できるから、ということかしら？」]

//say[広][「そのとおり。このように、各点について、その点の近傍が、局所的にEuclid空間としてみなせるようなものを、多様体、という。そして、ある点の近傍に張り巡らされた座標を、局所座標系、という。」]

//say[千奈][「さっきの例で言えば、地球上の曲面が多様体で、手元の自分の近くを描いた地図が局所座標……ってことですの？」]

//say[広][「そのとおり。地球の場合は、空間上の平面だから、パラメータは2つで表現できた。だから、これを2次元多様体という、よ。同様に、パラメータが@<m>{n}個で表現できる多様体を、@<m>{n}次元多様体、という。」]

//say[千奈][「……あれ、でも、平面と曲面は別物で、曲面に平面は貼り付けらないはずですわよね？」]

//say[広][「うん。」]

//say[千奈][「では、局所座標系を、Euclid空間と一緒だと考えると、まずいんじゃないですの……？」]

//say[広][「数学的にいえば、そう。だから、もう少し、真面目に定義を書けば、次のとおりになる。」]

//beginthm[][局所座標系][重要]
多様体@<m>{M}上のある開集合@<m>{U}から、@<m>{n}次元Euclid空間@<m>$\mathbb{R}^n$のある開集合@<m>{V}への同相写像@<m>{\varphi: U \to V}を、@<m>{U}上の局所座標系という。
//endthm

//image[day05_fig06][]

//say[千奈][「どうそう……しゃぞう？」]

//say[広][「それは、あとで話す。とりあえず、局所座標系というのは、多様体の一部分と、Euclid空間の一部分を、写像@<m>{\varphi}で、対応付ける、ということ。」]

//say[千奈][「写像ってなんですの……？」]

//say[広][「大雑把にいえば、これまで習ってきた、関数のこと。ある集合の要素と、ある集合の要素を対応付けたときの、その対応のことで、例えば@<m>{y=f(x)}であれば、ある値@<m>{x}に対して、ある値@<m>{y}を、写像@<m>{f}が対応付けている、ということ。」]

//say[広][「さっき千奈の言った通り、厳密には、Euclid空間を多様体に直接貼り付けることは、できない。でも、Euclid空間の一部分と多様体の一部分を対応付ければ、Euclid空間の座標を、多様体の上に対応する曲線座標として、描くことができる。これで、千奈の指摘した問題は、解決したことになる。」]

//say[千奈][「なるほど。つまり、Euclid空間の座標に対応させて、引き戻して描かれた曲線座標が、局所座標系、というわけですわね！」]

//say[広][「次に、こんなことを、考えてみる。今、手元に二枚の地図があるとする。この地図は、それぞれ縮尺や向き、写している場所が違うけど、共通して同じ場所を写していたとする。」]

//say[広][「もし千奈が、この二枚の地図にまたがって、ある場所からある場所へと行こうとするルートを考える時、どうするかな。」]

//say[千奈][「ええと……地図をつなげますわ！」]

//say[広][「どうやって、つなげるの。」]

//say[千奈][「それは、同じ場所が写っていることを利用して、その場所が重なるように、向きや大きさを揃えて、貼り合わせますわ！」]

//say[広][「うん、そうすれば、別々の地図が一枚の大きな地図になる。このときに、地図の重ね方を工夫して、向きや大きさを変えたと思う。この行動こそが、局所座標から局所座標への、座標変換に、対応している。」]

//say[千奈][「つまり、異なる地図の縮尺や向きを揃えるのが、座標変換、ということかしら？」]

//say[広][「うん。より、数学的に言えば、こういうこと。」]

//beginthm[][座標変換][重要]
多様体@<m>{M}に対して、二つの開集合@<m>{U_1,U_2}を考え、それぞれに対し局所座標@<m>{\varphi_1:U_1 \to V_1}および@<m>{\varphi_2 : U_2 \to V_2}をとり、@<m>{U_1,U_2}の共通部分は空集合でない（すなわち共通部分に要素がある）とする。このとき、写像@<m>$\varphi_2 \circ {\varphi_1}^{-1} : \varphi_1 (U_1 \cap U_2) \to \varphi_2 (U_1 \cap U_2)$が定義できて、この写像を座標変換という。
//endthm

//image[day05_fig07][]

//say[広][「これはつまり、二つの地図の共通部分を、@<m>{\varphi_1}という局所座標で考えたときの世界と、@<m>{\varphi_2}という局所世界で考えたときの世界が、写像@<m>$\varphi_2 \circ {\varphi_1}^{-1}$を考えることで、関連付けられる、ということ。」]

//say[千奈][「なるほど。数学的な話は難しそうですけれど、地図のイメージを考えれば、何となく納得ができるかもしれませんわ。」]

//say[広][「……さて、さっき出てきた、開集合や、同相写像についても、一応、説明しておこうと、思う。でも、数学的に、論理にこだわって話そうとすると、難しいと思うから、イメージ主体で、話せるよう、頑張る、ね。」]

//say[千奈][「よろしくお願いしますわ！」]

//say[広][「まず、前提知識として、位相の概念を紹介する。これは、数学における、『近さ』をより一般化した、概念。」]

//beginthm[][位相][重要]
@<m>{X}を、空でない集合とする。@<m>{X}の部分集合の集まり（部分集合の族）を、@<m>$\mathcal{O}$として、これが次の条件を満たす時、@<m>$\mathcal{O}$を集合@<m>{X}の位相である、という。

 1. @<m>$X \in \mathcal{O}, \emptyset \in \mathcal{O}$
 2. @<m>$O_1, O_2 \in \mathcal{O} \implies O_1 \cap O_2 \in \mathcal{O}$
 3. @<m>$\displaystyle \forall \lambda \in \Lambda, O_\lambda \in \mathcal{O} \implies \bigcup_{\lambda \in \Lambda} O_\lambda \in \mathcal{O}$

そして、位相@<m>$\mathcal{O}$が与えられた集合@<m>{X}のことを、位相空間と言い、改めて@<m>$(X,\mathcal{O})$で表す。@<m>$\mathcal{O}$に属する@<m>{X}の部分集合を、@<m>$\mathcal{O}$-開集合、という。
//endthm

//say[千奈][「何が何だかわかりませんわ……」]

//say[広][「とりあえず、落ち着いて。一つずつ、説明する。」]

//say[広][「突然だけど、千奈。近さを定義するときに、距離をいつでも決めることは、できるかな。」]

//say[千奈][「それは、できる気がしますわ。隣の駅まで何キロだ、とか……」]

//say[広][「じゃあ、仲の良さ、とかはどうだろう。」]

//say[千奈][「確かに、心の距離、という言葉はありますけど、実際に距離がどれくらいとかは、決めることができませんわね……」]

//say[広P][「プロデューサーと、アイドルの仲の良さは、親愛度で測れますけどね。」]

//say[千奈][「わーっ！メタい話は、やめてくださいまし！」]

//say[広][「……まぁ、普通は、仲の良さは、具体的な量では、測れない。こういうときに、でてくるのが、グループ分け、という考え方。」]

//say[広][「例えば、@<m>{X}を初星学園の全生徒の集合、としよう。私と千奈、佑芽の3人は、同じクラスで、いつもつるんでいるし、同じ仲良しグループに入れられる。それから、美鈴も同じクラスだから、3人に加えて美鈴を入れた、さっきの3人のグループとは別の、4人の仲良しグループも作れる。それから、千奈、佑芽、美鈴は、生徒会執行部に入っているから、6人の生徒会執行部でグループを作っても良い。こうやって、他にもユニットとか、組織とか、いろんな仲良しグループで、部分集合を作っていく。さっきの、定義で言うところの、@<m>{O}が、この仲良しグループ。そして、@<m>$\mathcal{O}$が、仲良しグループ全体の集合。」]

//say[千奈][「なるほど！とってもわかりやすいですわ！」]

//say[広][「そうすると、ある人とある人の距離が近いかどうかを、その人たちが同じ仲良しグループに入っているかどうか、で議論することができる。そして、ある人と仲がいい人の集合は、その人を含む仲良しグループ全体を考えてあげれば、良い。これを、数学的に言えば、こうなる。」]

//beginthm[][近傍系][重要]
@<m>$(X,\mathcal{O})$を位相空間とする。@<m>{X}の部分集合@<m>{O}が、@<m>{X}のある点@<m>{a}を含む時、点@<m>{a}の近傍である、という。そして、点@<m>{a}の近傍全体の集まりを、点@<m>{a}の近傍系という。
//endthm

//say[広][「こう考えると、2番目と3番目のはなしは、わかりやすくなる。2番目は、2つの仲良しグループ@<m>{O_1,O_2}があったときに、@<m>{O_1 \cap O_2}、つまりその仲良しグループの共通メンバーは、当然仲が良くて、そこも仲良しグループと考えてよいはず。仲良しグループなら、@<m>$\mathcal{O}$の中に入っていないとだめだから、この条件が課された、というわけ。」]

//say[広][「それから、3番目の話も、書き方がわかりにくいけど、要するに、複数個の仲良しグループがあったときに、その仲良しグループを結合してできた大きな仲良しグループも、仲良しグループになっていてほしい、ということ。こうしてできた、仲の良さを定義する仲良しグループの集まり@<m>$\mathcal{O}$で、初星学園@<m>{X}の中の、それぞれの人たちの仲の良さを決めてあげることができる。これが、位相、ということ、だよ。」]

//say[千奈][「確かに、こうすれば、距離の概念がなくても、近さを議論できますわね！」]

//say[広][「これが、分かれば、次の、位相空間における連続写像も、簡単に理解できるはず。」]

//beginthm[][連続写像][重要]
@<m>$(X_1,\mathcal{O}_1),(X_2,\mathcal{O}_2)$を位相空間とする。写像@<m>{f:X_1 \to X_2}が、点@<m>{x_1 \in X_1}で連続であるとは、位相空間@<m>$(X_2,\mathcal{O}_2)$における、点@<m>{x_2 = f(x_1)}の近傍@<m>{N}の、@<m>{f}による逆像@<m>$f^{-1} (N)$が、@<m>$(X_1,\mathcal{O}_1)$における、点@<m>{x_1}の近傍になることである。
//endthm

//say[広][「これは、@<m>{X_1}において、点@<m>{x_1}に十分近い点は、@<m>{f}で移しても@<m>{X_2}において、点@<m>{f(x_1)}に十分近い点になる、ということ。連続関数でも、@<m>{y=f(x)}において、点@<m>{x_1}で連続なら、@<m>{x_1}に十分近い値を入れたときに、関数の値は@<m>{y_1 = f(x_1)}に十分近い値をとる。」]

//say[広][「連続まで理解できれば、同相写像は簡単。」]

//beginthm[][同相写像][重要]
@<m>{f: X_1 \to X_2}が連続写像であるとする。さらに、これに加えて、@<m>{f}が全単射かつ@<m>$f^{-1}$が連続なら、@<m>{f}を同相写像という。
//endthm

//say[広][「同相写像は、@<m>{X_1}と@<m>{X_2}が同じ形である、ということを、言うための道具。同じ形、というのは、@<m>{f}が全単射、つまり@<m>{X_1}と@<m>{X_2}の元の間に一対一対応があって、かつ@<m>$f,f^{-1}$のどちらもが連続、つまり@<m>{X_1}内で近い点は@<m>{X_2}内でも近い点になる、ということ。集合に、近さの概念、つまり位相を加えたのが、位相空間だったけど、2つの異なる位相空間であっても、この同相写像が存在することが分かれば、その位相空間が、両方とも、同じような構造を持っている、ということがわかる。」]

//say[千奈][「つまり、同相写像があれば、見た目は異なる位相空間でも、構造は同じ……ということですの？」]

//say[広][「そう。つまり、この同相写像があれば、ある位相空間で扱えていた数学的な操作を、同様にその写像で対応づけられる位相空間でも、同様に扱える、ということがわかる。」]

//say[広][「これを踏まえて、改めて、多様体の定義を話してみると、多様体の定義がなぜこうなっているか、わかると思う、よ。」]

//beginthm[][多様体][重要]
@<m>$(M,\mathcal{O})$を、位相空間とする。@<m>{M}が@<m>{n}次元多様体である、とは、添字の集合を@<m>{\Lambda}として、@<m>{\forall \lambda \in \Lambda}に対し、@<m>{M}上の開集合@<m>{U_\lambda}と、@<m>{n}次元Euclid空間@<m>$\mathbb{R}^n$の開集合@<m>{V_\lambda}を対応付ける同相写像@<m>{\varphi_\lambda : U_\lambda \to V_\lambda}があって、以下を満たすことである。

 1. @<m>$\displaystyle \bigcup_{\lambda \in \Lambda} U_\lambda = M$（つまり、@<m>{M}のどの点も、少なくとも1つの@<m>{U_\lambda}に含まれる）
 2. @<m>$\forall \lambda_1, \lambda_2 \in \Lambda, \varphi_{\lambda_2} \circ {\varphi_{\lambda_1}}^{-1} : \varphi_{\lambda_1} (U_{\lambda_1} \cap U_{\lambda_2}) \to \varphi_{\lambda_2} (U_{\lambda_1} \cap U_{\lambda_2})$は@<m>{C^\infty}級。
 3. @<m>{M}はHausdorffかつ第二可算。
//endthm

//say[広][「1は、@<m>{M}のどの点も、少なくとも1つの@<m>{U_\lambda}に含まれる、ということを言っている。@<m>{U_\lambda}は、同相写像@<m>{\varphi_\lambda}を通して、Euclid空間の開集合@<m>{V_\lambda}に対応付けられている。つまり、Euclid空間で使える数学的操作を、@<m>{U_\lambda}にも使える、ということ。これが@<m>{M}を覆っていたから、結局、@<m>{M}上全体で、Euclid空間で使える数学的操作が使える、ということになる。この@<m>{\varphi_\lambda}は局所座標だったので、@<m>{M}の任意の点が、少なくとも1つの局所座標に属している、とも言える。」]

//say[広][「2も、座標変換が全て@<m>{C^\infty}級になる、ということ。@<m>{C^\infty}級、というのは、この座標変換の関数が何回でも微分できる、ということ。」]

//say[広][「3は、今は理解できなくても、大丈夫。Hausdorffであるということは、@<m>{M}上の別々の点が、どれだけ近くとも、必ず別々の、重なりのない開集合で、囲うことができる、ということ。そして、第二可算であるということは、位相@<m>$\mathcal{O}$から可算個の開集合を選んで、多様体@<m>{M}を覆える、ということ。これを、開集合の基底と考えて、開基とも言ったりする。とりあえず今は、あまり深く考える必要はない、よ。」]

//say[千奈][「難しいですわね……でも、これが、相対性理論と、何の関係があるんですの？」]

//say[広][「相対性理論では、よく『時空のゆがみ』という概念がでてくるけど、ここで使うのが、多様体の概念。観測者がいる時空を、4次元多様体の上とみなして、この観測者の近傍の局所座標系を通して、様々な物理現象を議論していく、ということ。この、多様体の概念が、きっちりわかっていたほうが、話を進めやすいから、今話した、というわけ。」]

//say[広][「……ひとつだけ、これまで話してきたイメージ主体の話を信じすぎると、たまに、数学的には正しい話を、間違っていると感じてしまうことがある。だから、あくまでイメージとして、これまでの話を覚えておいてほしい、かな。」]

//say[千奈][「わかりましたわ。やっぱり、相対性理論を簡単に理解するのは難しいんですわね……」]

//say[広][「さて、難しい話はとりあえず、ここまで。ここからは、曲線と曲面の話を、していこうと、思う。とりあえずは、Euclidノルムの世界で、考えてみる、よ。」]

//say[広][「まずは、平面曲線について。平面曲線@<m>{C(t)}は、1つのパラメータ@<m>{t}を用いて、@<m>{C(t) = (x(t),y(t))}と表される。これはさっきもいった通り、曲線にパラメータの数直線を沿わせて、その数直線の値、つまり@<m>{t}の値と、その値に対応する点の位置@<m>{(x,y)}の関係が分かれば、曲線を描画できる。」]

//say[広][「千奈。@<m>{t}を少し動かしたときに動く方向のベクトル、つまり曲線に対する接ベクトルは、どう表せるかな。」]

//say[千奈][「@<m>{x,y}がそれぞれちょっとずつ動く、と考えれば、@<m>$\left(\dfrac{dx}{dt}, \dfrac{dy}{dt}\right)$になりますわ！」]

//say[広][「そうなる。これを、@<m>$\dfrac{dC}{dt}(t)$と書くことに、する。ここから、接方向の単位ベクトル@<m>$\bm{e}_1$は、次のように求まる。」]

//texequation{
\bm{e}_1 = \frac{dC/dt}{\left\lvert dC/dt\right\rvert} = \frac{1}{\sqrt{\left(\dfrac{dx}{dt}\right)^2 + \left(\dfrac{dy}{dt}\right)^2}} \begin{pmatrix}
    \dfrac{dx}{dt}\\
    \dfrac{dy}{dt}
  \end{pmatrix} = \frac{dt}{\sqrt{dx^2 + dy^2}}\begin{pmatrix}
    \dfrac{dx}{dt}\\
    \dfrac{dy}{dt}
  \end{pmatrix} = \frac{dt}{ds}\begin{pmatrix}
    \dfrac{dx}{dt}\\
    \dfrac{dy}{dt}
  \end{pmatrix} = \begin{pmatrix}
    \dfrac{dx}{ds}\\
    \dfrac{dy}{ds}
  \end{pmatrix}
//}

//say[広][「途中で、微小長さ@<m>{ds}を用いて式を変形した。最終式では、パラメータ@<m>{t}を、曲線の長さと一致するパラメータ@<m>{s}の関数として表示し、@<m>{(x(t),y(t))}を@<m>{(x(s),y(s))}とみなした。」]

//say[広][「このように、曲線に対して、長さを示すパラメータ@<m>{s}をとって、このパラメータで曲線を表示すると、@<m>$\bm{e}_1 = \dfrac{dC}{ds}$となる。この、長さを示すパラメータ@<m>{s}を、弧長パラメータという。以下では、パラメータとして@<m>{s}を使うことにする、よ。」]

//say[広][「次に、@<m>$\bm{e}_2$を、@<m>$\bm{e}_1$を、反時計回りに90度、つまり@<m>{+\pi/2}だけ回転したベクトルとする。成分表示すると、次のようになる@<fn>{fn9}。」]

//texequation{
\bm{e}_1 (s) = \frac{d}{ds}\begin{pmatrix}
    x(s)\\
    y(s)
  \end{pmatrix}, \quad \bm{e}_2 (s) = \frac{d}{ds}\begin{pmatrix}
    -y(s)\\
    x(s)
  \end{pmatrix}
//}

//say[広][「そうすると、曲線上のパラメータ@<m>{s}に対応する点Pに対して、直交座標系となるフレーム@<m>$(\mathrm{P}(s);\bm{e}_1 (s),\bm{e}_2 (s))$を設定できる。これを、ムービング・フレーム、という。」]

//say[千奈][「つまり、曲線に対して動くような直交座標系、ということですわね！」]

//say[広][「そう。」]

//image[day05_fig08][]

//say[広][「次に、@<m>$\bm{e}_1 \bullet \bm{e}_1 = 1$であることを使って、この式の両辺を@<m>{s}で微分すると、こうなる。」]

//texequation{
\frac{d}{ds} (\bm{e}_1 \bullet \bm{e}_1) = \frac{d\bm{e}_1}{ds} \bullet \bm{e}_1 + \bm{e}_1 \bullet \frac{d\bm{e}_1}{ds} = 2\frac{d\bm{e}_1}{ds} \bullet \bm{e}_1 = 0
//}

//say[広][「つまり、@<m>$\bm{e}_1$と@<m>$\dfrac{d\bm{e}_1}{ds}$は直交する。一方で、@<m>$\bm{e}_1$と@<m>$\bm{e}_2$も直交するので、@<m>$\dfrac{d\bm{e}_1}{ds}$は、@<m>{\kappa}を定数として、@<m>$\dfrac{d\bm{e}_1}{ds} = \kappa \bm{e}_2$と書けるはず。この@<m>{\kappa}を、曲率という。」]

//say[千奈][「きょくりつ……って？」]

//say[広][「あとで、説明する、よ。とりあえず、もう少し式変形を、続けてみよう。」]

//say[広][「さっきと同じように考えて、@<m>$\bm{e}_2 \bullet \bm{e}_2 = 1,\bm{e}_1 \bullet \bm{e}_2 = 0$を、それぞれ両辺@<m>{s}で微分すると、どうなるかな。」]

//say[千奈][「こうなりますわ。」]

//texequation{
\frac{d}{ds} (\bm{e}_2 \bullet \bm{e}_2) = \frac{d\bm{e}_2}{ds} \bullet \bm{e}_2 + \bm{e}_2 \bullet \frac{d\bm{e}_2}{ds} = 2\frac{d\bm{e}_2}{ds} \bullet \bm{e}_2 = 0
//}
//texequation{
\frac{d}{ds} (\bm{e}_1 \bullet \bm{e}_2) = \frac{d\bm{e}_1}{ds} \bullet \bm{e}_2 + \bm{e}_1 \bullet \frac{d\bm{e}_2}{ds} = 0
//}

//say[広][「さっきと同じように考えると、1番目の式から、@<m>$\dfrac{d\bm{e}_2}{ds}$は@<m>$\bm{e}_1$の定数倍になるはず。千奈、@<m>{\kappa}を用いて、この定数を、求められるかな。」]

//say[千奈][「えーっと、@<m>$\dfrac{d\bm{e}_2}{ds} = \kappa' \bm{e}_1$と置いて計算すると……」]

//texequation{
\frac{d\bm{e}_1}{ds} \bullet \bm{e}_2 + \bm{e}_1 \bullet \frac{d\bm{e}_2}{ds} = (\kappa \bm{e}_2)\bullet \bm{e}_2 + \bm{e}_1 \bullet (\kappa' \bm{e}_1) = \kappa + \kappa' = 0
//}

//say[千奈][「つまり、@<m>{\kappa' = -\kappa}ですわ！」]

//say[広][「よく、できました。これをまとめると、次のようになる。」]

//texequation{
\frac{d}{ds} \begin{pmatrix}
    \bm{e}_1\\
    \bm{e}_2
  \end{pmatrix}= \begin{pmatrix}
    0 & \kappa\\
    -\kappa & 0
  \end{pmatrix}\begin{pmatrix}
    \bm{e}_1\\
    \bm{e}_2
  \end{pmatrix}
//}

//say[広][「上の公式を、平面曲線に対する、Frenet-Serretの公式という。」]

//say[千奈][「なるほど、曲率を使えば、フレームの基底ベクトルの微分が、簡単に表せる、というわけですわね。でも、結局この曲率って一体何者なんでしょう……？」]

//say[広][「それは、@<m>$\kappa = (\kappa \bm{e}_2) \bullet \bm{e}_2 = \dfrac{d\bm{e}_1}{ds} \bullet \bm{e}_2$であることを使えば、簡単にわかる。」]

//texequation{
\kappa = \frac{d}{ds} \begin{pmatrix}
    \dfrac{dx}{ds}\\
    \dfrac{dy}{ds}
  \end{pmatrix} \bullet \frac{d}{ds}\begin{pmatrix}
    -y\\
    x
  \end{pmatrix} = \frac{dx}{ds} \frac{d^2 y}{ds^2} -\frac{d^2 x}{ds^2} \frac{dy}{ds} = \cfrac{\cfrac{dx}{ds} \cfrac{d^2 y}{ds^2} -\cfrac{d^2 x}{ds^2} \cfrac{dy}{ds}}{\left(\dfrac{dx}{ds}\right)^2 + \left(\dfrac{dy}{ds}\right)^2}
//}

//say[広][「最後の式変形には、@<m>$\bm{e}_1 \bullet \bm{e}_1 = 1$であることを用いた。ここで、次の式が成り立つ@<fn>{fn10}。」]

//texequation[arctanbibun]{
  \frac{d}{ds}\left(\arctan \frac{dy/ds}{dx/ds} \right) = \cfrac{\cfrac{dx}{ds} \cfrac{d^2 y}{ds^2} -\cfrac{d^2 x}{ds^2} \cfrac{dy}{ds}}{\left(\dfrac{dx}{ds}\right)^2 + \left(\dfrac{dy}{ds}\right)^2}
//}

//say[広][「ここで、@<m>$\theta := \arctan \dfrac{dy/ds}{dx/ds}$とおくと、この@<m>{\theta}は、接ベクトルと、@<m>{x}軸の正方向の成す角度になっている。」]

//say[広][「そこで、接ベクトルに垂直な@<m>$\bm{e}_2$を、単位円のベクトルとして持ってきて、これを@<m>{s}について動かすと、速度@<m>{\kappa}で単位円周上を動くことに、なる。@<m>{\kappa}が正なら反時計回り、負なら時計回り。このように、@<m>$\bm{e}_2$を単位円に持ってきて、単位円上のベクトルとして表示する方法を、Gaussの表示という。」]

//image[day05_fig09][]

//say[千奈][「ところで、これって弧長パラメータでの話ですわよね？一般のパラメータでは、どうなりますの？」]

//say[広][「この場合は、@<m>$\bm{e}_1,\bm{e}_2$は、次のように、なる。」]

//texequation{
\bm{e}_1 = \frac{dt}{ds}\frac{d}{dt}\begin{pmatrix}
    x(t)\\
    y(t)
  \end{pmatrix} = \frac{dt}{ds}\begin{pmatrix}
    \dot{x}(t)\\
    \dot{y}(t)
  \end{pmatrix}, \quad \bm{e}_2 (s) = \frac{dt}{ds}\frac{d}{dt}\begin{pmatrix}
    -y(t)\\
    x(t)
  \end{pmatrix} = \frac{dt}{ds}\begin{pmatrix}
    -\dot{y}(t)\\
    \dot{x}(t)
  \end{pmatrix}
//}

//say[広][「今後見にくくなるので、@<m>{t}での微分を、ドットで表すことに、する。これを使えば、こうなる。」]

//texequation{
\kappa = \frac{dt}{ds} \frac{d}{dt} \left(\frac{dt}{ds}\begin{pmatrix}
    \dot{x}(t)\\
    \dot{y}(t)
  \end{pmatrix}\right) \bullet \frac{dt}{ds}\begin{pmatrix}
    -\dot{y}(t)\\
    \dot{x}(t)
  \end{pmatrix}
//}

//say[千奈][「内積の左側が難しそう……」]

//say[広][「なるほど、ね……ここは、次のように変形できる。」]

//texequation{
\frac{dt}{ds} \frac{d}{dt} \left(\frac{dt}{ds}\begin{pmatrix}
    \dot{x}(t)\\
    \dot{y}(t)
  \end{pmatrix}\right) =  \frac{dt}{ds} \frac{d}{dt} \left(\frac{dt}{ds}\right)\begin{pmatrix}
    \dot{x}(t)\\
    \dot{y}(t)
  \end{pmatrix} + \left(\frac{dt}{ds}\right)^2 \begin{pmatrix}
    \ddot{x}(t)\\
    \ddot{y}(t)
  \end{pmatrix}
//}

//say[広][「さらに、@<m>$\dfrac{dt}{ds}$は、次のように計算できる。」]

//texequation{
\frac{dt}{ds} = \frac{dt}{\sqrt{dx^2 + dy^2}} = \frac{1}{\sqrt{\dot{x}^2 + \dot{y}^2}}
//}

//say[広][「@<m>$\dfrac{d}{dt} \left(\dfrac{dt}{ds}\right)$は、どうなるかな。」]

//say[千奈][「式が複雑ですわね……」]

//texequation{
\frac{d}{dt}\left(\frac{dt}{ds}\right) = \frac{d}{dt}\left(\frac{1}{\sqrt{\dot{x}^2 + \dot{y}^2}}\right) = -\frac{1}{2} \cdot \frac{1}{(\dot{x}^2 + \dot{y}^2)^{3/2}} \cdot (2\dot{x}\ddot{x} + 2\dot{y}\ddot{y}) = \frac{-\dot{x}\ddot{x} - \dot{y}\ddot{y}}{(\dot{x}^2 + \dot{y}^2)^{3/2}}
//}

//say[千奈][「できましたわ！」]

//say[広][「うん。そうなる。じゃあ、これまでの、計算結果を合わせれば、どうなるかな。」]

//say[千奈][「やってみますわ！」]

//texequation{
  \kappa &= \frac{dt}{ds} \frac{d}{dt} \left(\frac{dt}{ds}\begin{pmatrix}
    \dot{x}(t)\\
    \dot{y}(t)
  \end{pmatrix}\right) \bullet \frac{dt}{ds}\begin{pmatrix}
    -\dot{y}(t)\\
    \dot{x}(t)
  \end{pmatrix}\\
  &= \left\{\frac{dt}{ds} \frac{d}{dt} \left(\frac{dt}{ds}\right)\begin{pmatrix}
    \dot{x}(t)\\
    \dot{y}(t)
  \end{pmatrix} + \left(\frac{dt}{ds}\right)^2 \begin{pmatrix}
    \ddot{x}(t)\\
    \ddot{y}(t)
  \end{pmatrix}\right\} \bullet \frac{dt}{ds}\begin{pmatrix}
    -\dot{y}(t)\\
    \dot{x}(t)
  \end{pmatrix}\\
  &= \left\{\frac{1}{(\dot{x}^2 + \dot{y}^2)^{1/2}}\cdot\frac{-\dot{x}\ddot{x} - \dot{y}\ddot{y}}{(\dot{x}^2 + \dot{y}^2)^{3/2}} \begin{pmatrix}
    \dot{x}(t)\\
    \dot{y}(t)
  \end{pmatrix} + \left(\frac{1}{(\dot{x}^2 + \dot{y}^2)^{1/2}}\right)^2 \begin{pmatrix}
    \ddot{x}(t)\\
    \ddot{y}(t)
  \end{pmatrix}\right\} \bullet \frac{1}{(\dot{x}^2 + \dot{y}^2)^{1/2}} \begin{pmatrix}
    -\dot{y}(t)\\
    \dot{x}(t)
  \end{pmatrix}\\
  &= \frac{-(\dot{x}\ddot{x} + \dot{y}\ddot{y})}{(\dot{x}^2 + \dot{y}^2)^2} \cdot (-\dot{x}\dot{y} + \dot{y}\dot{x}) + \frac{\dot{x}\ddot{y}-\dot{y}\ddot{x}}{(\dot{x}^2 + \dot{y}^2)^{3/2}}\\
  &= \boxed{\frac{\dot{x}\ddot{y}-\dot{y}\ddot{x}}{(\dot{x}^2 + \dot{y}^2)^{3/2}}}
//}

//say[千奈][「ちょっと大変だったけど、できましたわ……」]

//say[広][「ねえねえ、千奈。」]

//say[千奈][「なんですの？」]

//say[広][「第一項、計算する必要ないの、気付いた？」]

//say[千奈][「……あーっ！本当ですわ！なんで教えてくれなかったんですの！？」]

//say[広][「いつ気づくかなー、って思って。泳がせて、みた。」]

//say[千奈][「もうっ！篠澤さんのいじわる！」]

//say[広][「まぁまぁ、微分の計算練習には、なったはずだし、良いんじゃない、かな。」]

//say[広][「次に、曲率が何を表しているか、ということだけど、言葉の通り、曲がっている度合いを示している。」]

//say[広][「さっき、弧長パラメータ@<m>{s}を使うと、接ベクトルと@<m>{x}軸正方向の成す角を@<m>{\theta}として、@<m>$\kappa = \dfrac{d\theta}{ds}$だった。これを変形すると、@<m>{d\theta = \kappa\,ds}になる。」]

//say[広][「ところで、@<m>{ds}というのは、曲線の微小長さで、もしこれを半径@<m>{r}の円弧の微小範囲とみなせば、@<m>{ds = r\,d\theta}となる。これらを見比べると、@<m>$r = \dfrac{1}{\kappa}$となる。」]

//say[広][「つまり、ある点での曲率の逆数は、その点近傍の曲線を円弧の一部とみなしたときに、半径@<m>{r}の円と部分的にみなせる、ということを言っていることになる。この@<m>{r}を、曲率半径という。そして、その点で接するような曲率半径を持った円を、曲率円と呼ぶ。曲率円の中心は、その点から@<m>$\bm{e}_2$の方向にあって、これを曲率中心と呼ぶ。」]

//say[千奈][「なるほど、曲がり方を円に例えるのが、曲率半径、というわけですわね！」]

//image[day05_fig10][]

//say[広][「うん、それから……このあたりで、Taylorの定理について話しておこうかな。」]

//beginthm[][Taylorの定理][重要]
@<m>$f=f(x_1, \dots, x_d) = f(\bm{x})$を、@<m>{C^n}級とする。このとき、@<m>$\bm{a} = (a_1, \dots, a_d), \bm{h} = (h_1, \dots, h_d)$を@<m>{d}次元ベクトル、@<m>$\nabla = \left(\dfrac{\partial}{\partial x_1}, \dots, \dfrac{\partial}{\partial x_d}\right)$を微分演算子として、次が成り立つ。ただし、@<m>{0<\theta<1}である。
//texequation{
f(\bm{x} = \bm{a}+ \bm{h}) = \sum_{m=0}^{n-1} \frac{1}{m!} (\bm{h} \bullet \nabla)^m f(\bm{x}= \bm{a}) + R_n
//}

//texequation{
R_n = \frac{1}{n!} (\bm{h} \bullet \nabla)^n f(\bm{x} = \bm{a}+ \theta \bm{h})
//}

特に、@<m>$f(\bm{x})$が@<m>{C^\infty}級かつ@<m>$R_n \xrightarrow{n \to \infty} 0$ならば、次が成り立ち、これを@<m>$\bm{x} = \bm{a}$周りのTaylor展開という。
//texequation{
f(\bm{x} = \bm{a}+ \bm{h}) = \sum_{m=0}^\infty \frac{1}{m!} (\bm{h} \bullet \nabla)^m f(\bm{x}= \bm{a})
//}
//endthm

//say[広][「これは、点@<m>$\bm{x}=\bm{a}$まわりで、多変数関数を近似したいときに使う、定理。要するに、点@<m>$\bm{a}$から@<m>$\bm{h}$だけ離れた点を、点@<m>$\bm{a}$での偏導関数の値で近似したいということ。@<m>{C^n}級というのは、@<m>{n}階偏微分できて、そのすべての偏微分のパターンについて、偏導関数が連続、ということ。そして、展開の項を@<m>{\heartsuit}次まで足し合わせるかのことを、@<m>{\heartsuit}次近似、という。」]

//image[day05_fig11][]

//say[千奈][「む、むずかしいですわ！」]

//say[広][「まぁ、式だけ見ると、複雑に見えなくも、ない。でも、やっていることは、単純。」]

//say[広][「例えば、@<m>{f(x,y) = 5x^3 + 2xy^2 -y}のような関数があったとすると、これの@<m>{(x,y)=(1,3)}まわりの、2次近似を求めると、次のとおりになる。」]

//texequation{
  f(x=1+ h_x, y=3+h_y) &\approx \sum_{m=0}^2 \frac{1}{m!} \left(h_x\frac{\partial}{\partial x} + h_y\frac{\partial}{\partial y}\right)^m f(x=1,y=3)\\
  &= \frac{1}{0!} f(1,3) + \frac{1}{1!} \left(h_x\frac{\partial}{\partial x} + h_y\frac{\partial}{\partial y}\right) f(1,3) + \frac{1}{2!} \left(h_x\frac{\partial}{\partial x} + h_y\frac{\partial}{\partial y}\right)^2 f(1,3)
//}
//texequation{
\frac{1}{0!} f(1,3) = 20
//}
//texequation{
  \frac{1}{1!} \left(h_x\frac{\partial}{\partial x} + h_y\frac{\partial}{\partial y}\right) f(x=1,y=3) &= h_x (15x^2 + 2y^2)|_{x=1,y=3} + h_y (4xy-1)|_{x=1,y=3}\\
  &=33h_x + 11h_y
//} 
//texequation{
  \frac{1}{2!} \left(h_x\frac{\partial}{\partial x} + h_y\frac{\partial}{\partial y}\right)^2 f(x=1,y=3) &= \frac{1}{2} \left({h_x}^2\frac{\partial^2}{\partial x^2} + 2h_x h_y \frac{\partial^2}{\partial x \partial y} + {h_y}^2 \frac{\partial^2}{\partial y^2}\right) f(x=1,y=3)\\
  &= \frac{1}{2} {h_x}^2 (30x)|_{x=1,y=3} + \frac{1}{2} \cdot 2h_x h_y (4y)_{x=1,y=3} + \frac{1}{2} {h_y}^2 (4x)_{x=1,y=3}\\
  &= 15{h_x}^2 + 12h_x h_y + 2{h_y}^2
//} 
//texequation{
\therefore f(x=1+ h_x, y=3+h_y) \approx 15{h_x}^2 + 12h_x h_y + 2{h_y}^2 + 33h_x + 11h_y + 20
//}

//say[千奈][「途中の@<m>$\dfrac{\partial^2}{\partial x \partial y}$ってなんですの？」]

//say[広][「それは、@<m>$\dfrac{\partial}{\partial x} \dfrac{\partial}{\partial y}$のこと。@<m>{y}で偏微分してから、@<m>{x}で偏微分する、ということ、だよ。」]

//say[広P][「なお、実用上ほとんどの関数に対して、偏微分の順序にかかわらず、それぞれの変数について何回偏微分したかが一致すれば、偏微分した結果は変わりません。つまり、上の式の、@<m>$\dfrac{\partial^2}{\partial x \partial y}$の部分は、@<m>$\dfrac{\partial^2}{\partial y \partial x}$に変えても、差支えありません。変数が多くても同様で、例えば、@<m>$\dfrac{\partial^4}{\partial y \partial z \partial x \partial y}$は、@<m>$\dfrac{\partial^4}{\partial x \partial y^2 \partial z}$としても構いません。」]

//say[広][「さて、このTaylor展開を使って、曲線を2次近似すると、面白いことがわかる。千奈、Taylorの定理で、@<m>{a=s-s_0,h=s_0}として、曲線を2次近似できるかな。」]

//say[千奈][「わかりましたわ。」]

//texequation{
C(s) \approx C(s_0) + (s-s_0) \frac{dC}{ds}(s_0) + \frac{1}{2} (s-s_0)^2 \frac{d^2 C}{ds^2}(s_0)
//}

//say[広][「うん、そうなる。これを、ムービング・フレームの基底を使って、表示してみて。」]

//say[千奈][「えーっと、@<m>$\bm{e}_1 = \dfrac{dC}{ds}$ですから、@<m>$\dfrac{d^2 C}{ds^2} = \dfrac{d\bm{e}_1}{ds} = \kappa \bm{e}_2$ですわよね。つまり……」]

//texequation{
C(s) \approx C(s_0) + (s-s_0) \bm{e}_1 (s_0) + \frac{1}{2} (s-s_0)^2 \kappa (s_0) \bm{e}_2 (s_0)
//}

//say[千奈][「1次の項に@<m>$\bm{e}_1$が、2次の項に@<m>$\bm{e}_2$が現れましたわね。これは一体……？」]

//say[広][「実は、1次の項は、@<m>{s = s_0}での接ベクトル@<m>$\bm{e}_1$の定数倍になっている。1次の項までを考えれば、これは接線そのものを表している。それから、2次の項は、それに垂直な@<m>$\bm{e}_2$がでてきている通り、接線からのズレを記述していて、@<m>{s_0}から遠ざかるにつれて、誤差が大きくなっていくようになっている。この2次の項は、@<m>{\kappa}がでてきていて、まさにさっきの、円とみなしたときのズレを記述している、ということになる。」]

//say[広][「上の説明を踏まえると、接線は1次まで、曲率円は2次までの近似を考えた場合にでてくる、ということが、わかる。そこで、『接線に接している』ということを、1次の接触、『曲率円に接している』ということを、2次の接触ということがある、よ。」]

//say[千奈][「色んな概念がでてきて、ちょっとパンクしそうですわ。整理しないと……」]

//image[day05_fig12][]

//say[広][「まとめ終わったところで、申し訳ないけど、今日はまだまだ扱うことがたくさんある。とりあえず次は、空間曲線について。」]

//say[広][「空間曲線も、線だから、パラメータは1つで大丈夫。それから、ここでは式をなるべく簡単にするために、弧長パラメータ@<m>{s}で議論することにする。曲線はさっきと同じように、@<m>{C(s) = (x(s),y(s),z(s))}で考える。」]

//say[広][「まず、さっきと同じように、ムービング・フレームを考えたい。接ベクトル@<m>$\bm{e}_1$はさっきと同じように、@<m>$\dfrac{dC}{ds}$で大丈夫。」]

//say[広][「次に@<m>$\bm{e}_2$だけど、ここで少し困ったことが起こる。空間曲線の場合、@<m>$\bm{e}_1$に直交するベクトルを選ぼうとすると、無数にあって、選べない。」]

//image[day05_fig13][]

//say[千奈][「確かに、@<m>$\bm{e}_1$から、どこに向けて90度回れば良いのか、決められませんわね……」]

//say[広][「そこで、さっきと同じように、@<m>$\dfrac{d}{ds}(\bm{e}_1 \bullet \bm{e}_1)$を考えてみると、@<m>$\bm{e}_1$と@<m>$\dfrac{d\bm{e}_1}{ds}$が直交することがわかる。だから、次のように、@<m>$\bm{e}_2$を定めてあげる@<fn>{fn11}。」]

//texequation{
\bm{e}_2 := \frac{d\bm{e}_1/ds}{\left\lVert d\bm{e}_1/ds\right\rVert}
//}

//say[千奈][「なんか、縦棒2本で囲われているものは、なんですの？」]

//say[広][「これは、Euclidノルムでの、@<m>$\dfrac{d\bm{e}_1}{ds}$の長さを、示している。」]

//say[千奈][「つまり、長さを1にするために、自分の長さで割った、ということですわね！」]

//say[広][「さらにこれを踏まえて@<m>$\bm{e}_3$を考えると、これは@<m>$\bm{e}_1,\bm{e}_2$の成す平面に対して、2つの向きの可能性がある。そこで、外積を使えば、一通りに定められる。」]

//texequation{
\bm{e}_3 := \bm{e}_1 \times \bm{e}_2
//}

//say[広][「こうして、曲線上の点P@<m>{(s)}に対して、直交座標系となる、フレーム@<m>$(\mathrm{P}(s); \bm{e}_1(s), \bm{e}_2(s),\bm{e}_3 (s))$が設定できた。これは、曲線に沿ったムービング・フレームのうち、一つのフレームの取り方の例で、Frenetフレームと呼ばれている、よ。今回の定義では、右手系になっていることに、注意して。」]

//say[広][「そして、Frenetフレームにおける@<m>$\bm{e}_2$方向の線を主法線、@<m>$\bm{e}_3$方向の線を従法線という。」]

//image[day05_fig14][]

//say[千奈][「新しい概念で、溺れてしまいそうですわ……」]

//say[広][「もう少し、がまんして。まず、@<m>$\bm{e}_2$は@<m>$\dfrac{d\bm{e}_1}{ds}$で定義したので、@<m>$\dfrac{d\bm{e}_1}{ds}$は@<m>$\bm{e}_2$の定数倍になる、はず。そこで、@<m>$\dfrac{d\bm{e}_1}{ds} = \kappa \bm{e}_2$として、この@<m>{\kappa}を曲率という。」]

//say[広][「それから、次に@<m>$\bm{e}_2 \bullet \bm{e}_2 = 1$を微分すると、@<m>$\dfrac{d\bm{e}_2}{ds},\bm{e}_2$が直交することが、わかる。あるベクトルが@<m>$\bm{e}_2$に直交する、ということは、その@<m>$\bm{e}_2$が法線ベクトルとなる、@<m>$\bm{e}_1,\bm{e}_3$が成す平面上に、そのベクトルが乗っかっている、ということ。つまり、@<m>$\dfrac{d\bm{e}_2}{ds} = c_1 \bm{e}_1 + c_3 \bm{e}_3$、と書ける。」]

//say[広][「ここで、@<m>$\bm{e}_1 \bullet \bm{e}_2 = 0$を微分すると、こうなる。」]

//texequation{
\frac{d\bm{e}_1}{ds} \bullet \bm{e}_2 + \bm{e}_1 \bullet \frac{d\bm{e}_2}{ds} = 0
//}

//say[広][「@<m>$\dfrac{d\bm{e}_1}{ds} \bullet \bm{e}_2 = \kappa$であることを使えば、@<m>$\bm{e}_1 \bullet \dfrac{d\bm{e}_2}{ds} = -\kappa$。一方で、さっきの一次結合の式を使えば、こうなる。」]

//texequation{
\bm{e}_1 \bullet \frac{d\bm{e}_2}{ds} = \bm{e}_1 \bullet (c_1 \bm{e}_1 + c_3 \bm{e}_3) = c_1
//}

//say[広][「よって、@<m>{c_1 = -\kappa}であることが、わかった。@<m>{c_3}を@<m>{\tau}と書くことにして、他の内積の関係式とかも使えば、次の式が成り立つことが、わかる@<fn>{fn12}。この式を、空間曲線に対する、Frenet-Serretの公式という。」]

//texequation[truefrenetserret]{
  \frac{d}{ds} \begin{pmatrix}
    \bm{e}_1\\
    \bm{e}_2\\
    \bm{e}_3
  \end{pmatrix} = \begin{pmatrix}
    0 & \kappa & 0\\
    -\kappa & 0 & \tau\\
    0 & -\tau & 0
  \end{pmatrix}\begin{pmatrix}
    \bm{e}_1\\
    \bm{e}_2\\
    \bm{e}_3
  \end{pmatrix}
//}

//say[千奈][「@<m>{\kappa}に加えて、@<m>{\tau}が出てきましたわね。これは、どんな意味がありますの……？」]

//say[広][「これは、と呼ばれる量。つまり、どのくらい、ねじれているかを表している。」]

//say[千奈][「ねじれている……って、どうやって判断しているのかしら……？」]

//say[広][「例えば、捩率が0のときを考える。このとき、Frenet-Serretの公式より、@<m>$\dfrac{d\bm{e}_3}{ds} = \boldsymbol{0}$になる。ということは、@<m>$\bm{e}_3$が曲線上のどこでも同じベクトルになる、ということ。」]

//say[広][「この@<m>$\bm{e}_3$は、@<m>$\bm{e}_1,\bm{e}_2$の成す平面の法ベクトルになっているから、@<m>$\bm{e}_3$が曲線上のどこでも同じなら、@<m>$\bm{e}_1,\bm{e}_2$の成す平面も曲線上のどこでもおなじになる、はず。そして、この平面は、曲線が乗っかっている平面になっているはずで、接ベクトル@<m>$\bm{e}_1$もこの平面上から、はみださない。つまり、曲線自体が、一つの平面に乗っかっている、ということになる。」]

//image[day05_fig15][]

//say[千奈][「つまり、@<m>{\tau = 0}なら、平面曲線、ということかしら？」]

//say[広][「そのとおり。じゃあ千奈、@<m>{\kappa = 0}なら、どうなるかな。」]

//say[千奈][「@<m>{\kappa=0}なら、@<m>$\dfrac{d\bm{e}_1}{ds} = \boldsymbol{0}$になって、@<m>$\bm{e}_1$が曲線上のどこでも同じベクトルになりますわね。@<m>$\bm{e}_1$は接ベクトルでしたから、これが一定ということは、直線になるはずですわ！」]

//say[広][「そう。つまり、@<m>{\kappa = 0}は、直線を表すことになる。そしてこのとき、曲率半径は無限大とみなすことができる。直線は、半径が無限大の円の一部とみなせる、ということ。」]

//say[広P][「一般のパラメータ@<m>{t}に対して曲率がどうなるか、平面曲線のときに扱ったので、ここでも補足しておきますが、空間曲線の曲率や捩率も、普通のパラメータ@<m>{t}でも計算できます。余力のある人は、証明に挑戦してみても良いかもしれません。ただし、@<m>{\det}は行列式を表します。」]

//texequation{
\kappa (t) = \frac{\left\lVert\dot{C} (t) \times \ddot{C}(t)\right\rVert}{\left\lVert\dot{C}(t)\right\rVert^3}, \qquad \tau (t) = \frac{\det (\dot{C}(t), \ddot{C}(t), \dddot{C}(t))}{\left\lVert\dot{C}(t) \times \ddot{C}(t)\right\rVert^2}
//}

//say[広][「さて、最後に、空間曲線を3次近似して、みよう。」]

//texequation{
C(s) \approx C(s_0) + (s-s_0) \dfrac{dC}{ds} (s_0) + \frac{1}{2} (s-s_0)^2 \frac{d^2 C}{ds^2} (s_0) + \frac{1}{6} (s-s_0)^3 \frac{d^3 C}{ds^3} (s_0)
//}

//say[広][「@<m>$\dfrac{dC}{ds} = \bm{e}_1, \dfrac{d^2 C}{ds^2} = \dfrac{d\bm{e}_1}{ds} = \kappa \bm{e}_2$を使えば、こうなる@<fn>{fn13}。」]

//texequation{
  \dfrac{d^3 C}{ds^3} &= \dfrac{d}{ds}(\kappa \bm{e}_2)\\
  &= \dfrac{d\kappa}{ds} \bm{e}_2 + \kappa(-\kappa \bm{e}_1 + \tau \bm{e}_3)\\
  &= - \kappa^2 \bm{e}_1 + \dfrac{d\kappa}{ds} \bm{e}_2 + \kappa \tau \bm{e}_3
//}

//texequation{
  \therefore C(s) &\approx C(s_0) + (s-s_0) \bm{e}_1 (s_0) + \frac{1}{2} (s-s_0)^2 \kappa (s_0) \bm{e}_2 (s_0)\\
  & \qquad + \frac{1}{6} (s-s_0)^3 \left(- \kappa^2 (s_0) \bm{e}_1 (s_0) + \dfrac{d\kappa}{ds} (s_0) \bm{e}_2 (s_0) + \kappa (s_0) \tau (s_0) \bm{e}_3 (s_0)\right)
//}

//say[広][「これを、Bouquetの公式という。この式から分かる通り、@<m>{\tau}は3次の接触に関わってくるパラメータ。」]

//say[千奈][「@<m>{\kappa}の場合は、2次の接触に関わってきて、曲率円？でしたわよね。@<m>{\tau}も、そういう対応が、ありそうですわ。」]

//say[広][「もちろん、ある。実は、ある球面に接していることが、3次の接触になる。この球面を、曲率球という。」]

//say[千奈][「3次まで考えると、球面に沿っていることがわかる、ということですわね！」]

//say[広P][「曲線上の@<m>{s =s_0}である点に対する曲率円や曲率球については、次のとおりになります。ただし、@<m>{r = 1/\kappa}は曲率半径です。」]

//texequation{
\text{曲率円……中心：}C(s_0) + r(s_0) \bm{e}_2 (s_0), \quad \text{半径：}r(s_0)
//}

//texequation{
\text{曲率球……中心：}C(s_0) + r(s_0) \bm{e}_2 (s_0) + \frac{1}{\tau(s_0)} \frac{dr}{ds}(s_0) \bm{e}_3 (s_0), \quad \text{半径：}\sqrt{r^2 (s_0) + \left\{ \frac{1}{\tau(s_0)} \frac{dr}{ds}(s_0)\right\}^2 }
//}

//say[広][「次に、曲面について。曲面は、2つのパラメータで表せるはず。このパラメータを@<m>{(u,v)}とすると、曲面@<m>{S}は次のように表せる。」]

//texequation{
S(u,v) = (x(u,v), y(u,v),z(u,v))
//}

//say[広][「ここで、一個のパラメータが固定されている場合を考えてみる。例えば、@<m>{v=v_0}と固定して考えるとすると、@<m>{u}だけの関数と見みなせるはず。この場合、パラメータは1個だから、これは空間曲線を表しているはず、だね。同じように、@<m>{u}を固定した場合でも、@<m>{v}だけの関数になって、これは空間曲線になっている。」]

//say[広][「こう考えると、曲面上には、@<m>{u,v}によって、曲線座標が設定されているように、考えることができる、はず。」]

//image[day05_fig16][]

//say[広][「そして、それぞれ片方を固定した状態の空間曲線について、固定していない方で微分すれば、どうなるかな。」]

//say[千奈][「その空間曲線の、接ベクトルになるはずですわね！」]

//say[広][「そう。この、片方を固定して、片方だけで微分するの、なにか見覚えはないかな。」]

//say[千奈][「あ！偏微分ですわ！」]

//say[広][「そのとおり。つまり、ある曲面@<m>{S}上の点@<m>{(u_0,v_0)}で、それぞれのパラメータについて偏微分して、@<m>$\dfrac{\partial S}{\partial u}(u_0,v_0), \dfrac{\partial S}{\partial v}(u_0,v_0)$を考えれば、この@<m>{(u,v)}によって設定された曲面座標上の、点@<m>{(u_0,v_0)}における、それぞれのパラメータに沿った接ベクトルが、出てくるはず。この2つのベクトルがもし一次独立なら、これは平面を構成する、はず。この平面を、接平面、という。」]

//image[day05_fig17][]

//say[千奈][「なるほど！……あれ、でも、ちょっと待ってくださいまし！この2つのベクトルって必ず一次独立になりますの？」]

//say[広][「実は、いつも一次独立とは限らない。パラメータの取り方が悪かったり、特殊な曲面だったりすると、ある点では、一次従属になってしまう可能性がある。この点を、特異点という@<fn>{fn14}。」]

//say[広][「そこで、曲面上の任意の点で、この2つのベクトルが一次独立となることを、これからの議論では、仮定することにする。ちなみに、この性質を、正則性といったりする。」]

//say[広][「そして、接平面の法ベクトル@<m>$\bm{n}$を、次のように定義すれば、曲面上の点における基底を定義できる。ただし、@<m>{\partial_u,\partial_v}で、その変数に関する偏微分を表すとする、よ。」]

//texequation{
\bm{n} := \frac{\partial_u S (u_0,v_0) \times \partial_v S (u_0,v_0)}{\left\lVert\partial_u S (u_0,v_0) \times \partial_v S (u_0,v_0)\right\rVert}
//}

//say[千奈][「つまり、点P@<m>{=S(u_0,v_0)}に対して、フレーム@<m>$(\mathrm{P}(u_0,v_0), \partial_u S (u_0,v_0), \partial_v S (u_0,v_0), \bm{n}(u_0,v_0))$を考えることができる、ってことですわね！」]

//say[広][「そうなる。そして、各点ごとに、基底が変わっていくから、これもムービング・フレームとみなせそう@<fn>{fn15}。」]

//say[千奈][「確かに、そうですわね。」]

//say[広][「これを踏まえると、平面ではどの点でも基底が一緒だったのに対して、曲面では場所を移動すると基底が変わってしまう、ということが起こってしまう。」]

//image[day05_fig18][]

//say[広][「以下、フレームの基底ベクトルを、この前と同じように@<m>$\bm{e}$を使って書くとする。ここで、例えば曲面上の点@<m>{S(u_0,v_0)}から@<m>{S(u_0 + du, v_0 + dv)}に移動したときに、あるベクトル量@<m>$\bm{A} = A^i \bm{e}_i$の変化@<m>$d\bm{A}$を考えようとすると、困ったことになる。」]

//texequation{
  d\bm{A} &= \partial_u \bm{A} \,du + \partial_v \bm{A}\, dv\\
  &= \partial_u (A^i \bm{e}_i) \,du + \partial_v (A^i \bm{e}_i) \,dv\\
  &= \{(\partial_u A^i) \bm{e}_i \boxed{+ A^i (\partial_u  \bm{e}_i)}\}\,du + \{(\partial_v A^i) \bm{e}_i \boxed{+ A^i (\partial_v  \bm{e}_i)}\}\,dv
//}

//say[広][「これは二次元の場合だけど、これをもっと一般化すれば、要するに、こういうこと。」]

//texequation{
d\bm{A} = \partial_j (A^i \bm{e}_i) \,dx^j = \{(\partial_j A^i) \bm{e}_i + A^i \boxed{(\partial_j \bm{e}_i)}\} \,dx^j
//}

//say[広][「つまり、平面のときは考える必要のなかった、基底ベクトルに関する偏微分を考える必要が出てくる、ということ。」]

//say[千奈][「面倒ですわね……」]

//say[広][「うん。そこで登場するのが、接続係数。」]

//beginthm[][第2種Christoffel接続係数][重要]
曲面上では、点の移動によって基底ベクトルも変化するので、その変化を表すベクトルを、変化前の基底によって表示することを考える。このときに、以下で定義される@<m>$\Gamma^{k}_{ij}$を、第2種Christoffel接続係数と呼ぶ。
//texequation{
\partial_j \bm{e}_i = \frac{\partial \bm{e}_i}{\partial x^j} =: \Gamma^{k}_{ij} \bm{e}_k
//}
//endthm

//say[千奈][「いきなり添字が3つも出てきて、よくわかりませんわ！」]

//say[広][「言っていることは単純だから、一つずつ見ていく、よ。まず、この式をよく見ると、@<m>{k}は総和を取る添字になっていて、要するに右辺は、移動前の基底の各成分@<m>$\bm{e}_k$に、係数である@<m>$\Gamma^k_{ij}$が掛けられていて、それを足し合わせて一つのベクトルを表しているだけ。その表そうとしているベクトルが、@<m>$\partial_j \bm{e}_i$。」]

//say[千奈][「……あっ！何となくわかりましたわ！移動前のある基底@<m>$\bm{e}_i$が、@<m>{x^j}の方向に移動したときに、どう変化するかの、変化を表すベクトルを、元の移動前の基底を使って表現している、ということですわね！」]

//say[広][「そのとおり。くどいようだけど、もう一度整理して説明すると、@<m>$\Gamma^k_{ij}$の添字のうち、添字@<m>{i}は微分される基底ベクトルの種類を、添字@<m>{j}は微分する方向を、添字@<m>{k}は、その微分したベクトルを、元の基底で表現したときの、どの基底の成分の係数かを示している、ということになる、よ。」]

//image[day05_fig19][]

//say[広P][「接続係数は重要な概念ですから、一回曲面の話から脱線して、3次元極座標の基底ベクトルについて、接続係数を具体的に考えてみるのは、いかがでしょうか。」]

//say[広][「たしかに、そうしようか。」]

//image[day05_fig20][]

//say[広][「上のように、座標を@<m>{(r,\theta,\phi)}で表す方法を、極座標表示という。千奈、まずは@<m>{(r,\theta,\phi)}に対応する位置ベクトル@<m>$\bm{r}$を、直交座標系で表示すると、どうなるかな。」]

//say[千奈][「えーっと、三角関数を使えば……こうなりますわ！」]

//texequation{
\bm{r} = \begin{pmatrix}
    r \sin \theta \cos \phi\\
    r \sin \theta \sin \phi\\
    r \cos \theta
  \end{pmatrix}
//}

//say[広][「うん。次に、@<m>{\partial_u S, \partial_v S}に対応するような、基底ベクトルを求めよう。半径@<m>{r=r_0}の球面は、パラメータ@<m>{\theta,\phi}だけでその曲面上の点を表せることになる。そこで、このときの点@<m>$\bm{r}(r=r_0)$における、@<m>{\theta,\phi}方向それぞれの接ベクトルを、求められるかな。」]

//say[千奈][「ただ単純に、その変数で偏微分すればよかったですわよね！」]

//texequation{
\frac{\partial \bm{r}}{\partial \theta} = \begin{pmatrix}
    r_0 \cos \theta \cos \phi\\
    r_0 \cos \theta \sin \phi\\
    -r_0 \sin \theta
  \end{pmatrix}, \frac{\partial \bm{r}}{\partial \phi} = \begin{pmatrix}
    -r_0 \sin \theta \sin \phi\\
    r_0 \sin \theta \cos \phi\\
    0
  \end{pmatrix}
//}

//say[広][「うん、そう。そこで、これらを規格化して、以下のように基底を定めることにする。」]

//texequation{
\bm{e}_\theta := \begin{pmatrix}
    \cos \theta \cos \phi\\
    \cos \theta \sin \phi\\
    -\sin \theta
  \end{pmatrix}, \bm{e}_\phi := \begin{pmatrix}
    -\sin \phi\\
    \cos \phi\\
    0
  \end{pmatrix}
//}

//say[広][「次に、法ベクトル@<m>$\bm{n}$はどうなるかな。」]

//say[千奈][「こうですわ！」]

//texequation{
\bm{n} = \frac{\bm{e}_\theta \times \bm{e}_\phi}{\left\lVert\bm{e}_\theta \times \bm{e}_\phi\right\rVert} = \begin{pmatrix}
    \sin \theta \cos \phi\\
    \sin \theta \sin \phi\\
    \cos \theta
  \end{pmatrix}
//}

//say[広][「そう。実は極座標だと@<m>$\bm{n} = \dfrac{\partial \bm{r}}{\partial r} =: \bm{e}_r$が成り立つんだけど、これはもちろん、偶然の産物。ただ、わかりやすいので、今後@<m>$\bm{n}$を@<m>$\bm{e}_r$と書くことにしよう。」]

//say[広][「そしたら、千奈。最後に、接続係数を求められるかな。」]

//say[千奈][「動かす基底ベクトルは3つ、動く方向は球面上だから2つで、元の基底で表すときには3つ係数が必要ですから……18個も求めるんですの！？」]

//say[広][「まぁ、練習だと思って。」]

//say[千奈][「わ、わかりましたわ……」]

//centering{
～（計算後）～
//}

//say[千奈][「もう、ゲシュタルトほうかい？を起こしそうですわ……」]

//texequation{
\Gamma_{r\theta}^r = 0, \quad \Gamma_{r\theta}^\theta = 1,\quad \Gamma_{r\theta}^\phi = 0
//}
//texequation{
\Gamma_{\theta\theta}^r = -1, \quad \Gamma_{\theta\theta}^\theta = 0, \quad \Gamma_{\theta\theta}^\phi = 0
//}
//texequation{
\Gamma_{\phi\theta}^r = 0, \quad \Gamma_{\phi\theta}^\theta = 0, \quad \Gamma_{\phi\theta}^\phi = 0
//}
//texequation{
\Gamma_{r\phi}^r = 0, \quad \Gamma_{r\phi}^\theta = 0, \quad \Gamma_{r\phi}^\phi = \sin\theta
//}
//texequation{
\Gamma_{\theta\phi}^r = 0, \quad \Gamma_{\theta\phi}^\theta = 0, \quad \Gamma_{\theta\phi}^\phi = \cos\theta
//}
//texequation{
\Gamma_{\phi\phi}^r = -\sin\theta, \quad \Gamma_{\phi\phi}^\theta = -\cos\theta, \quad \Gamma_{\phi\phi}^\phi = 0
//}

//say[広][「おつかれさま。大体、接続係数に慣れてきた、かな。」]

//say[広][「この接続係数を使えば、さっきの@<m>$d\bm{A}$は、次の通りに表すことができる。」]

//texequation{
d\bm{A} = \{(\partial_j A^i) \bm{e}_i+ A^i (\Gamma^{k}_{ij} \bm{e}_k)\} \, dx^j
//}
//texequation{
\therefore \frac{\partial \bm{A}}{\partial x^j} = \partial_j \bm{A} = (\partial_j A^i) \bm{e}_i+ A^i (\Gamma^{k}_{ij} \bm{e}_k)
//}

//say[広][「千奈。ダミー変数、覚えてるかな。」]

//say[千奈][「総和を取っている添字は、書き換えられる……でしたわよね、確か！」]

//say[広][「そう。じゃあ、この2項目のダミー変数は何かな。」]

//say[千奈][「@<m>{i,k}ですわ！」]

//say[広][「そう。そこで、@<m>{i}を@<m>{k}に、@<m>{k}を@<m>{i}に書き換えると、どうなるかな。」]

//say[千奈][「こうなりますわ！」]

//texequation{
\partial_j \bm{A} = (\partial_j A^i) \bm{e}_i+ A^k (\Gamma^{i}_{kj} \bm{e}_i) = (\partial_j A^i + A^k \Gamma^i_{kj}) \bm{e}_i
//}

//say[広][「最後の変形で出てきた、@<m>$\bm{e}_i$の係数を、次のように定義する。」]

//texequation{
\nabla_j A^i := \partial_j A^i + \Gamma^i_{kj} A^k
//}

//say[広][「この@<m>{\nabla_j}を、共変微分という、よ。」]

//say[千奈][「これって、どういう意味を持っているんでしょう……？」]

//say[広][「これは、曲面に沿った微分を、表している。」]

//say[千奈][「あれ、曲面に沿った微分って、@<m>{\partial_i}ではなくて？」]

//say[広][「これまでは、そう考えてよかったんだけど、曲面における話の途中、どこでそれがおかしくなったか、と言えば、それは基底が微分に関わってくる、というところ。」]

//say[広][「つまり、曲面上では、それに沿って微分を考えるには、共変微分が必要になる、ということ。」]

//say[千奈][「なるほど、なんとなくわかりましたわ。ちなみに、@<m>{A^i}に対して作用することは分かったのですけれど、例えば@<m>{A_i}の場合とかはどうなりますの？」]

//say[広][「それは、とても簡単に導ける。前に、上付きと下付きで同じ添字があって、@<m>{A^i B_i}のようになっていたら、これは不変量になる、ということを言ったと思うけど、不変量というのは、要するに、座標変換で変わらない量、ということだった。これを言い換えれば、不変量は、基底に依存しない量、ともいえる。つまり、ある不変量@<m>{\phi}に対して共変微分を考えても、それはこれまでの普通の微分と同じように、なるはず。」]

//texequation{
\nabla_i \phi = \partial_i \phi
//}

//say[広][「ここで、@<m>{\phi = A^i B_i}とすると、こうなる@<fn>{fn16}。」]

//texequation{
\nabla_j (A^i B_i) = (\nabla_j A^i) B_i + A^i (\nabla_j B_i) = (\partial_j A^i + A^k \Gamma^i_{kj})B_i + A^i (\nabla_j B_i)
//}

//say[広][「一方で、不変量であることを使うと、単純にこうなるはず。」]

//texequation{
\nabla_j (A^i B_i) = \partial_j (A^i B_i)=(\partial_j A^i)B_i + A^i (\partial_j B_i)
//}

//say[広][「これを見比べると、こうなる。」]

//texequation{
  &A^k \Gamma^i_{kj} B_i + A^i (\nabla_j B_i) = A^i (\partial_j B_i)\\
  \iff &A^i (\nabla_j B_i) = A^i (\partial_j B_i) - A^i \Gamma^k_{ij} B_k\\
  \iff & \nabla_j B_i = \partial_j B_i - \Gamma^k_{ij} B_k
//}

//say[千奈][「これを使えば、もっといろいろなテンソルについても、共変微分を考えられそうですわね！」]

//say[広][「うん。共変微分は、これから先でもよく使うから、覚えておいて。」]

//say[広][「それから、接続係数と計量の関係性を、ここで導いておこうと思う、よ@<fn>{fn17}。」]

//texequation{
  & \Gamma_{ij}^k \bm{e}_k = \frac{\partial \bm{e}_i}{\partial x^j} = \partial_j \bm{e}_i\\
  \iff & \Gamma_{ij}^k \bm{e}_k \bullet \bm{e}^\ell = (\partial_j \bm{e}_i) \bullet \bm{e}^\ell\\
  \iff & \Gamma_{ij}^k \delta_k^\ell = (\partial_j \bm{e}_i) \bullet \bm{e}^\ell\\
  \iff & \Gamma_{ij}^\ell = (\partial_j \bm{e}_i) \bullet \bm{e}^\ell\\
  \iff & \Gamma_{ij}^\ell = \frac{1}{2}(\partial_j \bm{e}_i) \bullet \bm{e}^\ell + \left(\frac{1}{2} g^{k\ell} (\partial_j \bm{e}_k) \bullet \bm{e}_i -\frac{1}{2} g^{k\ell} (\partial_k \bm{e}_j) \bullet \bm{e}_i\right)\\
  & \qquad \qquad + \frac{1}{2}(\partial_i \bm{e}_j) \bullet \bm{e}^\ell + \left(\frac{1}{2} g^{k\ell} (\partial_i \bm{e}_k) \bullet \bm{e}_j -\frac{1}{2} g^{k\ell} (\partial_k \bm{e}_i) \bullet \bm{e}_j\right)\\
  \iff & \Gamma_{ij}^\ell = \frac{1}{2}(\partial_j \bm{e}_i) \bullet g^{k\ell}\bm{e}_k + \left(\frac{1}{2} g^{k\ell} (\partial_j \bm{e}_k) \bullet \bm{e}_i -\frac{1}{2} g^{k\ell} (\partial_k \bm{e}_j) \bullet \bm{e}_i\right)\\
  & \qquad \qquad + \frac{1}{2}(\partial_i \bm{e}_j) \bullet g^{k\ell}\bm{e}_k  + \left(\frac{1}{2} g^{k\ell} (\partial_i \bm{e}_k) \bullet \bm{e}_j -\frac{1}{2} g^{k\ell} (\partial_k \bm{e}_i) \bullet \bm{e}_j\right)\\
  \iff & \Gamma_{ij}^\ell = \frac{1}{2} g^{k\ell} [(\bm{e}_k \bullet \partial_j \bm{e}_i + (\partial_j \bm{e}_k) \bullet \bm{e}_i ) + (\bm{e}_k \bullet \partial_i \bm{e}_j + (\partial_i \bm{e}_k) \bullet \bm{e}_j ) - (\bm{e}_i \bullet \partial_k \bm{e}_j + (\partial_k \bm{e}_i) \bullet \bm{e}_j )]\\
  \iff & \Gamma_{ij}^\ell = \frac{1}{2} g^{k\ell} [\partial_j (\bm{e}_k \bullet \bm{e}_i)+\partial_i (\bm{e}_j \bullet \bm{e}_k)-\partial_k (\bm{e}_i \bullet \bm{e}_j)]\\
  \iff & \Gamma_{ij}^\ell = \frac{1}{2} g^{k\ell} (\partial_j g_{ki} + \partial_i g_{jk} -\partial_k g_{ij})
//}

//say[千奈][「式変形が長くて、大変ですわ……」]

//say[広][「一つずつ、丁寧に確認していけば、大丈夫。」]

//say[千奈][「……ちなみに、今更ですけれど、接続係数の、接続って、なんですの？」]

//say[広][「この『接続』の意味は、基底がどんどんと変わってしまう曲面上に対して、接平面がどのように連結していくか、という意味の接続。」]

//say[千奈][「つまり、その……どういうことですの？」]

//say[広][「多様体では、局所的に座標が取れる、というお話をしたと思うけど、覚えているかな。でも、この座標はあくまで局所的だから、曲面上の移動で基底が変わってしまったように、多様体上でも移動とともに座標が使えなくなってしまう。そこで、移動したことによって、その部分での接平面がどのように変化したか、という情報さえあれば、多様体の構造がどうなっているかをその情報から議論できて、多様体上で移動をしても、困るということはなくなるはず。この、接平面がどうつながっているか、つまりどう接続しているか、ということを表すために出てきたのが、接続係数という概念、ということ。」]

//say[広][「……さて、最後に、測地線と曲率について話しておこう、かな。」]

//say[広][「まず、曲面の曲率だけど、これは一筋縄ではいかない。」]

//say[千奈][「何でですの？」]

//say[広][「それは、ある点まわりの曲面の様子を考えれば、よくわかる。」]

//say[広][「例えば……千奈、下敷きは持ってるかな。」]

//say[千奈][「ちょうど、使ってますわ！」]

//say[広][「良かった。そうしたら、顔の前に下敷きを持って、両端を押して、下敷きを曲げてみて。」]

//say[千奈][「こうですの？」]

//say[広][「そう。今、佑芽がこの曲面上の、下敷きの真ん中あたりにいるとしよう。佑芽が、千奈の手の方向を向いていたら、この曲面はどう見えるかな。」]

//say[千奈][「曲がって見えるはずですわ。」]

//say[広][「うん、そのとおり。じゃあ今度は、佑芽が千奈の顔の方向を向いていたら、どうなるかな。」]

//say[千奈][「……あ、その方向には、曲がってませんの！」]

//say[広][「そのとおり。つまり、佑芽がどこを向いているかによって、曲面の曲がり方は変わる、ということになる。」]

//image[day05_fig21][]

//say[千奈][「困りましたわ。どうやって曲面の曲がり方を表現すればよいのかしら……」]

//say[広][「そこで、出てくるのが、法曲率という概念。」]

//say[広][「法曲率、というのは、簡単に言えば、佑芽の視線の方向に対応した曲率のこと。つまり、どこを向いているかに対応して、その視線の方向のベクトルと、曲面の法線ベクトルがなす平面を考えて、その平面と曲面の交わってできる曲線の曲がり具合を、法曲率で表す、ということ。定義は、あとで話す。」]

//say[千奈][「なるほど、そうすれば曲がり方を表現できますわね！」]

//say[広][「うん。そして、佑芽が360度その場で周りを見渡して、それぞれの視線方向に対して考えた法曲率のうち、最大のものと最小のものを、主曲率という。」]

//image[day05_fig22][]

//say[千奈][「法曲率、主曲率の概念はわかりましたわ。でも、そもそもこれってどう計算しますの……？」]

//say[広][「法曲率は、言い換えると、局所的に佑芽の視線方向に伸びている曲面上の曲線の、佑芽がいる点での曲がり具合、と言い換えられるはず。そこで、曲面上の曲線について、考えてみよう。」]

//say[広][「これまでと同じように、曲面を@<m>{S(u,v)}、この上の曲線を@<m>{C(s)}とする。曲線が曲面に含まれているから、今回の場合、曲線を曲面上の点の集まりと考えることができる。つまり、パラメータ@<m>{s}を用いて、曲面上の曲線座標@<m>{(u,v)}が指定され、それによって曲面上の点のうち、曲線にある点のみが指定される、ということ。ここから、この曲線は、形式的に、@<m>{C(s)=S(u(s),v(s))}のように表示できるはず。」]

//say[広][「千奈、ここから曲線の接ベクトル@<m>$\dfrac{dC}{ds}$を求められるかな。」]

//say[千奈][「こうですわ！」]

//texequation{
\dfrac{dC}{ds}= \dfrac{\partial S}{\partial u} \dfrac{du}{ds} + \dfrac{\partial S}{\partial v} \dfrac{dv}{ds}
//}

//say[広][「うん、そうなる。ちなみに、何か気づかない、かな。」]

//say[千奈][「……あ！よくみたら、曲面上の接平面の基底ベクトル@<m>{\partial_u S,\partial_v S}の一次結合の形になっていますわ！」]

//say[広][「そう。その後についているパラメータの@<m>{s}微分は、@<m>{s}の関数で、@<m>{s}の値を決めて曲線上の点を決めれば、それぞれ値を返す。つまりただの係数と見なせる。だから、曲線上の接ベクトルは、曲線が乗っかっている曲面上の接平面のベクトルであることが、わかる。」]

//say[広][「こうなると、曲面を活用して、新しいフレームを定義したくなる。そこで、Frenetフレームを曲線の接ベクトル@<m>$\bm{e}_1$周りに回転させて、曲面の接平面の法ベクトルが基底に含まれるようにしたフレームを、Darbouxフレームという、よ。」]

//say[千奈][「式ではどう書けるんですの？」]

//say[広][「こんな感じ。」]

//beginthm[][Darbouxフレーム][重要]
曲面@<m>{S(u,v)}上の曲線@<m>{C(s)}上の各点P@<m>{=C(s_0)=S(u_0,v_0)}に対して、Darbouxフレーム@<m>$(\mathrm{P};\bm{d}_1,\bm{d}_2,\bm{d}_3)$を次のように定める。ただし、@<m>{s}は弧長パラメータ。
//texequation{
\bm{d}_1 := \frac{dC}{ds}(s_0), \quad \bm{d}_3 := \bm{n}(s_0) = \frac{\partial_u S (u_0,v_0) \times \partial_v S (u_0,v_0)}{\left\lVert\partial_u S (u_0,v_0) \times \partial_v S (u_0,v_0)\right\rVert}, \quad \bm{d}_2 := \bm{d}_3 (s_0) \times \bm{d}_1 (s_0)
//}
//endthm

//say[広][「Frenetフレームもおさらいしておこう、か。」]

//beginthm[][Frenetフレーム][重要]
曲線@<m>{C(s)}上の各点P@<m>{=C(s_0)}に対して、Frenetフレーム@<m>$(\mathrm{P};\bm{e}_1,\bm{e}_2,\bm{e}_3)$を次のように定める。ただし、@<m>{s}は弧長パラメータ。
//texequation{
\bm{e}_1 := \frac{dC}{ds}(s_0), \quad \bm{e}_2 := \frac{d\bm{e}_1 /ds (s_0)}{\left\lVert d\bm{e}_1 /ds (s_0)\right\rVert}, \quad \bm{e}_3 := \bm{e}_1 (s_0) \times \bm{e}_2 (s_0)
//}
//endthm

//image[day05_fig23][]

//say[広][「定義を見ても分かる通り、@<m>$\bm{d}_1 = \bm{e}_1$だから、もう一度言っておくと、Frenetフレームを曲線の接ベクトル@<m>$\bm{e}_1$周りに回転させれば、Darbouxフレームに重なる。」]

//say[広][「この曲線@<m>{C(s)}の、@<m>{s=s_0}での曲率@<m>{\kappa}は、こうだった。」]

//texequation{
\kappa (s_0) = \frac{d\bm{e}_1}{ds} (s_0) \bullet \bm{e}_2 (s_0)
//}

//say[広][「ここで、@<m>$\bm{e}_2$は、@<m>$\bm{d}_2,\bm{d}_3$の一次結合で表される、はず。そこで、曲面の法曲率@<m>{\kappa_n}と、測地的曲率@<m>{\kappa_g}を、次のように定義する。」]

//texequation{
\kappa_n (s_0) := \frac{d\bm{d}_1}{ds}(s_0) \bullet \bm{d}_3(s_0), \quad \kappa_g (s_0) := \frac{d\bm{d}_1}{ds}(s_0) \bullet \bm{d}_2(s_0)
//}

//say[広][「@<m>$\bm{e}_2$も、@<m>$\bm{d}_2,\bm{d}_3$も、長さは1のベクトルで、しかも、互いに@<m>$\bm{e}_1 = \bm{d}_1$を軸に回転して、重ねられる。そこで、この回転角@<m>{\theta}を使えば、@<m>$\bm{e}_2 = \cos \theta \bm{d}_2 + \sin\theta \bm{d}_3$と表される。ここから、次のような関係式が導かれる。」]

//texequation{
\kappa = \frac{d \bm{e}_1}{ds} \bullet \bm{e}_2 = \frac{d \bm{d}_1}{ds} \bullet (\cos \theta \bm{d}_2 + \sin\theta \bm{d}_3) = \kappa_g \cos\theta + \kappa_n \sin\theta
//}

//say[広][「ここからも予想がつくかもしれないけど、実は@<m>{\kappa_g = \kappa \cos\theta, \quad \kappa_n = \kappa \sin \theta}になっている@<fn>{fn18}。」]

//say[広][「それから、Darbouxフレームを使って、測地的捩率@<m>{\tau_g}も定義できる。」]

//texequation{
\tau_g (s_0) := \frac{d\bm{d}_2}{ds}(s_0) \bullet \bm{d}_3(s_0)
//}

//say[広][「これらを定義すれば、DarbouxフレームでのFrenet-Serretの公式を、同様に導くことができる、よ@<fn>{fn19}。」]

//texequation{
\frac{d}{ds} \begin{pmatrix}
    \bm{d}_1\\
    \bm{d}_2\\
    \bm{d}_3
  \end{pmatrix} = \begin{pmatrix}
    0 & \kappa_g & \kappa_n\\
    -\kappa_g & 0 & \tau_g\\
    -\kappa_n & -\tau_g & 0
  \end{pmatrix}\begin{pmatrix}
    \bm{d}_1\\
    \bm{d}_2\\
    \bm{d}_3
  \end{pmatrix}
//}

//say[広][「次に、主曲率だけど……これは、実は簡単に求めることはできない。」]

//say[千奈][「あらゆる方向を向いたときの、法曲率の最大値と最小値を求めないといけないですわよね。大分厳しそうですわ……」]

//say[広][「でも、安心して。次の、Gauss曲率@<m>{K}と平均曲率@<m>{H}なら、簡単に求められる、よ。」]

//texequation{
K := \kappa_1 \kappa_2, \quad H= \frac{1}{2}(\kappa_1 + \kappa_2)
//}

//say[広][「@<m>{\kappa_1,\kappa_2}は、主曲率。これを求めるには、曲面の基本量について知っておかないといけないけど、これはすごく単純。」]

//beginthm[][基本量][重要]
曲面@<m>{S(u,v)}に対して、曲面の第1基本量、第2基本量、第3基本量を、それぞれ次のように定義する。

《第1基本量》

 * @<m>{E := \partial_u S \bullet \partial_u S}
 * @<m>{F := \partial_u S \bullet \partial_v S}
 * @<m>{G := \partial_v S \bullet \partial_v S}

《第2基本量》

 * @<m>$L := -\partial_u S \bullet \partial_u \bm{n}$
 * @<m>$M := -\partial_u S \bullet \partial_v \bm{n} = -\partial_v S \bullet \partial_u \bm{n}$
 * @<m>$N := -\partial_v S \bullet \partial_v \bm{n}$

《第3基本量》

 * @<m>$P := \partial_u \bm{n} \bullet \partial_u \bm{n}$
 * @<m>$Q := \partial_u \bm{n} \bullet \partial_v \bm{n}$
 * @<m>$R := \partial_v \bm{n} \bullet \partial_v \bm{n}$
//endthm

//say[千奈][「基本量には、どんな意味がありますの……？」]

//say[広][「今は難しいと思うけど、基本的には、第@<m>{n}基本量は、曲面の@<m>{n}階微分の情報になっている、と考えておいていい。基本的に使うのは、第1基本量と第2基本量で、第3基本量はめったに使われない、よ。」]

//say[広][「もう少し詳しく言うと、第1基本量は接平面の情報を持っていて、第2基本量は、その接平面からのズレの情報を持っている。まぁ、この辺りの事情は、また別にして話したほうがいい。」]

//say[千奈][「なるほど……」]

//say[広][「平坦曲率と、ガウス曲率は、基本量を使うと、次のとおりに、なる。」]

//texequation{
K = \frac{LN-M^2}{EG-F^2}, \quad H = \frac{EN+GL-2FM}{2(EG-F^2)}
//}

//say[千奈][「へぇ……なんでこの式を使うと、平坦曲率と、ガウス曲率が求まるんですの？」]

//say[広][「……実は、これをちゃんと考えようとすると、まだまだ道具が、全然足りない。Lagrangeの未定乗数法とか、行列の固有値とか、もっとたくさんのことを考えないといけない。だから、今はとりあえず、これで納得してもらいたい。」]

//say[千奈][「わかりましたわ、後の楽しみに取っておこうと思いますの。」]

//image[day05_fig24][]

//say[広][「最後に、測地線について。測地線は、曲面上にいる人が、向きを変えずにまっすぐ進んでいったときに、通る曲面上の経路のこと。例えば、球面なら、球の中心を中心とする円の円周になる。」]

//image[day05_fig25][]

//say[千奈][「平面だと、向きを変えずにまっすぐ進めば、直線になりますわよね。スタートとゴールを直線で結ぶ時って、一番短いはずだから、曲面でも、最短経路になりますの……？」]

//say[広][「そういうこと。曲面上の2点間を結ぶ最短距離の経路が、測地線になる。でも、今は少しこの考え方で測地線を導くのは難しい。だから、曲面に沿った微分である、共変微分を使って、考えてみようと思う。」]

//say[広][「まず、これまで共変微分は、曲面のパラメータに沿ってしか定義しなかったけど、それは面倒なので、曲面上の曲線に沿った共変微分を以下のように定義する。」]

//beginthm[][曲線に沿った共変微分][重要]
曲面（多様体）@<m>$S = S(\{x^j\})$上のパラメータの関数で表されるベクトル@<m>$A^i = A^i (\{x^j\})$に対し、これを曲線（経路）@<m>{C = C(s)}上で@<m>{s}で微分して、それをその点での接平面に射影してできるベクトルを、@<m>$\dfrac{DA^i}{ds}$と記し、これを@<m>{A^i}の@<m>{C}上での共変微分という。
//endthm

//say[千奈][「これは、どういうことですの？」]

//say[広][「要するに、複数のパラメータを使って表現される多様体@<m>{S}において、その上に経路@<m>{C}が乗っかっている。そして、ある点@<m>{C(s=s_0)}で、ベクトル@<m>{A^i}に対して、@<m>{C}に沿った方向に共変微分を考えてあげる。前回は、パラメータにしか沿っていなかったけど、こっちのほうが、自由度が高くなる。」]

//say[広][「……さて、千奈。反変ベクトル@<m>{A^i}の、@<b>$経路@<m>{C}に沿った共変微分$を考えると、どうなるかな。」]

//say[千奈][「経路上を移動して、パラメータが@<m>{s \to s + ds}となるときに、多様体のパラメータは@<m>$\dfrac{d x^i}{ds} \cdot ds$だけ変化しますわね。そして、パラメータが@<m>{dx^j}だけ変化した時、共変微分を使って@<b>{曲面のパラメータに沿った共変微分}を考えれば、@<m>{A^i}の増える分は、@<m>{\nabla_j A^i \cdot dx^j}になりますわ。つまり……」]

//texequation{
\frac{DA^i}{ds} \cdot ds = \nabla_j A^i \cdot \dfrac{d x^j}{ds} \cdot ds \iff \frac{DA^i}{ds} = \nabla_j A^i \cdot \frac{dx^j}{ds} = (\partial_j A^i + \Gamma^i_{kj} A^k) \frac{dx^j}{ds} = \frac{\partial A^i}{\partial x^j} \frac{dx^j}{ds} + \Gamma^i_{kj} A^k \frac{dx^j}{ds}
//}

//say[千奈][「こうですわ！」]

//say[広][「うん、そうなる。次に、ベクトル@<m>{A^i}として、曲線上の接ベクトル@<m>$\dfrac{dC}{ds}$を考える。@<m>{A^i}は成分@<m>{i}についての話をしているから、これを@<m>$\dfrac{dx^i}{ds}$と考えてもいいはず@<fn>{fn20}。測地線は、@<b>{『曲面上にいる人が、向きを変えずにまっすぐ進んでいったときに、通る曲面上の経路』}だった。つまり曲線として測地線を考えた時、接ベクトルは曲線上どこも一定になるはず。」]

//say[広][「もしも、曲線に沿って@<m>{A^i}が変わらないのなら、共変微分@<m>$\dfrac{DA^i}{ds}$は、もちろん0になる、はず。そして、式の途中にある@<m>$\dfrac{\partial A^i}{\partial x^j} \dfrac{dx^j}{ds}$は、@<m>$A^i = A^i (\{x^j\})$、@<m>{x^j = x^j(s)}であることを考えれば、@<m>$\dfrac{dA^i}{ds}$にできる。@<fn>{fn21}。」]

//say[千奈][「つまり、@<m>$A^i = \dfrac{d x^i}{ds}$とすれば、こうなるってことですわね！」]

//texequation{
0 = \frac{d^2 x^i}{ds^2} + \Gamma^i_{kj} \frac{dx^k}{ds} \frac{dx^j}{ds}
//}

//say[広][「うん。第2項のダミー変数を取り替えれば、こういうこと。」]

//texequation{
\boxed{\frac{d^2 x^i}{ds^2} + \Gamma^i_{jk} \frac{dx^j}{ds} \frac{dx^k}{ds} = 0}
//}

//say[広][「つまり、測地線は以上の方程式を満たす、ということが示された。これを、測地線方程式という、よ。」]

//say[広][「……じゃあ、これで一区切りかな。今日は長かったけど、これでだいたい、最低限話さないといけない道具のことは、扱い終わった。次回は、これまではなしてきた道具を使って、一般相対論的な運動方程式を、導いていこうと思う。とりあえず、お疲れ様。」]

//say[千奈][「ありがとうございました！」]

==[nonum] あとがき

すみません、今回も一般相対論までいけませんでした（これで2敗）。ちょっとリーマン幾何が思ったより大変すぎた……

（またしても仮想の話で申し訳無いですが、あれば）Vol.3にて、一般相対論まで解説できるように頑張ろうと思います。よろしくお願いします！

==[nonum] 参考文献

//mbibpaper[][ダニエル・フライシュ（著），河辺哲次（訳）．物理のためのベクトルとテンソル．岩波書店，2013，254頁．]
//mbibpaper[][James J. Callahan（著），樋口三郎（訳）．時空の幾何学―特殊および一般相対論の数学的基礎―．森北出版，2021，353頁．]
//mbibpaper[][FN．．FNの高校物理．最終更新日：2019/01/04．@<href>{http://fnorio.com/0180covariant_contravariant/covariant_contravariant.html}，最終閲覧日：2025/10/05．]
//mbibpaper[][田代嘉宏（著）．基礎数学選書23　テンソル解析．裳華房，1981（復刊：2006），240頁．]
//mbibpaper[][松本誠（著）．基礎数学選書14　計量微分幾何学．裳華房，1975（復刊：2003），229頁．]
//mbibpaper[][広江克彦．．EMANの物理学．最終更新日：2003/09/23．@<href>{https://eman-physics.net/relativity/tensor.html}，最終閲覧日：2025/10/05．]
//mbibpaper[][Author Unknown．．虹と雪、そして桜．最終更新日：Unknown．@<href>{https://remedics.air-nifty.com/academy/2021/01/post-19f371.html}，最終閲覧日：2025/10/05．]
//mbibpaper[][難波博之（マスオ）．．高校数学の美しい物語．最終更新日：2024/12/21．@<href>{https://manabitimes.jp/math/1845}，最終閲覧日：2025/10/05．]
//mbibpaper[][内田伏一（著）．数学シリーズ　集合と位相（増補新装版）．裳華房，2020，241頁．]
//mbibpaper[][松本幸夫（著）．基礎数学5　多様体の基礎．東京大学出版会，1988，344頁．]
//mbibpaper[][フレイno 数理哲学．．note．最終更新日：2023/06/17．@<href>{https://note.com/frey33/n/n70ed12cf879d}，最終閲覧日：2025/10/06．]
//mbibpaper[][きいねく．．YouTube．最終更新日：2025/02/19．@<href>{https://www.youtube.com/watch?v=CrkAYD5ua6o}，最終閲覧日：2025/10/06．]
//mbibpaper[][中内伸光（著）．幾何学は微分しないと：微分幾何学入門（新装版）．現代数学社，2019，229頁．]
//mbibpaper[][小林昭七（著）．曲線と曲面の微分幾何（改訂版）．裳華房，1995，208頁．]
//mbibpaper[][FN．．FNの高校物理．最終更新日：2018/07/29．@<href>{https://fnorio.com/0176differential_geometry_2/differential_geometry_2.html}，最終閲覧日：2025/10/10．]
//mbibpaper[][github-nakasho.．宇宙物理メモ．最終更新日：Unknown．@<href>{https://github-nakasho.github.io/gr/derivative}，最終閲覧日：2025/10/10．]
//mbibpaper[][広江克彦．．EMANの物理学．最終更新日：2006/01/25．@<href>{https://eman-physics.net/relativity/geodesic.html}，最終閲覧日：2025/10/10．]

==[nonum] 使用素材

一連の記事の作成にあたって、以下のサイトの素材を使用させていただきました。ありがとうございます。

 1. @<href>{https://sites.google.com/view/snarifont/ホーム}（細鳴りフォント、なりさ様）@<fn>{fn22}
 2. @<href>{https://hp.vector.co.jp/authors/VA039499/}（ふい字、ふい様）@<fn>{fn23}
 3. @<href>{https://pictogram2.com/}（ヒューマンピクトグラム2.0、topeconheroes　ダーヤマ様）@<fn>{fn24}
 4. @<href>{https://kage-design.com/}（シルエットデザイン、topeconheroes　ダーヤマ様他）@<fn>{fn25}
 5. @<href>{https://icooon-mono.com/}（ICOOON MONO、TopeconHeroes様）@<fn>{fn26}
 6. @<href>{https://freemap.jp/}（白地図専門店、三角形　井上恵介様）@<fn>{fn27}

//footnote[fn1][実は、こちらは後から見返して色々出来が良くないなぁと思う部分が出てきて、現在リメイクを検討中です。気力はかなりあるので、時間さえあればできるのですが、とにかく時間がなさすぎるので、ほしい……]
//footnote[fn2][分からないプロデューサーは、Day1を見返して。]
//footnote[fn3][慣れてないプロデューサーは、@<m>$\bm{b} \otimes \bm{a}$を実際に書き下してみて。]
//footnote[fn4][プロデューサー、式@<eq>{shomei_1}を証明して。少し複雑だけど、プロデューサーなら、できる。]
//footnote[fn5][分からないプロデューサーは、Day1を見て。]
//footnote[fn6][プロデューサー、式@<eq>{shomei_2}も証明して。ほぼ、式@<eq>{shomei_1}のときと、やり方は変わらない、はず。]
//footnote[fn7][分からないプロデューサーは、ベクトル@<m>$x^1 \bm{e}_1 + x^2 \bm{e}_2$が、双対基底を使えば@<m>$x_1 \bm{e}^1 + x_2 \bm{e}^2$と表されることを、思い出して。]
//footnote[fn8][分からないプロデューサーは、チェーンルールを思い出して。]
//footnote[fn9][わからないプロデューサーは、単位円を考えて、その上で90度回転を描いてみると、納得しやすいかも。]
//footnote[fn10][プロデューサー、式@<eq>{arctanbibun}を示して。@<m>{y=\arctan x}とすると、@<m>{x = \tan y}。これと、@<m>$\dfrac{dy}{dx} = \dfrac{1}{dx/dy}$であることを用いれば、@<m>{\arctan x}の微分が、@<m>$\dfrac{1}{1+x^2}$になるはず。]
//footnote[fn11][図を書いて理解したい、プロデューサーへ。@<m>$\bm{e}_1 (s+\Delta s)$が、@<m>$\bm{e}_1 (s) + \dfrac{d\bm{e}_1}{ds} \Delta s$であると考えると、@<m>$\bm{e}_1 (s+\Delta s)$は@<m>$\bm{e}_1 (s)$と@<m>$\dfrac{d\bm{e}_1}{ds}$の線形結合になっているから、三つのベクトル@<m>$\bm{e}_1 (s+\Delta s),\bm{e}_1 (s),\dfrac{d\bm{e}_1}{ds}$（つまり@<m>$\bm{e}_2$）は同一平面上にあるはず。それから、@<m>$\bm{e}_2$は曲率中心を向くはず。この2つの情報から、どの向きに@<m>$\bm{e}_2$を書けばよいか、わかるはず。]
//footnote[fn12][プロデューサー、式@<eq>{truefrenetserret}を証明して。]
//footnote[fn13][@<m>{\kappa}は各点でそれぞれ定まる値で、@<m>{s}の関数であることに、注意して、ね。]
//footnote[fn14][例えば、@<m>{S(u,v) = (u^3 v^2, u^2 v^2, u^2 v^3)}は、@<m>{(u,v)=(0,v_0),(u_0,0)}で接ベクトルが一次従属になる、よ。]
//footnote[fn15][ここまでの話がよく分からないプロデューサーは、曲面を地球上と考えて具体的に考えると、わかりやすい。日本にいる千奈と、アメリカにいる星南が、それぞれ南向きのベクトルと東向きのベクトル、それから鉛直方向上向きのベクトルを考えて、これらを基底とした時、この2人の間で、基底は異なるはず。そして、南向きのベクトルは経線（等経度線）に対する接ベクトルに、東向きのベクトルは緯線（等緯度線）に対する接ベクトルになっている、よ。]
//footnote[fn16][共変微分も、微分だから、これまでの微分と同じような性質が成り立つ。]
//footnote[fn17][途中の式変形で、@<m>$\partial_j \bm{e}_i = \partial_i \bm{e}_j$を使っているけど、これは、@<m>$\bm{e}_i$が、そもそも曲面@<m>{S}（正確には、多様体@<m>{S}）を、@<m>{x^i}方向に偏微分して得られたベクトルを使っていることを思い出すと、わかるはず。つまり、@<m>$\bm{e}_i = \partial_i S$なので、@<m>$\partial_j \bm{e}_i = \partial_j (\partial_i S) = \partial_i (\partial_j S) = \partial_i \bm{e}_j$ということ。偏微分は、ほとんどの場合は可換と考えてOK]
//footnote[fn18][プロデューサー、これを証明して。@<m>$\bm{d}_2,\bm{d}_3$を、@<m>$\bm{e}_2,\bm{e}_3$で表したらどうなるか、考えてみて。]
//footnote[fn19][プロデューサー、これも証明して。回転している、ということに注目すれば、割と簡単に、求まるはず。]
//footnote[fn20][@<m>{C}は、各パラメータ@<m>{x_i}が@<m>{s}で指定されるような、位置ベクトルだったことを、思い出して。これの第@<m>{i}成分を、抜き出してきただけ。]
//footnote[fn21][わからないプロデューサーは、これまでの話を見返して、チェーンルールや、変数の関係を考えて、みて。意外と、ここで言っていることは、とっても単純な、はず。]
//footnote[fn22][Licence: @<href>{https://sites.google.com/view/snarifont/ホーム/フォントのライセンス}]
//footnote[fn23][Licence: @<href>{https://hp.vector.co.jp/authors/VA039499/#KIYAKU}]
//footnote[fn24][Licence: @<href>{https://pictogram2.com/?page_id=39}]
//footnote[fn25][Licence: @<href>{https://kage-design.com/terms-of-use/}]
//footnote[fn26][Licence: @<href>{https://icooon-mono.com/license/}]
//footnote[fn27][Licence: @<href>{https://freemap.jp/about_use_map.html}]
