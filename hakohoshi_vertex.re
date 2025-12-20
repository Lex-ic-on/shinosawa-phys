= アイドルの頂点を目指す者 ~頂点代数入門講義~

//lead{
@<b>{概要}
頂点を目指すために、頂点代数を学ぶ。
【キーワード】群、リー代数、頂点代数
//}

== 登場人物紹介

 : 花海 咲季
	初星学園の入試を首席で合格した。
 : 花海 佑芽
	補欠入学。咲季の妹。
 : 篠澤 広
	筆記試験で1位だった。物理と数学が得意。


== 中間試験後

//say[咲季][中間試験の結果が貼り出されてるらしいわよ。]
//say[佑芽][ほんと！？お姉ちゃんはきっと1位だよね！]
//say[咲季][そうね。ちゃんと勉強もしたし。]

//blankline

＊＊＊

//blankline

//say[咲季][2位……ですって！？]
//say[佑芽][すごいじゃん！あたしなんて赤点ばっかりなのに。]
//say[咲季][このわたしが、負けた……！？]
//say[佑芽][2位でもすごいよ～。それで、お姉ちゃんに勝った人ってだれだろ～。]
//say[咲季][1位は……。篠澤広？]
//say[佑芽][広ちゃん！？]
//say[広][呼んだ…………………………？]
//say[咲季][な、なんか今にも倒れそうな人が来たけど……。]
//say[佑芽][この子が広ちゃんだよ。あたしのクラスメイト！]
//say[咲季][あなたが篠澤広ね。]
//say[広][うん。あ、試験の結果だ。]
//say[佑芽][広ちゃんが1位だったよ！すっごーい！]
//say[広][そっか……。試験勉強は、する余裕がなかったけど。]
//say[咲季][なっ。この花海咲季を倒しておいて、その態度は何よ！]
//say[広][花海、咲季？ああ、2位の人……。]
//say[咲季][……っ！！！]
//say[佑芽][あたし、広ちゃんによく勉強を教えてもらってるんだ。そうだ！お姉ちゃんも広ちゃんから勉強を教えてもらったら？]
//say[咲季][勉強を教えてもらうですって？]
//say[広][わたしでよければ、いいよ。何が知りたい？歴史は苦手だけど、物理とか数学は得意、だよ。]
//say[咲季][そうね、わたしはアイドルの頂点を目指すつもりよ。だから、アイドルの頂点を目指すのにふさわしい内容を教えて頂戴。]
//say[広][アイドルの、頂点……。わかった。]

== 群

//say[佑芽][おねえちゃ～ん！広ちゃんから伝言だよ～！]
//say[咲季][何があったの？]
//say[佑芽][「放課後、2組の教室で待ってる。アイドルの頂点を目指す講義を始めるよ」だって！]
//say[咲季][あのとき言ってたやつね。どんな講義をしてくれるのかしら。]

//blankline

＊＊＊

//blankline

//say[咲季][お待たせ。]
//say[広][2人きりの講義、というか、セミナー？懐かしい感覚。]
//say[咲季][そんなことより、何を教えてくれるの？]
//say[広][今から@<b>{頂点代数}の入門講義を始める。]
//say[咲季][頂点代数？]
//say[広][近年物理学や数学で注目されている代数系、だよ。頂点代数を学べば物理学や数学の研究で頂点を目指せるし、もちろんアイドルの頂点も。]
//say[咲季][それは楽しみね。]
//say[広][今日は抽象代数を扱う練習として、群の定義をするよ。]


//beginthm[][][定義]

集合@<m>{G}と写像@<m>{m\colon G\times G\to G}の組が@<b>{群}であるとは、次の条件をすべてみたすことをいう。

 1. 任意の@<m>{a,b,c\in G}に対して @<m>{(ab)c=a(bc)}
 2. ある@<m>{e\in G}が存在して任意の@<m>{g\in G}に対して@<m>{eg=ge=g}
 3. 任意の@<m>{g\in G}に対してある@<m>{h\in G}が存在して@<m>{gh=hg=e}

//endthm

//say[広][ここで@<m>{a,b\in G}に対して@<m>{ab}というのは、写像 @<m>{m}による@<m>{(a,b)\in G\times G}の像のこと。この写像を演算と呼ぶよ。1.を結合法則といって、2.に現れる@<m>{e}を単位元、3.に現れる@<m>{h}を@<m>{g}の逆元といって@<m>$h=g^{-1}$と書くよ。それで……。]
//say[咲季][ちょっと待って。それが定義なの？]
//say[広][そうだけど。]
//say[咲季][定義になってないじゃない。]
//say[広][……え？]
//say[咲季][群って何者なのよ。]
//say[広][群はこれをみたすものだけど。]
//say[咲季][それが何者なのか聞いてるのよ。]
//say[広][どこでつまずいてるのかわからない……。定義しただけなのに。]
//say[咲季][むむむ……。例えば有理数なら、整数@<m>{m,n}を使って@<m>{m/n}の形で書ける数のことよね。定義ってこんな感じじゃないの？]
//say[広][そうだと思う。それでいうと、有理数は群の例だよ。演算を@<m>{a+b}にすると群になる。単位元@<m>{e}は0で、@<m>{a}の逆元は@<m>{-a}になる。]
//say[咲季][ていうことは、群は有理数ってこと？]
//say[広][いや、有理数以外も群になる。全単射な写像の集合とか、行列とか。]
//say[咲季][じゃ、じゃあ群は有理数でもあって、写像でもあって、行列でもあるってことなの？]
//say[広][ある意味ではそう。正確には、これらのものが持っている性質を取り出したものといえる。]
//say[咲季][そういえば抽象代数って言ってたわね。抽象化してるってことなのかしら？]
//say[広][そう。@<m>{g\in G}と書いたとき、@<m>{g}は何者でもない。具体的な群を考えてるときは、有理数かもしれないし全単射かもしれない。でも、ただ単に群というときは、集合と演算の組であって条件をみたすものを考える。]
//say[咲季][そういうことなのね。ちょっとわかった気がしたわ。]
//say[広][よかった。それで、次は群の具体例を紹介しようと思う。整数全体の集合@<m>$\mathbb{Z}$、有理数全体の集合@<m>$\mathbb{Q}$、実数全体の集合@<m>$\mathbb{R}$、複素数全体の集合@<m>$\mathbb{C}$はぜんぶ加法で群になる。]
//say[咲季][有理数以外でもいいのね。]
//say[広][次は、集合@<m>{X}が与えられたとき、@<m>{X}から@<m>{X}への全単射の集合も、合成を演算として群になる。]
//say[咲季][そうなの？確かめるのは大変そうだけど。]
//say[広][そう？結合法則は自明だし、単位元は恒等写像で、逆元は逆写像を考えればいい、よ。]
//say[咲季][すぐ自明っていうのやめてもらってもいいかしら。]
//say[広][でも、@<m>{a,b,c\colon X\to X}が写像で@<m>{x\in X}のとき、@<m>{((a\circ b)\circ c)(x)=a(b(c(x)))=(a\circ (b\circ c))(x)}ってだけの話だけど……。]
//say[咲季][そういうことなのね。]
//say[広][@<m>{X}が有限集合@<m>$\{1,2,\ldots,n\}$のときこの全単射の群を@<m>{S_n}と書いて、@<m>{n}次対称群という、よ。対称群の次は一般線形群だね。@<m>{V}を@<m>{n}次元ベクトル空間として、@<m>{V}上の線形同型全体のなす群を@<m>$\mathrm{GL}(V)$と書いて、一般線形群という。]
//say[咲季][ベクトル空間って何かしら？]
//say[広][日本の高校生はベクトル空間も知らないんだ……。]
//say[咲季][ていうかそもそもわたしたち1年生よね。]
//say[広][群は演算が1個ある代数系だったけど、ベクトル空間は和とスカラー倍という2つの演算がある代数系。この2つの演算を保つような写像が線形写像。線形写像は基底をとることで行列表示できることは有名。]
//say[咲季][新しい単語がいっぱい……。ちゃんとわかるように説明してよね。]
//say[広][ぜ、ぜんぶ、説明しないと……。やることが、多い……。]
//say[咲季][大丈夫？]
//say[広][………………きゅう…………。]
//say[咲季][ちょっと、倒れないでよ！？]


== リー代数

//say[咲季][あの後、自分で勉強を進めたのよ。群論の本も買ったし、ベクトル空間についてもわかるようになったわ！]
//say[広][素晴らしい。]
//say[咲季][だから、どんな内容でもどんとこいよ！]
//say[広][じゃあ今日はリー代数の話をするね。]
//say[咲季][あれ？群の話は？]
//say[広][群の話もある。さて……と。]
//say[咲季][なんで烏龍茶を用意したわけ？しかも3本も。]
//say[広][これを飲むと元気が出るから。苦痛に耐えられないとき、飲む。]
//say[咲季][それなら、わたし特製の@<ruby>{SSD,スーパースタミナドリンク}のほうが元気が出るわよ！ほしかったら今度つくってくるわね！]
//say[広][ほしい……！]

//blankline

＊＊＊

//blankline

//say[広][群というのは集合と演算の組だったね。リー代数も似たような感じで、リーブラケットという演算がある。]


//beginthm[][][定義]
ベクトル空間@<m>{L}と写像@<m>{[\cdot,\cdot]\colon L\times L\to L}の組が@<b>{リー代数}であるとは、次の条件をすべてみたすことをいう。

 1. 写像@<m>{[\cdot,\cdot]\colon L\times L\to L}は双線形
 2. 任意の@<m>{x\in L}に対して@<m>{[x,x]=0}
 3. 任意の@<m>{x,y,z\in L}に対して@<m>{[x,[y,z]]+[y,[z,x]]+[z,[x,y]]=0}
//endthm

//say[咲季][な、何よこの等式……！]
//say[広][3.の等式をJacobi identityという、よ。]
//say[咲季][名前はいいけど、何に使うのよ。]
//say[広][簡単な例から紹介するね。結合的代数は、ベクトル空間に積を入れたもの。つまり和と積とスカラー倍という3つの演算がある。名前の通り、結合法則をみたす。このときリーブラケットを@<m>{[x,y\]=xy-yx}と定義すると、結合的代数はリー代数になる。]
//say[咲季][@<m>{[x,x\]=0}はよくて、Jacobi identityは計算したらわかりそうね。]
//say[広][他には@<m>{[x,y\]}は常に0と定義してもリー代数になる。]
//say[咲季][それは簡単すぎない？]
//say[広][じゃあ次は、もっと大切な例。リー代数はリー群と密接に関係する、よ。リー群というのは多様体の構造をもつ群。]
//say[咲季][多様体？]
//say[広][厳密な説明は本を読んでもらうとして、多様体では接空間を考えられる。]
//say[咲季][さらっと投げたわね……。]
//say[広][わたしが多様体だとしたら、接空間はわたしに触れる下敷きみたいなもの。接線の高次元版。接線が大事っていうのは、微分のところで勉強したよね？]
//say[咲季][1年生は微分習わなくない？]
//say[広][そうなんだ……。]
//say[咲季][ま、わたしは首席だから微分くらいは知ってるわよ。]
//say[広][それはよかった。例えば座標平面で考えるとき、@<m>$\frac{\partial}{\partial x}$が接空間の元となる。それで、微分にはこんな性質があるね。]
//texequation{
\frac{\partial}{\partial x}(fg)=\left(\frac{\partial}{\partial x}f\right)g+f\left(\frac{\partial}{\partial x}g\right)
//}
//say[咲季][積の微分ね。]
//say[広][一般に@<m>{D(fg)=(Df)g+f(Dg)}をみたす写像@<m>{D}はderivationと呼ばれてる。次はベクトル場の話。ベクトル場は多様体の各点に対してその点の接空間の元を対応させる。実は、ベクトル場全体のなす空間とderivationのなす空間は同一視できる。]
//say[咲季][よくわからないわね……。]
//say[広][全部解説すると、また倒れちゃうから……。（ごくごく）]
//say[咲季][（烏龍茶を飲んでるわね）]
//say[広][それで、@<m>{X,Y}がベクトル場、つまりderivationのとき、@<m>{XY}もそうなるか調べてみよう。]
//texequation{
        XY(fg) &= X((Yf)g+f(Yg)) \\
        &= (XYf)g+(Yf)(Xg)+(Xf)(Yg)+f(XYg)
//}
//say[広][@<m>{(Yf)(Xg)+(Xf)(Yg)}という項が邪魔するから、@<m>{XY}はベクトル場じゃない。同様に@<m>{YX}もベクトル場じゃない。でも邪魔する項は同じ。だから差をとると、消える。]
//say[咲季][それってもしかして、リーブラケット？]
//say[広][勘のいい読者だ。@<m>{[X,Y\]=XY-YX}とおくと]
//texequation{
([X,Y])(fg)=([X,Y]f)g+f([X,Y]g)
//}
//say[広][こうなるから、@<m>{X,Y}がベクトル場なら@<m>{[X,Y\]}もベクトル場。]
//say[咲季][だからリーブラケットが大事なのね。]
//say[広][いまは多様体の話だったけど、リー群の場合は左不変ベクトル場というものが考えられて、これもリーブラケットで閉じてる。左不変ベクトル場全体のなす空間がリー群から得られるリー代数で、リー群の研究においてとっても大切。]
//say[咲季][リー群も勉強してみたいわね。]
//say[広][もう少しリー代数の例を見ていくよ。円周@<m>{S^1}のベクトル場を考える。これは@<m>$f(\theta)\frac{\partial}{\partial\theta}$の形をしてる。]
//texequation{
L_n=i\exp(in\theta)\frac{\partial}{\partial\theta}
//}
//say[広][とおく。リーブラケットを計算すると]
//texequation{
[L_m,L_n]=(m-n)L_{m+n}
//}
//say[広][になる。@<m>{L_n}で生成されるリー代数はWitt代数と呼ばれることもある。]
//say[咲季][これが大事なの？]
//say[広][この代数の中心拡大を考えると、これがすごく大事。]
//say[咲季][中心拡大？]
//say[広][@<m>{C}という中心的な元を加える。]
//say[咲季][中心的……、まるでわたしのことね！]
//say[広][中心的というのは任意の@<m>{x}に対して@<m>{[C,x\]=0}をみたすということだけど。]
//say[咲季][……。]
//say[広][中心的だから、@<m>{[C,L_n\]=0, [C,C\]=0}となるね。問題は@<m>{[L_m,L_n\]}のほう。]
//say[咲季][それはさっき計算したでしょ？]
//say[広][中心拡大したから、少し変わる。]
//texequation{
[L_m,L_n]=(m-n)L_{m+n}+a(m,n)C
//}
//say[広][ある関数@<m>{a}が存在してこういう形の式になる。Jacobi identityがあるから、@<m>{a}はなんでもいいわけじゃない。]
//say[咲季][それを調べていくのね。]
//say[広][うん。まず@<m>{[x,x\]=0}から@<m>{[x,y\]=-[y,x\]}になって、@<m>{a(m,n)=-a(n,m)}になる。Jacobi identityを@<m>{L_0,L_m,L_n}について使うと]
//texequation{
(m-n)a(0,m+n)=-(m+n)a(m,n)
//}
//say[広][という等式が得られる。]
//say[咲季][@<m>{a(m,n)}は@<m>{a(0,m+n)}から決まるって感じ？]
//say[広][@<m>{m+n\ne 0}のときはそう。これを使うと]
//texequation{
[L_m,L_n]=(m-n)\left(L_{m+n}-\frac{1}{m+n}a(0,m+n)C\right)
//}
//say[広][となる。ここで@<m>$L_0'=L_0, L_n'=L_n-\frac{1}{n}a(0,n)C \ (n\ne 0)$とおくと]
//texequation{
[L_m',L_n']=(m-n)L_{m+n}' \quad (m+n\ne 0)
//}
//say[広][になる。もとの関係式と同じだね。]
//say[咲季][確かに。]
//say[広][@<m>{m+n=0}のときも含めると]
//texequation{
[L_m',L_n']=(m-n)L_{m+n}'+\delta_{m+n,0}a(m)C
//}
//say[広][の形になる。ここで@<m>{\delta}はクロネッカーのデルタ。@<m>{m+n=0}のとき1、そうでないとき0になる。]
//say[咲季][@<m>{a(m)}って何？2変数じゃなかった？]
//say[広][@<m>{a(m,-m)}を@<m>{a(m)}と書いてる。]
//say[咲季][わかったわ。]
//say[広][次は@<m>{l+m+n=0}となるような@<m>{l,m,n}に対して@<m>{L_l',L_m',L_n'}にJacobi identityを使う。細かい計算は任せるけど……。]
//texequation{
(m-n)a(m+n)-(m+2n)a(m)-(2m+1)a(1)=0
//}
//say[広][こうなる。@<m>{n=1, m>1}とすると]
//texequation{
a(m+1)=\frac{m+2}{m-1}a(m)-\frac{2m+1}{m-1}a(1)
//}
//say[広][が得られた。あとは高校で習う数列と同じで、@<m>{a(1)=\alpha,a(2)=\beta}から@<m>{a(m)}がすべて決まる。]
//say[咲季][数列、まだ習ってないけどね。]
//say[広][簡単だよ。@<m>{b_n=a(n)-n\alpha}とおくと@<m>{b_1=0,b_2=\beta-2\alpha}で]
//texequation{
b_{k+1}=\frac{k+2}{k-1}b_k
//}
//say[広][になるから]
//texequation{
b_n=b_2\prod_{k=2}^{n-1}\frac{k+2}{k-1}=(\beta-2\alpha)\frac{n^3-n}{6}
//}
//say[広][よって]
//texequation{
a(n)=\alpha n+(\beta-2\alpha)\frac{n^3-n}{6}
//}
//say[広][となる。@<m>{\alpha,\beta}を変えれば]
//texequation{
a(n)=\alpha n^3+\beta n
//}
//say[広][になるから、こっちの方がきれいだね。いま、@<m>{\alpha,\beta}に具体的な値を代入して]
//texequation{
[L_m,L_n]=(m-n)L_{m+n}+\delta_{m+n,0}\frac{m^3-m}{12}C
//}
//say[広][というリー代数が得られる。これを@<b>{Virasoro リー代数}というよ。]
//say[咲季][なんで12が分母にあるの？]
//say[広][うーん、慣習？]
//say[咲季][そう。]
//say[広][ほかにはHeisenbergリー代数というのもあって……、ごめん、ここで終わっていい？]
//say[咲季][なんで？続きがあるんでしょ？]
//say[広][お茶飲みすぎた……。]
//say[咲季][あー。]


===[nonum] 広の講義レジュメ

@<m>$a_n \ (n\in\mathbb{Z})$と@<m>{\zeta}で張られる線形空間にリーブラケットを
//texequation{
[a_m, a_n] &= m\delta_{m+n,0}\zeta \\
    [\zeta,a_n] &= 0
//}
により定めるとリー代数となる。これをHeisenbergリー代数という。

== 頂点代数

//say[咲季][はい、どうぞ。]
//say[佑芽][ありがと～！おねえちゃんのつくってくれるドリンク、だいすき！]
//say[咲季][えへへ。]
//say[佑芽][あれ？今日はいつもよりたくさんつくった？]
//say[咲季][そうよ。他にも欲しがってる人がいるから。]
//say[佑芽][そうなんだ～。]

//blankline

＊＊＊

//blankline

//say[広][いよいよ、頂点代数の定義をするよ。この講義では、ベクトル空間は標数0の体上で考える。]


//beginthm[][][定義]

@<m>{V}をベクトル空間とする。各@<m>$n\in\mathbb{Z}$に対して双線形な積@<m>$V\times V\to V, (a,b)\mapsto a_{(n)}b$が定まっているものとする。@<m>{V}と演算の組が@<b>{頂点代数}であるとは次の条件をすべてみたすことをいう。

 1. (local truncation) @<m>{a,b\in V}に対してある@<m>{N}が存在して、@<m>{n\ge N}ならば@<m>$a_{(n)}b=0$
 2. (Borcherds identity) @<m>$a,b,c\in V, p,q,r\in\mathbb{Z}$に対して

//beginchild

//texequation{
		\sum_{i=0}^{\infty}\binom{p}{i}(a_{(r+i)}b)_{(p+q-i)}c &= \sum_{i=0}^{\infty}(-1)^i\binom{r}{i}a_{(p+r-i)}(b_{(q+i)}c) \\
		&-\sum_{i=0}^{\infty}(-1)^{r-i}\binom{r}{i}b_{(q+r-i)}(a_{(p+i)}c)
//}

//endchild

 3. (vacuum) @<m>$\mathbf{1}\in V$が存在して次をみたす。

//beginchild

 1. @<m>$\mathbf{1}_{(n)}a=\begin{cases} 0 & (n\ne -1) \\ a & (n=-1) \end{cases}$
 2. @<m>$a_{(n)}\mathbf{1}=\begin{cases} 0 & (n\ge 0) \\ a & (n=-1) \end{cases}$

//endchild

//endthm

//say[広][演算が可算無限個あるから、驚くかもしれないね。]
//say[咲季][Jacobi identityよりヤバい等式が出てきた……！？]
//say[広][Borcherds identityは実際複雑。]
//say[咲季][ていうか、なんで英語なの？日本語にしないの？]
//say[広][海外の大学で学んだことだから、日本語で対応する言葉を知らない。]
//say[咲季][そうなのね……。]
//say[広][Borcherds identityはいろいろな情報を含んでる。もっとも簡単な例として、@<m>{p=q=r=0}の場合を見よう。@<m>$\binom{0}{i}$は@<m>{i\ne 0}のとき0になるから……。]
//say[咲季][その記号は何？]
//say[広][これは二項係数。日本の高校だと@<m>${}_n\mathrm{C}_r$と書くことが多いみたいだけど、海外だと@<m>$\binom{n}{r}$が普通。]
//say[咲季][そうなのね。]
//say[広][それで、Borcherds identityに@<m>{p=q=r=0}を代入する。@<m>{i}について無限和だけど、@<m>{i=0}以外が消えるね。するとこうなる。]
//texequation{
(a_{(0)}b)_{(0)}c=a_{(0)}(b_{(0)}c)-b_{(0)}(a_{(0)}c)
//}
//say[広][これはJacobi identityと同値。実際@<m>{[x,[y,z\]\]+[y,[z,x\]\]+[z,[x,y\]\]=0}を@<m>{[x,y\]=-[y,x\]}を用いて変形すると@<m>{[[x,y\],z\]=[x,[y,z\]\]-[y,[x,z\]\]}になるから。ただし@<m>$x_{(0)}x=0$は成り立つとは限らないから、0番目の積についてリー代数になるとは限らない。]
//say[咲季][Borcherds identityはJacobi identityを拡張したものということ？]
//say[広][そう。他にもいろいろな情報を含んでるけど、それはまたあとで。]
//say[咲季][でもこんな複雑な等式、確かめるの大変じゃない？]
//say[広][その通り。それ以前に、演算を無限個定義するのも大変。だから別の方法を考えよう。]
//say[咲季][どうするの？]
//say[広][stateとfieldを対応させる。]

//blankline

＊＊＊

//blankline

//say[広][実は頂点代数の定義は複数ある。ここで書いたものはBorcherdsにより導入された初期の定義。これから別の定義を紹介しようと思う。まず@<m>$a\in V, n\in\mathbb{Z}$に対して@<m>$a_{(n)}$を、@<m>{b\in V}を@<m>$a_{(n)}b\in V$にうつす線形写像だと思う。これらを1つにまとめた形式的べき級数を考える。]
//texequation{
Y(a,z)=\sum_{n\in\mathbb{Z}}a_{(n)}z^{-n-1}
//}
//say[咲季][この@<m>{z}は？]
//say[広][複素数だと思うこともあるけど、ここでは単なる記号とする。それで、@<m>{Y(a,z)}は正べきの方向にも負べきの方向にも無限級数だけど、@<m>{b\in V}を決めると@<m>{Y(a,z)b}は、local truncationのおかげで負べきの方向には有限になる。このような性質をもつものをfieldという。場の量子論の影響でこの名前がついてる。一方で@<m>{V}の元のことをstateという。だからこの@<m>{Y}にはstate-field対応という名前がある。]
//say[咲季][なるほどね。]
//say[広][先に進む前に級数の属する集合を表す記号を用意する。正べきの方向、負べきの方向に有限か無限かというのが大切になる。@<m>{R}は係数の集合。]

 * @<m>{R[z]}: 正べきの方向に有限、負べきはなし
 * @<m>$R[z,z^{-1}]$: 正べき、負べきの方向ともに有限
 * @<m>{R[[z]]}: 正べきの方向に無限でもよい、負べきはなし
 * @<m>$R[[z]][z^{-1}]$: 正べきの方向に無限でもよい、負べきの方向に有限
 * @<m>$R[[z,z^{-1}]]$: 正べき、負べきの方向ともに無限でもよい

//say[広][さっきの例だと、@<m>{Y(a,z)}は@<m>$(\mathop{\mathrm{End}}V)[[z,z^{-1}\]\]$の元だけど、@<m>{Y(a,z)b}は@<m>$V[[z\]\][z^{-1}\]$の元。]
//say[咲季][@<m>{R[z\]}の元って多項式よね？]
//say[広][そう。次に3.(b)をみてほしい。@<m>{n\ge -1}については要請があるけど、それ以外にはない。@<m>{n<-1}の部分の情報を取り出したい。線形写像@<m>{T\colon V\to V}を]
//texequation{
Ta=a_{(-2)}\mathbf{1}
//}
//say[広][で定義する。Borcherds identityを使うと]
//texequation{
\frac{T^k}{k!}a=a_{(-k-1)}\mathbf{1}
//}
//say[広][がわかる。この@<m>{T}をtranslation operatorというよ。]
//say[咲季][これが大事なのね。]
//say[広][これで頂点代数を別の方法で定義する準備ができた。これから書く@<m>{O(z)}はランダウの記号。@<m>{c_1z+c_2z^2+c_3z^3+\cdots}の形で書けるという意味。]


//beginthm
@<m>{V}をベクトル空間、@<m>$\mathbf{1}\in V$、@<m>$T\in\mathop{\mathrm{End}}V$を線形写像、@<m>$Y(-,z)\colon V\to (\mathop{\mathrm{End}}V)[[z,z^{-1}]]$を線形写像であって各@<m>{Y(a,z)}がfieldであるものとする。さらに次の条件をすべてみたすとする。

 1. (vacuum axiom) @<m>$Y(\mathbf{1},z)=\mathrm{id}_V$であり、任意の@<m>{a\in V}に対して@<m>$Y(a,z)\mathbf{1}=a+O(z)$となる。
 2. (translation axiom) @<m>$T\mathbf{1}=0$であり、任意の@<m>{a\in V}に対して@<m>{[T,Y(a,z)]=\partial_z Y(a,z)}
 3. (locality axiom) 任意の@<m>{a,b\in V}に対して@<m>{Y(a,z),Y(b,w)}は互いにlocalである。すなわちある@<m>{N\ge 0}が存在して、@<m>$(z-w)^N[Y(a,z),Y(b,w)]=0\in (\mathop{\mathrm{End}}V)[[z,z^{-1},w,w^{-1}]]$

このとき、@<m>$a_{(n)}b$を@<m>{Y(a,z)b}の@<m>$z^{-n-1}$の係数とすることで、@<m>{V}は頂点代数になる。
//endthm

//say[咲季][これならさっきの長い等式がなくてすっきりしてるわね。]
//say[広][頂点代数の公理のうち、Borcherds identity以外は簡単に確かめられる。問題はBorcherds identityだけど……。はぁ。]
//say[咲季][どうしたの？]
//say[広][体力、もつかな。]
//say[咲季][それなら、わたしのSSDの出番ね！これを飲むといいわよ。]
//say[広][ありがとう。いただきます。]
//say[咲季][どう？]
//say[広][……元気で満ち溢れてきた気がする。]
//say[咲季][それはよかったわ！アイドルの頂点を目指すために必要な栄養素がたっぷり入ってるもの！]
//say[広][今度からこれを飲んで元気を出したいな。]
//say[咲季][いいわね！ごはんも用意するわよ！]
//say[広][うれしい。この勢いで証明するよ。まずvacuum axiomで@<m>$Y(a,z)\mathbf{1}=a+O(z)$と書いたけど、translation axiomと合わせると他の係数を@<m>{T}を用いて表せる。@<m>$Y(a,z)\mathbf{1}=a+\sum_{k\ge 1}c_kz^k$とおくと]
//texequation{
\partial_zY(a,z)\mathbf{1}=\sum_{k\ge 1}kc_kz^{k-1}\\
[T,Y(a,z)]\mathbf{1}=TY(a,z)\mathbf{1}=Ta+\sum_{k\ge 1}Tc_kz^k
//}
//say[広][あとは係数を比較すればよくて]
//texequation{
Y(a,z)\mathbf{1}=\sum_{k\ge 0}\frac{T^k}{k!}az^k
//}
//say[広][になる。指数関数のマクローリン展開にそっくり、だね。]
//say[咲季][習ってないわよ？]
//say[広][そっか。次はlocality axiomを見てみよう。]
//texequation{
(z-w)^N[Y(a,z),Y(b,w)]=0
//}
//say[咲季][思ったんだけど、@<m>{(z-w)^N}で両辺を割ったらダメなの？]
//say[広][だめ。@<m>{xy=0}でも@<m>{x\ne 0, y\ne 0}になる可能性もある。つまり整域ではないということ。]
//say[咲季][割り算も自由にできないのね……。]
//say[広][locality axiomはある種の可換性を要請してる。local commutativityという名前もある。実はこれがBorcherds identityの特別な場合であることを見ていこう。]
//say[咲季][特別な場合になるんだ。]
//say[広][@<m>{a,b,c\in V}を任意にとる。ある@<m>{N}が存在して]
//texequation{
(z-w)^NY(a,z)Y(b,w)c=(z-w)^NY(b,w)Y(a,z)c
//}
//say[広][が成り立つ。左辺を計算しよう。]
//texequation[eq:calc]{
	&\!(z-w)^NY(a,z)Y(b,w)c \\
	&=\left(\sum_{i=0}^N(-1)^i\binom{N}{i}z^{N-i}w^i\right)\left(\sum_ma_{(m)}z^{-m-1}\right)\left(\sum_nb_{(n)}w^{-n-1}\right)c \\
	&=\sum_{i=0}^N\sum_m\sum_n(-1)^i\binom{N}{i}a_{(m+N-i)}(b_{(n+i)}c)z^{-m-1}w^{-n-1}
//}
//say[広][同様の計算で右辺は]
//texequation{
	(z-w)^NY(b,w)Y(a,z)c
        =\sum_{i=0}^N\sum_m\sum_n(-1)^{N-i}\binom{N}{i}b_{(n+N-i)}(a_{(m+i)}c)z^{-m-1}w^{-n-1}
//}
//say[広][になる。係数を比較して]
//texequation{
\sum_{i=0}^N(-1)^i\binom{N}{i}a_{(m+N-i)}(b_{(n+i)}c)=\sum_{i=0}^N(-1)^{N-i}\binom{N}{i}b_{(n+N-i)}(a_{(m+i)}c)
//}
//say[広][が得られた。これがBorcherds identityの特別な場合であることを示す。必要なら@<m>{N}を大きく取り直して、@<m>{i\ge 0}に対して@<m>$a_{(N+i)}b=0$が成り立つようにできる。]
//say[咲季][local truncationね。]
//say[広][そう。@<m>{Y(a,z)}がfieldだからだね。そして、Borcherds identityに@<m>{(p,q,r)=(m,n,N)}を代入すると……。]
//say[咲季][ほんとだ、さっきの等式が出てくる。]
//say[広][今証明したのは、任意の@<m>$a,b,c\in V,p,q\in\mathbb{Z}$に対してある@<m>$r\in\mathbb{Z}$が存在してBorcherds identityが成り立つということ。]
//say[咲季][惜しいところまでは来たわね。]
//say[広][さっきの等式はある種の可換性だったけど、ある種の結合性が成り立つことを示す。それもまたBorcherds identityの一部であることを見る。2つの特殊な場合を合わせることでBorcherds identity全体が得られることを示す、よ。]
//say[咲季][結合性って、@<m>{(ab)c=a(bc)}よね。]
//say[広][頂点代数の場合、次のような結合性が成り立つ。]


//beginthm[][][命題]
@<m>{a,b,c\in V}に対して
//texequation{
(a_{(m)}b)_{(n)}c=\sum_{i=0}^{\infty}(-1)^i\binom{m}{i}a_{(m-i)}(b_{(n+i)}c)-\sum_{i=0}^{\infty}(-1)^{m-i}\binom{m}{i}b_{(m+n-i)}(a_{(i)}c)
//}
が成り立つ。
//endthm

//say[広][これはBorcherds identityの@<m>{(p,q,r)=(0,n,m)}の場合。これが証明できたらBorcherds identityのすべての場合が従うことを先に見ておこう。]
//texequation{
        \sum_{i=0}^{\infty}\binom{p}{i}(a_{(r+i)}b)_{(p+q-i)}c \\ \sum_{i=0}^{\infty}(-1)^i\binom{r}{i}a_{(p+r-i)}(b_{(q+i)}c) \\
        \sum_{i=0}^{\infty}(-1)^{r-i}\binom{r}{i}b_{(q+r-i)}(a_{(p+i)}c)
//}
//say[広][のいずれかを表す記号を@<m>{B(p,q,r)}とする。このとき]
//texequation{
B(p+1,q,r)=B(p,q+1,r)+B(p,q,r+1)
//}
//say[広][が成り立つ。これが意味することは、@<m>{(p+1,q,r),(p,q+1,r),(p,q,r+1)}のうち2つでBorcherds identityが成り立っていれば、残りの1つでも成り立つということ。さっきある@<m>{N}について@<m>{(p,q,N)}の場合に成り立つことを示して、これから@<m>{(0,q,r)}のときに成り立つことを示す。これらを踏まえると、すべての@<m>{(p,q,r)}についてBorcherds identityが成り立つことがわかる。]
//say[咲季][流れはわかったわ。]
//say[広][命題@<thm>{prop:assoc}を証明するために、@<m>{Y(a,z)}の形に書き換えよう。左辺は@<m>$Y(a_{(m)}b,z)c$の@<m>$z^{-n-1}$の係数。右辺は、ややこしいね。@<eq>{eq:calc-3}での計算を流用すると、@<m>{m\ge 0}のとき]
//texequation{
\mathop{\mathrm{Res}}_z(z-w)^mY(a,z)Y(b,w)c=\sum_{i=0}^m\sum_n(-1)^i\binom{m}{i}a_{(m-i)}(b_{(n+i)}c)w^{-n-1}
//}
//say[広][になる。]
//say[咲季][Resは何？]
//say[広][留数といって、@<m>$z^{-1}$の係数を取り出すもの。]
//say[咲季][わかったわ。]
//say[広][右辺第2項も同様に計算できる。よって示すべき等式は]
//texequation{
Y(a_{(m)}b,w)c=\mathop{\mathrm{Res}}_z (z-w)^m[Y(a,z),Y(b,w)]
//}
//say[広][になる。でもこれは@<m>{m\ge 0}で成り立つ式で、負の時は修正が必要。@<m>$(z-w)^{-1}$を@<m>{w/z}の級数と見るか、@<m>{z/w}の級数と見るか、が大事。]
//say[咲季][それはつまり]
//texequation{
\frac{1}{z-w}=\frac{1}{z}\frac{1}{1-w/z}=\frac{1}{z}\left(1+\frac{w}{z}+\frac{w^2}{z^2}+\cdots\right) \\
\frac{1}{z-w}=-\frac{1}{w}\frac{1}{1-z/w}=-\frac{1}{w}\left(1+\frac{z}{w}+\frac{z^2}{w^2}+\cdots\right)
//}
//say[咲季][ということ？]
//say[広][そう。区別するために、前者を@<m>$i_{z,w}(z-w)^{-1}$、後者を@<m>$i_{w,z}(z-w)^{-1}$と書く。一般に]
//texequation{
        i_{z,w}(z-w)^m &= \sum_{i=0}^{\infty}(-1)^i\binom{m}{i}z^{m-i}w^i \\
        i_{w,z}(z-w)^m &= \sum_{i=0}^{\infty}(-1)^{m-i}\binom{m}{i}z^iw^{m-i}
//}
//say[広][と定義する。@<m>{m\ge 0}のときは両者は等しい。そして2つのfield @<m>{a(z),b(w)}に対して]
//texequation{
a(w)_{(m)}b(w)=\mathop{\mathrm{Res}}_z i_{z,w}(z-w)^ma(z)b(w)-\mathop{\mathrm{Res}}_z i_{w,z}(z-w)^mb(w)a(z)
//}
//say[広][と定義する。証明したい式は……。]

//beginthm[][][命題]
@<m>$a,b\in V, m\in\mathbb{Z}$に対して
//texequation{
Y(a_{(m)}b,z)=Y(a,z)_{(m)}Y(b,z)
//}
が成り立つ。
//endthm

//say[広][証明の前に、@<m>{m=-1}に関する積は特別だから、詳しく見る。@<m>{a(z)=a(z)_++a(z)_-}と分ける。@<m>{a(z)_+}は@<m>{z}の指数が非負、@<m>{a(z)_-}は@<m>{z}の指数が負の部分。つまり]
//texequation{
        a(z)_+ &= \sum_{n<0}a_nz^{-n-1} \\
        a(z)_- &= \sum_{n\ge 0}a_nz^{-n-1}
//}
//say[広][それで、@<m>{\colon\!a(z)b(w)\colon = a(z)_+b(w)+b(w)a(z)_-}とおいて、これを@<b>{正規順序積}という。このとき@<m>$\colon\!a(z)b(z)\colon = a(z)_{(-1)}b(z)$が成り立つ。]
//say[咲季][これが大事なのね。]
//say[広][じゃあ、証明するために、補題を用意する、よ。]


//beginthm[lem:product][][補題]
@<m>{k\ge 0}に対して
//texequation{
a(z)_{(-k-1)}b(z)=\colon\!\left(\frac{\partial_z^k}{k!}a(z)\right)b(z)\colon
//}
が成り立つ。
//endthm

//beginthm[lem:dong][Dongの補題][補題]
 @<m>{a(z),b(z),c(z)}は互いにlocalなfieldとする。このとき@<m>{\colon\!a(z)b(z)\colon}と@<m>{c(z)}も互いにlocalである。
//endthm

//beginthm[lem:goddard][Goddardの一意性定理][補題]
 @<m>{A(z)}をfieldとする。任意の@<m>{b\in V}に対して@<m>{A(z)}と@<m>{Y(b,z)}は互いにlocalであり、ある@<m>{a\in V}に対して@<m>$A(z)\mathbf{1}=Y(a,z)\mathbf{1}$が成り立つとする。このとき@<m>{A(z)=Y(a,z)}が成り立つ。
//endthm

//beginthm[lem:goddard-sub][][補題]
 @<m>{A(z)}は次をみたすfieldであるとする。

 * @<m>$\partial_zA(z)\mathbf{1}=TA(z)\mathbf{1}$
 * @<m>$A(z)\mathbf{1}|_{z=0}=a$

このとき@<m>$A(z)\mathbf{1}=Y(a,z)\mathbf{1}$が成り立つ。
//endthm

//say[咲季][これ全部証明するの？]
//say[広][ええ……、これ全部証明するの……？]
//say[咲季][あなたが始めたんでしょ。]
//say[広][余裕があったら、あとでやる……。]
//say[咲季][余裕、あるかしら。]
//say[広][これらの補題を使うと、証明すべき式は]
//texequation{
        \partial_z Y(a,z)_{(m)}Y(b,z)\mathbf{1}&=TY(a,z)_{(m)}Y(b,z)\mathbf{1} \\
        Y(a,z)_{(m)}Y(b,z)\mathbf{1}|_{z=0}&=a_{(m)}b
//}
//say[広][の2つになる。実際、これらの式に補題@<thm>{lem:goddard-sub}を使うと、命題@<thm>{prop:m-product}の両辺に@<m>$\mathbf{1}$をつけたものが得られる。補題@<thm>{lem:goddard}を使うと命題@<thm>{prop:m-product}が得られるけど、そのためには@<m>$Y(a,z)_{(m)}Y(b,z)$と@<m>{Y(c,z)}が互いにlocalであることを示す必要がある。それは補題@<thm>{lem:product},@<thm>{lem:dong}からわかる。]
//say[咲季][難しいのね……。]
//say[広][まずは1つ目の式を示す。]
//texequation{
        e^{xT} &= \sum_{k=0}^{\infty}x^k\frac{T^k}{k!} \\
        e^{-xT} &= \sum_{k=0}^{\infty}(-x)^k\frac{T^k}{k!}
//}
//say[広][とおくと、普通の指数法則のような式@<m>$e^{xT}e^{-xT}=1$が成り立つ。]
//say[咲季][さっきも似たような式があったわね。]
//say[広][これを使うと]
//texequation{
e^{xT}(Y(a,z)_{(m)}Y(b,z))e^{-xT}=(e^{xT}Y(a,z)e^{-xT})_{(m)}(e^{xT}Y(b,z)e^{-xT})
//}
//say[広][がいえる。@<m>{x}について一次の項を取り出すことで]
//texequation{
[T,Y(a,z)_{(m)}Y(b,z)]=[T,Y(a,z)]_{(m)}Y(b,z)+Y(a,z)_{(m)}[T,Y(b,z)]
//}
//say[広][となる。ここでtranslation axiomから@<m>{[T,Y(a,z)\]=\partial_zY(a,z), [T,Y(b,z)\]=\partial_zY(b,z)}が使える。すると示すべきことは@<m>{\partial_z}がderivationであること、つまり]
//texequation{
\partial_z(Y(a,z)_{(m)}Y(b,z))=(\partial_zY(a,z))_{(m)}Y(b,z)+Y(a,z)_{(m)}(\partial_zY(b,z))
//}
//say[広][になる。@<m>{m\ge 0}と@<m>{m<0}に分けよう。@<m>{m\ge 0}のとき、@<m>$Y(a,z)_{(m)}Y(b,z)=\mathop{\mathrm{Res}}_y (y-z)^m[Y(a,y),Y(b,z)\]$だった。だから]
//texequation{
\partial_z(Y(a,z)_{(m)}Y(b,z))=\mathop{\mathrm{Res}}_y \partial_z(y-z)^m[Y(a,y),Y(b,z)]+\mathop{\mathrm{Res}}_y (y-z)^m[Y(a,y),\partial_zY(b,z)]
//}
//say[広][になって、右辺の第2項は@<m>$Y(a,z)_{(m)}\partial_zY(b,z)$、だね。だから]
//texequation{
\mathop{\mathrm{Res}}_y \partial_z(y-z)^m[Y(a,y),Y(b,z)]=(\partial_zY(a,z))_{(m)}Y(b,z)
//}
//say[広][を証明したらOK。@<m>{\partial_y(y-z)^m=-\partial_z(y-z)^m}であることを使うと……。]
//texequation{
        \mathop{\mathrm{Res}}_y(\partial_z(y-z)^m)[Y(a,y),Y(b,z)] &= -\mathop{\mathrm{Res}}_y(\partial_y(y-z)^m)[Y(a,y),Y(b,z)] \\
        &= -\mathop{\mathrm{Res}}_y\partial_y((y-z)^m[Y(a,y),Y(b,z)]) \notag \\
        &+\mathop{\mathrm{Res}}_y(y-z)^m[\partial_yY(a,y),Y(b,z)]
//}
//say[広][ここで最後の式の第1項は0になるからOK。]
//say[咲季][ええと……、@<m>$\mathop{\mathrm{Res}}_y$は@<m>$y^{-1}$の係数を取り出すものだったわよね。なんで@<m>$y^{-1}$の係数が0なの？]
//say[広][@<m>{y}についてのべき級数を微分すると@<m>$y^{-1}$の項が現れないから。]
//say[咲季][なるほど……。結構大変な計算ね。]
//say[広][@<m>{m<0}のときを考える。正規順序積は@<m>$a(z)_{(-1)}b(z)=\colon\!a(z)b(z)\colon =a(z)_+b(z)+b(z)a(z)_-$だったね。@<m>$\partial a(z)_{\pm}=(\partial_z a(z))_{\pm}$が成り立つから、@<m>{m=-1}のときはOK。あとは補題@<thm>{lem:product}からわかる。]
//say[咲季][なるほど。]
//say[広][今までの計算を合わせると]
//texequation{
[T,Y(a,z)_{(m)}Y(b,z)]=\partial_z(Y(a,z)_{(m)}Y(b,z))
//}
//say[広][が得られる。これに@<m>$\mathbf{1}$をつけると、@<m>$T\mathbf{1}=0$だから、証明したい式が得られた。]
//say[咲季][これが1つ目の式ね。]
//say[広][はあ……はあ……はあ……。]
//say[咲季][もう1個あるんでしょ？まだ諦めちゃだめよ！]
//say[広][うん……。2つ目の式を示すには、@<m>$Y(a,z)_{(m)}Y(b,z)\mathbf{1}$が@<m>{z}について負べきを含まない級数で、定数項が@<m>$a_{(m)}b$であることを示したらいい。定義から]
//texequation{
Y(a,z)_{(m)}Y(b,z)\mathbf{1}=\mathop{\mathrm{Res}}_yi_{y,z}(y-z)^mY(a,y)Y(b,z)\mathbf{1}-\mathop{\mathrm{Res}}_yi_{z,y}(y-z)^mY(b,z)Y(a,y)\mathbf{1}
//}
//say[広][だけど、vacuum axiomから@<m>$Y(a,y)\mathbf{1}\in V[[y\]\]$だから、右辺の第2項は0。]
//say[咲季][また@<m>$y^{-1}$の係数が0なのね。]
//say[広][右辺第1項を見ると@<m>$Y(b,z)\mathbf{1}\in V[[z\]\]$で、つまり左辺も右辺も@<m>{z}について負べきが現れないことがわかる。だから@<m>{z=0}を代入できる。]
//texequation{
Y(a,z)_{(m)}Y(b,z)\mathbf{1}|_{z=0}=\mathop{\mathrm{Res}}_y y^mY(a,y)b=a_{(m)}b
//}
//say[咲季][これで証明ができたわね！]
//say[広][がんばった……。これが、わたしの限界……。]
//say[咲季][ちょっと、あなたの限界はこんなものじゃないでしょ？ほら、SSDおかわりもあるわよ。]
//say[広][限界は、塗り替えていくもの、だもんね……。（ごくごく）]
//say[咲季][そうよ！まだ定義しかしてないんだから、話はこれからでしょ？]
//say[広][うん……、まだまだ、がんば……る。]


//say[広][具体例を作っていくよ。Heisenbergリー代数からHeisenberg頂点代数を作ることができる。さっき示した定理のおかげで、ベクトル空間@<m>{V}と@<m>$\mathbf{1}\in V, T\in \mathop{\mathrm{End}}V, Y(-,z)\colon V\to (\mathop{\mathrm{End}}V)[[z,z^{-1}\]\]$を決めればいい。@<m>$V=\mathbb{C}[x_1,x_2,\ldots\]$とする。@<m>$\mathbf{1}=1$とする。作用素@<m>$a_{(n)}\in \mathop{\mathrm{End}}V$を]
//texequation{
a_{(n)}p(x_1,x_2,\ldots)=\begin{cases}
        x_{-n}p & (n<0) \\
        0 & (n=0) \\
        n\frac{\partial}{\partial x_n}p & (n>0)
    \end{cases}
//}

//say[広][と定めて]
//texequation{
a(z)=\sum_{n\in\mathbb{Z}}a_{(n)}z^{-n-1}
//}
//say[広][と定める。この@<m>$a_{(n)}$がHeisenbergリー代数の関係式]
//texequation{
[a_{(m)},a_{(n)}]=m\delta_{m+n,0}\mathrm{id}_V
//}
//say[広][をみたすことは簡単に確かめられる。次は@<m>{Y(-,z)}をどう定義したらいいか考えよう。定理の仮定より@<m>$Y(\mathbf{1},z)=\mathrm{id}_V$は要請されてる。次は@<m>{Y(x_1,z)}だけど、これは@<m>{Y(x_1,z)=a(z)}と定める。]
//say[咲季][そういえば、@<m>{T}は定義しなくていいの？]
//say[広][実は@<m>{Y(x_1,z)=a(z)}とすると@<m>{T}も決まっちゃう。@<m>{[T,a(z)\]=\partial_za(z)}になるけど、要請されてる@<m>$T\mathbf{1}=0$と合わせると]
//texequation{
Tx_k=Ta_{(-k)}\mathbf{1}=[T,a_{(-k)}]\mathbf{1}=ka_{(-k-1)}\mathbf{1}=kx_{k+1}
//}
//say[広][になる。@<m>{p}が単項式のとき@<m>{Tp}は帰納的に計算できて、多項式のときは線形に拡張したらいい。]
//say[咲季][なるほどね。]
//say[広][次は@<m>{Y(x_2,z)}を考える。命題@<thm>{prop:m-product}で@<m>$m=-2, b=\mathbf{1}$とすると]
//texequation{
Y(Ta,z)=\partial_z Y(a,z)
//}
//say[広][となって、@<m>{Tx_1=x_2}だから、@<m>{Y(x_2,z)=\partial_za(z)}になる。]
//say[咲季][@<m>{Y(x_1,z)}を決めたら@<m>{Y(x_2,z)}も決まっちゃうのね。]
//say[広][同様にして]
//texequation{
Y(x_k,z)=\frac{1}{(k-1)!}\partial_z^{k-1}a(z)
//}
//say[広][になる。]
//say[咲季][これで全部決まったのかしら？]
//say[広][いや、@<m>{Y(x_1^2,z)}がどうなるかまだわからない。次はこれを考える。いま@<m>{Y(x_1,z)=a(z)}とおいてるから、@<m>$x_{1(-1)}x_1=x_1^2$になる。だから]
//texequation{
Y(x_1^2,z)=Y(x_{1(-1)}x_1,z)=Y(x_1,z)_{(-1)}Y(x_1,z)=\colon\!Y(x_1,z)Y(x_1,z)\colon=\colon\!a(z)a(z)\colon
//}
//say[広][になる。正規順序積、だね。]
//say[咲季][@<m>{x_1^3}とか@<m>{x_1^2x_2^2}とかはどうなの？]
//say[広][これも正規順序積の繰り返しで定義できる、よ。正確には]
//texequation{
Y(x_{j_1}\cdots x_{j_n},z)=\frac{1}{(j_1-1)!\cdots (j_n-1)!}\colon\!\partial_z^{j_1-1}a(z)\cdots \partial_z^{j_n-1}a(z)\colon
//}
//say[広][になる。正規順序積は結合的じゃないから、結合の順番に注意。]
//say[咲季][これで@<m>{Y(-,z)}が定義できたのね。]
//say[広][うん。]
//say[咲季][これで一件落着ね！]
//say[広][いや、最後にもう一仕事。定理の仮定をみたすことを確かめなきゃ。]
//say[咲季][そっか。]
//say[広][限界まで、がんばる、よ……。まず、vacuum axiomは簡単。translation axiomは、@<m>{[T,a(z)\]=\partial_za(z)}を確かめてから、さっき証明した@<m>{T}や@<m>{\partial_z}がderivationであることを使うとできる。locality axiomを確かめよう。]
//texequation{
[a(z),a(w)]=\sum_n nz^{-n-1}w^{n-1}
//}
//say[広][だから@<m>{(z-w)^2[a(z),a(w)\]=0}になる。Dongの補題を思い出そう。あとは、@<m>{\partial_z^ka(z)}と@<m>{\partial_z^la(z)}が互いにlocalであることを示せばいい。@<m>{a(z),b(w)}が互いにlocalのとき]
//texequation{
(z-w)^N[a(z),b(w)]=0
//}
//say[広][となる@<m>{N}がある。両辺を@<m>{z}で偏微分して@<m>{(z-w)}をかけると]
//texequation{
(z-w)^{N+1}[\partial_za(z),b(w)]=0
//}
//say[広][になる。これを繰り返せば、いい。]
//say[咲季][これで証明完了ね！]
//say[広][……もう、だめ……。（ばたり）]
//say[咲季][倒れちゃった。限界を超えてよくがんばったわね。お疲れさま。]


===[nonum]{広の講義レジュメ-1} 広の講義レジュメ

補題@<thm>{lem:product}から補題@<thm>{lem:goddard-sub}の証明は余裕があればやる。

====[nonum]{補題lemproductの証明} 補題@<thm>{lem:product}の証明

//texequation{
    a(z)_{(-k-1)}b(z)&=\mathop{\mathrm{Res}}_y\sum_{i\ge 0}(-1)^i\binom{-k-1}{i}y^{-k-1-i}z^i\sum_n a_ny^{-n-1}\sum_m b_mz^{-m-1} \\
    &-\mathop{\mathrm{Res}}_y\sum_{i\ge 0}(-1)^{-k-1-i}\binom{-k-1}{i}y^iz^{-k-1-i}\sum_m b_mz^{-m-1}\sum_n a_ny^{-n-1} \\
    &= \sum_{n<-k}\sum_m(-1)^{-k-n-1}\binom{-k-1}{-k-n-1}a_nb_mz^{-k-m-n-2} \\
    &- \sum_m\sum_{n\ge -k}(-1)^{-k-n-1}\binom{-k-1}{n}b_ma_nz^{-k-m-n-2} \\
    &= \sum_{n<0}\sum_m\binom{k-n-1}{k}a_{n-k}b_mz^{-m-n-2} \\
    &- \sum_m\sum_{n\ge 0}\binom{k-n-1}{k}b_ma_{n-k}z^{-m-n-2} \\
    &= \colon\!\left(\frac{\partial_z^k}{k!}a(z)\right)b(z)\colon
//}
====[nonum]{補題lemdongの証明} 補題@<thm>{lem:dong}の証明

十分大きな@<m>{M}に対して
//texequation{
    & (x-w)^M(\mathop{\mathrm{Res}}_zi_{z,w}(z-w)^{-1}a(z)b(w)-\mathop{\mathrm{Res}}_zi_{w,z}(z-w)^{-1}b(w)a(z))c(x) \\
    &= (x-w)^Mc(x)(\mathop{\mathrm{Res}}_zi_{z,w}(z-w)^{-1}a(z)b(w)-\mathop{\mathrm{Res}}_zi_{w,z}(z-w)^{-1}b(w)a(z))
//}
を示せばよい。@<m>{M=M_1+M_2}とすると
//texequation{
(x-w)^M=(x-w)^{M_1}\sum_{i=0}^{M_2}\binom{M_2}{i}(x-z)^{M_2-i}(z-w)^i
//}
となる。@<m>{M_1}を大きくとれば、@<m>{b(w)}と@<m>{c(x)}の順番を入れ替えられる。@<m>{i}が小さいとき、@<m>{M_2}を大きくとることで@<m>{a(z)}と@<m>{c(x)}の順番を入れ替えられる。@<m>{i}が大きいとき、@<m>$(z-w)(i_{z,w}(z-w)^{-1}-i_{w,z}(z-w)^{-1})=0$および@<m>{a(z),b(w)}が入れ替え可能なことを用いるとよい。

====[nonum]{補題lemgoddardの証明} 補題@<thm>{lem:goddard}の証明

@<m>{b\in V}に対して

//texequation{
    (z-w)^NA(z)Y(b,w)\mathbf{1} &= (z-w)^NY(b,w)A(z)\mathbf{1} \\
    &= (z-w)^NY(b,w)Y(a,z)\mathbf{1} \\
    &= (z-w)^NY(a,z)Y(b,w)\mathbf{1}
//}
vacuum axiomより、@<m>$(z-w)^NA(z)Y(b,w)\mathbf{1}$と@<m>$(z-w)^NY(a,z)Y(b,w)\mathbf{1}$は@<m>{w}に関する負べきを含まない級数である。@<m>{w=0}を代入すると、@<m>{Y(a,z)b=A(z)b}が得られる。これが任意の@<m>{b\in V}に対して成り立つので、@<m>{Y(a,z)=A(z)}である。

====[nonum]{補題lemgoddard-subの証明} 補題@<thm>{lem:goddard-sub}の証明

@<m>$A(z)=\sum b_nz^{-n-1}$とおくと、@<m>{n\ge 0}ならば@<m>{b_n=0}および@<m>$b_{-1}=a$が成り立つ。また@<m>$Tb_n=-nb_{n-1}$なので、帰納的に
//texequation{
b_{-k}=\frac{T^k}{k!}a
//}
が得られる。よって
//texequation{
A(z)\mathbf{1}=\sum_{k\ge 0}\frac{T^k}{k!}az^k=Y(a,z)\mathbf{1}
//}
が成り立つ。

== 頂点作用素代数

//say[咲季][わたしの作ったごはん、どうかしら？]
//say[広][見た目の美しさを排除して、徹底的に合理性を追求した作品。気に入った。]
//say[咲季][えへへ。それはよかったわ。]
//say[広][咲季がつくるごはん、またたべたい。]
//say[咲季][いいわよ～。]

//blankline

＊＊＊

//blankline

//say[広][前回はHeisenberg頂点代数しか作れなかったね。今回はもう1つの大事な例であるVirasoro頂点代数を作る、よ。]
//say[咲季][Virasoroリー代数と関係あるのかしら？]
//say[広][もちろん。復習しよう。Virasoroリー代数は@<m>$L_n \ (n\in\mathbb{Z})$と@<m>{C}で生成されて]
//texequation{
[L_m, L_n] &= (m-n)L_{m+n}+\delta_{m+n,0}\frac{m^3-m}{12}C \\
        [C,L_n] &=0
//}
//say[広][という関係式をもつリー代数だった。@<m>{L_n \ (n\ge -1)}と@<m>{C}で生成される部分リー代数@<m>$\mathfrak{K}$を考えよう。@<m>$c\in\mathbb{C}$に対して]
//texequation{
        L_n(1) &= 0 \\
        C(1) &= c
//}
//say[広][と定めると、@<m>$\mathbb{C}$は@<m>$\mathfrak{K}$の1次元表現になる。これを@<m>$\mathbb{C}_c$とおくよ。一般に部分代数の表現からもとの代数の表現を得る誘導表現という手法があって、これを使うとVirasoro代数の表現が得られる。]
//say[咲季][それはどういうものなの？]
//say[広][定義するとこうなる。@<m>{U}は普遍包絡代数を表すよ。]
//texequation{
\mathrm{Vir}_c=U(\mathrm{Vir})\otimes_{U(\mathfrak{K})}\mathbb{C}_c
//}
//say[咲季][うーん……。]
//say[広][PBW定理から]
//texequation{
L_{j_1}\cdots L_{j_m}v_c \quad (j_1\le\cdots\le j_m\le -2)
//}
//say[広][が@<m>$\mathrm{Vir}_c$の基底になる。これが大事。]
//say[咲季][@<m>$L_{-2}v_c$とか@<m>$L_{-2}L_{-2}v_c$とかね。……@<m>{v_c}って何？]
//say[広][@<m>{v_c}は@<m>$1\otimes 1\in U(\mathrm{Vir})\otimes_{U(\mathfrak{K})}\mathbb{C}_c$に対応する元だよ。あとはHeisenbergのときと同じようにして頂点代数が構成できる。まず]
//texequation{
L(z)=\sum_{n\in\mathbb{Z}}L_nz^{-n-2}
//}
//say[広][とおく。指数が今までのと違うから気を付けて。]
//say[咲季][確かに。]
//say[広][translation operator は@<m>$T=L_{-1}$として]
//texequation{
Y(L_{-2}v_c,z)=L(z)
//}
//say[広][とする。頂点代数になることを確かめるには、Heisenbergのときにやったのと同じようにしたらいい。例えば……。]

//beginthm[][][補題]
//texequation{
(z-w)^4[L(z),L(w)]=0
//}
//endthm

//say[広][これがVirasoro頂点代数。]
//say[咲季][なるほどね。誘導表現のところはまだよくわかってないけど。]
//say[広][普遍包絡代数の説明をしてないから。あ、そうだ。Heisenbergの場合も誘導表現で説明できるよ。]
//say[咲季][そうなの？]
//say[広][@<m>$V=\mathbb{C}[x_1,x_2,\ldots\]$という表現が突然出てきたけど、これも誘導表現を使うとわかる。@<m>{a_n \ (n\ge 0)}と@<m>{\zeta}で生成されるHeisenbergリー代数の部分代数を考えて]
//texequation{
		a_nv_{\lambda}=\begin{cases}
        0 & (n>0) \\
        \lambda v_{\lambda} & (n=0)
    \end{cases}
//}
//say[広][と@<m>$\zeta v_{\lambda}=v_{\lambda}$で定まる1次元表現を考えて、誘導表現を考える。PBW定理を使うと]
//texequation{
a_{j_1}\cdots a_{j_m}v_{\lambda} \quad (j_1\le\cdots\le j_m\le -1)
//}
//say[広][が基底になる。@<m>$a_{-k}$と@<m>{x_k}を同一視すると多項式になって、@<m>{V}が得られるということ。作用素@<m>$a_{(n)}\in \mathop{\mathrm{End}}V$も自然に導出できる。]
//say[咲季][そうなのね。]
//say[広][Heisenberg頂点代数もVirasoro頂点代数も1つのfield、それぞれ@<m>{a(z)}と@<m>{L(z)}、で定義できた。一般に可算個のfieldで頂点代数を定義する方法を定理としてまとめる。これは群やリー代数を生成元と関係式で定義する方法と似てる。]


//beginthm
@<m>{V}をベクトル空間、@<m>$\mathbf{1}$を0でないベクトル、@<m>$T\in \mathop{\mathrm{End}}V$とする。可算個のfields 
//texequation{
a^{\alpha}(z)=\sum_{n\in\mathbb{Z}}a^{\alpha}_{(n)}z^{-n-1}
//}
が与えられているとする。これらは次の条件をすべてみたすとする。

 1. 任意の@<m>{\alpha}に対して@<m>$a^{\alpha}(z)\mathbf{1}\in V[[z]]$となる。
 2. @<m>$T\mathbf{1}=0$であり、任意の@<m>{\alpha}に対して@<m>$[T,a^{\alpha}(z)]=\partial_za^{\alpha}(z)$
 3. fields @<m>$a^{\alpha}(z)$は互いにlocal
 4. @<m>{V}は

//beginchild

//texequation{
a^{\alpha_1}_{(j_1)}\cdots a^{\alpha_m}_{(j_m)}\mathbf{1} \quad (j_k<0)
//}
で張られる。

//endchild

このとき@<m>$a^{\alpha}=a^{\alpha}(z)\mathbf{1}|_{z=0}$とおくと、@<m>$Y(a^{\alpha},z)=a^{\alpha}(z)$により@<m>{V}に一意的な頂点代数の構造が定まる。
//endthm

//say[広][ついにここまで話すことができた。はぁ……。]
//say[咲季][なんで不満そうなわけ？]
//say[広][もちろんここで話は終わらない。次は頂点作用素代数の話をしよう。]

//blankline

＊＊＊

//blankline

//say[広][Heisenberg頂点代数では@<m>$a_{j_1}\cdots a_{j_m}v_{\lambda}$、Virasoro頂点代数では@<m>$L_{j_1}\cdots L_{j_m}v_c$が基底だった。これらの元の次数を@<m>{-(j_1+\cdots+j_m)}と定める。すると頂点代数は@<m>$V=\bigoplus_{n\in\mathbb{Z}}V_n$のように直和分解できる。]
//say[咲季][次数ってことは、多項式と似たような感じかしら。]
//say[広][そんな感じ。このように、@<m>$\mathbb{Z}$で次数付けられた頂点代数を考えるよ。]


//beginthm[][][定義]
@<m>$\mathbb{Z}$で次数付けられた頂点代数@<m>{V}が@<b>{conformal}であるとは、@<m>$c\in\mathbb{C}$および0でないベクトル@<m>{\omega\in V_2}であって次をみたすものが存在することをいう。
//texequation{
Y(\omega,z)=\sum_{n\in\mathbb{Z}}L_n^Vz^{-n-2}
//}
と展開したとき
//texequation{
[L_m^V,L_n^V] = (m-n)L_{m+n}^V+\delta_{m+n,0}\frac{m^3-m}{12}c
//}
が成り立ち、さらに@<m>$L_{-1}^V=T, L_0^V|_{V_n}=n\cdot \mathrm{Id}$となる。
//endthm

//say[広][@<m>{c}を中心電荷という、よ。]
//say[咲季][@<m>{L_n^V}はVirasoroリー代数の関係式をみたしているわね……。]
//say[広][Virasoro頂点代数が大事というのがわかる、ね。conformal vertex algebraは頂点作用素代数ともいう。頂点代数と頂点作用素代数の違いは、名前だけを見ると作用素の有無に見えてしまう。でも実際はconformal vector @<m>{\omega}の有無が重要。だからconformal vertex algebraと呼ぶ方がいい気がするけど、頂点作用素代数という名前で定着しちゃったから……。]
//say[咲季][ふーん。]
//say[広][Virasoro頂点代数がconformalであることはわかると思うけど、Heisenberg頂点代数もconformalになる。]
//say[咲季][そうなの？]
//say[広][うん。@<m>$\omega=\frac12a_{-1}a_{-1}\mathbf{1}$がconformal vectorになる。]

//blankline

＊＊＊

//blankline

//say[広][最後にちょっとした歴史の話。なぜ頂点代数が生まれ、研究されるようになったか。]
//say[咲季][気になるわね。]
//say[広][まずは群論。整数の中で素数が重要であるように、群の中で単純群が大事になる。だから数学者は単純群を分類しようとした。単純群を研究する中で、モンスターという群が見つかった。]
//say[咲季][すごい名前。]
//say[広][モンスターはとても謎に満ちた群で、2次元や3次元の対称性では記述できない。最小でも196883次元。]
//say[咲季][そんなに！？]
//say[広][その次は21296876次元。]
//say[咲季][ええ……。]
//say[広][次はモジュラー関数の話。これはモンスターが見つかるより前から研究されていた対象。その中で@<m>{j}不変量というものがあって、こんな性質をみたす。]
//texequation{
j(\tau)=q^{-1}+744+196884q+21493760q^2+\cdots
//}
//say[咲季][あれ、さっきの数と同じ？]
//say[広][よく見ると違うけど、よく似ている。]
//texequation{
        196884 &= 196883+1 \\
        21493760 &= 21296876+196883+1
//}
//say[広][1つだけならただの偶然かもしれないけど、そうじゃない。この先も続いていく。]
//say[咲季][確かに不思議ね。]
//say[広][このように、モンスターの表現の次元と、@<m>{j}不変量の係数には不思議な関係がある。これをムーンシャイン予想という。今はもう解決されてるけど、この不思議な関係の架け橋となったのが、頂点作用素代数。自己同型群がモンスター、指標が@<m>{j(\tau)-744}となる頂点作用素代数がカギになった。]
//say[咲季][今まで勉強してきた頂点代数がこれに関係しているなんて、ますます不思議ね。]
//say[広][ムーンシャイン予想を証明したBorcherdsはフィールズ賞を受賞した。でも、まだまだ不思議なことはいっぱい。数学者、物理学者が共同で、頂点代数や関連する分野の謎を解き明かそうとしてる。]
//say[咲季][わたしにもできるかしら？]
//say[広][咲季ならできる。]
//say[咲季][そう聞いたらますますやる気になってきちゃうじゃない！頂点を目指すしかないわね！]


== 期末試験後

//say[佑芽][広ちゃん！期末試験の結果が貼り出されたよ！]
//say[広][そうなんだ。]
//say[佑芽][一緒に見に行こ！]

//blankline

＊＊＊

//blankline

//say[広][わたしは、1位だった。]
//say[佑芽][あたしは赤点回避！広ちゃんが教えてくれたおかげ！]
//say[広][すごい。]
//say[佑芽][広ちゃんのほうがすごいよ～。]
//say[咲季][さ、3位ですって～！？]
//say[佑芽][おねえちゃん！？]
//say[咲季][このわたしが、3位にまで落ちるなんて……！]
//say[佑芽][おねえちゃん、普段より勉強してたよね？ならどうして……。]
//say[咲季][よくよく考えれば、わたしがずっと勉強してきた内容、試験と全然関係がなかったわ！]
//say[佑芽][確かに、なんか難しそうなことしてた！]
//say[広][頂点を目指すために、努力してたね。]
//say[咲季][そのせいで順位が落ちたんですけど……。頂点から遠ざかったじゃない！]
//say[広][まあ、すぐに結果が出るものばかりじゃないから。あ、そろそろレッスンの時間だ。]
//say[咲季][ちょっと聞いてる！？]
//say[広][ばいばい、3位の人。]
//say[咲季][ぐぬぬ……。篠澤広～～～～～！覚えてなさ～～～～～い！！！！！]

==[nonum] 参考文献

//mbibpaper[][Edward Frenkel and David Ben-Zvi. Vertex algebras and algebraic curves. 2nd revised and expanded ed. Vol. 88. Math. Surv. Monogr. Providence, RI: American Mathematical Society (AMS), 2004.]
//mbibpaper[][Victor G. Kac, Ashok K. Raina, and Natasha Rozhkovskaya. Bombay lectures on highest weight representations of infinite dimensional Lie algebras. 2nd ed. Vol. 29. Adv. Ser. Math. Phys. Hackensack, NJ: World Scientific, 2013.]
//mbibpaper[][Atsushi Matsuo. “Lectures on vertex algebras”. In: Algebraic combinatorics and the monster group. Cambridge: Cambridge University Press, 2024, pp. 3–142.]
//mbibpaper[][Loring W. Tu. An introduction to manifolds. 2nd revised ed. 2nd ed. Universitext. New York, NY: Springer, 2011.]
