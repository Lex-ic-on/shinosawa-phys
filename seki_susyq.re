= 篠澤広は超対称性量子力学でパートナーを見つけたい

「プロデューサー，何読んでるの？」

と，篠澤広が顔を覗き込んできて尋ねた．

「今は……，そうですね，結婚情報誌を読んでいたところです」

「やっと結婚してくれる気になったんだ，ね」

「仕事に使う勉強をしているだけです」

「今はそういうことにしておく」

「でもプロデューサー，パートナーに関してならわたし，詳しい．せっかくだから教えてあげるね」

そうして，彼女は唐突にホワイトボードを引っぱり出してきた．

== 調和振動子

「プロデューサーは，量子力学のことはどれくらい知ってる？」

「……量子力学，ですか？」

結婚の話題から量子力学の話題に切り替わったことに，少し戸惑うものの，いつものように，彼女の話に付き合うことにした．

「篠澤さんには何度か量子力学の話をされましたから，ある程度なら」

「それなら，大丈夫そう．じゃあ調和振動子の復習をしておこうか．時間に依存しないシュレディンガー方程式は，ハミルトニアン@<m>$\hat{H}$，固有値@<m>{E}，固有状態@<m>$\ket{\psi}$を用いて次のように表される」

//texequation[eq:schrodinger-eq]{
\hat{H}\ket{\psi} = E\ket{\psi}
//}

「特に，ハミルトニアンとして以下のものを考える．これはポテンシャルの形が調和振動子のものだね」

//texequation{
\hat{H} = \dfrac{\hat{p}^2}{2m} + \dfrac{1}{2}m\omega^2\hat{x}^2
//}

「ここで，@<m>{m}は粒子の質量，@<m>{\omega}は角振動数．このまま解くのは大変だから，@<b>{生成演算子}@<m>$\hat{a}^\dagger$と@<b>{消滅演算子}@<m>$\hat{a}$を以下のように導入する．役割としては，状態のエネルギーを上げたり，下げたりする演算子だよ」

//texequation{
    \hat{a}^\dagger := \sqrt{\dfrac{m\omega}{2\hbar}}\left(\hat{x} - i\dfrac{1}{m\omega}\hat{p}\right) \\
    \hat{a} := \sqrt{\dfrac{m\omega}{2\hbar}}\left(\hat{x} + i\dfrac{1}{m\omega}\hat{p}\right)
//}

「そうすると，ハミルトニアンはどう書き換えられる？プロデューサー」

「ええと……．@<m>$[\hat{x},\hat{p}] = \hat{x}\hat{p} - \hat{p}\hat{x} = i\hbar$であることに注意すると，以下のように書き換えられますね」

//texequation[eq:Hamiltonian]{
\hat{H} = \hbar\omega\left(\hat{a}^\dagger\hat{a} + \dfrac{1}{2} \right)
//}

「そのとおり．さすが私のプロデューサー．演算子は一般には交換律が成り立つとは限らないんだった．シュレディンガー方程式を解くには固有状態が必要．今回は天下り的だけど，以下の状態を考えて，固有値方程式を満たすことを確認する」

//texequation{
\ket{n} := \dfrac{1}{\sqrt{n!}}(\hat{a}^\dagger)^n\ket{0}
//}

「ここで，@<m>{n}は正の整数．@<m>$\ket{0}$はこれ以上消滅演算子でエネルギーを下げられない状態で，基底状態という．定義はこう」

//texequation{
\hat{a}\ket{0} = 0
//}

「じゃあ，さっき求めたハミルトニアンをこの状態に作用させると，こうなる」

//texequation{
\hat{H}\ket{n} = \hbar\omega\left( n + \dfrac{1}{2} \right)\ket{n}
//}

「式の左辺は具体的な数ですから，確かに固有値方程式になっていますね」

「証明は具体的に計算をするとできる．数学的帰納法が楽」

「式@<eq>{eq:schrodinger-eq}と比べて見ると，固有値……，エネルギー固有値はわかりやすく添字を付けて@<m>{E_n}と書くと次のようになるね」

//texequation{
E_n = \hbar\omega\left( n + \dfrac{1}{2} \right)
//}

「ここまでは普通の量子力学の話．大丈夫？」

「はい．今のところは大丈夫です」

「それならよかった．じゃあ，次の話題に進む，よ」

== 超対称量子力学の導入

「じゃあ，本題．超対称量子力学の話をする．物理学においては，対称性というのがとても大切」

「超対称量子力学……?はじめて聞きました．どのようなものなのですか？」

「……ふふ」

「プロデューサー，いつにもなく積極的」

「じゃあまず，超対称量子力学とは何かについて説明する」

「でも，その前に対称性について説明する．対称性というのは，簡単に言うと何かを変換した時に変わらない性質のことを言う．例えば，正方形は@<m>{90^\circ}回転させても初めと変わらない．だから@<m>{90^\circ}の回転に関する対称性がある．他に何か思い浮かぶ？」

「正方形をひっくり返しても初めと変わらないので，反転に関する対称性もありますね」

「正解．物理学で大事なのは物理法則の対称性．例えば，時間を変えても変わらない，時間並進対称性が考えている対象にあればエネルギー保存則が導かれる」

「対称性というものが物理学では重要になるんですね」

「そう．超対称性というのは，二つの異なる種類の粒子であるボース粒子とフェルミ粒子の入れ替えに対する対称性」

「ボース粒子……ですか？」

「その二つの粒子について説明する．粒子にはスピンという性質がある．粒子という球があって，それが自転しているような時の回転の大きさがスピンの大きさに対応する．と考えればいい，かな」

「スピンの大きさは何でもいいわけじゃなくて，@<m>{\hbar}を単位として整数@<m>{n = 0,1,2,\dots}か半整数@<m>{n = 1/2,3/2,\dots}しか取り得ない．スピンの大きさが整数の整数スピンを持つ粒子をボース粒子，半整数スピンを持つ粒子をフェルミ粒子と呼ぶよ」

「例えば，スピン@<m>{1/2}のフェルミ粒子の例としては，電子やクォークがある．これらは自然界で物質を構成する役割がある．一方で，スピン@<m>{1}のボース粒子の例としては，光子やグルーオンが挙げられるよ」

「超対称性はボース粒子とフェルミ粒子の入れ替えに対する対称性だった．超対称性は，粒子の入れ替えを通じて粒子の役割，さっき言ったものだと物質と力という異なる概念に接点を与えることができる」

「超対称性理論は色々な研究が進んでいるけれど，今回は量子力学に超対称性という対称性を考えることで得られる内容について説明する」

「それじゃあ，具体的な話に戻る．式@<eq>{eq:Hamiltonian}は，生成・消滅演算子の定義と@<m>$[\hat{x},\hat{p}] = i\hbar$から得られる式，@<m>$[\hat{a},\hat{a}^\dagger] = 1$を用いて変形すると，次のようになる」

//texequation[eq:Hamiltoniantrans]{
    \hat{H}
     & = \hbar\omega\left(\hat{a}^\dagger\hat{a} + \dfrac{1}{2} \right)                   \\
     & =\hbar\omega\left(\hat{a}^\dagger\hat{a} + \dfrac{1}{2}[\hat{a},\hat{a}^\dagger] \right) \\
     & = \dfrac{1}{2}\hbar\omega\left(\hat{a}\hat{a}^\dagger + \hat{a}^\dagger\hat{a}\right)    \\
     & = \dfrac{1}{2}\hbar\omega\{\hat{a}, \hat{a}^\dagger\}
//}

「ここで，反交換関係@<m>$\{\hat{A}, \hat{B}\} := \hat{A}\hat{B} + \hat{B}\hat{A}$を用いた，よ」

「実は，超対称量子力学はハミルトニアンが次のように書かれるものを扱う」

//texequation{
\hat{H} = \dfrac{1}{2}\{\hat{Q}, \hat{Q}^\dagger\}
//}

「式@<eq>{eq:Hamiltoniantrans-4}と似ていますね．同じものなのですか？」

「確かに形は似ているけど，決定的な違いがある．@<m>$\hat{Q}$は@<b>{超対称電荷}と呼ばれる演算子で，さっき出てきた生成消滅演算子とは違って冪零性@<m>${\hat{Q}}^2 = 0 = \left(\hat{Q}^\dagger\right)^2$を満たす」

「同じことだけど，反交換関係を用いて書くと次のようにも書ける」

//texequation{
\left\{\hat{Q}, \hat{Q}\right\} = 0 = \left\{\hat{Q}^\dagger, \hat{Q}^\dagger\right\}
//}

「なるほど．確かに違っていますね．ではなぜこのようなハミルトニアンを考える必要があるのでしょうか」

「いい質問．実は，このように書くことができるハミルトニアンは多くの特別な性質を持つ．少し休憩してからその特徴について説明する，ね」

== 超対称量子力学の特徴

「それじゃあプロデューサー，準備はいい？」

「私も暇なわけではないのですが……．まあ，いいでしょう．それで，どのような特徴があるのですか？」

「まず，超対称量子力学ではいかなる状態のエネルギーも負の値を取らない」

「これを確かめるために@<m>$\hat{H}\ket{\psi} = E\ket{\psi}$を満たす状態@<m>$\ket{\psi}$におけるハミルトニアンの期待値を考える．すると」

//texequation{
    2E = 2\mel{\psi}{\hat{H}}{\psi}
     & = \mel{\psi}{\{\hat{Q}, \hat{Q}^\dagger\}}{\psi}                  \\
     & = \mel{\psi}{\hat{Q}^\dagger\hat{Q} + \hat{Q}\hat{Q}^\dagger}{\psi}     \\
     & = \|\hat{Q}\ket{\psi}\|^2 + \|\hat{Q}^\dagger\ket{\psi}\|^2 \geq 0
//}

「と書けるから，@<m>{E \geq 0}が得られる．等号が成り立つのは」

//texequation{
\|\hat{Q}\ket{\psi}\|^2 + \|\hat{Q}^\dagger\ket{\psi}\|^2 = 0
//}

「このように書けるとき．でも今は@<m>$\|\hat{Q}\ket{\psi}\|^2 \geq 0,\quad \|\hat{Q}^\dagger\ket{\psi}\|^2 \geq 0$だから，等号が成り立つのは@<m>$\|\hat{Q}\ket{\psi}\|^2 = 0$かつ@<m>$\|\hat{Q}^\dagger\ket{\psi}\|^2 = 0$のとき，つまり次の場合に限られる」

//texequation{
\hat{Q}\ket{\psi} = 0 = \hat{Q}^\dagger\ket{\psi}
//}

「具体的な話はまた後で見ていくことにして，今は他の性質も見ていく．二つめの特徴として，超対称量子力学のエネルギー固有状態は@<bou>{ほとんど}縮退している」

「さっきと同じ状態@<m>$\ket{\psi}$の集合を考える．まずはエネルギー固有値@<m>{E}が正の場合を考えてみよう．すると，」

//texequation{
\{\hat{Q}, \hat{Q}^\dagger\}\ket{\psi} = 2E\ket{\psi}
//}

「が成り立つから」

//texequation{
\{\hat{c}, \hat{c}^\dagger\} = 1 , \qquad \hat{c} = \dfrac{\hat{Q}}{\sqrt{2E}}
//}

「を満たすような演算子@<m>$\hat{c}$を定義できる．ここで，@<m>$\hat{c}$は@<m>$\hat{c}^2 = 0 = \left(\hat{c}^\dagger\right)^2$を満たす．さっき考えた調和振動子のときは，状態に何個も生成演算子を作用させることができた」

「そうでした．確かこのように書けたのですね」

//texequation{
\ket{n} := \dfrac{1}{\sqrt{n!}}(\hat{a}^\dagger)^n\ket{0}
//}

「そう．でも今考えている演算子だと，@<m>$\left(\hat{c}^\dagger\right)^2 = 0$だから，2回作用させると0になってしまう．だから意味のある状態としては，」

//texequation{
\hat{c}\ket{0} = 0, \qquad \ket{1} = \hat{c}^\dagger\ket{0}
//}

「この式を満たすような状態@<m>$\ket{0},\ket{1}$しか考えられない．この状態は次も満たすことが簡単に確かめられる」

//texequation{
\hat{c}^\dagger\ket{1} = 0, \qquad  \ket{0} = \hat{c}\ket{1}
//}

「なるほど．まとめると次のように書けますか」

//image[fig1][]

「うん．そうなるよ」

「状態@<m>$\ket{0}$が次で与えられるとする」

//texequation{
\hat{H}\ket{0} = E\ket{0}
//}

「このとき，状態@<m>$\ket{1}$がどのような固有値方程式を満たすのかを考える」

//texequation{
    \hat{H}\ket{1}
     & = \hat{H}\hat{c}^\dagger\ket{0}                                     \\
     & = \hat{c}^\dagger\hat{H}\ket{0} \qquad (∵ [\hat{H}, \hat{c}^\dagger] = 0) \\
     & = \hat{c}^\dagger E \ket{0}                                         \\
     & = E \ket{1}
//}

「すると，結局同じエネルギー固有値を持つ状態になることが分かる．つまり@<m>{E}が0ではないすべてのエネルギー固有状態には少なくとも二つ，同じ固有値を持つものがあることが分かる．このような時，縮退しているというんだった」

「なるほど．ではエネルギー固有値が0である場合にはどのような結果が得られるのですか」

「今日のプロデューサーは積極的で嬉しい．超対称量子力学ではどんな状態のエネルギーも負の値を取らなかったから，@<m>{E=0}が一番小さいエネルギー固有値で，そのような固有値を持つ状態が基底状態になる．今，その状態を@<m>$\ket{\Omega}$と書くことにすると，この状態はこのような式を満たす」

//texequation{
\hat{c}\ket{\Omega} = 0 = \hat{c}^\dagger\ket{\Omega}
//}

「見てきたように，エネルギーが0か，そうじゃないかで様子が変わってくるのが面白い．本当は基底状態の存在の有無が超対称性が自発的に破れるかどうかに関わってきたり，色々面白い話が続くけど，ここでは割愛．その代わりに具体的な計算をしてみる」

== 超対称パートナーポテンシャル

「ところで，初めはパートナーの話について詳しいということでしたが，その話はどこに行ってしまったのですか？」

「その話もそろそろ出てくる．超対称量子力学は，パートナーを見つけるための学問と言っても過言ではない」

「そんな俗っぽい学問が存在するはずないでしょう」

「詳しく知りたくて仕方ないと思う．首を長くして待ってて」

「ここでも天下り的に具体的な超対称電荷の形を与えて，それについて考えてみるよ．計算が大変だから，これ以降では@<m>{\hbar = 1 = m}として計算していくことにする」

//texequation{
    \hat{Q}^\dagger := \left(\hat{p} - i\dv{h(x)}{x}\right)\otimes
    \begin{pmatrix}
        0 & 0 \\
        1 & 0
    \end{pmatrix}
    =
    \begin{pmatrix}
        0                        & 0 \\
        \hat{p} - i\dv{h(x)}{x} & 0
    \end{pmatrix}
    \\
    \hat{Q} := \left(\hat{p} + i\dv{h(x)}{x}\right)\otimes
    \begin{pmatrix}
        0 & 1 \\
        0 & 0
    \end{pmatrix}
    =
    \begin{pmatrix}
        0 & \hat{p} + i\dv{h(x)}{x} \\
        0 & 0
    \end{pmatrix}
//}

「ここで，@<m>$\hat{p} = -i\dv{}{x}$は運動量演算子で，@<m>{h(x)}は実関数．式の途中で@<m>{\otimes}という記号が出てくるけど，これはテンソル積．だけどあまり話の内容には関係ないから，気にしないでいい」

「この超対称電荷が冪零性を満たすことは行列の計算をすればすぐに確かめられるから，ハミルトニアンを計算したいんだけど，どうなる？プロデューサー」

「これも計算をしていけば求まると思います．具体的にはこのようになるでしょうか」

//texequation{
    \hat{H}
     & = \dfrac{1}{2}\left(\hat{Q}\hat{Q}^\dagger + \hat{Q}^\dagger\hat{Q}\right)            \\
     & = \dfrac{1}{2}\left[
        \begin{pmatrix}
            0 & \hat{p} + i\dv{h(x)}{x} \\
            0 & 0
        \end{pmatrix}
        \begin{pmatrix}
            0                        & 0 \\
            \hat{p} - i\dv{h(x)}{x} & 0
        \end{pmatrix}
    \right.     \notag                                                        \\
     & \qquad\qquad\qquad\qquad+
        \left.
        \begin{pmatrix}
            0                        & 0 \\
            \hat{p} - i\dv{h(x)}{x} & 0
        \end{pmatrix}
        \begin{pmatrix}
            0 & \hat{p} + i\dv{h(x)}{x} \\
            0 & 0
        \end{pmatrix}
    \right]                                                                      \\
     & = \dfrac{1}{2}\left[
        \begin{pmatrix}
            \left(\hat{p} + i\dv{h(x)}{x}\right)\left(\hat{p} - i\dv{h(x)}{x}\right) & 0 \\
            0                                                                          & 0
        \end{pmatrix}
    \right.                                                            \notag \\
     & \qquad\qquad\qquad\qquad+
        \left.
        \begin{pmatrix}
            0 & 0                                                                          \\
            0 & \left(\hat{p} - i\dv{h(x)}{x}\right)\left(\hat{p} + i\dv{h(x)}{x}\right)
        \end{pmatrix}
        \right]
    \\
     & = \dfrac{1}{2}\left[
        \begin{pmatrix}
            \hat{p}^2 + \left(\dv{h(x)}{x}\right)^2 & 0                                        \\
            0                                        & \hat{p}^2 + \left(\dv{h(x)}{x}\right)^2
        \end{pmatrix}
    \right.                                                            \notag \\
     & \qquad\qquad\qquad\qquad+
        \left.
        \begin{pmatrix}
            -i\left(\hat{p}\dv{h(x)}{x} - \dv{h(x)}{x}\hat{p}\right) & 0                                                         \\
            0                                                          & i\left(\hat{p}\dv{h(x)}{x} - \dv{h(x)}{x}\hat{p}\right)
        \end{pmatrix}
        \right]
//}

「そう．ハミルトニアンが適当な状態@<m>$\ket{\psi}$に作用することを考えると」

//texequation{
\hat{p}\left(\dv{h(x)}{x}\ket{\psi}\right) = \left(\hat{p}\dv{h(x)}{x}\right)\ket{\psi} + \dv{h(x)}{x}\left(\hat{p}\ket{\psi}\right)
//}

「こうなるから，この式を用いてもう少し簡単に書くとこのように書ける，ね」

//texequation{
    \hat{H}
     & = \dfrac{1}{2}
    \begin{pmatrix}
        \hat{p}^2 + \left(\dv{h(x)}{x}\right)^2 - \dv[2]{h(x)}{x} & 0                                                           \\
        0                                                           & \hat{p}^2 + \left(\dv{h(x)}{x}\right)^2 + \dv[2]{h(x)}{x}
    \end{pmatrix}
//}

「ハミルトニアンが，@<m>{2 \times 2}行列のように書けるから，作用させる状態，あるいは状態を位置表示した波動関数@<m>$\bm{\psi}(x)$も2成分で書くべき．だから」

//texequation{
\bm{\psi}(x)
    :=
    \begin{pmatrix}
        \psi(x) \\
        \phi(x)
    \end{pmatrix}
//}

「と書くことにする．すると，簡単にするために」

//texequation{
    \hat{H}_\mp
     & := \dfrac{1}{2}\left(\hat{p}^2 + \left(\dv{h(x)}{x}\right)^2 \mp \dv[2]{h(x)}{x}\right) \\
     & := \dfrac{1}{2}\left(\hat{p}^2 + V_{\mp}(x)\right)
//}

「このように定義しておくと，ハミルトニアンの一般的な形のように見える．対応する固有値を@<m>{E_\mp}と書いておくと固有値方程式は次のように書ける」

//texequation{
    \hat{H}_-\psi(x) = E_-\psi(x) \\
    \hat{H}_+\phi(x) = E_+\phi(x)
//}

「一つのハミルトニアンを計算していたはずなのに，式が二つ出てきた．これが話のミソ」

「ここで，@<m>$V_{\mp}$は同じハミルトニアンから出てきた以上，無関係というわけじゃなくて，わたしたちみたいに密接な関係がある．だから@<m>$V_{\mp}$を，@<b>{超対称パートナーポテンシャル}と呼ぶ」

「このことを言うためにわざわざ講義を開いたのですか？」

「もちろん．わたしたちの将来の話はとても，大事」

== 具体例

「ここまできたら具体例を確認できる．超対称パートナーポテンシャルが具体的にどのような関係があるかもここで見ていく，よ」

「ここでは，@<m>{\hbar}と@<m>{m}を復活させてみる」

//texequation{
\hat{H}_\mp = \dfrac{1}{2m}\left(\hat{p}^2 + V_{\mp}(x)\right) , \qquad V_{\mp}(x) = \left(\dv{h(x)}{x}\right)^2 \mp \hbar\dv[2]{h(x)}{x}
//}

「例えば，@<m>$h(x) = \frac{1}{2}m\omega x^2$とする．このとき，」

//texequation{
    \dv{h(x)}{x} = m\omega x \\
    \dv[2]{h(x)}{x} = m\omega
//}

「となるから，ハミルトニアンは」

//texequation{
\hat{H}_\mp = \dfrac{\hat{p}^2}{2m} + \dfrac{1}{2}m\omega^2x^2 \mp \dfrac{1}{2}\hbar\omega
//}

「となる．この形に近いものに見覚えはない？プロデューサー」

「ええと……．あっ，第一項と第二項は調和振動子のハミルトニアンですね」

「そう．そこに定数項@<m>$\mp\frac{1}{2}\hbar\omega$を付け加えたものになる．だから調和振動子における生成消滅演算子を使うと，それぞれのハミルトニアンは簡単に書ける」

//texequation{
    \hat{H}_- = \hbar\omega\hat{a}^\dagger\hat{a} \\
    \hat{H}_+ = \hbar\omega\left(\hat{a}^\dagger\hat{a} + 1\right)
//}

「このハミルトニアンの固有値は簡単に求められて，これもそれぞれ書くと次のように書けるね」

//texequation{
    E_- = n\hbar\omega \qquad (n=0,1,2,\dots) \\
    E_+ = (m+1)\hbar\omega \qquad (m=0,1,2,\dots)
//}

「エネルギー準位を図で表すと様子がわかりやすいから，@<img>{fig2}に描いておく」

//image[fig2][超対称パートナーポテンシャルのエネルギー準位図]

「ここから何が分かるのですか？」

「さっき，わたしが言ったこと．超対称量子力学では@<m>{E=0}以外のエネルギー固有状態は縮退しているんだった」

「確かに，@<m>{E_- = n\hbar\omega}と@<m>{E_+ = (m+1)\hbar\omega}は0でない@<m>{n}に対して同じ値を取っていますね」

「そう．そして，ほとんど縮退しているということは，エネルギー準位はとても似ている．だから，一方のことをよく知れば，もう一つのこともよく知ることができる」

「──なるほど．確かに，パートナーが大事と言った意味が分かりました．自分の担当しているアイドルがホラ吹きでなくてよかったです」

「ですが，何と言うべきか，今回は同じ調和振動子のハミルトニアンの値に定数項がついていただけですから，同じような形をしているのは当たり前といえば当たり前にも感じてしまいます」

「ふふ．そう思う？プロデューサー．じゃあ，最後に面白い例を見てみる，ね」

「相変わらず唐突だけど，次のような形の@<m>$\dv{h(x)}{x}$を考える」



//texequation[eq:54]{
\dv{h(x)}{x} = \hbar\tan(x) \qquad \left(-\dfrac{\pi}{2} < x < \dfrac{\pi}{2}\right)
//}

「@<m>{h(x)}そのものじゃなくて，その一階微分を考えていることに，注意．すると」

//texequation{
\dv[2]{h(x)}{x} = \hbar\dfrac{1}{\cos^2(x)} \qquad \left(-\dfrac{\pi}{2} < x < \dfrac{\pi}{2}\right)
//}

「だから，超対称パートナーポテンシャルは次のようになる」

//texequation[eq:56]{
    \hat{H}_-
     & = \dfrac{\hat{p}^2}{2m} + \dfrac{\hbar^2}{2m}\left(\tan^2(x) - \dfrac{1}{\cos^2(x)}\right)                     \\
     & =
    \begin{cases}
        \dfrac{\hat{p}^2}{2m} - \dfrac{\hbar^2}{2m} \qquad \left(-\dfrac{\pi}{2} < x < \dfrac{\pi}{2}\right) \\
        +∞ \qquad \left(|x| > \dfrac{\pi}{2}\right)
    \end{cases}                           \\
    \hat{H}_+
     & = \dfrac{\hat{p}^2}{2m} + \dfrac{\hbar^2}{2m}\left(\tan^2(x) + \dfrac{1}{\cos^2(x)}\right)                                              \\
     & = \dfrac{\hat{p}^2}{2m} + \dfrac{\hbar^2}{2m}\left(\dfrac{2}{\cos^2(x)} - 1\right) \qquad \left(-\dfrac{\pi}{2} < x < \dfrac{\pi}{2}\right)
//}

「ええと，少しわかりにくいから，各々のハミルトニアンのポテンシャルを@<img>{fig3}と@<img>{fig4}に描いたよ」

//image[fig3][@<m>$\hat{H}_-$のポテンシャル@<m>$V_-(x)$]

//image[fig4][@<m>$\hat{H}_+$のポテンシャル@<m>$V_+(x)$]

「ここで一つ注意．実は今回は@<m>$\hat{H}_-$のポテンシャルが無限に深い井戸型ポテンシャルになるように@<m>$\dv{h(x)}{x}$の値と，その範囲を決めていたから，正確には式@<eq>{eq:56}を決めてから式@<eq>{eq:54}を決めておくべきだったかもしれない」

「それはともかく，@<m>$\hat{H}_-$のポテンシャルは無限に深い井戸型ポテンシャル，厳密にはそれを定数項を引いたものだから，その固有値はよく知られていて，次のようになる」

//texequation{
E_- = \dfrac{\hbar^2}{2m}\left((n+1)^2-1\right) \qquad (n=0,1,2,3,\dots)
//}

「@<m>$\hat{H}_+$のポテンシャルは……よくわからない形をしている．だけど，この二つのハミルトニアンのポテンシャルはパートナーの関係にあるから，形も簡単に推測できて，@<m>{E_-}の方で@<m>{E=0}の値を取りそうだから，@<m>{E_+}には@<m>{E=0}となるようなものはなくて，それ以外は同じ形をしていそう．つまり」

//texequation{
E_+ = \dfrac{\hbar^2}{2m}((m+2)^2-1) \qquad (m=0,1,2,3,\dots)
//}

「となることが予想できる.おまけにエネルギー準位図（@<img>{fig5}）も描いておく，ね」

//image[fig5][無限に深い井戸型ポテンシャルとPöschl-Tellerポテンシャルのエネルギー準位図]

「そうそう，ポテンシャル@<m>$V_+(x) = \frac{\hbar^2}{2m}\left(\frac{2}{\cos^2(x)} - 1\right)$はPöschl-Tellerポテンシャルと呼ばれる，よ」

「この二つのポテンシャルは，さっきの調和振動子の例と違って，一見無関係なポテンシャルに見える」

「でも，超対称パートナーポテンシャルの関係にあるから，片方のポテンシャル，今回は無限に深い井戸型ポテンシャルのことをよく知れば，もう一方のポテンシャルのこともよく知ることができる」

「なるほど．確かに，超対称パートナーポテンシャルであることを知らなければ，無限に深い井戸型ポテンシャルとPöschl-Tellerポテンシャルの関係を見つけるのは難しそうですし，Pöschl-Tellerポテンシャルのエネルギー固有値を計算するのは難しそうです」

「そう．だから，超対称量子力学はパートナーを見つけるための学問」

== 終幕

「今日はここまで．パートナーのことについては詳しくなった？」

「色々な話が聞けて楽しかったです．ありがとうございました」

「今回はパートナーのことについて話したけど，超対称量子力学は他にも色々面白い話があるから，いつでも教えてあげる，よ」

「ええ．ありがとうございます」

「ですが，そのお話が聞けるのはずいぶんと遠くなりそうですね」

積み重なる書類の山を見つめながら，そう呟いた．

==[nonum] 参考文献

//mbibpaper[][坂本眞人，量子力学から超対称性へ : 超対称性のエッセンスを捉える, サイエンス社, (2012.12)]
//mbibpaper[][David Tong, @<i>{supersymmetric quantum mechanics}, @<href>{http://www.damtp.cam.ac.uk/user/tong/susy.html}]
//mbibpaper[][江口徹,位相的場の理論とその周辺，@<href>{https://www2.yukawa.kyoto-u.ac.jp/~masashi.hamanaka/topofie.pdf}(1999)]
