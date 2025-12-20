= 広の愛する数式

== 始まり

//say[佑芽][広ちゃんって物理とか数学が好きなんだよね？]

//say[広][うん.]

//say[佑芽][好きな数式とかってあるの？]

//say[広][…….]

//say[佑芽][…….]

//say[千奈][…….]

//say[広][ある.]

//say[千奈][5分くらい考えていらっしゃいましたわね…….]

//say[広][いっぱいありすぎて, どれから話したらいいか考えてた.]

//say[佑芽][そんなにいっぱいあるの！？]

//say[広][じゃあ今日はせっかくだから, 物理に出てくるおもしろい数式の話をしようか.]

//say[千奈][パンドラの匣を開けてしまいましたわ…….]

== 微分形式とベクトル解析

=== ストークスの定理

//note{
//texequation[eq:stokes]{
\int_{\partial M}\omega=\int_Md\omega,
//}
//}

//say[広][まずは基礎的な物理数学からひとつ. 今日の話ではこんなふうに枠付きでわたしの好きな式を, 基本的に簡単なものから難しいものへと順に紹介していく@<fn>{fn1}. 等式@<eq>{eq:stokes}を見ると, 多様体@<m>{M}と微分形式@<m>{\omega}の内積を@<m>{(M,\omega)\coloneqq\displaystyle\int_M\omega}で定義したとき, @<m>{(\partial M,\omega)=(M,d\omega)}, つまり@<m>{\partial}が@<m>{d}の随伴作用素になっているということができる. また, @<m>$\displaystyle\int_a^b\frac{df(x)}{dx}dx=f(b)-f(a)$の一般化になっているので, 微分形式@<m>{d\omega}の“不定積分”の一つが@<m>{\omega}で与えられる, と見ることもできる. 積分定数に当たるものも存在して, @<m>{d\omega}の一般の“不定積分”は@<m>{\omega+d\alpha}となる. ただしこれは領域が単連結な場合であって, そうでない場合は@<m>{\alpha}は一般には局所的にしか定義されない.]

=== 音楽同型

//note{
//texequation{
    \sharp:T_p^\ast M\to T_pM,\\
    \flat:T_pM\to T_p^\ast M.
//}
//}

//say[広][つぎはmusical isomorphism. これは名前と記号の使い方がおもしろい.]

//say[佑芽][ミュージカル？　演劇の？]

//say[広][この場合のmusical は単に「音楽」と訳した方がいい. 日本語だとmusical isomorphism は「音楽同型」.]

//say[佑芽][音楽に関係あるの？]

//say[広][中身はそんなに関係ない. ただ, ベクトル場やテンソル場の添字の上げ下げに関係するから, 上げる方に@<m>{\sharp}, 下げる方に@<m>{\flat}という名前がついてる.]

//say[千奈][とってもおしゃれですわ〜.]

//beginsay[広]
ふふ, わたしもそう思う. やってることは単純で, 
//texequation{
  \sharp:V_\mu dx^\mu\mapsto V^\mu\frac\partial{\partial x^\mu}=g^{\mu\nu}V_{\nu}\frac\partial{\partial x^\mu},\\
  \flat:V^\mu\frac\partial{\partial x^\mu}\mapsto V_\mu dx^\mu=g_{\mu\nu}V^\nu dx^\mu.
//}
のように1-形式とベクトル場のあいだに計量を介した線型同型写像がある, というだけの話. でもこの同型写像にmusical isomorphism という名前をつけたセンスはすごい, ね.
//endsay

===[nonum] 参考文献

//mbibpaper[][M. スピヴァック[著\], 齋藤正彦[訳\], 『多変数の解析学』第5章§3, 東京図書, 1972年.]

=={量子力学不確定性関係} 量子力学（不確定性関係）

//note{
//texequation[eq:uncertainty_relation_Fourier]{
\int x^2|\psi(x)|^2dx\int\omega^2|\tilde\psi(\omega)|^2d\omega\ge\frac14,
//}
ただし,
//texequation[eq:Fourier_transform]{
\quad\tilde\psi(\omega)\coloneqq\frac1{\sqrt{2\pi}}\int e^{-i\omega x}\psi(x)dx,
//}
//texequation[eq:wave_function_normalisation]{
    \int|\psi(x)|^2dx=1.
//}
//}

//beginsay[広]
つぎは量子力学の不確定性関係の話. 一般には, 
//texequation[eq:uncertainty_relation_physical]{
  \Delta x\Delta p\ge\frac\hbar 2,
//}
の形で知られている. @<eq>{eq:uncertainty_relation_Fourier}と@<eq>{eq:uncertainty_relation_physical}の関係はあとで話す. まず@<eq>{eq:uncertainty_relation_Fourier}を証明する.
//endsay

//say[佑芽][不確定性原理って証明できるものなの？]

//beginsay[広]
いい質問. 答えはYes. @<b>$不確定性関係は, 運動量と波数の関係@<m>{p=\hbar\omega}とフーリエ変換の式@<eq>{eq:Fourier_transform}, および波動関数の規格化条件@<eq>{eq:wave_function_normalisation}を認めれば純粋に数学的な操作で証明できる.$

最初に, 
//texequation{
  \int d\omega\,\omega^2|\tilde\psi(\omega)|^2
  =&\frac1{2\pi}\int d\omega\,\omega^2\int dx\,e^{-i\omega x}\psi(x)\int dy\,e^{i\omega y}\psi^*(y)\\
  =&\frac1{2\pi}\int d\omega\int dx\,\frac1{-i}\frac\partial{\partial x}\left(e^{-i\omega x}\right)\psi(x)\int dy\,\frac1i\frac\partial{\partial y}\left(e^{i\omega y}\right)\psi^*(y)\\
  =&\frac1{2\pi}\int d\omega\int dx\,e^{-i\omega x}\frac d{dx}\psi(x)\int dy\,e^{i\omega y}\frac d{dy}\psi^*(y)\\
  =&\int\left|\frac d{dx}\psi(x)\right|^2dx,
//}
なので, 
//texequation{
  \int x^2|\psi(x)|^2dx\int\left|\frac d{dx}\psi(x)\right|^2dx,
//}
を下からおさえればいい. これはコーシー・シュワルツの不等式が使える形. つまり, @<m>{s}の二次不等式
//texequation{
  0\le&\int\left|x\psi(x)+s\frac d{dx}\psi(x)\right|^2dx\\
  =&\int x^2|\psi|^2dx+s\int x\left(\psi\frac{d\psi^*}{dx}+\psi^*\frac{d\psi}{dx}\right)dx+s^2\int\left|\frac{d\psi}{dx}\right|^2dx,
//}
が任意の実数@<m>{s}に対してなりたつから, 
//texequation{
  0\ge\left(\int x\frac d{dx}|\psi(x)|^2dx\right)^2-4\int x^2|\psi(x)|^2dx\int\left|\frac d{dx}\psi(x)\right|^2dx.
//}
つまり, 
//texequation[eq:uncertainty_relation_coordinate]{
  \int x^2|\psi(x)|^2dx\int\left|\frac d{dx}\psi(x)\right|^2dx&\ge\frac14\left(\int x\frac d{dx}|\psi(x)|^2dx\right)^2\\
  &=\frac14\left(-\int|\psi(x)|^2dx\right)^2\\
  &=\frac14.
//}
これで@<eq>{eq:uncertainty_relation_Fourier}が示せた.等号成立条件は, ある@<m>{s}に対して
//texequation{
  x\psi(x)+s\frac d{dx}\psi(x)=0,
//}
つまり, @<m>{\psi(x)}がガウシアンの形
//texequation{
  \psi(x)\propto\exp\left(-\frac{x^2}{2s}\right),
//}
になるときであることもわかる.

全く同様の議論で, より一般的なエルミート作用素@<m>{A}と@<m>{B}に対する@<b>{ロバートソンの不等式}

//note{
//texequation[eq:Robertson_inequality]{
  \langle A^2\rangle_\psi\langle B^2\rangle_\psi\coloneqq\int\psi(x)^\dagger A^2\psi(x)dx\int\psi(x)^\dagger B^2\psi(x)dx\ge\frac14\langle i[A,B]\rangle_\psi^2,
//}
//}
を示すことができる. さっきと同様に@<m>{s}の絶対2次不等式
//texequation{
  0\le&\int\left|A\psi+isB\psi\right|^2\\
  =&\int\left|A\psi\right|^2dx+s\int\psi^\dagger i\left[A,B\right]\psi dx+s^2\int\left|B\psi\right|^2dx,
//}
から, 
//texequation{
  0\ge\langle i[A,B]\rangle_\psi^2-4\langle A^2\rangle_\psi\langle B^2\rangle_\psi,
//}
つまり@<eq>{eq:Robertson_inequality}が言える. @<m>{B}の前に因子@<m>{i}を補っておくのがポイントで, こうすることで@<m>{A}と@<m>{B}の交換子に@<m>{i}をかけたエルミート作用素@<m>{i[A,B]}がうまく式に出てくる. もちろん@<m>$A=x, B=\displaystyle\frac1i\frac d{dx}$とすれば@<eq>{eq:uncertainty_relation_coordinate}を再現する.

最後に@<eq>{eq:uncertainty_relation_Fourier}と@<eq>{eq:uncertainty_relation_physical}の関係を説明する. まず, @<m>$\psi(x)\mapsto e^{-i\omega_0x}\psi(x-x_0)$という変換によって, 規格化条件@<eq>{eq:wave_function_normalisation}を変えずに@<m>{\langle x\rangle=\langle\omega\rangle=0}をみたすようにできる. このとき
//texequation{
  \Delta x\Delta\omega=\sqrt{\langle x^2\rangle}\sqrt{\langle\omega^2\rangle}\ge\frac12.
//}
あとは@<m>{p=\hbar\omega}とすれば@<eq>{eq:uncertainty_relation_physical}が得られる. ……ふふ.
//endsay

//say[佑芽][どうしたの？]

//say[広][不確定性関係は量子論の“ままならなさ”をあらわしている. 非可換なふたつの作用素の片方の値を確定させようとするともう一方の値の分散は限りなく大きくなる. まるで, わたしが完璧なダンスを目指して必死に練習したら, 今度は歌がボロボロになる, みたいに.]

===[nonum] 参考文献

//mbibpaper[][原田勲, 杉山忠男, 講談社基礎物理学シリーズ『量子力学I』4.2節, 5.3節, 2009年.]

=={熱力学マクスウェルの関係式} 熱力学（マクスウェルの関係式）

//note{
//texequation[eq:maxwell_rel1]{
+\left(\frac{\partial T}{\partial V}\right)_S=-\left(\frac{\partial P}{\partial S}\right)_V,
//}
//texequation{
+\left(\frac{\partial T}{\partial P}\right)_S=+\left(\frac{\partial V}{\partial S}\right)_P,
//}
//texequation{
+\left(\frac{\partial S}{\partial V}\right)_T=+\left(\frac{\partial P}{\partial T}\right)_V,
//}
//texequation[eq:maxwell_rel2]{
-\left(\frac{\partial S}{\partial P}\right)_T=+\left(\frac{\partial V}{\partial T}\right)_P.
//}
//}

//say[広][つぎは熱力学にでてくるマクスウェルの関係式の話をする. ……上の4本の式は一行に収めたかったけど無理だった. ままならない, ね.]

//say[千奈][縦に並べて書いたほうがかえってみやすいので大丈夫ですわ！]

//say[広][ふふ, ありがとう.]

//say[佑芽][@<m>{P}とか@<m>{V}とか@<m>{T}とかがでてくるけど, これってあたしたちが知ってる圧力とか体積とか温度のこと？]

//beginsay[広]
うん. ちなみに@<m>{S}はエントロピー. これらの式の証明はどの熱力学の教科書にも載ってるからいちいちここでは繰り返さないけど, 大事なのはそれぞれの式を導くときに出てくる4つの熱力学関数, 内部エネルギー@<m>{U}, ヘルムホルツエネルギー@<m>{F}, ギブズエネルギー@<m>{G}, エンタルピー@<m>{H}がルジャンドル変換でつながっていて, そういう場合に共軛な変数の組, ここでは@<m>{(P,V)}と@<m>{(T,S)}のあいだにこういうきれいな関係式がなりたつ, ということ. ちなみに@<eq>{eq:maxwell_rel1}-@<eq>{eq:maxwell_rel2}は実は一本の式で表せて, 
//texequation[eq:maxwell_relation_jacobian]{
  \frac{\partial(T,S)}{\partial(P,V)}=1,
//}
という形になる. ヤコビアンがみたすこの式とルジャンドル変換の関係はこのあと@<fn>{fn2}の解析力学の話でも出てくるから憶えておくといい.

ついでに熱力学でよく出てくる式でもうひとつおもしろいのがあるから紹介しておく. @<m>{x,y,z}に関数関係があるとき, @<b>{偏微分の循環則}

//texequation[eq:partial_derivative_cyclic_rule]{
\left(\frac{\partial x}{\partial y}\right)_z\left(\frac{\partial y}{\partial z}\right)_x\left(\frac{\partial z}{\partial x}\right)_y=-1,
//}

がなりたつ. 常微分のときは
//texequation{
  \frac{dx}{dy}\frac{dy}{dz}\frac{dz}{dx}=1,
//}
だったけど, @<eq>{eq:partial_derivative_cyclic_rule}はそれと対照的でおもしろい. 証明はいくつかやり方があるけど, たとえば関数関係を
//texequation{
  f(x,y,z)=0,
//}
とすると, 
//texequation{
  \left(\frac{\partial x}{\partial y}\right)_z=-\frac{f_y}{f_x},\ \left(\frac{\partial y}{\partial z}\right)_x=-\frac{f_z}{f_y},\ \left(\frac{\partial z}{\partial x}\right)_y=-\frac{f_x}{f_z},
//}
となるのでこれらをかけ合わせることで@<eq>{eq:partial_derivative_cyclic_rule}がえられる. 他にも, 
//texequation{
  x=x(u,v),\ y=y(u,v),\ z=z(u,v),
//}
のように@<m>{x,y,z}を局所的に@<m>{(u,v)}の2変数で書いて, @<m>{u=u(t)}と@<m>{v=v(t)}が@<m>{z=}定数をみたしながら動くとみなすと, 
//texequation{
  \dot z=z_u\dot u+z_v\dot v,
//}
より, 
//texequation{
  \left(\frac{\partial x}{\partial y}\right)_z&=\left.\frac{\dot x}{\dot y}\right|_{\dot z=0}=\left.\frac{x_u\dot u+x_v\dot v}{y_u\dot u+y_v\dot v}\right|_{\dot z=0}=\left.\frac{z_u\left(x_u\dot u+x_v\dot v\right)}{z_u\left(y_u\dot u+y_v\dot v\right)}\right|_{\dot z=0}\\
  &=\frac{-x_uz_v\dot v+z_ux_v\dot v}{-y_uz_v\dot v+z_uy_v\dot v}=\frac{\partial(z,x)}{\partial(u,v)}\frac{\partial(u,v)}{\partial(z,y)},
//}
となるので, 同様の式をもう2つ作ってかけ合わせれば@<eq>{eq:partial_derivative_cyclic_rule}をえる.
//endsay

===[nonum] 参考文献

//mbibpaper[][清水明, 『熱力学の基礎』12.5-12.7節, 東京大学出版会, 2007年.]

== 解析力学

//beginsay[広]
つぎは解析力学の話. まずハミルトンの運動方程式の復習をする. ニュートン力学の運動方程式は多くの場合, 
//texequation{
  \ddot q=-U'(q),
//}
の形をしている. 2階の方程式のままだと扱いにくいから, これを, 

//texequation{
  \begin{cases}
  \dot q&=p,\\
  \dot p&=-U'(q),
  \end{cases}
//}


の形にする. そうするといい感じの保存量@<m>{H=H(q,p)}があって, 
//texequation[eq:Hamilton_EOM]{
  \begin{cases}
  \dot q&=\frac{\partial H}{\partial p},\\
  \dot p&=-\frac{\partial H}{\partial q},
  \end{cases}
//}
//texequation{
  H=\frac12p^2+U(q),
//}
のように書ける. これがハミルトンの運動方程式. この形式にしておくと, 一般の物理量@<m>{f(q,p)}の時間変化が, 
//texequation{
  \dot f=\frac{\partial f}{\partial q}\frac{dq}{dt}+\frac{\partial f}{\partial p}\frac{dp}{dt}=\frac{\partial f}{\partial q}\frac{\partial H}{\partial p}-\frac{\partial f}{\partial p}\frac{\partial H}{\partial q}\eqqcolon\{f,H\},
//}
というようにポアソン括弧を使って書ける, というのがハミルトンの力学の要点だった.ところで, ポアソン括弧@<m>$\{f,g\}$は変数@<m>{(q,p)}と@<m>{(f,g)}の間のヤコビアンの形
//texequation{
  \{f,g\}=\frac{\partial f}{\partial q}\frac{\partial g}{\partial p}-\frac{\partial f}{\partial p}\frac{\partial g}{\partial q}=\frac{\partial(f,g)}{\partial(q,p)},
//}
をしている. これについていくつかおもしろい話題があるから話そう.
//endsay

=== 正準変換

//note{
//texequation[eq:canonical_transformation_cond_diff_form]{
\sum_{i=1}^ndq^i\wedge dp_i=\sum_{i=1}^ndQ^i\wedge dP_i.
//}
//}

//beginsay[広]
まずは正準変換そのものと言ってもいい式. 正準変換はハミルトンの運動方程式@<eq>{eq:Hamilton_EOM}を不変にする変換, つまりポアソン括弧を不変にする変換として定義される.よって
//texequation[eq:canonical_transformation_jacobian]{
  \frac{\partial(Q,P)}{\partial(q,p)}=1,
//}
をみたす. つまり, @<m>{dq\wedge dp=dQ\wedge dP}. 多自由度になってもだいたい同じ議論で@<eq>{eq:canonical_transformation_cond_diff_form}がなりたつ. ちなみに@<eq>{eq:canonical_transformation_cond_diff_form}の両辺を@<m>$\omega\coloneqq\sum_{i=1}^ndq^i\wedge dp_i$としたときに, 体積形式
//texequation{
\frac{\omega^n}{n!}=\bigwedge_{i=1}^ndq^i\wedge dp_i,
//}
が保存される. つまり正準変換は相空間の体積を保つ.

もうひとつおもしろい式がある. 正準変換のもとでは,

//note{
//texequation[eq:canonical_transformation_relation]{
\frac{\partial Q^i}{\partial q^j}=+\frac{\partial p_j}{\partial P_i},\ \frac{\partial Q^i}{\partial p_j}=-\frac{\partial q^j}{\partial P_i},\ \frac{\partial P_i}{\partial p_j}=+\frac{\partial q^j}{\partial Q^i},\ \frac{\partial P_i}{\partial q^j}=-\frac{\partial p_j}{\partial Q^i},
//}
//}

がなりたつ. ……こんどは1行に収まった.
//endsay

//say[佑芽][@<eq>{eq:maxwell_rel1}-@<eq>{eq:maxwell_rel2}と似てる!]

//beginsay[広]
よく気づいたね. ちなみに@<eq>{eq:canonical_transformation_jacobian}も@<eq>{eq:maxwell_relation_jacobian}と似てる, ね. 似ているのにはもちろん理由がある. どちらもルジャンドル変換から導かれるから. @<eq>{eq:canonical_transformation_relation}は証明も難しくないので書いておく. まず, 
//texequation{
  dq^i\wedge dp_i=&dQ^i\wedge dP_i\\
  =&\left(\frac{\partial Q^i}{\partial q^j}\frac{\partial P_i}{\partial p_k}-\frac{\partial P_i}{\partial q^j}\frac{\partial Q^i}{\partial p_k}\right)dq^j\wedge dp_k,
//}
より, 
//texequation{
  \frac{\partial Q^i}{\partial q^j}\frac{\partial P_i}{\partial p_k}-\frac{\partial P_i}{\partial q^j}\frac{\partial Q^i}{\partial p_k}=\delta_j^k,
//}
これにたとえば@<m>$\displaystyle\frac{\partial p_k}{\partial Q^l}$をかけて縮約をとることで, 
//texequation{
  -\frac{\partial P_l}{\partial q^j}=\frac{\partial p_j}{\partial Q^l},
//}
が得られる. 他の式も同様にして示せる.
//endsay

=== ヤコビの恒等式

//note{
//texequation{
\{f,\{g,h\}\}+\{g,\{h,f\}\}+\{h,\{f,g\}\}=0.
//}
//}

//beginsay[広]
これは見た目がおもしろい. 行列や線形作用素に関するヤコビの恒等式によく似ているし, 実際に量子力学に移行するとこの式は作用素に関するヤコビの恒等式そのものになる……けど, 解析力学の段階では作用素に関する恒等式ほど成立が明らかでない. 愚直に示そうとすると微分を含む項がたくさんでてきて結構たいへん. だからここではうまいやり方をひとつ紹介する. 
//texequation{
f\star g\coloneqq\left.\left(\frac\partial{\partial q^i}\frac\partial{\partial p'_i}-\frac\partial{\partial p_i}\frac\partial{\partial q'^i}\right)f(q,p)g(q',p')\right|_{q'=q,p'=p},
//}
とおくと, 
//texequation{
f\star(g\star h)=&\left(\frac\partial{\partial q^i}\frac\partial{\partial p'_i}-\frac\partial{\partial p_i}\frac\partial{\partial q'^i}\right)f(q,p)\\
&\times\left(\frac\partial{\partial q'^k}\frac\partial{\partial p''_k}-\frac\partial{\partial p'_k}\frac\partial{\partial q''^k}\right)g(q',p')h(q'',p'')\bigg|_{q''=q',p''=p'}\bigg|_{q'=q,p'=p}\\
=&\left(\frac\partial{\partial q'^k}\frac\partial{\partial p''_k}-\frac\partial{\partial p'_k}\frac\partial{\partial q''^k}\right)\left(\frac\partial{\partial q^i}\frac\partial{\partial p'_i}-\frac\partial{\partial p_i}\frac\partial{\partial q'^i}\right)\\
&\times f(q,p)g(q',p')h(q'',p'')\bigg|_{q'=q,p'=p}\bigg|_{q''=q,p''=p}\\
=&\left(\frac\partial{\partial q^k}\frac\partial{\partial p''_k}-\frac\partial{\partial p_k}\frac\partial{\partial q''^k}\right)f\star g(q,p)h(q'',p'')\bigg|_{q''=q,p''=p}\\
=&(f\star g)\star h,
//}
より, @<m>{\star}は結合律をみたす. 一方で@<m>$\{f,g\}=f\star g=-g\star f=(1/2)(f\star g-g\star f)$なので, 結合性よりヤコビの恒等式がなりたつ.この方法はモヤル積@<mbib>{bib_analytic_mechanics3}を参考にわたしが発見した.
//endsay

=== オイラーのコマと南部括弧
//note{
//texequation[eq:Euler_top]{
    \dot L_x=\frac{I_y-I_z}{I_yI_z}L_yL_z,\ \dot L_y=\frac{I_z-I_x}{I_zI_x}L_zL_x,\ \dot L_z=\frac{I_x-I_y}{I_xI_y}L_xL_y,
//}
//}

//beginsay[広]
これも見た目がおもしろい……ふふ.もちろんちゃんと意味がある. オイラーのコマというのを考える. これは外力が働かない3次元空間内の剛体の回転を表していて, 剛体の重心を中心とする慣性主軸周りの角運動量を@<m>{L_i\,(i=x,y,z)}とすると運動方程式が@<eq>{eq:Euler_top}のようになる. ただし, @<m>{I_i}は主慣性モーメント.

あらためて, ポアソン括弧@<m>$\{f,g\}$は変数@<m>{(q,p)}と@<m>{(f,g)}の間のヤコビアンの形
//texequation{
  \{f,g\}=\frac{\partial f}{\partial q}\frac{\partial g}{\partial p}-\frac{\partial f}{\partial p}\frac{\partial g}{\partial q}=\frac{\partial(f,g)}{\partial(q,p)},
//}
をしているけど, これを3変数に一般化して, 
//texequation{
  \{f,g,h\}\coloneqq\frac{\partial(f,g,h)}{\partial(q_1,q_2,q_3)},
//}
というのを考える. これを南部括弧という. これだけだと何の役に立つのかわからないけど, 実はちゃんと使い途がある.
//endsay

//say[佑芽][これがオイラーのコマを表すのに使えるってこと？]

//beginsay[広]
そう. 方程式系@<eq>{eq:Euler_top}には物理的に明らかな2つの保存量, エネルギー@<m>{H}と角運動量の2乗@<m>{G}
//texequation{
  H=\frac12\left(\frac{L_x^2}{I_x}+\frac{L_y^2}{I_y}+\frac{L_z^2}{I_z}\right),\\
  G=\frac12\left(L_x^2+L_y^2+L_z^2\right),
//}
があるけど, これらの保存量を使うと@<eq>{eq:Euler_top}は南部括弧を使った形

//note{
//texequation{
  \dot L_i=\frac{\partial(L_i,G,H)}{\partial(L_x,L_y,L_z)}=\left\{L_i,G,H\right\},
//}
//}

に書ける.
//endsay

===[nonum] 参考文献
//mbibpaper[bib_analytic_mechanics3][@<href>{https://en.wikipedia.org/wiki/Moyal_bracket}]
//mbibpaper[][深谷賢治, 『解析力学と微分形式』3.5節. 岩波書店, 2004年.伊藤克司, 講談社基礎物理学シリーズ『解析力学』11章, 2009年.]
//mbibpaper[][@<href>{https://www.research.kobe-u.ac.jp/csi-viz/members/kageyama/docs/131220a_canonical_transform.pdf}]
//mbibpaper[][@<href>{https://event.phys.s.u-tokyo.ac.jp/physlab2023/pdf/mat-article03.pdf}]
//mbibpaper[][@<href>{https://www.nagare.or.jp/download/noauth.html?d=28-6danwasitu.pdf&dir=151}]
//mbibpaper[][@<href>{https://www.jstage.jst.go.jp/article/mssj/19/1/19_42/_pdf/-char/ja}]

=={電磁気学マクスウェル方程式} 電磁気学（マクスウェル方程式）

//note{
//texequation[eq:maxwell]{
    dF&=0,\\
    d\star F&=J.
//}
//}

//beginsay[広]
つぎは電磁気のマクスウェル方程式. 一般的には, 空間と時間をわけた微分方程式の形
//texequation[eq:maxwell_nonrela]{
  \nabla\cdot\boldsymbol B&=0,\\
  \nabla\times\boldsymbol E&=-\frac{\partial\boldsymbol B}{\partial t},\\
  \nabla\cdot\boldsymbol E&=\rho,\\
  \nabla\times\boldsymbol B&=\boldsymbol j+\frac{\partial\boldsymbol E}{\partial t},
//}
の形で書かれることが多い. ただし, @<m>{\varepsilon_0=\mu_0=c=1}の単位系をとった. 電磁場テンソル@<m>$F_{\mu\nu}$とそれを係数にもつ4次元時空@<m>{x^\mu=(t,x,y,z)}上の2-形式@<m>{F}, それに4元電流@<m>{j^\mu}と電流形式@<m>{J}を
//texequation{
F_{\mu\nu}\coloneqq
  \begin{pmatrix}
    0&-E_x&-E_y&-E_z\\
    E_x&0&B_z&-B_y\\
    E_y&-B_z&0&B_x\\
    E_z&B_y&-B_x&0
  \end{pmatrix},\\
  F\coloneqq\frac12F_{\mu\nu}dx^\mu\wedge dx^\nu,\\
  j^\mu\coloneqq(\rho,j^x,j^y,j^z),\\
  J\coloneqq\star(\eta_{\mu\nu}j^\mu dx^\nu),
//}
と定義すると@<fn>{fn3}, @<eq>{eq:maxwell_nonrela}-@<eq>{eq:maxwell_nonrela-4}が@<eq>{eq:maxwell}と@<eq>{eq:maxwell-2}のようにまとめて綺麗に書ける. @<m>{d^2=0}だから, @<eq>{eq:maxwell-2}より電流の保存則

//texequation{
  dJ=0,
//}
が導かれる.

さて, 電荷・電流が存在しない場合のマクスウェル方程式

//note{
//texequation[eq:maxwell_vacuum]{
    dF&=0,\\
    d\star F&=0,
//}
//}

を考える. @<eq>{eq:maxwell_vacuum}, @<eq>{eq:maxwell_vacuum-2}から
//texequation[eq:maxwell_wave_equation1]{
(d\delta+\delta d)F\coloneqq(d\star d\star+\star d\star d)F=0,
//}
がなりたつ. ここで@<m>{\delta}は余微分@<m>{\delta\coloneqq \star\,d\,\star}. 作用素@<m>{d\delta+\delta d}はダランベルシアン@<m>{\Box}に等しいから, @<eq>{eq:maxwell_wave_equation1}は結局, 
//texequation{
  \Box F=0,
//}
となる. これは, 電磁場が波動方程式にしたがうことをあらわしている.

ところで, @<eq>{eq:maxwell_vacuum}-@<eq>{eq:maxwell_vacuum-2}を見てなにか気づくことはない？
//endsay

//say[佑芽][……ぐぬぬ……全然わかんない！]

//say[千奈][わたくしもわかりませんわ.]

//say[広][ヒントは@<eq>{eq:maxwell_nonrela}-@<eq>{eq:maxwell_nonrela-4}で電荷・電流を0とおいた方程式]
//texequation[eq:maxwell_nonrela_nosource]{
  \nabla\cdot\boldsymbol B&=0,\\
  \nabla\times\boldsymbol E&=-\frac{\partial\boldsymbol B}{\partial t},\\
  \nabla\cdot\boldsymbol E&=0,\\
  \nabla\times\boldsymbol B&=\frac{\partial\boldsymbol E}{\partial t}.
//}
 //say[佑芽][うーん, なんていうかこう……@<m>{\boldsymbol E}と@<m>{\boldsymbol B}についてきれいな形になってる？]

//say[千奈][一か所マイナスがつきますわね.]

//beginsay[広]
ふたりともあたり. 正確にいうと, @<eq>{eq:maxwell_nonrela_nosource}-@<eq>{eq:maxwell_nonrela_nosource-4}は
//texequation{
  \boldsymbol E\rightarrow\boldsymbol B, \boldsymbol B\rightarrow-\boldsymbol E,
//}
という変換に対して不変になってる. これは@<eq>{eq:maxwell_vacuum}-@<eq>{eq:maxwell_vacuum-2}が
//texequation{
  F\leftrightarrow \star F,
//}
という入れ替えに対して不変になっていることに対応している. この性質をマクスウェル方程式の@<b>{双対性}という. 双対性にもいろいろ種類がある@<fn>{fn4}から, 電磁気学におけるこの双対性のことはとくに@<b>{S-双対性}ということもある. S-双対はあとでヤン・ミルズインスタントンの話をするときに@<fn>{fn5}もういちど出てくるから, 頭の片隅に置いておいて.
//endsay

===[nonum] 参考文献

//mbibpaper[][佐藤勝彦, 『相対性理論』2-2節. 岩波書店, 1996年.]

=={一般相対論微分幾何曲率テンソル} 一般相対論/微分幾何（曲率テンソル）

//texequation[eq:curvature_antisymmetry]{
R_{\mu\nu\rho\sigma}=-R_{\mu\nu\sigma\rho},\\
R_{\mu\nu\rho\sigma}+R_{\mu\rho\sigma\nu}+R_{\mu\sigma\nu\rho}=0,\\
R_{\mu\nu\rho\sigma}=R_{\rho\sigma\mu\nu},\\
R_{\mu\nu\rho\sigma;\tau}+R_{\mu\nu\sigma\tau;\rho}+R_{\mu\nu\tau\rho;\sigma}=0.
//}

//beginsay[広]
つぎは曲率テンソルのもつ対称性について話す, よ. 曲率テンソルは物理でいうと一般相対論, 数学でいうと微分幾何にでてくるけど, 相対論における定義やどんなふうに役に立つか@<fn>{fn6}は相対論の教科書で勉強してみて, ね. ここでは曲率テンソルのもつ対称性@<eq>{eq:curvature_antisymmetry}-@<eq>{eq:curvature_antisymmetry-4}を味わってほしい. ちなみに@<eq>{eq:curvature_antisymmetry-2}や@<eq>{eq:curvature_antisymmetry-4}のように添字を反対称化して足しあげるときは,

//note{
//texequation[eq:curvature_antisymmetry-2_antisymmetrised]{
R_{\mu[\nu\rho\sigma]}=0,\\
R_{\mu\nu[\rho\sigma;\tau]}=0.
//}
//}

のように書くことも多い, よ.

@<eq>{eq:curvature_antisymmetry}-@<eq>{eq:curvature_antisymmetry-4}の証明は, 相対論の教科書だと“等価原理により接続が0であるような座標系をとることができて, テンソルの方程式なのでその座標系で考えればよく……”っていう感じで特殊な座標系をとって証明していることが多い. でもそれだと理論的にあんまりきれいとはいいがたいから, ここでは座標系によらない議論での証明をまとめておく, よ. その前にまず, 相対論でよく使う, 座標の添字を使った記法@<eq>{eq:curvature_antisymmetry}-@<eq>{eq:curvature_antisymmetry-4}を微分幾何で主流な記法

//note{
//texequation[eq:curvature_antisymmetry_vector_field]{
R(X,Y)Z=-R(Y,X)Z,\\
R(X,Y)Z+R(Y,Z)X+R(Z,X)Y=0,\\
g(R(X,Y)Z,W)=g(R(Z,W)X,Y),\\
(\nabla_XR)(Y,Z)W+(\nabla_YR)(Z,X)W+(\nabla_ZR)(X,Y)W=0.
//}
//}

に書き換えておく. ここからはこの記法で証明を進める. この書き方のほうが出てくる文字の量を少しだけ節約できるし, 見た目もきれい. この記法での曲率テンソルの定義は, 
//texequation[eq:curvature_definition]{
R(X,Y)Z\coloneqq\nabla_X\nabla_YZ-\nabla_Y\nabla_XZ-\nabla_{[X,Y]}Z,
//}
となる. ここから@<eq>{eq:curvature_antisymmetry_vector_field}-@<eq>{eq:curvature_antisymmetry_vector_field-4}を証明していくけど, すこしだけ欲張って, もうちょっと一般的な場合について示すことを考える. 具体的には捩率ありの場合について示す. 捩率の定義は, 
//texequation{
T(X,Y)\coloneqq\nabla_XY-\nabla_YX-[X,Y],
//}
で, 捩率が0とは限らないとき@<eq>{eq:curvature_antisymmetry_vector_field-2}と@<eq>{eq:curvature_antisymmetry_vector_field-4}は,

//note{
//texequation[eq:bianchi_1st_torsion]{
&R(X,Y)Z+R(Y,Z)X+R(Z,X)Y\notag\\
=&(\nabla_XT)(Y,Z)+(\nabla_YT)(Z,X)+(\nabla_ZT)(X,Y)\notag\\
&+T(T(X,Y),Z)+T(T(Y,Z),X)+T(T(Z,X),Y),\\
&(\nabla_XR)(Y,Z)W+(\nabla_YR)(Z,X)W+(\nabla_ZR)(X,Y)W\notag\\
=&R(X,T(Y,Z))W+R(Y,T(Z,X))W+R(Z,T(X,Y))W,
//}
//}

と変更される. 座標の添字を使って書けば,

//note{
//texequation{
R^{\phantom{[\nu\rho}\mu}_{[\nu\rho\phantom\mu\sigma]}=T^\mu_{[\nu\rho;\sigma]}+T^\mu_{\lambda[\nu}T^\lambda_{\rho\sigma]},\\
R_{[\rho\sigma\phantom{\mu\nu};\tau]}^{\phantom{[\rho\sigma}\mu\nu}=T^\lambda_{[\rho\sigma}R_{\tau]\lambda}^{\phantom{\lambda[\rho}\mu\nu},
//}
//}

というふうになる, よ.@<fn>{fn7}

まず@<eq>{eq:curvature_antisymmetry_vector_field}だけど, これは定義@<eq>{eq:curvature_definition}より明らか, だね. 他の恒等式の証明に行くまえに, 書く量を減らすためにcyclicな和の記号
//texequation{
\mathfrak S(f(X,Y,Z))\coloneqq f(X,Y,Z)+f(Y,Z,X)+f(Z,X,Y),
//}
を定義する. このもとで, @<eq>{eq:bianchi_1st_torsion}は
//texequation{
&\mathfrak S(R(X,Y)Z)\\
=&\mathfrak S(\nabla_X\nabla_YZ-\nabla_Y\nabla_XZ-\nabla_{[X,Y]}Z)\\
=&\mathfrak S(\nabla_X\nabla_YZ-\nabla_X\nabla_ZY-\nabla_{[X,Y]}Z)\\
=&\mathfrak S(\nabla_X(T(Y,Z)+[Y,Z])-\nabla_{[Y,Z]}X)\\
=&\mathfrak S((\nabla_XT)(Y,Z)+T(\nabla_XY,Z)+T(Y,\nabla_XZ)+\nabla_X[Y,Z]-\nabla_{[Y,Z]}X)\\
=&\mathfrak S((\nabla_XT)(Y,Z)+T(X,\nabla_ZY-\nabla_YZ)+T(X,[Y,Z])+[X,[Y,Z]])\\
=&\mathfrak S((\nabla_XT)(Y,Z)+T(X,T(Z,Y)))\\
=&\mathfrak S((\nabla_XT)(Y,Z)+T(T(X,Y),Z)),
//}
と証明される. @<eq>{eq:bianchi_1st_torsion-2}は
//texequation{
0=&\mathfrak S([\nabla_X,[\nabla_Y,\nabla_Z]]W)=\mathfrak S(\nabla_X[\nabla_Y,\nabla_Z]W-[\nabla_Y,\nabla_Z]\nabla_XW)\\
=&\mathfrak S(\nabla_X(R(Y,Z)W+\nabla_{[Y,Z]}W)-R(Y,Z)\nabla_XW-\nabla_{[Y,Z]}\nabla_XW)\\
=&\mathfrak S((\nabla_XR)(Y,Z)W+R(\nabla_XY,Z)W+R(Y,\nabla_XZ)W+R(X,[Y,Z])W+\nabla_{[X,[Y,Z]]}W)\\
=&\mathfrak S((\nabla_XR)(Y,Z)W+R(X,-\nabla_YZ+\nabla_ZY+[Y,Z])W)\\
=&\mathfrak S((\nabla_XR)(Y,Z)W-R(X,T(Y,Z))W),
//}
という感じ. 最後に@<eq>{eq:curvature_antisymmetry_vector_field-3}だけど, まず
//texequation{
&g(R(X,Y)Z,W)\\
=&g(\nabla_X\nabla_YZ-\nabla_Y\nabla_XZ-\nabla_{[X,Y]}Z,W)\\
=&X(g(\nabla_YZ,W))-g(\nabla_YZ,\nabla_XW)-Y(g(\nabla_XZ,W))+g(\nabla_XZ,\nabla_YW)\notag\\
&-[X,Y]g(Z,W)+g(Z,\nabla_{[X,Y]}W)\\
=&X(Y(g(Z,W))-g(Z,\nabla_YW))-Y(g(Z,\nabla_XW))+g(Z,\nabla_Y\nabla_XW)\notag\\
&-Y(X(g(Z,W))-g(Z,\nabla_XW))+X(g(Z,\nabla_YW))-g(Z,\nabla_X\nabla_YW)\notag\\
&-[X,Y]g(Z,W)+g(Z,\nabla_{[X,Y]}W)\\
=&g(Z,\nabla_Y\nabla_XW-\nabla_X\nabla_YW-\nabla_{[Y,X]}W)\\
=&-g(Z,R(X,Y)W),
//}
がなりたつ. よって, 
//texequation{
&2g(R(X,Y)Z,W)\\
=&g(R(X,Y)Z,W)+g(Z,R(Y,X)W)\\
=&-g((R(Y,Z)X,W)-g(R(Z,X)Y,W)-g(Z,R(X,W)Y)-g(Z,R(W,Y)X)\\
=&g(X,R(Y,Z)W)+g(Y,R(Z,X)W)+g(R(X,W)Z,Y)+g(R(W,Y)Z,X)\\
=&-g(X,R(Z,W)Y)-g(Y,R(W,Z)X)\\
=&2g(R(Z,W)X,Y),
//}
となる. これで証明できた.

一般相対論や微分幾何といえば重力インスタントンの話もおもしろいけど, それについてはまたあとで@<fn>{fn8}話す, よ.
//endsay

//say[佑芽][「あとで」が多いね…….]

//say[広][おもしろい話は全部つながってる. ふふ…….]

===[nonum] 参考文献

//mbibpaper[][今野宏, 『微分幾何学』3.2-3.3節. 東京大学出版会, 2013年.]
//mbibpaper[][O. コヴァルスキー [著\], 関沢正躬 [訳\], 『リーマン幾何学入門』第9章. 日本評論社, 2001年.]

== 統計力学

//beginsay[広]
つぎは統計力学について話そう. 統計力学でおもしろい話題といえば, 2次元イジング模型の臨界温度が, 正方格子, 三角格子, 蜂の巣格子それぞれについて, 
//texequation[eq:critical_temperature_ising_square]{
  K_{\mathrm{square}}&=\frac12\log(1+\sqrt2),\\
  K_{\mathrm{triangle}}&=\frac14\log3,\\
  K_{\mathrm{honeycomb}}&=\frac12\log(2+\sqrt3),
//}
というふうに厳密に求まるっていう話がある. さらに, イジング模型を拡張した@<m>{q}-状態ポッツ模型の臨界温度も, 
//texequation{
  K_{\mathrm{square}}&=\log(1+\sqrt q),\\
  K_{\mathrm{triangle}}&=\log(1+y),\ y^3+3y^2-q=0,\\
  K_{\mathrm{honeycomb}}&=\log(1+\frac qy),\ y^3+3y^2-q=0,
//}
というふうに厳密に求まる. もちろん@<m>{q=2}とおけば@<eq>{eq:critical_temperature_ising_square}-@<eq>{eq:critical_temperature_ising_square-3}を再現する@<fn>{fn9}. これらの結果がきれいに求まるのは, ある格子での分配関数とその双対格子での分配関数に対応がついて, 高温と低温が対応する──クラマース・ワニエ双対性という. さっき@<fn>{fn10}話したS-双対の一種──からであって, これはこれでおもしろい. ……でもこれらは, すごくがんばれば模型の臨界点が厳密に求まるのがおもしろいって話であって, 個人的には式自体がおもしろいわけじゃない.
//endsay

//say[佑芽][だから枠で囲ってないんだね…….]

//say[広][そう. 今日はスピングラスの話は掘り下げずに, 統計力学にあらわれる恒等式を紹介する.]

//say[佑芽][恒等式？]

//say[広][たぶん, 見ればどういうことかわかる.]

=== 恒等式

//say[広][こんな恒等式たちがある：]
//texequation[eq:statistical_mechanics_identity1]{
  \sum_{i=1}^nx_i^{n-1}\prod_{j\ne i}\frac{1-qx_j}{x_i-x_j}&=1,\\
  \sum_{i=1}^n\prod_{j\ne i}\frac{tx_i-x_j}{x_i-x_j}&=\frac{1-t^n}{1-t},\\
  \sum_{i=1}^nx_i\prod_{j\ne i}\frac{x_i-qx_j}{x_i-x_j}&=\sum_{i=1}^nx_i,\\
  \sum_{i=1}^n\prod_{j\ne i}\frac{q-x_j}{x_i-x_j}&=1.
//}

//say[佑芽][いっぱいあるね……. 枠で囲わなくていいの？]

//beginsay[広]
これらはほんの序の口で, 最後にとっておきの, 一番お気に入りのを紹介する.

まずこれらの式がどうやって導かれるのか示しておく. たとえば@<eq>{eq:statistical_mechanics_identity1}だったら, こんな積分
//texequation{
  \frac1{2\pi i}\oint f(z)dz,\ f(z)=\frac{z^{n-1}}{1-qz}\prod_{j=1}^n\frac{1-qx_j}{z-x_j},
//}
を考えて留数定理を使うことで示せる. ただし, 積分路は@<m>{f(z)}のすべての極を囲むようにとる, よ. @<m>{z=x_j}の留数から左辺の和が, @<m>{z=1/q}の留数から@<m>{-1}が出て, 移項すると右辺の@<m>{1}になる. 最後に積分路を無限遠に持っていくと, 積分値が具体的に計算できて, 値は0になる. 結果を整理すると@<eq>{eq:statistical_mechanics_identity1}になる. 他の式も同じで, うまい有理関数を持ってきて留数定理を使うことで示せる. 簡単だから演習問題としてやってみて, ね. パズルみたいで楽しいし, 結果もだいぶ非自明でおもしろい. これらの等式は量子統計力学の多体問題にあらわれるらしいけど, わたしも偶然見かけたおもしろい式を書き留めておいただけで, 詳しいことは知らないから, もし勉強してなにかわかったら教えて, ね.
//endsay

//say[佑芽][広ちゃんでもわからないことってあるの！？]

//say[広][もちろん. 学問の世界は広く, 深すぎて, 一生かけても学びきれない. ままならないね. ふふ.]

//say[千奈][まず「偶然見かけたおもしろい式を記録する」の時点ですごいですわ〜.]

//say[広][ふふ, ありがとう. じゃあ約束どおり, この章の締めとして, この系統の恒等式のなかでいちばんお気に入りのやつを紹介する. じゃん.]

//note{
//texequation{
    \sum_{|I|=r}\prod_{i\in I}\prod_{j\notin I}\frac{x_i-tx_j}{x_i-x_j}\frac{x_i-qx_j}{x_i-qtx_j}=\sum_{|I|=r}\prod_{j\in I}\prod_{i\notin I}\frac{x_i-tx_j}{x_i-x_j}\frac{x_i-qx_j}{x_i-qtx_j}.
//}
//}

//say[佑芽][？　左辺と右辺同じじゃない？]

//beginsay[広]
同じように見えるけど, ちょっとちがう. よく見て, 積の記号の下が@<m>{i\in I,j\notin I}と@<m>{j\in I,i\notin I}になってる. それと, ちょっと記号の意味がわかりにくいからもう一点補足. @<m>{I}は添字集合@<m>$\{1,\dots,n\}$の部分集合で, @<m>{|I|=r}はその部分集合の大きさが@<m>{r}という意味. つまり両辺の最初にある和の記号は, 大きさ@<m>{r}の部分集合すべてにわたって和をとる, ということ.

この式の証明は……残念ながらわたしはいまのところあまりいい方法を思いついてない. いちおう, 両辺をどれか一つの変数@<m>{x_i}の有理関数とみて, おのおのの極での留数が等しいことを言おうとすると@<m>{r}がひとつ小さい場合に帰着されて, 数学的帰納法で証明はできたけど……. 計算量というか書かないといけない式の量が多すぎてエレガントじゃない. たどり着きたい式そのものはきれいな形をしてるから, きっとエレガントな証明があるはず. これも何か思いついたら教えて, ね.
//endsay

//say[千奈][また無茶ぶりですわ〜.]

//say[広][ふふ…….]

===[nonum] 参考文献

//mbibpaper[][宮下精二, 轟木義一, 『演習形式で学ぶ相転移・臨界現象』2.9, 4.4節. サイエンス社, 2011年.]
//mbibpaper[][@<href>{https://park.itc.u-tokyo.ac.jp/hkatsura-lab/Files/Suurikagaku_Katsura_SSD.pdf}]
//mbibpaper[][野海正俊, 『数理科学』2013年2月号, pp.39-45, 『Hecke環と対称多項式』, サイエンス社, 2013年.]

== リー群

=== 偶然同型

//note{
//texequation{
    \mathrm{Spin}(2)&\cong\mathrm U(1),\\
    \mathrm{Spin}(3)&\cong\mathrm{SU}(2)\cong\mathrm{Sp}(1),\\
    \mathrm{Spin}(4)&\cong\mathrm{Sp}(1)\times\mathrm{Sp}(1),\\
    \mathrm{Spin}(5)&\cong\mathrm{Sp}(2),\\
    \mathrm{Spin}(6)&\cong\mathrm{SU}(4),\\
    \mathrm{Spin}(8)&\ \mathrm{triality}.
//}
//}

//say[広][つぎは偶然同型について話す, よ.]

//say[佑芽][偶然同型ってなあに？]

//say[広][群を分類するといくつかの系列に分かれるけど, 別々の系列に属する二つの群が体系的ではなく偶然, 同型になること. 例外同型っていうこともある. 偶然同型には有限群の同型とリー群の同型があるけれど, 今日は物理と関係が深いリー群の同型について話す, よ.]

===={mathrmspin2congmathrm-u1} @<m>$\mathrm{Spin}(2)\cong\mathrm U(1)$

//beginsay[広]
回転行列と, 絶対値が@<m>{1}の複素数を
//texequation{
\mathrm{Spin}(2)\ni
\begin{pmatrix}
\cos\theta&-\sin\theta\\
\sin\theta&\cos\theta
\end{pmatrix}
\sim e^{i\theta}\in\mathrm{U}(1),
//}
と対応づけることにより, 明らか.
//endsay

===={mathrmspin3congmathrmsu2congmathrmsp1} @<m>$\mathrm{Spin}(3)\cong\mathrm{SU}(2)\cong\mathrm{Sp}(1)$

//beginsay[広]
エルミートでトレースレスな複素@<m>{2\times2}行列
//texequation{
M\in V\coloneqq\left\{M\in M_2(\mathbb C)\middle|M=M^\dagger, \mathrm{tr}M=0\right\}\cong\mathbb R^3,
//}
に対して, @<m>$U\in\mathrm{SU}(2)$の作用を@<m>$M\mapsto UMU^{-1}$で定める. この作用は@<m>{V}を保つ. @<m>{V}には自然な内積
//texequation{
\langle A,B\rangle\coloneqq\frac12\mathrm{Re}\ \mathrm{tr}\left(A^\dagger B\right)=\frac12\mathrm{tr}(AB),
//}
が入り, これは@<m>$\mathrm{SU}(2)$の作用によって保たれる. 自明な中心@<m>$-1_{2\times2}\in\mathrm{SU}(2)$は恒等変換として@<m>{V}に作用し, また@<m>$\dim_{\mathbb{R}}\mathrm{SU}(2)=\dim_{\mathbb R}\mathrm{Spin}(3)=3$より, @<m>$\mathrm{SU}(2)\cong\mathrm{Spin}(3)$がわかる.

行列@<m>{M}の代わりに純虚四元数
//texequation{
m\in\tilde V\coloneqq\left\{m\in\mathbb H\middle|\bar m=-m\right\}\cong\mathbb R^3,
//}
に対して, 絶対値が1の四元数@<m>$u\in\mathrm{Sp}(1)$の作用を@<m>$m\mapsto umu^{-1}$で, 内積を@<m>$\langle a,b\rangle\coloneqq\mathrm{Re}(\bar ab)=-\mathrm{Re}(ab)$で定義して同様の議論をすることにより, @<m>$\mathrm{Spin}(3)\cong\mathrm{Sp}(1)\cong\mathrm{SU}(2)$がいえる.

物理の言葉でいうと, この同型は角運動量の代数を@<m>{2\times2}のパウリ行列で記述できることの数学的なあらわれになっている, よ.
//endsay

===={mathrmspin4congmathrmsp1timesmathrmsp1} @<m>$\mathrm{Spin}(4)\cong\mathrm{Sp}(1)\times\mathrm{Sp}(1)$

//beginsay[広]
四元数@<m>{v\in\mathbb H\cong\mathbb R^4}に対して@<m>$(p,q)\in\mathrm{Sp}(1)\times\mathrm{Sp}(1)$による作用を@<m>$v\mapsto pvq^{-1}$で定める. この作用は@<m>{\mathbb H\cong\mathbb R^4}の自然な内積@<m>$\langle a,b\rangle\coloneqq\mathrm{Re}(\bar ab)$を保つ. 自明な中心@<m>$(-1,-1)\in\mathrm{Sp}(1)\times\mathrm{Sp}(1)$は恒等変換として@<m>{\mathbb H}に作用し, また@<m>$\dim_{\mathbb{R}}\mathrm{Sp}(1)\times\mathrm{Sp}(1)=\dim_{\mathbb R}\mathrm{Spin}(4)=6$より, @<m>$\mathrm{Sp}(1)\times\mathrm{Sp}(1)\cong\mathrm{Spin}(4)$がわかる.

物理においてこの同型は, 4次元時空におけるスピノルが右巻きと左巻きそれぞれ2成分の2つのスピノルで表されることに対応している, よ.
//endsay

===={mathrmspin5congmathrmsp2} @<m>$\mathrm{Spin}(5)\cong\mathrm{Sp}(2)$

//beginsay[広]
エルミートでトレースレスな四元数@<m>{2\times2}行列
//texequation{
M\in V\coloneqq\left\{M\in M_2(\mathbb H)\middle|M=M^\dagger, \mathrm{tr}M=0\right\}\cong\mathbb R^5,
//}
に対して, @<m>$U\in\mathrm{Sp}(2)$の作用を@<m>$M\mapsto UMU^{-1}$で定める. この作用は@<m>{V}を保つ. @<m>{V}には自然な内積
//texequation{
\langle A,B\rangle\coloneqq\frac12\mathrm{Re}\ \mathrm{tr}\left(A^\dagger B\right)=\frac12\mathrm{tr}(AB),
//}
が入り, これは@<m>$\mathrm{Sp}(2)$の作用によって保たれる. 自明な中心@<m>$-1_{2\times2}\in\mathrm{Sp}(2)$は恒等変換として@<m>{V}に作用し, また@<m>$\dim_{\mathbb{R}}\mathrm{Sp}(2)=\dim_{\mathbb R}\mathrm{Spin}(5)=10$より, @<m>$\mathrm{Sp}(2)\cong\mathrm{Spin}(5)$がわかる.

この同型が物理でどんなふうにあらわれるかをわたしは勉強したことがないから, もしふたりが勉強してなにか見つけたら教えてほしい.
//endsay

//say[千奈][篠澤さんの知らないことをわたくしたちが勉強できるのでしょうか…….]

===={mathrmspin6congmathrmsu4} @<m>$\mathrm{Spin}(6)\cong\mathrm{SU}(4)$

//beginsay[広]
これは少し難しくて, 今までの同型とは少し違った発想が必要になる.この項ではアインシュタインの縮約記法@<m>{A^i B_i\coloneqq\sum_i A^i B_i}を用いる.

複素反対称行列@<m>{A}の成分@<m>$A_{ij}=-A_{ji}\in \mathbb C$に対して2-形式@<m>{A}を
//texequation{
A\coloneqq\frac12A_{ij}dx^i\wedge dx^j\in\Omega^2(\mathbb C^4),
//}
で定義し, そのホッジ双対をレヴィ-チヴィタの完全反対称テンソル@<m>$\epsilon_{ijkl}$を用いて
//texequation{
\star A\coloneqq\frac12\left(\frac12\epsilon_{ijkl}A^{kl}\right)dx^i\wedge dx^j,
//}
と定義する. ホッジ双対と複素共軛を同時にとる線型変換@<m>{f:A\mapsto\star\bar A}は@<m>$f^2=\mathrm{id}$をみたすので, @<m>{\Omega^2(\mathbb C^4)}は@<m>{f}の固有値が@<m>{\pm1}の固有空間@<m>$\Omega_{\pm}$の直和に分解される：
//texequation{
\Omega^2(\mathbb C^4)=\Omega_+\oplus\Omega_-,\\
\Omega_{\pm}\coloneqq\left\{A\in\Omega^2(\mathbb C^4)\middle|\star A=\pm\bar A\right\}\ \mathrm{(resp.)}
//}
 @<m>$\Omega_{\pm}$はそれぞれ複素@<m>{4\cdot3/2/2=3}次元, つまり実6次元線型空間だけど, 以下では@<m>{\Omega_+}への@<m>$\mathrm{SU}(4)$の作用が@<m>$\mathrm{Spin}(6)$の作用と同一視できることを見ていく. @<m>{\Omega_-}への作用も同様.

まず, @<m>$\mathrm{SU}(4)$の作用が@<m>{\Omega_+}を保つことを見る. @<m>{A}に対して@<m>$U\in\mathrm{SU}(4)$の作用を
//texequation{
A=\frac12A_{ij}dx^i\wedge dx^j\mapsto\frac12U_i^{\phantom{i}a}A_{ab}U_j^{\phantom{i}b}dx^i\wedge dx^j=\frac12\left(UAU^{\mathrm T}\right)_{ij}dx^i\wedge dx^j,
//}
で定義すると, @<m>$A_{ij}=-A_{ji}$のとき@<m>$\left(UAU^{\mathrm T}\right)_{ij}=\left(UAU^{\mathrm T}\right)^{\mathrm T}_{ji}=-\left(UAU^{\mathrm T}\right)_{ji}$よりこの作用によって反対称性は保たれる. また, @<m>{\star A=\bar A}, すなわち
//texequation{
\frac12\epsilon^{ijkl}A_{kl}=\bar A^{ij},
//}
のとき, 
//texequation{
\overline{U^i_{\phantom{i}c}U^j_{\phantom{j}d}A^{cd}}&=\left(U^{-1}\right)_c^{\phantom{c}i}\left(U^{-1}\right)_d^{\phantom{d}j}\cdot\frac12\epsilon^{cdkl}A_{kl}\\
&=\frac12\epsilon^{cdkl}\left(U^{-1}\right)_c^{\phantom{c}i}\left(U^{-1}\right)_d^{\phantom{d}j}\left(U^{-1}\right)_k^{\phantom{k}a}U_a^{\phantom{a}p}\left(U^{-1}\right)_l^{\phantom{l}b}U_b^{\phantom{b}q}A_{pq}\\
&=\frac12\epsilon^{ijab}\det\left(U^{-1}\right)U_a^{\phantom{a}p}U_b^{\phantom{b}q}A_{pq}\\
&=\frac12\epsilon^{ijab}U_a^{\phantom{a}p}U_b^{\phantom{b}q}A_{pq},
//}
より, 自己双対性も保たれることがわかる. よってこの@<m>$\mathrm{SU}(4)$の作用で@<m>{\Omega_+}は保たれる.

@<m>{A,B\in\Omega_+}に対して内積@<m>{\langle A,B\rangle}を
//texequation{
\langle A,B\rangle\coloneqq\star\left(A\wedge B\right)=\frac18\epsilon^{ijkl}A_{ij}B_{kl}=\frac14\bar A^{ij}B_{ij},
//}
で定義すると, 
//texequation{
\langle UA,UB\rangle&=\left\langle\frac12U_i^{\phantom{i}a}U_j^{\phantom{j}b}A_{ab}dx^i\wedge dx^j,\frac12U_k^{\phantom{k}c}U_l^{\phantom{l}d}B_{cd}dx^k\wedge dx^l\right\rangle\\
&=\frac18\epsilon^{ijkl}U_i^{\phantom{i}a}U_j^{\phantom{j}b}U_k^{\phantom{k}c}U_l^{\phantom{l}d}A_{ab}B_{cd}\\
&=\frac18\epsilon^{abcd}\det(U)A_{ab}B_{cd}\\&=\langle A,B\rangle,
//}
より, この@<m>$\mathrm{SU}(4)$の作用で@<m>{\Omega_+\cong\mathbb R^6}の内積は保たれる.

自明な中心@<m>$-1_{4\times4}\in\mathrm{SU}(4)$は恒等変換として@<m>{\Omega_+}に作用し, また@<m>$\dim_{\mathbb{R}}\mathrm{SU}(4)=\dim_{\mathbb R}\mathrm{Spin}(6)=15$より, @<m>$\mathrm{SU}(4)\cong\mathrm{Spin}(6)$がわかる.

この同型は, 4次元の@<m>{\mathcal N=4}超対称ヤン・ミルズ理論がもつ対称性と密接に関連している, よ. 詳しくはあとで@<fn>{fn11}話そう.
//endsay

===={mathrmspin8-triality} @<m>$\mathrm{Spin}(8)$ triality

//beginsay[広]
最後に@<m>$\mathrm{Spin}(8)$のtriality（三対性）に付いて説明する, よ. これはいままで説明してきた偶然同型とは少し違って, 別々の系列に属する群どうしの同型ではないけれど, @<m>$\mathrm{Spin}(8)$がもつ著しい性質で, つまりはおもしろいから紹介する.

@<m>$\mathrm{Spin}(8)$の元を一つとる. 対応する@<m>$\mathrm{SO}(8)$の元@<m>{g}を相似変形すると, 4つの回転行列にブロック対角化された形で書ける：
//texequation{
  g\sim
  \begin{pmatrix}
    \cos\theta&-\sin\theta&&&&&&\\
    \sin\theta&\cos\theta&&&&&&\\
    &&\cos\eta&-\sin\eta&&&&\\
    &&\sin\eta&\cos\eta&&&&\\
    &&&&\cos\zeta&-\sin\zeta&&\\
    &&&&\sin\zeta&\cos\zeta&&\\
    &&&&&&\cos\xi&-\sin\xi\\
    &&&&&&\sin\xi&\cos\xi
  \end{pmatrix}.
//}
この4つの回転角をまとめて, 

//texequation{
  \alpha=
  \begin{pmatrix}
    \theta\\
    \eta\\
    \zeta\\
    \xi
  \end{pmatrix},
//}
と書くことにする. これらの4つの回転角が, 

//texequation{
  \frac12
  \begin{pmatrix}
    -\theta+\eta+\zeta-\xi\\
    -\theta+\eta-\zeta+\xi\\
    -\theta-\eta+\zeta+\xi\\
    \theta+\eta+\zeta+\xi
  \end{pmatrix}
  =\frac12
  \begin{pmatrix}
    -1&1&1&-1\\
    -1&1&-1&1\\
    -1&-1&1&1\\
    1&1&1&1
  \end{pmatrix}
  \begin{pmatrix}
    \theta\\
    \eta\\
    \zeta\\
    \xi
  \end{pmatrix}
  \eqqcolon P\alpha,
//}
と, 

//texequation{
  \frac12
  \begin{pmatrix}
    -\theta-\eta-\zeta+\xi\\
    \theta+\eta-\zeta+\xi\\
    \theta-\eta+\zeta+\xi\\
    -\theta+\eta+\zeta+\xi
  \end{pmatrix}
  =\frac12
  \begin{pmatrix}
    -1&-1&-1&1\\
    1&1&-1&1\\
    1&-1&1&1\\
    -1&1&1&1
  \end{pmatrix}
  \begin{pmatrix}
    \theta\\
    \eta\\
    \zeta\\
    \xi
  \end{pmatrix}
  =P^2\alpha,
//}
に写るような変換を考える. これらの変換は積構造を保つから@<m>$\mathrm{Spin}(8)$の自己同型になっているけど, 回転角が違うから内部自己同型じゃない. つまり@<b>{これらの変換はSpin(8)の外部自己同型になっている.}さらに,

//texequation{
  Q
  :\alpha\mapsto Q\alpha\coloneqq
  \begin{pmatrix}
    -1&&&\\
    &1&&\\
    &&1&\\
    &&&1
  \end{pmatrix}
  \begin{pmatrix}
    \theta\\
    \eta\\
    \zeta\\
    \xi
  \end{pmatrix},
//}
という変換を考えると, この変換も外部自己同型──@<m>$\mathrm{Pin}(8)$や@<m>$\mathrm{O}(8)$の鏡映元による相似変換──になっていて, 

//texequation{
  P^3=Q^2=(PQ)^2=\mathrm{id},
//}
をみたす. つまり@<m>{P}と@<m>{Q}で生成される群は3次対称群@<m>{S_3}に同型になっている. このように@<b>$Spin(8)の外部自己同型が@<m>{S_3}の構造をもっていることをSpin(8)のtriality（三対性）という$, よ. この性質は@<m>$\mathrm{Spin}(8)$に対応する@<m>{D_4}のディンキン図

//note{
@<m>{D_4}:
//indepimage[fig1]
//}

が@<m>{S_3}の対称性を持っていることからもわかる, ね.
//endsay

//say[千奈][なんだかかわいらしい図形ですわ〜.]

//say[広][ふふ, この対称性の高さから美しさを感じられるなんて, 千奈はセンスある, ね.]

//say[千奈][褒められましたわ〜.]

//say[広][それに…….]

//say[千奈][？]

//say[広][千奈もかわいい, よ.]

//say[千奈][まあ, 篠澤さんったら…….]

//say[佑芽][なんかラブコメがはじまった…….]

//say[広][ふふ……. Spin(8)に特有のこの高い対称性は, 4次元での極大超対称, つまり@<m>{\mathcal N=8}の超重力理論なんかと深い関わりがある, よ.]

==={行列模型とハール測度-セルバーグ積分} 行列模型とハール測度, セルバーグ積分

//note{
//texequation[eq:matrix_measure_entry]{
    &\exp\left(-\frac12\tr M^2\right)dM\\
    =&\exp\left(-\frac12\sum_{i=1}^Nx_i^2\right)\left|\Delta(x)\right|^\beta d^Nx\prod_{1\le i<j\le N}\prod_{k=1}^\beta\left(U^{-1}dU\right)_{ij}^{(k)}.
//}
//}

//beginsay[広]
つぎは行列模型と, そこにあらわれる測度のあいだの関係やいろいろな積分公式の話をする. 行列模型ではしばしば, ランダムな行列の成分に適当な確率分布, たとえばガウス分布なんかを入れて, その行列の基底によらない関数, つまり固有値の関数の期待値を考えることがある. このとき行列の成分で書いた積分測度から, 固有値で書いた測度への変換公式があると計算に便利. ここでは主にガウス型分布@<eq>{eq:matrix_measure_entry}-@<eq>{eq:matrix_measure_entry-2}を考える. ただし, @<m>{M}は実対称, 複素エルミート, 四元数エルミート行列のどれかで, それぞれに@<m>{\beta=1,2,4}が対応する. @<eq>{eq:matrix_measure_entry}の@<m>{dM}をていねいに書くと, 
//texequation{
  dM\coloneqq\prod_{i=1}^NdM_{ii}\prod_{i<j}^N\prod_{k=1}^\beta dM_{ij}^{(k)},
//}
という形になる. ただし, @<m>{k=1,\dots,\beta}は成分@<m>$M_{ij}$の実数で数えたときの自由度が@<m>{\beta}個あることに対応している. @<m>{M}はエルミート行列@<fn>{fn12}だったから, 
//texequation[eq:diagonalisation_matrix_model]{
  M=UXU^{-1},\quad X=\mathrm{diag}(x_1,\dots,x_N)\in M_N(\mathbb R),\quad U\in
  \begin{cases}
    \mathrm O(N)&(\beta=1)\\
    \mathrm U(N)&(\beta=2)\\
    \mathrm{Sp}(N)&(\beta=4)
  \end{cases},
//}
と対角化できる. ユニタリ行列によって相似変換をしても測度は不変だから, @<m>$dM=U^{-1}dMU$を@<m>{X}と@<m>{U}の測度で書くことを考える. 

//texequation{
  U^{-1}dMU&=U^{-1}\left(dUXU^{-1}+UdXU^{-1}+UXdU^{-1}\right)U\\
  &=dX+U^{-1}dUX-XU^{-1}dU,
//}
から, 
//texequation{
  \left(U^{-1}dMU\right)_{ii}&=dX_{ii}=dx_i,\\
  \left(U^{-1}dMU\right)_{ij}^{(k)}&=\left|x_j-x_i\right|\left(U^{-1}dU\right)_{ij}^{(k)},
//}
となるので, 
//texequation[eq:matrix_measure_result]{
  dM&=U^{-1}dMU\\
  &=\prod_{i=1}^N\left(U^{-1}dMU\right)_{ii}\prod_{i<j}^N\prod_{k=1}^\beta\left(U^{-1}dMU\right)_{ij}^{(k)}\\
  &=\left|\Delta(x)\right|^\beta d^Nx\prod_{1\le i<j\le N}\prod_{k=1}^\beta\left(U^{-1}dU\right)_{ij}^{(k)},
//}
となり, @<eq>{eq:matrix_measure_entry-2}が言えた. 結果に差積@<fn>{fn13}@<m>$\Delta(x)\coloneqq\prod_{i<j}^N(x_j-x_i)$が出てくるのがおもしろい, ね. この測度のうち, ユニタリ行列からの寄与
//texequation{
  \prod_{1\le i<j\le N}\prod_{k=1}^\beta\left(U^{-1}dU\right)_{ij}^{(k)},
//}
は群上の不変性をもつ, いわゆるハール測度になっている, よ@<fn>{fn14}.

ここで成分表示と固有値表示でのふたつの規格化定数
//texequation{
  Z_{N,\beta}=\int\exp\left(-\frac12\tr M^2\right)dM,\\
  \tilde Z_{N,\beta}=\int\exp\left(-\frac12\sum_{i=1}^Nx_i^2\right)\left|\Delta(x)\right|^\beta d^Nx,
//}
を求めてみよう. まず@<m>$Z_{N,\beta}$のほうは, 
//texequation{
  \tr M^2&=\sum_iM_{ii}^2+\sum_{i\ne j}M_{ij}M_{ji}\\
  &=\sum_iM_{ii}^2+\sum_{i\ne j}M_{ij}\overline{M_{ij}}\\
  &=\sum_iM_{ii}^2+2\sum_{i<j}\left|M_{ij}\right|^2,
//}
だから, 単なるガウス積分
//texequation{
  \int\exp\left(-\frac12\tr M^2\right)dM
  =&\left[\int\exp\left(-\frac12m^2\right)dm\right]^N\left[\int\exp\left(-m^2\right)dm\right]^{\beta(N^2-N)/2}\\
  =&(2\pi)^{N/2}\pi^{\beta(N^2-N)/4},
//}
になって簡単だ, ね. つぎに固有値の積分@<m>$\tilde Z_{N,\beta}$のほうだけど, これはメータの積分と呼ばれていて,

//note{
//texequation{
    \tilde Z_{N,\beta}=\int_{\mathbb R^N}\exp\left(-\frac12\sum_{i=1}^Nx_i^2\right)\left|\Delta(x)\right|^\beta d^Nx=(2\pi)^{N/2}\prod_{j=1}^N\frac{\Gamma(1+j\beta/2)}{\Gamma(1+\beta/2)},
//}
//}

というふうに閉じた形で求まる, よ. これらを合わせると副産物として群上の積分
//texequation{
  \int\prod_{1\le i<j\le N}\prod_{k=1}^\beta\left(U^{-1}dU\right)_{ij}^{(k)}=\frac{Z_{N,\beta}}{\tilde Z_{N,\beta}}=\pi^{\beta(N^2-N)/4}\prod_{j=1}^N\frac{\Gamma(1+\beta/2)}{\Gamma(1+j\beta/2)},
//}
も求まる, ね. ちなみにメータの積分はセルバーグの積分

//note{
//texequation{
  S_n(\alpha,\beta,\gamma)&=\int_{[0,1]^N}\prod_{i=1}^Nt_i^{\alpha-1}(1-t_i)^{\beta-1}
\prod_{1\le i<j\le N}|t_i-t_j|^{2\gamma}\,d^Nt\\
  &=\prod_{j=0}^{N-1}\frac{\Gamma(\alpha+j\gamma)\Gamma(\beta+j\gamma)\Gamma(1+(j+1)\gamma)}{\Gamma(\alpha+\beta+(n+j-1)\gamma)\Gamma(1+\gamma)},
//}
//}

において適当な極限をとるとえられる, よ. セルバーグ積分自体は@<mbib>{bib_selberg_integral}にとても鮮やかな証明があるからぜひ読んでみて, ね.

ここまではランダムな行列の成分がそれぞれガウス分布するという仮定のもとでいろいろ計算してきたけど, ランダム行列がユニタリ行列に値をとるような分布を考えることもできる. その場合でも@<eq>{eq:diagonalisation_matrix_model}-@<eq>{eq:matrix_measure_result}の議論を同様に繰り返すことで, 確率測度を固有値部分と対角化のためのユニタリ行列の部分の積の形
//texequation{
  \prod_{1\le i<j\le N}\left|e^{i\theta_i}-e^{i\theta_j}\right|^\beta d^N\theta\prod_{1\le i<j\le N}\prod_{k=1}^\beta\left(U^{-1}dU\right)_{ij}^{(k)},
//}
に書くことができる. ユニタリ行列の固有値は絶対値が1の複素数になることに注意して, ね. 固有値部分の規格化定数
//texequation{
  \check Z_{N,\beta}\coloneqq\int_{[0,2\pi]^N}\prod_{1\le i<j\le N}\left|e^{i\theta_i}-e^{i\theta_j}\right|^\beta d^N\theta,
//}
はダイソン積分と呼ばれていて, これもセルバーグ積分をうまく変形することで具体的に計算できて,

//note{
//texequation{
  \check Z_{N,\beta}=(2\pi)^N\frac{\Gamma(1+N\beta/2)}{\Gamma(1+\beta/2)^N},
//}
//}

になる, よ.
//endsay

=== 逆格子

//beginsay[広]
物理とは直接関係はないけど, リー群の@<m>{G_2}と関係がある7次元のクロス積の話. @<m>{V[\bm a,\bm b,\bm c]}を3つのベクトル@<m>{\bm a,\bm b,\bm c}で張られる平行六面体の体積, @<m>{\times}を（3次元または7次元の）クロス積とするとき,

//note{
//texequation{
V[\bm a\times\bm b,\bm b\times\bm c,\bm c\times\bm a]=V[\bm a,\bm b,\bm c]^2,
//}
//}

が@<b>{3次元で成り立つ}ことが知られているけど, 実は全く同じ式が@<b>{7次元でも成り立つ.}3次元の場合は結晶上の物性物理なんかを考えるときにこの式を使うけど, 細かいことは割愛.

意味のあるクロス積が3次元と7次元でしか定義できないことは@<mbib>{bib_cross_prod2}に書いてある.

7次元のクロス積を扱うには, 八元数を使うのが便利. 以下では, 実部が0である八元数と7次元ベクトルを同一視する.

3つの八元数@<m>{x, y, z}の3重クロス積を
//texequation{
  x\times y\times z\coloneqq\frac12(x(\bar yz)-z(\bar yx)),
//}
で定義すると, その大きさ@<m>{\|x\times y\times z\|}は@<m>{x, y, z}で張られる平行六面体の体積に一致する. つまり, 
//texequation{
  \|x\times y\times z\|=V[x, y, z],
//}
となる. 示すべきことは, 
//texequation[eq:triproduct_result]{
  \|(x\times y)\times(y\times z)\times(z\times x)\|=\|x\times y\times z\|^2,
//}
と書ける. この両辺は@<m>{x, y, z}の互いに垂直な成分にしかよらないから, 等積変形してはじめから@<m>{x, y, z}は互いに垂直としていい. このとき@<mbib>{bib_cross_prod1}, 
//texequation[eq:triproduct_magnitude]{
  \|x\times y\times z\|=\|x(\bar yz)\|=\|x\|\|y\|\|z\|,
//}
一方, @<m>{x, y, z}が互いに垂直なとき, @<m>{x\times y=xy}, @<m>{y\times z=-z\times y=-zy}より, 
//texequation{
  \langle x\times y, y\times z\rangle=-\langle xy, zy\rangle=-\|y\|^2\langle x,z\rangle=0,
//}
などとなるので, @<m>{x\times y, y\times z, z\times x}も互いに垂直. よって, 
//texequation{
  \|(x\times y)\times(y\times z)\times(z\times x)\|=\|x\times y\|\|y\times z\|\|z\times x\|=\|x\|^2\|y\|^2\|z\|^2.
//}
これと@<eq>{eq:triproduct_magnitude}を合わせて, @<eq>{eq:triproduct_result}が示された.
//endsay

===[nonum] 参考文献

//mbibpaper[bib_selberg_integral][G. W. Anderson, @<i>{Forum Math.} @<b>{3} (1991) 415-417.]
//mbibpaper[bib_cross_prod2][太田浩一, 『ナブラのための協奏曲　——ベクトル解析と微分積分』2.7節. 共立出版, 2015年.]
//mbibpaper[bib_cross_prod1][本間泰史, 『スピン幾何学　——スピノール場の数学——』2.5節. 森北出版, 2016年.]
//mbibpaper[][木村太郎, 『現代数学』2025年10月号, pp.55-61, 『ランダム行列と固有値統計』, 現代数学社.]
//mbibpaper[][http://www.math.kobe-u.ac.jp/publications/rlm27.pdf]
//mbibpaper[][https://repository.kulib.kyoto-u.ac.jp/server/api/core/bitstreams/6d94bcb2-b34e-4e90-aaa2-84cc29b1e970/content]
//mbibpaper[][P. J. Forrester, S. O. Warnaar, @<i>{American Mathematical Society} @<b>{45} (2008) 489-534.]

== グラスマン数とパフィアン

//note{
//texequation[eq:berezin_integral_pfaffian]{
  \int d^n\theta\exp\left(\frac12\sum_{i,j}A_{ij}\theta^i\theta^j\right)=\mathrm{Pf}(A)=\sqrt{\det A}.
//}
//}

//beginsay[広]
いまからグラスマン数とその積分と, そこにあらわれるパフィアンの話をする. グラスマン数はつぎに話すつもりの場の理論と密接に関係するからぜひ憶えておくといい.

まずグラスマン数というのは, 
//texequation[eq:grassmann_definition]{
  \theta^2=0,\quad\theta\ne0,
//}
をみたす数@<m>{\theta}として定義される.
//endsay

//say[佑芽][2乗して0なのに@<m>{\theta}は0じゃないの！？]

//say[広][そう. だから@<m>{\theta}は実数じゃない.]

//say[千奈][複素数@<fn>{fn15}@<m>{i}を@<m>{i^2=-1}で定義したときのように新しく数の世界を広げる, ということでしょうか？]

//say[広][気持ちとしてはそんなかんじ. まさにみちなるひろがる, だね.]

//say[千奈][あらあら, うふふ…….]

//say[佑芽][またふたりでイチャイチャしてる…….]

//say[広][ふふ……, 佑芽のことも大好き, だよ.]

//say[佑芽][えっ！？　あ, ありがとう…….]

//beginsay[広]
ふふ……. ただ, 気をつけてほしいのは, @<eq>{eq:grassmann_definition}をみたす@<m>{\theta}はもちろん, 複素数でもないということ. どうしても行列で表現したければ
//texequation{
  \theta=
  \begin{pmatrix}
    0&1\\0&0
  \end{pmatrix},
//}
のようなかたちで表現できるけど, いまは重要じゃない. 大事なのは@<m>{\theta^2=0}だから@<m>{\theta\theta=-\theta\theta}, つまり自分自身と反交換するということ. これがあとでグラスマン数の数を増やすときに効いてくる. ここで, 唐突だけど, じゅうぶん性質のよい@<fn>{fn16}@<m>{\theta}の関数@<m>{f(\theta)}について, 定積分

//texequation[eq:berezin_integral_1_variable]{
  \int d\theta f(\theta),
//}
を考える.
//endsay

//say[佑芽][積分範囲書いてないけど定積分なの？]

//beginsay[広]
そう. じつはこのあと積分に対して要求する条件によって, 被積分関数だけで積分の値がきまってしまう. だから積分範囲を指定する必要はない, よ. 積分に対する条件というのは,

 1. 被積分関数に対する線型性
//texequation[eq:berezin_integral_linearity]{
    \int d\theta \left(af(\theta)+bg(\theta)\right)=a\int d\theta f(\theta)+b\int d\theta g(\theta),
//}
 2a. 測度の平行移動不変性
//texequation{
    \int d\theta f(\theta)=\int d(\theta+\varepsilon)f(\theta+\varepsilon)=\int d\theta f(\theta+\varepsilon),
//}
 2b. または部分積分可能性
//texequation[eq:berezin_integral_IBP]{
    \int d\theta\frac\partial{\partial\theta}f(\theta)=0,
//}

のふたつ. 箇条書きで書いたうち, 2a.と2b.はどちらかを課すともう一方がみちびかれるから, 条件としては片方でいい. これらの条件はふつうの実数や複素数の積分でもなりたつ@<fn>{fn17}性質だから, もっともらしい条件といえる. ここで, 一般の関数@<m>{f(\theta)}に対する積分@<eq>{eq:berezin_integral_1_variable}を求めることを考える. まず, @<m>{f}はテイラー展開可能としていたけど, @<m>{\theta^2=0}だから@<m>{f(\theta)=a+b\theta}と書ける. ただしここで, @<m>{a}と@<m>{b}はふつうの@<fn>{fn18}数. @<eq>{eq:berezin_integral_linearity}より, ふたつの積分
//texequation{
  \int d\theta\,1,\qquad\int d\theta\,\theta,
//}
の値を定めればいい. このうち前者については, @<eq>{eq:berezin_integral_IBP}により, 
//texequation{
  \int d\theta\,1=\int d\theta\frac\partial{\partial\theta}\theta=0,
//}
とわかる. 後者の値については定数倍の自由度があるけど, わかりやすいように
//texequation{
  \int d\theta\,\theta=1,
//}
と定める. まとめると, 
//texequation{
  f(\theta)=a+b\theta\quad\text{のとき}\quad\int d\theta f(\theta)=b,
//}
となる. これはつまり, 
//texequation{
  \int d\theta f(\theta)=\frac\partial{\partial\theta}f(\theta),
//}
と書くのと等価であることがわかる. 要するに, グラスマン数の積分は事実上微分と同じっていうこと.
//endsay

//say[千奈][不思議ですわ〜.]

//beginsay[広]
つぎに, グラスマン数を@<m>{n}個に増やす. つまり, @<m>{\theta_1,\dots,\theta_n}を考えて, お互いに反可換@<m>{\theta_i\theta_j=-\theta_j\theta_i}であるとする. このとき, ガウス積分の類似物
//texequation[eq:gaussian_integral_grassmann_number]{
  \int d\theta_n\cdots d\theta_1\exp\left(\frac12\sum_{i,j=1}^nA_{ij}\theta_i\theta_j\right),
//}
を計算したい@<fn>{fn19}.
//endsay

//say[佑芽][積分変数の順番が@<m>{n}からはじまってるのはどうして？]

//beginsay[広]
グラスマン数ではふつうの数とちがって変数の順序が大切. 順番を入れ替えると@<m>{-1}倍だけ値が変わってしまう. @<m>{\theta_1}から順番に積分したいからこの順番になってる@<fn>{fn20}.

まず, @<m>{\theta_i\theta_j=-\theta_j\theta_i}だから@<m>$A_{ij}\theta_i\theta_j$の項のうち@<m>{A}の対称な成分は効かない. よって@<m>{A}は最初から反対称とする. ここでつぎの定理を使う.

//beginthm
@<m>{n}次複素反対称行列@<m>{A}は適当な特殊ユニタリ行列@<m>$U\in\mathrm{SU}(n)$を用いて

//texequation[eq:block_diagonal_antisymmetric_matrix]{
  U^{\mathrm T}AU=\mathrm{diag}\left(
  \begin{pmatrix}
    0&a_1\\-a_1&0
  \end{pmatrix}
  ,\cdots,
  \begin{pmatrix}
    0&a_m\\-a_m&0
  \end{pmatrix}
  \right)\eqqcolon D,
//}

という形にブロック対角化できる（@<m>{n}が奇数の場合, 最後のブロックは@<m>{1\times1}の零行列とする）.
//endthm

この定理は@<m>{A}が実反対称行列の場合はよく知られているけど, 複素行列の場合は少しテクニカルだからここで軽く説明しておく.

@<i>{Proof.} @<m>{M\coloneqq A^\dagger A}とする. @<m>{M^\dagger =M}なので適当な@<m>$V\in\mathrm{SU}(n)$をとって, 

//texequation{
    V^\dagger MV=\mathrm{diag}(m_1,\dots,m_n)\in M_n(\mathbb R),
//}
と対角化できる. @<m>$V^{\mathrm T}AV=B+iC,\ B,C\in M_n(\mathbb R)$とすると@<m>$B^{\mathrm T}=-B, C^{\mathrm T}=-C$であり, 
//texequation{
    \mathrm{diag}(m_1,\dots,m_n)&=V^\dagger MV=V^\dagger A^\dagger\bar VV^{\mathrm T}AV\\
    &=(B+iC)^\dagger(B+iC)=-(B-iC)(B+iC)\\
    &=-(B^2+C^2)+i(CB-BC),
//}
より両辺の虚部を比べて, @<m>{BC=CB}. よって@<m>{B}と@<m>{C}は同じ直交行列@<m>{R}で@<eq>{eq:block_diagonal_antisymmetric_matrix}の形にブロック対角化できるので, 
//texequation{
    R^{\mathrm T}(B+iC)R=R^{\mathrm T}V^{\mathrm T}AVR=(VR)^{\mathrm T}AVR\eqqcolon U^{\mathrm T}AU,
//}
として求める形に対角化できる. ∎

この定理を使うと, 積分@<eq>{eq:gaussian_integral_grassmann_number}は変数変換@<m>$\theta_i=U_{ij}\xi_j$により, 
//texequation[eq:gaussian_integral_grassmann_diagonal]{
  &\int d\xi_n\cdots d\xi_1\det\left(\frac{\partial\theta}{\partial\xi}\right)^{-1}\exp\left(\frac12\sum_{i,j}D_{ij}\xi_i\xi_j\right)\\
  =&\int d\xi_n\cdots d\xi_1\det U^{-1}\exp\left(\frac12\sum_{i,j}D_{ij}\xi_i\xi_j\right)\\
  =&\int d\xi_n\cdots d\xi_1\exp\left(\frac12\sum_{i,j}D_{ij}\xi_i\xi_j\right),
//}
と書ける. グラスマン数の積分は実質的に微分だったからヤコビアンが普通の数と逆数で出ることに注意して, ね. @<eq>{eq:gaussian_integral_grassmann_diagonal}を見ると, 行列の次数@<m>{n=2m+1}が奇数のときは
//texequation{
  \int d\xi_{2m+1}1=0,
//}
の因子を含むから積分が0となることがわかる. @<m>{n=2m}が偶数のときは, 
//texequation{
  \prod_{k=1}^m\int d\xi_{2k}d\xi_{2k-1}(1+a_k\xi_{2k-1}\xi_{2k})=\prod_{k=1}^ma_k,
//}
となる. 一方, 
//texequation{
  \det A=\det(U^{\mathrm T}AU)=\det D=\prod_{k=1}^ma_k^2,
//}
だから, 
//texequation[eq:gaussian_integral_grassmann_result]{
  \int d^n\theta\exp\left(\frac12\sum_{i,j}A_{ij}\theta^i\theta^j\right)=\sqrt{\det A},
//}
つまり@<eq>{eq:berezin_integral_pfaffian}の最左辺と最右辺が等しいことがわかった. 普通の数に対するガウス積分のときは, 正定値対称行列@<m>{S}に対して, 
//texequation{
  \int_{\mathbb R^n}d^nx\exp\left(-\frac12\sum_{i,j=1}^nS_{ij}x_ix_j\right)=\frac{(2\pi)^{n/2}}{\sqrt{\det S}},
//}
だったから, 定数倍を無視すると積分結果も逆数になることがわかる. まあこれはヤコビアンが普通と逆になるからあたりまえだけど.

ところで, @<eq>{eq:gaussian_integral_grassmann_result}には一見不思議なところがある. 左辺の指数関数の級数展開は有限項で終わるから積分結果は@<m>{A}の成分の多項式になるはず. ところが, 右辺を見ると一般にはそうはならなさそうに見える. 実は, //say[反対称行列の行列式は成分の完全平方になる.][つまり@<eq>{eq:gaussian_integral_grassmann_result}の右辺は平方根が外せて@<m>{A}の成分の多項式になって, これをパフィアンと呼び@<m>$\mathrm{Pf}(A)$ と書く.]

最後に少し余談だけど, グラスマン数は微小量や微分形式に似ている. 2乗すると0になるし, 反交換するから. パフィアンも微分形式を経由して定義することができて, 2-形式
//texequation{
  A=\frac12A_{ij}dx^i\wedge dx^j,
//}
に対して
//texequation{
  \frac1{m!}A^m=\mathrm{Pf}(A)dx^1\wedge\cdots\wedge dx^{2m},
//}
でパフィアンを定義できる. @<eq>{eq:berezin_integral_pfaffian}と一致することはほぼ明らかだ, ね.
//endsay

===[nonum] 参考文献

//mbibpaper[][@<href>{http://takeno.iee.niit.ac.jp/~shige/math/lecture/basic2/data/diag1.pdf}]

=={場の理論i} 場の理論I

//say[広][ここからは場の理論の話をする, よ. たくさん話したいことがあるから, 大きく超対称性を含まない話と含む話に分けて話すよ. 今からしばらくは超対称性を含まない話. それからこれ以降, 特に断りがなければ4次元に絞った話をする.]

==={yang-mills-インスタントン} Yang-Mills インスタントン

//note{
//texequation[eq:yang_mills_field_strength]{
    F\coloneqq dA+A\wedge A,\\
    F=\pm\star F.
//}
//}

//beginsay[広]
場の理論の最初の話題として, @<b>{ヤン・ミルズインスタントンに関するADHM構成法}について話す. 順番に用語と問題意識を解説していく. 物理ではふつう, ミンコフスキー空間, つまり計量が@<m>$\mathrm{diag}(-,+,+,+)$である空間での理論を考えることが多いけど, ここでは平坦なユークリッド空間での理論を考える. つまり, 添字の上下を深く気にする必要はない, よ.

まずヤン・ミルズ場について簡単に説明する. ヤン・ミルズ場は電磁気の一般化. 電磁気では基本となる場, つまりベクトルポテンシャル@<m>{A=A_\mu dx^\mu}の係数@<m>{A_\mu}はただの時空の関数だったけど, ヤン・ミルズ理論ではこの@<m>{A_\mu}がリー代数に値をとる@<fn>{fn21}. つまり, 平たくいうと一般に非可換な行列になる. 場の強さも変更を受けて, @<eq>{eq:yang_mills_field_strength}の右辺2項目のように非線形項が加わる. 一見すると同じ1-形式どうしのウェッジ積だからこの項は消えてしまうように見えるけど, それはリー代数が可換なとき. 実際, @<eq>{eq:yang_mills_field_strength}を成分で書くと, 
//texequation{
  F_{\mu\nu}=\partial_\mu A_\nu-\partial_\nu A_\mu+[A_\mu,A_\nu],
//}
のように, 代数が非可換なら非線形項が生き残ることがわかる. もちろん代数が可換ならこの非線形項は消えるから, 電磁気学の自然な拡張になっていることもわかる. この場の強さのもとで作用とゲージ変換@<fn>{fn22}は, 
//texequation[eq:yang_mills_action]{
  S=-\frac14\tr\int d^4xF_{\mu\nu}F^{\mu\nu},\\
  A\mapsto A'=g^{-1}Ag+g^{-1}dg,
//}
になる. ただし@<m>{\tr}はゲージ場@<m>{A}が値をとるリー代数を行列で表現したときのトレース, @<m>{g}はリー代数@<m>{\mathfrak g}に対応するリー群@<m>{G}の元. もちろん@<m>$G=e^{\mathfrak g}$の関係がある. 変換@<eq>{eq:yang_mills_action-2}は@<m>{G}が可換なとき, 
//texequation{
  A\mapsto A'=A+d\theta,
//}
となるから, 電磁気──つまり可換な場合の一般化になっていることがわかる. 変換@<eq>{eq:yang_mills_action-2}のもとで@<eq>{eq:yang_mills_action}が不変であることは簡単な計算で示せる@<fn>{fn23}から, 演習問題としてやってみて, ね.

つぎにインスタントンについて説明する. インスタントンの定義は,

 * 作用@<eq>{eq:yang_mills_action}に対する古典解, つまり運動方程式の解であって,
 * 作用積分@<eq>{eq:yang_mills_action}を有限の値にするもの：
//texequation{
    \left|-\frac14\tr\int d^4xF_{\mu\nu}F^{\mu\nu}\right|<+\infty.
//}

さて, 作用@<eq>{eq:yang_mills_action}に対する運動方程式は2階の複雑な非線形偏微分方程式になってしまって, 一見すると解くのが大変そうだけど, ここでうまいトリックをつかう. ふたりは運動方程式の解がどんな性質をみたすものとして定義されていたか覚えてる？
//endsay

//say[佑芽][えーと…….]

//say[千奈][たしか……『作用を最小にする』もの, でしたわ！]

//say[佑芽][『最小作用原理』だ！]

//say[広][ふふ, あたり. ふたりとも元気いっぱいだ, ね@<fn>{fn24}. ただしここではもうすこしだけ意味をひろくとって, 『作用の極小を与える配位』, あるいは『作用を停留させる配位』と考えたほうがあつかいやすい.]

//say[佑芽][停留ってなあに？]

//beginsay[広]
汎関数微分が0, つまり@<m>{A}の微小変化に対して汎関数の変化が2次以上のオーダーであること. こう言いかえることでうまいトリックが使える. 作用の式をこんなふうに書きかえる：
//texequation[eq:yang_mills_action_complete_the_square]{
  \tr\int d^4xF_{\mu\nu}^2=\frac12\tr\int d^4x\left(F\pm\tilde F\right)^2\mp\tr\int d^4xF_{\mu\nu}\tilde F^{\mu\nu}.
//}
ここで, @<m>$\tilde F_{\mu\nu}\coloneqq\displaystyle\frac12\varepsilon_{\mu\nu\rho\sigma}F^{\rho\sigma}$. 微分形式のときは@<m>{\tilde F}のかわりに@<m>{\star F}って書いたりするけど, とくに大きなちがいはない. 話を戻して, @<eq>{eq:yang_mills_action_complete_the_square}の2項目は実は@<m>{A}の微小変化に対して位相不変量になっている. つまり, 作用積分が有限であるとき, 無限遠の近くでは@<m>{A}はピュア・ゲージ
//texequation{
  A\sim g^{-1}dg\qquad\left(|x|\to\infty\right),
//}
である必要があって, このとき
//texequation{
  \int d^4x\tr F\tilde F=-\frac23\int_{S^3\,\text{at}\,\infty}\tr\left(g^{-1}dg\right)^3,
//}
になる. ただし, 右辺は無限遠点の周りの@<m>{S^3}上での積分. この積分は, たとえばゲージ群がSU(2)の場合がわかりやすいけど, @<m>{x\in S^3}から@<m>$g\in\mathrm{SU(2)}\sim S^3$への巻きつき数になっているから, 離散的な値しかとることができない. 具体的には, 
//texequation[eq:instanton_number]{
  \int d^4x\tr F\tilde F=16\pi^2k,\ k\in\mathbb Z,
//}
のようになる. つまり, この積分は@<m>{A}を連続的に変化させてもかわらないことになる.

@<eq>{eq:yang_mills_action_complete_the_square}の停留点の話に戻る, よ. 右辺第2項は@<m>{A}の微小変化に対して定数だということがわかったから, 第1項が極小になるような配位を探せばいい. でもこの項の被積分関数は平方完成されてるから, 結局, 
//texequation{
  F=\pm\tilde F,
//}
つまり@<eq>{eq:yang_mills_field_strength}-@<eq>{eq:yang_mills_field_strength-2}を解けばいいことがわかった. ここでやっとさっき@<fn>{fn25}話したS-双対の話とつながった, ね. この@<b>{自己双対方程式}は1階の微分方程式になっているから, 作用からみちびかれる2階の運動方程式を直接解くよりも簡単であることが期待される. 実際に, ゲージ群が古典行列群, つまりSU(@<m>{N}), SO(@<m>{N}), Sp(@<m>{N})などのときは十分な自由度のパラメータをもった解をあらわに書き下すことができる. ここではゲージ群SU(@<m>{N})に対する解を紹介する, よ.

まず, @<m>{k}を@<eq>{eq:instanton_number}ででてきたインスタントン数として, “0次元ディラック作用素”をつぎのように定義する：
//texequation{
  \nabla\coloneqq Cx-D,
//}
ただし, 
//texequation{
  C\coloneqq
  \begin{pmatrix}
    O_{[N]\times[2k]}\\1_{[2k]\times[2k]}
  \end{pmatrix},\ 
  x\coloneqq x^\mu e_\mu,
//}

 @<m>{e_\mu}はユークリッド空間でのパウリ行列
//texequation{
  e_\mu\coloneqq\left(-i\sigma_i,1\right),
//}
で, @<m>{D}は座標に依存しない行列
//texequation{
  D_{[N+2k]\times[2k]}\coloneqq
  \begin{pmatrix}
    -I^\dagger&-J\\
    B_2^\dagger&-B_1\\
    B_1^\dagger&B_2
  \end{pmatrix},
//}
で, これにインスタントンのすべての情報が含まれている. つまり, ここまでの話をまとめると, @<m>{\nabla=Cx-D}はディラック作用素という名前はついているけど, 微分は含まれていなくて, とくに座標の1次式. ここで, @<m>{\nabla}がつぎの@<b>{代数的な}拘束条件をみたすことを仮定する：

//texequation[eq:0-dim_selfdual]{
  \left[\nabla^\dagger\nabla,e^\mu\right]=0.
//}
そのうえで, “0次元ディラック方程式” 
//texequation{
  \nabla^\dagger v=0,
//}
を考える. @<m>{\nabla^\dagger}は@<m>{2k\times(N+2k)}行列だから, 独立な@<m>$v_{[N+2k]\times[1]}$が@<m>{N}本取れることになる. それらを横に並べて, 
//texequation{
  V_{[N+2k]\times[N]}=\left(v_1,\dots,v_N\right),
//}
のようにする. もちろん
//texequation[eq:adhm_v_orthogonality]{
  \nabla^\dagger V=0,
//}
がなりたっている. ただし, 
//texequation[eq:adhm_v_normalisation]{
  V^\dagger V=1_{[N]\times[N]},
//}
になるように規格化する. このとき, 
//texequation{
  A_{\mu[N]\times[N]}=V^\dagger\partial_\mu V,
//}
あるいは, 
//texequation{
  A=V^\dagger dV,
//}
が, 実は自己双対方程式の解になっている. この構成法をADHM構成法という. ゲージ変換は, 
//texequation{
  V\mapsto V'=Vg,\ g\in\mathrm{SU}(N),
//}
で, この変換がディラック方程式と規格化条件を不変にすることや, ちゃんと@<m>{A}に対するゲージ変換になっていることもわかる@<fn>{fn26}. 自己双対性や, この構成法で十分な自由度が尽くされていることの証明はわかりやすいレヴュー@<mbib>{adhm_review}があるので読んでみて, ね. さっきは「2階の方程式である運動方程式をじかに解かずに1階の自己双対方程式を解く」と言ったけど, 結局のところこの構成法は, 代数的な@<fn>{fn27}方程式@<eq>{eq:0-dim_selfdual}に帰着されていて, 話がさらに簡単になっていることがわかる, ね. ADHM構成法をすごく大雑把に説明すると, 自己双対方程式@<eq>{eq:yang_mills_field_strength}-@<eq>{eq:yang_mills_field_strength-2}は@<m>{dA}と@<m>{A\wedge A}が同じくらいっていう式だから, @<m>{f'(x)=f(x)^2}を解いて@<m>{f(x)\sim1/x}くらいのオーダーの解が構成できると予測される. 実際に, @<m>{V^\dagger V=1}を思い出すと@<m>{A=V^\dagger dV}は対数微分みたいな形をしているからこの直感は正しいことがわかる.

ここまで一般的な構成法を示してきたけど, これだけだとわかりにくいからひとつ例をあげる. ゲージ群がSU(2)でインスタントン数が@<m>{k=1}のとき, @<eq>{eq:0-dim_selfdual}は簡単に解けて, 
//texequation{
  I=\left(\rho,0\right),\ J=
  \begin{pmatrix}
    0\\\rho
  \end{pmatrix},\ 
  \rho\in\mathbb R,
//}
になる@<fn>{fn28}. ただし, @<m>{I}と@<m>{J}が簡単な形になるようにゲージ変換の自由度をつかった. このとき

//texequation{
  \nabla^\dagger=
  \begin{pmatrix}
    \rho\cdot1_{[2]\times[2]}&\bar e_\mu(x^\mu-b^\mu)
  \end{pmatrix},
//}
になって, @<eq>{eq:adhm_v_orthogonality}-@<eq>{eq:adhm_v_normalisation}を解くと, 
//texequation{
  V=\frac1{\sqrt \phi}
  \begin{pmatrix}
    \bar e_\mu(x^\mu-b^\mu)\\
    -\rho\cdot1_{[2]\times[2]}
  \end{pmatrix},\quad
  \mathrm{w/}\quad\phi\coloneqq(x-b)^2+\rho^2,
//}

になる. 最終的に, 
//texequation{
  A_\mu=\frac{i\sigma_{\mu\nu}(x-b)^\nu}{(x-b)^2+\rho^2},\quad\mathrm{w/}\quad\sigma_{\mu\nu}\coloneqq\frac1{2i}\left(e_\mu\bar e_\nu-e_\nu\bar e_\mu\right),
//}
になる. これはBPSTインスタントンと呼ばれる解になっている.
//endsay

=== ハイパーケーラー多様体と重力インスタントン

//note{
//texequation[eq:curvature_self_dual]{
    \pm R_{\mu\nu ab}=\left(\star R\right)_{\mu\nu ab},\\
    I^2=J^2=K^2=IJK=-1,\quad\nabla I=\nabla J=\nabla K=0.
//}
//}

//say[広][つぎは重力インスタントンの話をする, よ.]

//say[佑芽][重力インスタントンはさっきのヤン・ミルズインスタントンとはちがうの？]

//beginsay[広]
似ているけど, ちがうところもある. まず, 重力インスタントンというのはさっき@<fn>{fn29}話した@<b>{曲率テンソルが自己双対}@<eq>{eq:curvature_self_dual}になる計量として定義される. @<eq>{eq:curvature_self_dual}の右辺をていねいに書くと, 
//texequation[eq:curvature_self_dual_coordinate]{
  \pm R_{\mu\nu ab}=\left(\star R\right)_{\mu\nu ab}\coloneqq\frac12\varepsilon_{abcd}R_{\mu\nu}^{\phantom{\mu\nu}cd}.
//}
これはスピン接続@<m>$\omega^a_{\phantom{a}b}=\omega_{\mu\phantom{a}b}^{\phantom{\mu}a}dx^\mu$を用いると, 
//texequation{
  R=d\omega+\omega\wedge\omega,\\
  R=\pm\star R,
//}
のように@<eq>{eq:yang_mills_field_strength}-@<eq>{eq:yang_mills_field_strength-2}と同じ形に書ける. ここはヤン・ミルズインスタントンと似ている, ね. でも今回はこの形は使わない. @<eq>{eq:curvature_self_dual_coordinate}のときなにが起こるかというと, @<eq>{eq:curvature_antisymmetry-2_antisymmetrised}よりリッチ平坦
//texequation{
  R_{\mu\nu}=0,
//}
になる. つまり, 重力インスタントンはアインシュタイン方程式の解になっている.

つぎにハイパーケーラー多様体について説明する. @<b>$ハイパーケーラー多様体というのは, @<m>{4n}次元の@<fn>{fn30}多様体であって, 四元数の代数をみたす3つの複素構造が存在するもの$. つまり, @<eq>{eq:curvature_self_dual-2}をみたす3つの2階テンソル@<m>$I^\mu_{\phantom{\mu}\nu},J^\mu_{\phantom{\mu}\nu},K^\mu_{\phantom{\mu}\nu}$が存在するのが条件. @<eq>{eq:curvature_self_dual-2}では省略した記法をとっているけど, @<m>{I^2=-1}と@<m>{\nabla I=0}はていねいに書くと, 
//texequation{
  I^\mu_{\phantom{\mu}\rho}I^\rho_{\phantom{\rho}\nu}=-\delta^\mu_\nu,\qquad\nabla_\mu I^\nu_{\phantom{\nu}\rho}=0,
//}
という意味. もちろん他の等式も同様. この条件が重力インスタントンとどう関係あるのかというと……. 実は, 4次元のハイパーケーラー多様体は自己双対な曲率テンソルをもつことがいえる. これは簡単な計算でわかるけどすこしテクニカルだからここで示しておこう.

まず, @<m>{I,J,K}は四元数の代数をみたしているから, 適当な座標変換をするとつぎの形にとれることがわかる：
//texequation[eq:quaternion_matrix_representation]{
  I=
  \begin{pmatrix}
    &&0&-1\\
    &&1&0\\
    0&-1&&\\
    1&0&&
  \end{pmatrix},
  J=
  \begin{pmatrix}
    &&-1&0\\
    &&0&-1\\
    1&0&&\\
    0&1&&
  \end{pmatrix},
  K=
  \begin{pmatrix}
    0&-1&&\\
    1&0&&\\
    &&0&1\\
    &&-1&0
  \end{pmatrix}.
//}

一方で@<m>{I}がcovariantly constant なとき, 
//texequation[eq:curvature_self_dual_derivation]{
  \nabla_\mu I_{ab}=0\Rightarrow\left[\nabla_\mu,\nabla_\nu\right]I_{ab}=0\Rightarrow R_{\mu\nu a}^{\phantom{\mu\nu a}c}I_{cb}=0\Rightarrow R_{\mu\nu ab}I^{ab}=0,
//}
がわかる. もちろん@<m>{J,K}についても同様の式がなりたつ. @<eq>{eq:quaternion_matrix_representation}のもとで@<eq>{eq:curvature_self_dual_derivation}をあらわに書き下すと, @<eq>{eq:curvature_self_dual}がえられる. これは座標を固定してえられた関係式だけど, テンソルとしての@<fn>{fn31}方程式だから, 任意の座標系で曲率テンソルが自己双対になる. 証明おわり. これで, 4次元のアインシュタイン方程式の非自明な解が欲しければ, 非自明なハイパーケーラー多様体を構成すればよい, ということがわかった. ここからは@<b>{ハイパーケーラー商}と呼ばれる, ハイパーケーラー多様体の構成方法を解説していく, よ.

ハイパーケーラー商とは, ひとことでいうと高次元のハイパーケーラー多様体から低次元のハイパーケーラー多様体をつくる方法のこと. まず, 高次元のハイパーケーラー多様体@<m>{M}を用意して, その上の“ハイパーケーラー形式”@<m>{\omega_i(i=I,J,K)}を, 
//texequation{
  \omega_I(V,W)=g(V,IW),
//}
で定義する. ここで@<m>{g}は計量で, @<m>{V,W}は任意のベクトル場. もちろん, @<m>{J}と@<m>{K}についても同様. これは成分で書くと, 
//texequation{
  \omega_I\coloneqq\frac12\omega_{I\mu\nu}dx^\mu\wedge dx^\nu=\frac12g_{\mu\rho}I^\rho_{\phantom{\rho}\nu}dx^\mu\wedge dx^\nu,
//}
と同じこと. このとき, @<m>{\omega_i}は閉形式, つまり
//texequation[eq:hyperkaehler_form_closed]{
  d\omega_i=0,
//}
であることに注意する. なぜなら@<m>{\nabla g=\nabla I=0}だから.

つぎに, triholomorphicなキリングベクトル場@<m>{V}というのを考える. これは
//texequation[eq:killing_vector_triholomorphic]{
  \mathcal L_Vg=0,\\
  \mathcal L_V\omega_i\coloneqq i_Vd\omega_i+d(i_V\omega_i)=0,\quad i=I,J,K,
//}
をみたすベクトル場@<m>{V}のこと. 内積の記号の@<m>{i}と複素構造のラベルの@<m>{i}がすこし紛らわしいけど, 我慢しよう. このようなベクトル場@<m>{V}があるとき, @<eq>{eq:hyperkaehler_form_closed}と@<eq>{eq:killing_vector_triholomorphic}より, 
//texequation[eq:i_v_omega_closed]{
  d(i_V\omega_i)=0,
//}
がなりたつ. ここでさらに@<m>{M}が単連結であることを仮定すると, @<eq>{eq:i_v_omega_closed}は積分ができて, 
//texequation{
  i_V\omega_i=d\mu^V_i,\qquad\mu^V_i:x(\in M)\mapsto\mathbb R,
//}
をみたす@<m>{\mu^V_i}が存在する. もちろん, @<m>{V}が複数あったらそのぶんだけ@<m>{\mu^V_i}が存在する. @<m>{\mu^V_i}はmomentum mapと呼ばれ, 保存量のような働きをしている. 実数に値をとる@<m>{\mu^V_i}をまとめて, 
//texequation{
  \mu_{\mathbb C}\coloneqq\mu_I+\sqrt{-1}\mu_J,\qquad\mu_{\mathbb R}\coloneqq\mu_K,
//}
のように書いておくと便利.

これで準備ができたのでいよいよ低次元のハイパーケーラー多様体を構成する. まず, @<m>{\mu^V_i}による@<m>{M}の等高面
//texequation{
  P_\zeta\coloneqq\{x\in M\mid\mu^a_i(x)=\zeta^a_i,\ i=I,J,K,\ a=1,\dots,k=\dim G\},
//}
をとる. ここで@<m>{G}は@<m>{V}によって生成される@<m>{M}の等長変換群. このとき, 商空間@<m>{X_\zeta\coloneqq P_\zeta/G}が実はハイパーケーラー多様体になっている.

長くなったけど, ここまでの構成法をまとめると, 単連結な高次元ハイパーケーラー多様体@<m>{M}の上にtriholomorphicなキリングベクトル場@<m>{V}とそれによって生成される等長変換群@<m>{G}が存在しているとき, 
//texequation{
\def\arraystretch{1.5}
  \begin{array}{cl}
    M&4n\text{次元ハイパーケーラー多様体}\\
    \downarrow&\text{momentum map による等高面：}\ \mu^a_i(x)=\zeta^a_i\\
    P_\zeta&(4n-3k)\text{次元},\ k=\dim G\\
    \downarrow&\\
    P_\zeta/G=X_\zeta&4(n-k)\text{次元ハイパーケーラー多様体}
  \end{array}
//}
という手順で低次元のハイパーケーラー多様体をえることができる. これがハイパーケーラー商.

これだけだとわかりにくいから, さっきとおなじように例をひとつ紹介する. まず, @<m>{M=\mathbb R^8\simeq\mathbb C^4}に平坦な計量
//texequation{
  ds_M^2=\sum_{i=1}^2\left(|dx_i|^2+|dy_i|^2\right),\quad x_i,y_i\in\mathbb C,
//}
を入れたものから始める. これはもちろん自明なハイパーケーラー多様体. 複素構造として, 
//texequation{
I=
  \begin{blockarray}{cccccccc}
  x_{11}&x_{21}&x_{12}&x_{22}&y_{11}&y_{21}&y_{12}&y_{22}\\
  \begin{block}{(cccccccc)}
  &&&&1&0&&\\
  &&&&0&1&&\\
  &&&&&&-1&0\\
  &&&&&&0&-1\\
  -1&0&&&&&&\\
  0&-1&&&&&&\\
  &&1&0&&&&\\
  &&0&1&&&&\\
  \end{block}
  \end{blockarray}\,,\\
  J=
  \begin{pmatrix}
    &&&&&&-1&0\\
    &&&&&&0&-1\\
    &&&&-1&0&&\\
    &&&&0&-1&&\\
    &&1&0&&&&\\
    &&0&1&&&&\\
    1&0&&&&&&\\
    0&1&&&&&&
  \end{pmatrix},
  K=
  \begin{pmatrix}
    &&1&0&&&&\\
    &&0&1&&&&\\
    -1&0&&&&&&\\
    0&-1&&&&&&\\
    &&&&&&1&0\\
    &&&&&&0&1\\
    &&&&-1&0&&\\
    &&&&0&-1&&
  \end{pmatrix},\\
  \mathrm{w/}\quad
  \begin{cases}
    x_i=x_{i1}+\sqrt{-1}x_{i2}\\
    y_i=y_{i1}+\sqrt{-1}y_{i2}
  \end{cases},
//}

をとる. このときハイパーケーラー形式は, 
//texequation{
{2}
  \omega_\mathbb C&\coloneqq\omega_I+\sqrt{-1}\omega_J&&=\sum_{i=1}^2dx_i\wedge dy_i,\\
  \omega_\mathbb R&\coloneqq\omega_K&&=\frac1{2\sqrt{-1}}\sum_{i=1}^2\left(dx_i\wedge d\bar x_i+dy_i\wedge d\bar y_i\right),
//}
になる. Triholomorphic な等長変換群@<m>{G}はU(1)で, その作用と対応するキリングベクトル@<m>{V}は, 
//texequation{
  \begin{cases}
    x_i\mapsto e^{\sqrt{-1}\theta}x_i\\
    y_i\mapsto e^{-\sqrt{-1}\theta}y_i
  \end{cases}
  \Leftrightarrow
  V=\sqrt{-1}\sum_i\left(x_i\frac\partial{\partial x_i}-\bar x_i\frac\partial{\partial\bar x_i}-y_i\frac\partial{\partial y_i}+\bar y_i\frac\partial{\partial\bar y_i}\right),
//}

のようになっている. ここからmomentum map をもとめると, 
//texequation{
  \mu_\mathbb C=\sum_{i=1}^2x_iy_i,\quad\mu_\mathbb R=\sum_{i=1}^2\left(|x_i|^2-|y_i|^2\right),
//}
となる. ここからは話を簡単にするために@<m>{\mu_\mathbb C=0,\ \mu_\mathbb R=-a^2<0}として部分多様体をもとめる計算を進める. このとき, @<m>{x_1y_1+x_2y_2=0}より, @<m>{y_1=-\lambda x_2,\ y_2=\lambda x_1,\ \exists\lambda\in\mathbb C,}とおけて, 
//texequation{
  |\lambda|^2=1+\frac{a^2}{x^2}\quad\mathrm{w/}\quad x^2\coloneqq\sum_i|x_i|^2,
//}
と書ける. 部分多用体@<m>{P_a}の計量は, 
//texequation{
  ds_{P_a}^2=\sum_i\left(|dx_i|^2+|\lambda|^2\left|dx_i+x_i\frac{d\lambda}\lambda\right|^2\right),
//}
となる. 変数変換@<m>$\lambda=|\lambda|e^{\sqrt{{-1}}\beta},\ x_i=r_ie^{\sqrt{-1}\alpha_i},\ r_i\in\mathbb R$によって, 
//texequation{
  ds_{P_a}^2=\sum_i\left[dr_i^2+\left(|\lambda|dr_i+r_id|\lambda|\right)^2+r_i^2\left(d\alpha_i^2+|\lambda|^2\left(d\alpha_i+d\beta\right)^2\right)\right],
//}
という形になる. この座標系で, キリングベクトルは, 
//texequation{
  V=V^\mu\partial_\mu=\sum_i\left(\frac\partial{\partial\alpha_i}-\frac\partial{\partial\beta}\right),
//}
となっている. 最後に, 商空間@<m>{X_a=P_a/G}をとる. 具体的には, 射影された計量
//texequation{
  g^X_{\mu\nu}=g^P_{\mu\nu}-\frac{g^P_{\mu\rho}g^P_{\nu\sigma}V^\rho V^\sigma}{g^P_{\rho\sigma}V^\rho V^\sigma},
//}
を計算する必要がある. これはすこし長い計算になるけど, 頑張って実行すると, 適当な変数変換ののちに, 商空間の計量
//texequation[eq:eguchi_hanson_metric]{
  ds_X^2=\frac{dr^2}{1-(a/r)^4}+\frac{r^2}4\left(\sigma_x^2+\sigma_y^2\right)+\frac{r^2}4\left(1-\frac{a^4}{r^4}\right)\sigma_z^2,
//}
がえられる. ここで@<m>{\sigma_i}はSU(2)の左不変な1-形式で, 座標をおいて表すとたとえば, 
//texequation{
  \sigma_x&\coloneqq\sin\psi d\theta-\cos\psi\sin\theta d\phi,\\
  \sigma_y&\coloneqq\cos\psi d\theta+\sin\psi\sin\theta d\phi,\\
  \sigma_z&\coloneqq d\psi+\cos\theta d\phi,
//}
というふうになっている. インスタントン解@<eq>{eq:eguchi_hanson_metric}は江口・ハンソン解と呼ばれている.
//endsay

=== カイラル量子異常

//note{
//texequation[eq:chiral_anomaly_yang_mills]{
    \langle\partial_\mu j^\mu_\ast\rangle=\frac i{16\pi^2}\tr\left(\epsilon^{\mu\nu\rho\sigma}F_{\mu\nu}F_{\rho\sigma}\right),
//}
//}

//beginsay[広]
ここまでは場の理論の中でも古典論の話しかしてこなかったけど, つぎは量子論の話をする. 場の量子論の中でも計算結果も計算方法もおもしろい, @<b>{量子異常}と@<b>{藤川の計算方法}の話をする, よ.

まず量子異常というのは, 簡単にいうと古典論ではなりたっている対称性が量子論に行くと破れる現象のこと. もう少し詳しくいうと, 古典論で同時になりたつ2つの対称性が, 量子論では両立できなくなる現象のこと. 今日はいちばん有名で計算しやすく, 結果もきれいな@<b>{カイラル量子異常}の話をする, よ.

まず系の設定を説明する. ゲージ場と結合したカイラルフェルミオンの作用@<fn>{fn32} 
//texequation{
  S=\int d^4x\,i\bar\psi\,\!\!\not\!\!D\psi,\\
  \,\!\!\not\!\!D\coloneqq\gamma^\mu D_\mu\coloneqq\gamma^\mu\left(\partial_\mu-iA_\mu\right),
//}
を考える. この作用は古典的には,

 * ゲージ変換
//texequation{
    \psi&\mapsto\psi'=g\psi,\\
    A&\mapsto A'=gAg^{-1}+ig\partial_\mu g^{-1},
//}
 * カイラル変換
//texequation{
    \psi\mapsto\psi'=\exp\left(i\alpha\gamma_\ast\right)\psi,\qquad(\text{$\alpha$は定数, }\gamma_\ast\coloneqq i\gamma^0\gamma^1\gamma^2\gamma^3=-\gamma^1\gamma^2\gamma^3\gamma^4),  
//}

のそれぞれに対して不変になる. カイラル不変性に対する保存則は軸性カレントの保存
//texequation{
  \partial_\mu j^\mu_\ast=0,\quad j^\mu_\ast\coloneqq\bar\psi\gamma^\mu\gamma_\ast\psi,
//}
だけど, ゲージ対称性を保ちながら量子論へ移行するとこの保存則が破れることを計算で確かめる. まず, 経路積分
//texequation{
  Z\coloneqq\int\mathcal D\psi\,e^{-S[\psi]}=\int\mathcal D\psi\,\exp\left(-\int d^4x\,i\bar\psi\,\!\!\not\!\!D\psi\right),
//}
において@<fn>{fn33}, カイラル変換のパラメータ@<m>{\alpha}を局所的なものに“格上げ”した変換
//texequation[eq:local_chiral_transformation]{
  \psi'=\psi+\delta\psi,\quad\delta\psi=i\alpha(x)\gamma_\ast\psi,
//}
を考える. このとき作用の変化は, 
//texequation{
  \delta S=\int d^4x\,\alpha(x)\partial_\mu\left(\bar\psi\gamma^\mu\gamma_\ast\psi\right)=\int d^4x\,\alpha(x)\partial_\mu j^\mu_\ast,
//}
となる. ここまではネーターカレントを求める手続きと一緒だ, ね. この微小変換のもとで経路積分は, 
//texequation[eq:partition_function_infinitesimally_transformed]{
  \int\mathcal D\psi\,e^{-S[\psi]}&=\int\mathcal D\psi'\,e^{-S[\psi']}\qquad\text{（積分変数の変更）}\\
  &=\int \mathcal D\psi'\,\exp\left(-S[\psi]-\int d^4x\,\alpha(x)\partial_\mu j^\mu_\ast\right)\\
  &\sim\int \mathcal D\psi'\,e^{-S[\psi]}\left(1-\int d^4x\,\alpha(x)\partial_\mu j^\mu_\ast\right),
//}
のように変化するから, もし@<m>{\mathcal D\psi'=\mathcal D\psi}なら, @<m>{\alpha}の一次の係数を見ることで量子論においても@<m>{\langle\partial_\mu j^\mu_\ast\rangle=0}がなりたつといえるけど, ここからは経路積分測度@<m>{\mathcal D\psi}を実際に計算できる形で定義して, そうはならないことを見ていく. 具体的には, 
//texequation[eq:fuctional_measure_fermion]{
  \mathcal D\psi\coloneqq\prod_nda_nd\bar b_n,
//}
と定義する. ただしここで@<m>{a_n,\bar b_n}は
//texequation[eq:eigenfunction_expansion]{
  \psi(x)=\sum_na_n\varphi_n(x),\quad\bar\psi(x)=\sum_n\bar b_n\varphi^\dagger(x),
//}
と展開したときの係数で, @<m>{\varphi_n(x)}は@<m>{i\,\!\!\not\!\!D}の固有関数
//texequation{
  i\,\!\!\not\!\!D\varphi_n=\lambda_n\varphi_n,
//}
 @<m>{i\,\!\!\not\!\!D}はエルミートなので@<m>$\{\varphi_n\}_n$は正規直交
//texequation[eq:orthonormality_eigenfunction]{
  \int d^4x\,\varphi^\dagger_m(x)\varphi_n(x)=\delta_{mn},
//}
にとる. このとき, @<m>$\{\varphi_n(x)\}_n$が完全系を張る
//texequation[eq:completeness_eigenfunction]{
  \sum_n\varphi_n(x)\varphi_n^\dagger(y)=\delta(x-y)1_{4\times4},
//}
こと@<fn>{fn34}と, @<m>{\psi}がフェルミオンで, @<m>{\varphi}を普通の関数にとるので, @<m>{a_n,\bar b_n}はグラスマン数になることに注意して, ね@<fn>{fn35}. このように決めることで, 測度@<eq>{eq:fuctional_measure_fermion}はゲージ変換に対して不変になっていることに注意する. 実際, ゲージ変換に対して@<m>{\,\!\!\not\!\!D}は
//texequation{
  \,\!\!\not\!\!D\mapsto\,\,\!\!\not\!\!D'=g\,\!\!\not\!\!Dg^{-1},
//}
と変換されるので, その固有関数は
//texequation{
  \varphi'_n=g\varphi_n,
//}
になる. @<m>{\psi}の変換性はもちろん@<m>{\psi'=g\psi}だから, ゲージ変換をしても展開@<eq>{eq:eigenfunction_expansion}の係数は変わらないことになる. これで測度@<eq>{eq:fuctional_measure_fermion}のゲージ不変性がわかった.

@<eq>{eq:eigenfunction_expansion}, @<eq>{eq:orthonormality_eigenfunction}より, 展開係数@<m>{a_n}は, 
//texequation{
  a_n=\int d^4x\,\varphi^\dagger_n(x)\psi(x),
//}
と書ける. 微小局所カイラル変換@<eq>{eq:local_chiral_transformation}により, 係数@<m>{a_n}は, 
//texequation{
  a'_n&=a_n+\int d^4x\,i\alpha(x)\varphi_n^\dagger(x)\gamma_\ast\psi(x)\\
  &=a_n+\sum_ma_m\int d^4x\,i\alpha(x)\varphi_n^\dagger(x)\gamma_\ast\varphi_m(x)\\
  &=\sum_ma_m\left(\delta_{nm}+\int d^4x\,i\alpha(x)\varphi_n^\dagger(x)\gamma_\ast\varphi_m(x)\right)\\
  &\eqqcolon\sum_ma_m\left(\delta_{nm}+M_{nm}\right),
//}
と変換する. @<m>$\displaystyle\prod_nda'_n=\det\left(\frac{\partial a'}{\partial a}\right)^{-1}\prod_nda_n$だから@<fn>{fn36}, ここからは@<m>{\alpha}の一次のオーダーで@<m>$\displaystyle\det\left(\frac{\partial a'}{\partial a}\right)$を計算する. 
//texequation[eq:Tr_first_appears]{
  \det\left(\frac{\partial a'}{\partial a}\right)&=\det\left(\delta_{nm}+M_{nm}\right)\\
  &=\exp\Tr\log\left(\delta+M\right)\\
  &\sim\exp\Tr M,
//}
となるけど, ここで
//texequation[eq:Tr_last_appears]{
  \Tr M&=\sum_nM_{nn}\\
  &=\sum_n\int d^4x\,i\alpha(x)\varphi_n^\dagger(x)\gamma_\ast\varphi_n(x)\\
  &=\int d^4x\,i\alpha(x)\tr\left[\gamma_\ast\sum_n\varphi_n(x)\varphi_n^\dagger(x)\right],
//}
となる. ここで@<eq>{eq:Tr_first_appears-2}-@<eq>{eq:Tr_last_appears}のTrは展開係数のラベルについてのトレースだけど, @<eq>{eq:Tr_last_appears-3}以降のtrはゲージ群の表現とスピノルの足についてのトレースだから注意して, ね. @<eq>{eq:completeness_eigenfunction}により, 和@<m>{\sum_n\varphi_n(x)\varphi_n^\dagger(x)}は発散しているから, ここで正則化が必要になる. 正しい正則化は, 
//texequation[eq:regularisation_functional_trace]{
  \tr\left[\gamma_\ast\sum_n\varphi_n(x)\varphi_n^\dagger(x)\right]&\to\left.\tr\left[\gamma_\ast\sum_n\exp\left(-\frac{\lambda_n^2}{M^2}\right)\varphi_n(x)\varphi_n^\dagger(x)\right]\right|_{M\to\infty}\\&=\left.\tr\left[\gamma_\ast\sum_n\exp\left(\frac{\,\!\!\not\!\!D_x^2}{M^2}\right)\varphi_n(x)\varphi_n^\dagger(y)\right]\right|_{M\to\infty, y=x},
//}
のように固有値@<m>{\lambda_n}やゲージ共変な作用素@<m>{\,\!\!\not\!\!D}を使う方法で, これならゲージ不変性を保ったまま計算を進められる. @<eq>{eq:regularisation_functional_trace-2}の計算を進めると, 
//texequation[eq:anomaly_calculation_expression1]{
  &\left.\sum_n\exp\left(\frac{\,\!\!\not\!\!D_x^2}{M^2}\right)\varphi_n(x)\varphi_n^\dagger(y)\right|_{y=x},\\
  =&\left.\exp\left(\frac{\,\!\!\not\!\!D_x^2}{M^2}\right)\delta(x-y)\right|_{y=x}\\
  =&\left.\int\frac{d^4k}{(2\pi)^4}\exp\left(\frac{\,\!\!\not\!\!D_x^2}{M^2}\right)e^{ik(x-y)}\right|_{y=x}\\
  =&\int\frac{d^4k}{(2\pi)^4}e^{-ikx}\exp\left(\frac{\,\!\!\not\!\!D^2}{M^2}\right)e^{ikx}\\
  =&\int\frac{d^4k}{(2\pi)^4}\exp\left(\frac{(\,\,\!\!\not\!\!D+i\!\!\not\!\!k)^2}{M^2}\right)\\
  =&M^4\int\frac{d^4k}{(2\pi)^4}\exp\left[-k^2+\frac{2ikD}M+\frac1{M^2}\left(D^\mu D_\mu+\frac12\gamma^{\mu\nu}\left[D_\mu,D_\nu\right]\right)\right],
//}
というふうになる. ただし, 最後の行にいくときに@<m>{k\mapsto Mk}という変数変換をしている, よ. @<eq>{eq:anomaly_calculation_expression1-6}の指数部分を@<m>{1/M}について展開して@<eq>{eq:regularisation_functional_trace-2}に代入すると, @<m>{1/M}以下のオーダーの項は@<m>{M\to\infty}の極限で, @<m>{\gamma}が4つ未満の項は@<m>{\tr(\gamma_\ast\cdots)}で消えるから, 結局生き残る項は
//texequation{
  &\int\frac{d^4k}{(2\pi)^4}\exp(-k^2)\frac1{2!}\frac1{2^2}\tr\left[\gamma_\ast\left(\gamma^{\mu\nu}\left[D_\mu,D_\nu\right]\right)^2\right]\\
  =&\frac1{128\pi^2}\tr\left[\gamma_\ast\left(\gamma^{\mu\nu}\left[D_\mu,D_\nu\right]\right)^2\right]\\
  =&-\frac1{32\pi^2}\tr\left(\epsilon^{\mu\nu\rho\sigma}F_{\mu\nu}F_{\rho\sigma}\right),
//}
となる. ただし, 最後の行でスピノルについてのトレースをとって, ゲージ群についてのトレースをあらためてtrと書いた, よ. これを@<eq>{eq:Tr_last_appears-3}, @<eq>{eq:Tr_first_appears-3}に順次代入すると, 
//texequation{
  \det\left(\frac{\partial a'}{\partial a}\right)\sim\exp\int d^4x\,i\alpha(x)\frac{-1}{32\pi^2}\tr\left(\epsilon^{\mu\nu\rho\sigma}F_{\mu\nu}F_{\rho\sigma}\right),
//}
になる. @<m>$\det\displaystyle\left(\frac{\partial \bar b'}{\partial \bar b}\right)$からも同様の計算で全く同じ寄与が出て, 結局
//texequation{
  \mathcal D\psi'&=\prod_nda_n'd\bar b_n'=\det\left(\frac{\partial a'}{\partial a}\right)^{-1}\det\displaystyle\left(\frac{\partial \bar b'}{\partial \bar b}\right)^{-1}\prod_nda_nd\bar b_n\\
  &\sim \mathcal D\psi\,\exp\int d^4x\,\alpha(x)\frac i{16\pi^2}\tr\left(\epsilon^{\mu\nu\rho\sigma}F_{\mu\nu}F_{\rho\sigma}\right),
//}
これを@<eq>{eq:partition_function_infinitesimally_transformed}に代入して@<m>{\alpha(x)}の一次を見ることで@<eq>{eq:chiral_anomaly_yang_mills}がえられる.

フェルミオンがヤン・ミルズ場じゃなくて重力と結合している場合も, 共変微分が
//texequation{
  D_\mu\psi=\left(\partial_\mu+\frac14\omega_{\mu ab}\gamma^{ab}\right)\psi,
//}
に変わることに注意して, @<eq>{eq:anomaly_calculation_expression1-6}以降を注意深く計算しなおすことで, ほとんど同じ議論で

//note{
//texequation{
    \langle D_\mu\left(\bar\psi\gamma^\mu\gamma_\ast\psi\right)\rangle=\frac i{384\pi^2}\epsilon^{abcd}R^{\mu\nu}_{\phantom{\mu\nu}ab}R_{\mu\nu cd},
//}
//}

という結果がえられる.
//endsay

===[nonum] 参考文献

//mbibpaper[adhm_review][@<href>{https://www2.yukawa.kyoto-u.ac.jp/~masashi.hamanaka/soken_adhmn.pdf}]
//mbibpaper[][M. Bianchi, F. Fucito, M. Martellini, and G. Rossi, arXiv:9601162 [hep-th\].]
//mbibpaper[][K. Fujikawa, @<i>{Phys. Rev. Lett.} @<b>{42} (1979) 1195.]
//mbibpaper[][九後汰一郎, 『ゲージ場の量子論II』9-2節, 培風館, 1989年.]
//mbibpaper[][藤川和男, 『ゲージ場の理論』7-2節, 岩波書店, 2001年.]

=={場の理論ii超対称な場の理論} 場の理論II（超対称な場の理論）

//say[広][ここからは超対称性をもつ場の理論の話をする, よ.]

//say[佑芽][超対称性ってすごく強そうな名前だけど, そんなにすごい対称性なの？]

//say[広][場の理論における対称性は基本的に同じスピンをもつ場しか結びつけない. でも超対称性は例外的にスピンが1/2だけちがう場どうし@<fn>{fn37}を結びつける対称性. 超対称性を考えると理論の性質がよくなったりおもしろいことが起きたりするから研究の対象になってる. 超対称性で結びつく場の組@<fn>{fn38}をお互いのスーパーパートナーであるという, よ.]

//say[千奈][スーパーパートナー……ふたりは特別な関係, ですのね！ わたくしも篠澤さんとスーパーパートナーになりたいですわ@<m>{\heartsuit}]

//say[広][！！ ふふ……もうスーパーパートナーだ, よ.]

//say[佑芽][こんどは千奈ちゃんのほうからイチャイチャしだした！？ ……ぐぬぬ, あたしだってお姉ちゃんとトクベツなカンケイでスーパーパートナーだもん！！！！！]

//beginsay[広]
ふふ……あらためて@<fn>{fn39}, まず超対称な場の理論の記述の復習をする. 超対称な場の理論を記述する方法は大きくわけて超場を用いる方法とそうでない方法の2つがあるけど, ここでは@<m>{\mathcal N=1}超場を用いた記述をおこなう.

まず超空間というのを用意する. 超空間というのは, 普通の座標@<m>{x^m\,(m=1,\dots,4)}とスピノルの添字を持ったグラスマンな座標@<m>$\theta^\alpha,\bar\theta_{\dot\alpha}\,(\alpha,\dot\alpha=1,2)$によって張られた空間のこと. 超場というのは超空間上の場, つまり超空間の座標を引数にとる関数
//texequation{
  F(z)=F(x,\theta,\bar\theta),
//}
のこと. @<m>{\theta}や@<m>{\bar\theta}はグラスマン数だから, それらについての@<m>{F}の冪級数展開は有限項で終わることになる. つまり, 超場は有限個の普通の場──スカラー場やスピノル場, ベクトル場──の情報を持っている. ここで, カイラル微分
//texequation{
  D_\alpha&\coloneqq\frac\partial{\partial\theta^\alpha}+i\sigma^m_{\alpha\dot\alpha}\bar\theta^{\dot\alpha}\partial_m,\\
  \bar D_{\dot\alpha}&\coloneqq-\frac\partial{\partial\bar\theta^{\dot\alpha}}-i\theta^\alpha\sigma^m_{\alpha\dot\alpha}\partial_m,
//}
を導入して, 2種類の積分

 * 超空間全体での積分であるD項：
//texequation{
    \int d^8z\,F\coloneqq\int d^4x\,d^2\theta\,d^2\bar\theta\,F,
//}
 * カイラルな部分空間での積分であるF項：
//texequation{
    \int d^6z\,W\coloneqq\int d^4x\,d^2\theta\, W\qquad\mathrm{w/}\quad\bar D^{\dot\alpha}W=0,
//}

を考えると, これらが超対称変換
//texequation{
  \delta_\xi F\coloneqq(\xi^\alpha Q_\alpha+\bar\xi_{\dot\alpha}\bar Q^{\dot\alpha})F,
//}
のもとで不変になっている, というのが@<m>{\mathcal N=1}超場形式の骨子だった. ただしここで@<m>{Q,\bar Q}は超対称変換の生成子
//texequation{
  Q_\alpha&\coloneqq\frac\partial{\partial\theta^\alpha}-i\sigma^m_{\alpha\dot\alpha}\bar\theta^{\dot\alpha}\partial_m,\\
  \bar Q^{\dot\alpha}&\coloneqq\frac\partial{\partial\theta_{\dot\alpha}}-i\bar\sigma^{m\dot\alpha\alpha}\theta_\alpha\partial_m,
//}
であり, 反交換関係
//texequation{
  \{D,Q\}=\{D,\bar Q\}=\{\bar D,Q\}=\{\bar D,\bar Q\}=\{Q,Q\}=\{\bar Q,\bar Q\}=0,\\
  \{Q_\alpha,\bar Q_{\dot\alpha}\}=2i\sigma^m_{\alpha\dot\alpha}\partial_m,
//}
をみたす. 超対称変換どうしの交換関係が並進になること：
//texequation{
  \delta_\eta\delta_\xi-\delta_\xi\delta_\eta=-2i\left(\eta\sigma^m\bar\xi-\xi\sigma^m\bar\eta\right)\partial_m,
//}
もわかる@<fn>{fn40}. カイラルフェルミオン-スフェルミオン対を含むカイラル多重項@<m>{\Phi}は
//texequation{
  \bar D_{\dot\alpha}\Phi=0,
//}
という拘束条件で特徴づけられ, その最も一般的な形の運動項は
//texequation[eq:scalar_N=1_kaehler]{
  S_{\text{chiral,K\"ahler}}=\int d^8z\,K(\Phi,\Phi^\dagger),
//}
という形になる. ただし@<m>{K(\Phi,\Phi^\dagger)}は非線形シグマ模型のケーラーポテンシャル. いちばんシンプルな形は
//texequation[eq:action_n=1_chiral_minimal]{
  S_{\text{chiral,minimal}}=\int d^8z\,\Phi^\dagger\Phi,
//}
だ, ね. ゲージ場-ゲージーノ対を含むベクトル多重項@<m>{V}は
//texequation{
  V=V^\dagger,
//}
という拘束条件で特徴づけられ, その運動項は
//texequation[eq:action_n=1_gauge_multiplet]{
  S_{\text{gauge}}=\tr\left(\frac14\int d^6z\,W^\alpha W_\alpha+\frac14\int d^6\bar z\,\bar W_{\dot\alpha}\bar W^{\dot\alpha}\right),
//}
となる. ただし@<m>$W^\alpha,\bar W_{\dot\alpha}$は場の強さ
//texequation{
  W^\alpha\equiv-\frac14\bar D^2\left(e^{-V}D^\alpha e^V\right),\qquad\bar W_{\dot\alpha}\equiv+\frac14D^2\left(e^V\bar D_{\dot\alpha}e^{-V}\right).
//}
ゲージ変換は
//texequation[eq:gauge_transformation_vector_multiplet]{
  e^V\mapsto e^{i\Lambda^\dagger}e^Ve^{-i\Lambda},
//}
という形. ただし@<m>{\Lambda}はカイラルなゲージ変換パラメータ. この変換のもとで場の強さは, 
//texequation{
  W^\alpha\mapsto e^{i\Lambda}W^\alpha e^{-i\Lambda},\qquad \bar W_{\dot\alpha}\mapsto e^{i\Lambda^\dagger}\bar W_{\dot\alpha}e^{-i\Lambda^\dagger},
//}
と変更をうけるので作用@<eq>{eq:action_n=1_gauge_multiplet}がゲージ対称性をもつこともわかる@<fn>{fn41}. カイラル多重項とのゲージ不変で最小結合な作用は, 
//texequation[eq:action_n=1_interaction]{
  S_{\text{interaction}}=\int d^8z\,\Phi^\dagger e^V\Phi,
//}
になる. これは@<m>{V=0}とすれば@<eq>{eq:action_n=1_chiral_minimal}に帰着するから, 自然な拡張になっている, ね. こうすると, カイラル場のゲージ変換@<fn>{fn42} 
//texequation{
  \Phi\mapsto e^{i\Lambda}\Phi,\quad\Phi^\dagger\mapsto\Phi^\dagger e^{-i\Lambda^\dagger},
//}
とゲージ場の変換@<eq>{eq:gauge_transformation_vector_multiplet}をあわせれば@<eq>{eq:action_n=1_interaction}が不変になっていることがわかる, ね.

だいぶ駆け足だけど, これで@<m>{\mathcal N=1}の超場の記述を復習できたから, いよいよおいしいところである@<m>{\mathcal N=2}や@<m>{\mathcal N=4}の話に入っていく, よ.
//endsay

==={mathcal-n2-スカラー場のハイパーケーラー性} @<m>{\mathcal N=2} スカラー場のハイパーケーラー性

//say[広][こんな作用を考える. ]
//texequation[eq:N=2_hyper-Kaehler_action]{
  S=\int d^8z\,K(\Phi,\Phi^\dagger).
//}

//say[佑芽][@<eq>{eq:scalar_N=1_kaehler}と同じ?]

//beginsay[広]
見た目はそう. だからこの作用は@<m>{\mathcal N=1}超対称性をもつ. それに加えて@<m>{K(\Phi,\Phi^\dagger)}が@<b>{ハイパーケーラー多様体のケーラーポテンシャルのとき}, つぎの@<b>{2つめの超対称変換}でも@<m>{S}が不変になる.

//note{
//texequation[eq:2nd_susy_N=2_chiral_scalar]{
  \delta \Phi^a=-\frac14\bar D^2\left(\left(\epsilon+\bar\epsilon\right)\bar\Omega^a\right),\ \delta \Phi^{a\dagger}=-\frac14 D^2\left(\left(\epsilon+\bar\epsilon\right)\Omega^{\bar a}\right).
//}
//}

ここで@<m>{\bar\Omega^a}はcovariantly constant な2-形式@<m>$\omega_{ab}$やケーラーポテンシャル@<m>{K}と
//texequation{
  \bar\Omega^a=\omega^{ab}(\Phi)K_b(\Phi,\Phi^\dagger),
//}
という形で結びついていて, 
//texequation{
  I=
  \begin{pmatrix}
    i\delta^a_{\phantom{a}b}&0\\
    0&-i\delta^{\bar a}_{\phantom{\bar a}\bar b}
  \end{pmatrix}
  ,\ J=
  \begin{pmatrix}
    0&\Omega^a_{\phantom{a},\bar b}\\
    \Omega^{\bar a}_{\phantom{\bar a},b}&0
  \end{pmatrix}
  ,\ K=
  \begin{pmatrix}
    0&i\Omega^a_{\phantom{a},\bar b}\\
    -i\Omega^{\bar a}_{\phantom{\bar a},b}&0
  \end{pmatrix},
//}

と定義すると（@<m>$\Omega^a_{\phantom{a},\bar b}\coloneqq \partial_{\bar b}\Omega^a$）, 
//texequation{
  I^2=J^2=K^2=IJK=-1,\\
  \nabla I=\nabla J=\nabla K=0,
//}
をみたす. つまり, @<m>{\mathcal N=2}超対称なスカラー場の理論はtarget space がハイパーケーラー多様体になる. @<m>{\mathcal N=0}, つまり超対称性なしの理論では実スカラー場の個数が任意でtarget space は任意の多様体, @<m>{\mathcal N=1}では複素スカラー場の個数が任意, つまり実スカラー場が偶数個でtarget space はケーラー多様体ときて, @<m>{\mathcal N=2}では複素スカラー場の個数が偶数個でtarget space はハイパーケーラー多様体になる. 超対称性の数を増やすほど理論に課される構造の制限が強くなるのは当たり前だけど, おもしろい. では@<m>{\mathcal N=4}──これは4次元での極大超対称な理論だ, ね──ではどうなるかというと……これについてはまたあとで@<fn>{fn43}話そう.

//table[table1][超対称性とスカラー場の構造]{
@<dtp>{table align=center}@<m>{\mathcal N}	@<dtp>{table align=center}0（超対称性なし）	@<dtp>{table align=center}1	@<dtp>{table align=center}2	@<dtp>{table align=center}4
--------------
@<dtp>{table align=center}物質場の実スカラー場の個数	@<dtp>{table align=center}任意	@<dtp>{table align=center}偶数	@<dtp>{table align=center}4の倍数	@<dtp>{table align=center}？
@<dtp>{table align=center}target space の構造	@<dtp>{table align=center}任意	@<dtp>{table align=center}ケーラー	@<dtp>{table align=center}ハイパーケーラー	@<dtp>{table align=center}？
//}

@<eq>{eq:N=2_hyper-Kaehler_action}-@<eq>{eq:2nd_susy_N=2_chiral_scalar}の一番シンプルな例を一つ挙げておく.

//note{
//texequation[eq:n=2_minimal_matter_lagrangian]{
  S=\int d^8z\,K(Z,Z^\dagger,\tilde Z,\tilde Z^\dagger)\coloneqq\int d^8z\,\left(Z^\dagger Z+\tilde Z\tilde Z^\dagger\right).
//}
//}

この作用が,

//note{
//texequation[eq:n=2_matter_2nd_susy]{
\delta Z&=-\frac14\bar D^2\left[(\epsilon+\bar\epsilon)\tilde Z^\dagger\right],& \delta Z^\dagger&=-\frac14D^2\left[(\epsilon+\bar\epsilon)\tilde Z\right],\\
\delta\tilde Z&=+\frac14\bar D^2\left[(\epsilon+\bar\epsilon)Z^\dagger \right],&\delta\tilde Z^\dagger&=+\frac14D^2\left[(\epsilon+\bar\epsilon)Z\right],
//}
//}

の下で不変になる.
//endsay

//say[佑芽][なんで@<m>{\Phi}から@<m>{Z}に書き換えたの？]

//beginsay[広]
ふふ, 秘密……だけどきっとこれもあとの話で@<fn>{fn44}わかる.

ちなみに@<m>{\mathcal N=2}スカラー場の理論の作用を書く方法はもう一つあって, これもおもしろいから紹介する.

まず, これまで出てきていなかったreal linear superfield @<m>{G} というのを用意する. これは
//texequation{
  G=G^\dagger,\ D^2G=\bar D^2G=0,
//}
をみたす超場. 2階微分が0だからlinear という名前がついてる. これが実はカイラル超場@<m>{\Phi}と同じだけの力学的自由度を持っている. つまり, @<m>{\mathcal N=2}超対称性を持つ最もシンプルな作用として, 
//texequation{
  S=\int d^8z\left(-\frac12G^2+\Phi^\dagger\Phi\right),
//}
がとれる. より一般的には,

//note{
//texequation[eq:N=2_tensor_chiral_action]{
  S=\int d^8z\,L(\Phi^I,\Phi^{I\dagger},G^I),
//}
//}

が@<m>{\mathcal N=2}超対称な作用になるように@<m>{L}を決めればいい. ただし, 多重項@<m>{(\Phi,\Phi^\dagger,G)}が@<m>{n}個ある理論を考えることにして, それらのラベルを@<m>{I}とした. 前の話と同じで@<m>{\mathcal N=1}超対称性は明らかで, 2つめの超対称変換として
//texequation{
\delta \Phi=\bar\eta\bar DG^I,\ \delta\Phi^{I\dagger}=\eta DG^I,\\
\delta G^I=-\eta D\Phi^I-\bar\eta\bar D\Phi^{I\dagger},
//}
というansatz をおく. この変換の下で@<eq>{eq:N=2_tensor_chiral_action}が不変になるためには, @<m>{L}がラプラス方程式

//note{
//texequation{
  \frac{\partial^2L}{\partial\Phi^I\partial\Phi^{J\dagger}}+\frac{\partial^2L}{\partial G^I\partial G^J}=0,
//}
//}

をみたせばいいことがわかる. この方程式の一般的な解はつぎのような周回積分の形で書ける：

//note{
//texequation{
L(\Phi^I,\Phi^{I\dagger},G^I)=\Re\oint_\gamma\frac{d\zeta}{2\pi i\zeta}\mathcal L\left(\mathcal G^I(\zeta),\zeta\right).
//}
//}

ここで@<m>{\gamma}は適当な閉曲線, @<m>{\mathcal G^I}は

//note{
//texequation{
  \mathcal G^I(\zeta)=\frac1\zeta\Phi^I+G^I-\zeta\Phi^I,
//}
//}

@<m>{\mathcal L}は@<m>{\mathcal G^I}と@<m>{\zeta}の適当な解析函数. この話の前半で話したような一般のハイパーケーラー多様体のケーラーポテンシャルや複素構造を陽に書き下すのは難しい問題だけど, この方法なら解析函数と閉曲線を用意して留数積分をするだけで作用を書くことができる.
//endsay

==={mathcal-n2-sqcd} @<m>{\mathcal N=2} SQCD

//note{
//texequation[eq:lagrangian_sqcd]{
S_{\mathrm{SQCD}}=S_{\mathrm{gauge}}+S_{\mathrm{matter}},\\
S_{\mathrm{gauge}}=\tr\left(\frac14\int d^6z\,W^\alpha W_\alpha+\frac14\int d^6\bar z\,\bar W_{\dot\alpha}\bar W^{\dot\alpha}+\int d^8z\,e^{-V}\Phi^\dagger e^V\Phi\right),\\
S_{\mathrm{matter}}=\int d^8z\,\left(Z^\dagger e^VZ+\tilde Ze^{-V}\tilde Z^\dagger\right)+\int d^6z\,\tilde Z\Phi Z+\int d^6\bar z\,Z^\dagger\Phi^\dagger\tilde Z^\dagger,
//}
//}

//say[広][つぎは@<m>{\mathcal N=2}SQCDのラグランジアンの話をする, よ.]

//say[佑芽][SQCD ってなあに？]

//beginsay[広]
Supersymmetric quantum chromodynamics, 超対称量子色力学の略称. 超対称性を入れない場合はSをとってQCDと呼ぶ. QCDという言葉の使い方にはいろんな流儀があるけど, ここではヤン・ミルズ理論のゲージ場が物質場と相互作用していてゲージ対称性をもつ模型を汎くそう呼ぶことにする. この意味での@<m>{\mathcal N=2}SQCDの模型のうち, もっともシンプルな@<fn>{fn45}ものの作用は@<eq>{eq:lagrangian_sqcd}-@<eq>{eq:lagrangian_sqcd-3}のように書ける. ちょっと新しくでてきた記号が多いから順に説明する.

まず@<m>{Z}と@<m>{\tilde Z}はカイラル超場で, @<m>{Z^\dagger}と@<m>{\tilde Z^\dagger}は反カイラル超場, つまり, 
//texequation{
\bar D_{\dot\alpha}Z=\bar D_{\dot\alpha}\tilde Z=D^\alpha Z^\dagger=D^\alpha\tilde Z^\dagger=0.
//}
 @<m>{V}はゲージ超場で, @<m>{\Phi}はその超対称パートナーであるカイラル超場：
//texequation{
V=V^\dagger,\qquad\bar D_{\dot\alpha}\Phi=D^\alpha\Phi^\dagger=0.
//}
そして@<m>{W_\alpha} と @<m>$\bar W_{\dot\alpha}$ はそれぞれカイラル・反カイラルな, ゲージ場@<m>{V}の強さ：
//texequation{
W^\alpha\equiv-\frac14\bar D^2\left(e^{-V}D^\alpha e^V\right),\qquad\bar W_{\dot\alpha}\equiv+\frac14D^2\left(e^V\bar D_{\dot\alpha}e^{-V}\right).
//}
式@<eq>{eq:lagrangian_sqcd-2}と@<eq>{eq:lagrangian_sqcd-3}において, ゲージ多重項 @<m>{(V,\Phi)}は随伴表現, 物質場である@<m>{Z}たちは基本表現に属している. 作用@<eq>{eq:lagrangian_sqcd-2}と@<eq>{eq:lagrangian_sqcd-3}はもちろん, それぞれ@<m>{\mathcal N=1}超対称性をもつことが明らかだけど, ゲージ変換
//texequation{
Z&\mapsto e^{i\Lambda}Z,&Z^\dagger&\mapsto Z^\dagger e^{-i\Lambda^\dagger},\\
\tilde Z&\mapsto\tilde Ze^{-i\Lambda},&\tilde Z^\dagger&\mapsto e^{i\Lambda^\dagger}\tilde Z^\dagger,\\
e^V&\mapsto e^{i\Lambda^\dagger}e^Ve^{-i\Lambda},&e^{-V}&\mapsto e^{i\Lambda}e^{-V}e^{-i\Lambda^\dagger},\\
\Phi&\mapsto e^{i\Lambda}\Phi e^{-i\Lambda},&\Phi^\dagger&\mapsto e^{i\Lambda^\dagger}\Phi^\dagger e^{-i\Lambda^\dagger},
//}
のもとでも不変になっている. ここで@<m>{\Lambda}はカイラルなゲージ変換パラメータ. さらに@<eq>{eq:lagrangian_sqcd-2}と@<eq>{eq:lagrangian_sqcd-3} は2つめの超対称変換@<fn>{fn46} 
//texequation[eq:2nd_susy_sqcd_matter]{
\delta Z&=-\frac14\bar D^2\left[(\epsilon+\bar\epsilon)e^{-V}\tilde Z^\dagger\right],& \delta Z^\dagger&=-\frac14D^2\left[(\epsilon+\bar\epsilon)\tilde Ze^{-V}\right],\\
\delta\tilde Z&=+\frac14\bar D^2\left[(\epsilon+\bar\epsilon)Z^\dagger e^V\right],&\delta\tilde Z^\dagger&=+\frac14D^2\left[(\epsilon+\bar\epsilon)e^VZ\right],
//}
 
//texequation{
\delta e^V=(\epsilon+\bar\epsilon)\left(\Phi^\dagger e^V+e^V\Phi\right),\qquad \delta e^{-V}=-(\epsilon+\bar\epsilon)\left(e^{-V}\Phi^\dagger+\Phi e^{-V}\right),\\
\delta\Phi=-\frac12W^\alpha D_\alpha\epsilon=\frac18\bar D^2\left(e^{-V}D^\alpha e^VD_\alpha\epsilon\right),\quad\delta\Phi^\dagger=-\frac12\bar W_{\dot\alpha}\bar D^{\dot\alpha}\bar\epsilon,
//}
のもとでも不変になっている. ここで@<m>{\epsilon}と@<m>{\bar\epsilon}は大域的な超対称変換のパラメータ, つまり, 
//texequation{
\bar D_{\dot\alpha}\epsilon=D^2\epsilon=\partial_a\epsilon=D^\alpha\bar\epsilon=\bar D^2\bar\epsilon=\partial_a\bar\epsilon=0.
//}
@<eq>{eq:n=2_matter_2nd_susy}-@<eq>{eq:n=2_matter_2nd_susy-2}でカイラル超場を@<m>{Z}に書き換えたのはここで@<m>{\Phi}をゲージ場の超対称パートナーに使いたかったから. @<eq>{eq:lagrangian_sqcd-3}と@<eq>{eq:2nd_susy_sqcd_matter}-@<eq>{eq:2nd_susy_sqcd_matter-2}は@<eq>{eq:n=2_minimal_matter_lagrangian}と@<eq>{eq:n=2_matter_2nd_susy}-@<eq>{eq:n=2_matter_2nd_susy-2}にゲージ場との相互作用をとりいれた拡張になっていることがわかる.
//endsay

===={sec:measure} 超対称でゲージ不変な経路積分測度

//say[広][ここで少し話は逸れるけど, さっき@<fn>{fn47}したアノマリーの話を思い出そう. アノマリーを計算するときは, 尊重したい対称性@<fn>{fn48}を保つような経路積分測度を定義するところが計算の肝だった. さっきは超対称性のない, カイラルフェルミオンだけの理論のアノマリーを計算したけど, 超対称な系に対しても一般に, ゲージ対称性とカイラル対称性が存在するとき, 量子論においてもゲージ対称性を要請するとカイラル対称性が破れる. つまり, 超対称な系に対してもゲージ不変@<fn>{fn49}な測度を定義して計算ができそう, と予測できる. これは実際に正しくて, @<m>{\mathcal N=1}のSQCDに対してはKonishiとShizuyaがそのような測度を発見した. じゃあ@<m>{\mathcal N=2}のときはどうかというと──.]

//say[千奈・佑芽][？]

//say[広][わたしが発見した.]

//say[佑芽][ええっ！？]

//say[千奈][またさらっとすごいことをおっしゃいますわね…….]

//beginsay[広]
ふふ……. 順に流れを追っていこう. @<hd>{カイラル量子異常}節と同じように, 経路積分
//texequation{
\int [dZd\tilde Z^\dagger dZ^\dagger d\tilde Z]\,e^{-S[Z,\tilde Z^\dagger,Z^\dagger,\tilde Z]},
//}
において, 汎関数測度@<fn>{fn50}を
//texequation[eq:measure]{
[dZd\tilde Z^\dagger]
\coloneqq\prod_nda_n,\quad
\begin{pmatrix}
Z\\\tilde Z^\dagger
\end{pmatrix}
=\sum_na_n
\begin{pmatrix}
Z_n\\\tilde Z^\dagger_n
\end{pmatrix},
\quad P
\begin{pmatrix}
Z_n\\\tilde Z^\dagger_n
\end{pmatrix}=\lambda_n
\begin{pmatrix}
Z_n\\\tilde Z^\dagger_n
\end{pmatrix},
//}
と定義する. ここで
//texequation{
P&=
\begin{pmatrix}
-\Phi&-\displaystyle\frac14\bar D^2e^{-V}\\[2ex]
-\displaystyle\frac14D^2e^V&-\Phi^\dagger
\end{pmatrix}
\begin{pmatrix}
\Phi&-\displaystyle\frac14\bar D^2e^{-V}\\[2ex]
-\displaystyle\frac14D^2e^V&\Phi^\dagger
\end{pmatrix}
\\&=
\begin{pmatrix}
\displaystyle\frac1{16}\bar D^2e^{-V}D^2e^V-\Phi^2&\displaystyle\Phi\frac14\bar D^2e^{-V}-\frac14\bar D^2e^{-V}\Phi^\dagger\\[2ex]
-\displaystyle\frac14D^2e^V\Phi+\Phi^\dagger\frac14D^2e^V&\displaystyle\frac1{16}D^2e^V\bar D^2e^{-V}-\Phi^{\dagger2}
\end{pmatrix},
//}

であって, @<m>{\lambda_n}は@<m>{P}の固有値. 共軛@<m>{[dZ^\dagger d\tilde Z]}についても同様に定義する. この測度@<eq>{eq:measure}は明らかに@<m>{\mathcal N=1} 超対称だけど, ゲージ不変性と@<m>{\mathcal N=2}超対称性ももつことを見ていく. まずゲージ不変性だけど, これはさっき超対称性のない場合に@<fn>{50-1}やった計算と似ている. つまり, ゲージ変換によってカイラル超場は共変な変換
//texequation{
\begin{pmatrix}
Z\\\tilde Z^\dagger
\end{pmatrix}
\mapsto
\begin{pmatrix}
e^{i\Lambda}&0\\
0&e^{i\Lambda^\dagger}
\end{pmatrix}
\begin{pmatrix}
Z\\\tilde Z^\dagger
\end{pmatrix}
,\qquad
P
\begin{pmatrix}
Z\\\tilde Z^\dagger
\end{pmatrix}
\mapsto
\begin{pmatrix}
e^{i\Lambda}&0\\
0&e^{i\Lambda^\dagger}
\end{pmatrix}
P
\begin{pmatrix}
Z\\\tilde Z^\dagger
\end{pmatrix},
//}

を受けるので, 固有関数も共変に変換
//texequation{
\begin{pmatrix}
Z_n\\\tilde Z^\dagger_n
\end{pmatrix}
\mapsto
\begin{pmatrix}
e^{i\Lambda}&0\\
0&e^{i\Lambda^\dagger}
\end{pmatrix}
\begin{pmatrix}
Z_n\\\tilde Z^\dagger_n
\end{pmatrix}
,\qquad
P
\begin{pmatrix}
Z_n\\\tilde Z^\dagger_n
\end{pmatrix}
\mapsto
\begin{pmatrix}
e^{i\Lambda}&0\\
0&e^{i\Lambda^\dagger}
\end{pmatrix}
P
\begin{pmatrix}
Z_n\\\tilde Z^\dagger_n
\end{pmatrix}.
//}

される. つまり, 固有関数で展開したときの係数@<m>{a_n}はゲージ変換で変化しないことがわかった. つぎに2つめの超対称変換についてだけど, これも結局同様で, 超対称変換を
//texequation{
\delta
\begin{pmatrix}
Z\\[2ex]\tilde Z^\dagger
\end{pmatrix}
=
\begin{pmatrix}
0&-\displaystyle\frac14\bar D^2(\epsilon+\bar\epsilon)e^{-V}\\[2ex]
+\displaystyle\frac14D^2(\epsilon+\bar\epsilon)e^V&0
\end{pmatrix}
\begin{pmatrix}
Z\\[2ex]\tilde Z^\dagger
\end{pmatrix}
\equiv
\Delta
\begin{pmatrix}
Z\\[2ex]\tilde Z^\dagger
\end{pmatrix},
//}

と書いたときに, @<m>{P}を作用させたカイラル超場の共変性
//texequation{
\delta\left[
P
\begin{pmatrix}
Z\\\tilde Z^\dagger
\end{pmatrix}
\right]=\Delta\left[
P
\begin{pmatrix}
Z\\\tilde Z^\dagger
\end{pmatrix}
\right],
//}
が計算でわかるので展開係数@<m>{a_n}は2つめの超対称変換でも不変, つまり測度@<eq>{eq:measure}はゲージ不変かつ@<m>{\mathcal N=2}超対称であることがわかった.

基底を@<eq>{eq:measure}のようにとったときの正規直交性は少しややこしいので説明しておく. 状態ベクトル

//texequation{
\ket a:=
\begin{pmatrix}
A\\\tilde A^\dagger
\end{pmatrix},
//}
に対して, エルミートな内積

//texequation{
\braket {a}{b}=\int d^8z\,\left(A^\dagger e^VB+\tilde A e^{-V}\tilde B^\dagger\right)+\int d^6z\,\tilde A\Phi B+\int d^6\bar z\,A^\dagger\Phi^\dagger\tilde B^\dagger,
//}
を定義すると, 作用素@<m>{P}はエルミート
//texequation{
\mel{a}{P}{b}=\mel{b}{P}{a}^\dagger.
//}
になる. よって@<m>{P}の固有ベクトルは正規直交完全系
//texequation{
\braket{\Xi_m}{\Xi_n}=\delta_{mn},\qquad\mathrm{w/}\quad
\ket{\Xi_n}:=
\begin{pmatrix}
Z_n\\\tilde Z_n^\dagger
\end{pmatrix},
//}

//texequation{
\sum_n\ket{\Xi_n(z)}\bra{\Xi_n(z')}&=\sum_n
\begin{pmatrix}
Z_n(z)\\\tilde Z^\dagger_n(z)
\end{pmatrix}
\begin{pmatrix}
Z^\dagger_n(z')&\tilde Z_n(z')
\end{pmatrix}
\begin{pmatrix}
e^V&\Phi^\dagger\\
\Phi&e^{-V}
\end{pmatrix}\\
&=
\begin{pmatrix}
\delta^6(z_L-z_L')&0\\
0&\delta^6(z_R-z_R')
\end{pmatrix},
//}

を張る. ただし, @<m>{z_L\equiv(x+i\theta\sigma\bar\theta,\theta), z_R\equiv(x-i\theta\sigma\bar\theta,\bar\theta)}.
//endsay

==={mathcal-n4-super-yang-mills} @<m>{\mathcal N=4} Super-Yang-Mills

//beginsay[広]
いよいよ最後の話題. わたしがいちばん好きな式の話をする, よ. こんな作用を考える：

//note{
//texequation[eq:N=4_SYM_action]{
    S=\tr\left(\frac14\int d^6z\,W^\alpha W_\alpha+\frac14\int d^6\bar z\,\bar W_{\dot\alpha}\bar W^{\dot\alpha}+\sum_{i=1}^3\int d^8z\,e^{-V}\Phi_i^\dagger e^V\Phi_i\right.\notag\\
\left.+\int d^6z\,\Phi_1\left[\Phi_2,\Phi_3\right]+\int d^6\bar z\,\Phi_3^\dagger\left[\Phi_2^\dagger,\Phi_1^\dagger\right]\right).
//}
//}

これは@<eq>{eq:lagrangian_sqcd}-@<eq>{eq:lagrangian_sqcd-3}の@<m>{Z}たちを随伴表現に直して文字も@<m>{\Phi_1}と@<m>{\Phi_3}にして, @<m>{\Phi_i}の間の対称性が見やすい形に書き直したもの. この作用はもともと@<m>{\mathcal N=2}対称性を持っていたから, @<m>{V}に含まれるフェルミオン@<m>{\lambda}と@<m>{\Phi_2}に含まれる@<m>{\psi_2}に作用する@<m>$\mathrm{SU}(2)$対称性を持っている. 一方, この作用には明らかに@<m>{\psi_i}たちに作用する@<m>$\mathrm{SU}(3)$対称性があるから, 結局この作用には@<m>{(\lambda,\psi_1,\psi_2,\psi_3)}に作用する@<m>$\mathrm{SU}(4)$対称性があることになる. つまり, @<b>$この作用は@<m>{\mathcal N=4}超対称性を持つ$. ちなみに, フェルミオンたちには@<m>$\mathrm{SU}(4)$が作用しているけれど, @<m>{\Phi_i}たちに含まれる3つの複素スカラー場, つまり6つの実スカラー場には@<m>$\mathrm{SO}(6)$が作用している. これはさっき@<fn>{fn51}話した偶然同型@<m>$\mathrm{SU}(4)\simeq\mathrm{Spin}(6)$が模型に自然に現れる一つの例になっている.

ちなみに難しくなるから詳しくは触れないけど, @<b>$4次元の@<m>{\mathcal N=4} 超対称ゲージ理論（ヤン・ミルズ理論）の作用は@<eq>{eq:N=4_SYM_action}のように形が完全に決まってしまって, 結合定数@<fn>{fn52}とゲージ群しか自由度を持たない$ことが知られている. さっき@<fn>{fn53}@<m>{\mathcal N=1}のスカラー場のtarget space はケーラー多様体, @<m>{\mathcal N=2}ではハイパーケーラー多様体という話をしたけど, @<m>{\mathcal N=4}ではもはや自明な構造しか許されないことになる. まあこれは@<m>{\mathcal N=4}では物質場というものがなくて, 模型に登場するすべての場がゲージ場と超対称性で結びついてしまっているから当たり前といえば当たり前だけど.

//table[table2][超対称性とスカラー場の構造（再掲＆完全版）]{
@<dtp>{table align=center}@<m>{\mathcal N}	@<dtp>{table align=center}0（超対称性なし）	@<dtp>{table align=center}1	@<dtp>{table align=center}2	@<dtp>{table align=center}4
--------------
@<dtp>{table align=center}物質場の実スカラー場の個数	@<dtp>{table align=center}任意	@<dtp>{table align=center}偶数	@<dtp>{table align=center}4の倍数	@<dtp>{table align=center}（0）
@<dtp>{table align=center}target space の構造	@<dtp>{table align=center}任意	@<dtp>{table align=center}ケーラー	@<dtp>{table align=center}ハイパーケーラー	@<dtp>{table align=center}–
//}

最後に, @<m>{\mathcal N=4}超対称ヤン・ミルズ理論の重要な性質を紹介してこの話を終わりにする. この模型は@<b>{対称性が高すぎて結合定数によらず共形対称性をもつ}, よ@<fn>{fn54}. つまり時空の対称性と合わせてconformal 群@<m>$\mathrm{SO}(2,4)$の対称性を持っている. これにさっき話したスカラー場に作用する@<m>$\mathrm{SO}(6)$を合わせて結局この理論は@<m>$\mathrm{SO}(2,4)\times\mathrm{SO}(6)$を対称性として持つことになる. 一方, 5次元反ド・ジッター時空と5次元球の直積@<m>$\mathrm{AdS}_5\times S^5$上の重力理論の対称性も@<m>$\mathrm{SO}(2,4)\times\mathrm{SO}(6)$になる. もちろん理論の対称性が同じだからといって物理的に等価だとは一概にはいえないけど, この二つの理論の間にはさまざまな対応が見つかっていて, @<b>{AdS/CFT対応}と呼ばれ, 等価な理論だと言われている.
//endsay

===[nonum] 参考文献

//mbibpaper[][J. Wess and J. Bagger, @<i>{Supersymmetry and Supergravity} (Princeton University Press, 1992).]
//mbibpaper[][C. M. Hull, A. Karlhede, U. Lindström, and M. Roček, @<i>{Nucl. Phys.} @<b>{B266} (1986) 1.]
//mbibpaper[][J. Bagger and C. Xiong, arXiv:0601165 [hep-th\].]
//mbibpaper[][S. M. Kuzenko, arXiv:0910.5771 [hep-th\].]
//mbibpaper[][S. M. Kuzenko, @<i>{J. Phys. A: Math. Theor.} @<b>{45} (2012) .]
//mbibpaper[][S. J. Gates Jr., M. T. Grisaru, M. Roček, and W. Siegel, @<i>{Superspace: One Thousand and One Lessons in Supersymmetry}, 4.6節, (Orange Grove Books, 2009).]
//mbibpaper[][D. Butter and S. M. Kuzenko, @<i>{JHEP} @<b>{11} (2011) 080.]
//mbibpaper[][Y. Tachikawa, @<m>$\mathcal N=2$ @<i>{Supersymmetric Dynamics for Pedestrians} (Springer, 2014), arXiv:1312.2684 [hep-th\].]
//mbibpaper[][K. Konishi and K. Shizuya, @<i>{Il Nuovo Cimento} @<b>{A90} (1985) 111.]
//mbibpaper[][A. D.-E. Tateishi, arXiv:2501.05741 [hep-th\].]

== 終わりに

//say[佑芽][式が多すぎて目が回るよ〜.]

//say[千奈][こんなにたくさんしゃべっている篠澤さんが見られて新鮮でしたわ！]

//say[広][………….]

//say[千奈][篠澤さん？　篠澤さん！？　大変ですわ！　息をしていませんわ！　人工呼吸いたしませんと……！]

//say[佑芽][落ち着いて千奈ちゃん！　息はしてるよ！　救急車呼ばないと！]

//say[広][……ちょっと一気にしゃべりすぎた@<fn>{fn55}.]

//say[佑芽][よかった〜. 死んじゃうんじゃないかと思ったよ〜.]

//say[広][このくらいは日常茶飯事だ, よ.]

//say[佑芽][学問って命がけなんだね…….]

//say[千奈][それはちょっとちがうと思いますわ…….]

//say[広][ふふふ……. さっきも言ったけど, 学問の世界は広くて, 深い. 物理や数学にかぎっても, 今日紹介しきれなかったり, わたしがまだ理解できてないおもしろい話や美しい式がたくさんあるはずだから, ふたりもぜひ, 勉強を続けて, おもしろいことがあったら教えてほしい.]

//say[佑芽][広ちゃん……あたしがんばるよ！　いつかお姉ちゃんに勝つためにも！]

//say[広][そのためにはまず, 期末テストの勉強を頑張らないといけない, ね.]

//say[佑芽][う゛っ…….]

//say[千奈][さらっとおっしゃってますが, 「わたしが『まだ』理解できてない」という言い方はさすがですわね…….]

//say[広][ふふ…….]

//footnote[fn1][数式の美しさを味わうことを目的とするから説明はつけたりつけなかったりする, よ. 詳しい説明がほしい場合は参考文献を適宜参照して, ね.]
//footnote[fn2][@<hd>{解析力学}章で.]
//footnote[fn3][@<m>$\eta_{\mu\nu}$はmostly plus なミンコフスキー計量：@<m>$\eta_{\mu\nu}\coloneqq\text{diag}(-,+,+,+)$.]
//footnote[fn4][@<hd>{統計力学}章で統計力学のスピングラスにおける双対性についてちょっとだけ話す, よ.]
//footnote[fn5][@<hd>{yang-mills-インスタントン}節で.]
//footnote[fn6][重力の作用を書くときにでてくる, よ.]
//footnote[fn7][捩率は幾何学的には@<m>{dx^\mu}と@<m>{dx^\nu}で張られる微小平行四辺形の“閉じなさぐあい”が@<m>$T_{\mu\nu}^\rho dx^\mu dx^\nu$に相当するように定義されている, よ. ちなみに曲率は@<m>{dx^\mu}と@<m>{dx^\nu}で張られる平行四辺形の周りをベクトル@<m>{V^\rho}が一周して戻ってきたときのもとのベクトルからの“ずれ”が@<m>$R^\rho_{\phantom{\rho}\sigma\mu\nu}V^\sigma dx^\mu dx^\nu$になるように定義されている, よ.]
//footnote[fn8][@<hd>{ハイパーケーラー多様体と重力インスタントン}節で.]
//footnote[fn9][ハミルトニアンの定義の都合上, 2倍だけずれるけど.]
//footnote[fn10][@<hd>{電磁気学マクスウェル方程式}章で.]
//footnote[fn11][@<hd>{mathcal-n4-super-yang-mills}節で.]
//footnote[fn12][いちいち呼びわけるのがめんどうだから実対称行列・複素エルミート行列・四元数エルミート行列をまとめてエルミート行列と呼ぶことにする, よ. このあと出てくる直交行列・ユニタリ行列・シンプレクティック行列も同様にまとめてユニタリ行列と呼ぶ, よ.]
//footnote[fn13][ヴァンデルモンドの行列式ともいう, ね.]
//footnote[fn14][ちなみに@<m>$U^{-1}dU$はモーレー・カルタン形式と呼ばれている, よ.]
//footnote[fn15][正確には虚数単位, だね.]
//footnote[fn16][テイラー展開できる.]
//footnote[fn17][適当な条件のもとで.]
//footnote[fn18][グラスマン数でない.]
//footnote[fn19][これはもちろん@<eq>{eq:berezin_integral_pfaffian}の最左辺の再掲だ, よ.]
//footnote[fn20][ここでは被積分関数に近い変数から積分を実行する, という流儀を採用する, よ.]
//footnote[fn21][ここでは@<m>{A_\mu}が反エルミートになるような流儀を採用している, よ.]
//footnote[fn22][本当はゲージ場だけでなく物質場との相互作用も導入したほうがゲージ理論のよりよい理解がえられるけど, 話の本筋からそれるのでやめておく.]
//footnote[fn23][ヒント：ゲージ群が可換なときとはちがって@<m>{F}は@<eq>{eq:yang_mills_action-2}のもとで不変にはならず, @<m>$F\mapsto g^{-1}Fg$のように変換するよ. 注意して, ね.]
//footnote[fn24][わたしは喋りすぎて倒れそう, だけど.]
//footnote[fn25][@<hd>{電磁気学マクスウェル方程式}章で.]
//footnote[fn26][これらは簡単な計算でわかるので演習問題だ, よ.]
//footnote[fn27][つまり, 0階の.]
//footnote[fn28][@<m>{B}は任意.]
//footnote[fn29][@<hd>{一般相対論微分幾何曲率テンソル}章で.]
//footnote[fn30][以下の条件をみたす多様体の次元は4の倍数に限られることが知られている.]
//footnote[fn31][正確には等式の片側にだけ完全反対称テンソルを含んでいるから, 擬テンソルの.]
//footnote[fn32][ここではゲージ場を固定された外場とみなして, 主にフェルミオンの経路積分について考える, よ. それと, ここでは@<m>{A_\mu}がエルミートになるような表記を採用する, よ. @<hd>{yang-mills-インスタントン}節との違いに注意して, ね.]
//footnote[fn33][ここではウィック回転@<m>{x^0=ix^4}によりユークリッド化した理論を考える, よ.]
//footnote[fn34][@<eq>{eq:completeness_eigenfunction}の最後の@<m>$1_{4\times4}$はスピノルの足に関する行列だ, よ.]
//footnote[fn35][逆に@<m>{\varphi}をグラスマン数, @<m>{a_n}や@<m>{\bar b_n}を普通の数にとったときに以下の計算で同じ結果がえられるかどうかは演習問題だ, よ.]
//footnote[fn36][@<m>{a_n}がグラスマン数であることに注意して, ね.]
//footnote[fn37][必然的に2つの場はボソンとフェルミオンになる, ね.]
//footnote[fn38][多重項という, よ.]
//footnote[fn39][物理学者のあいだでは“大切な人”をスーパーパートナーとよぶジョークがあるけど, これは千奈と佑芽には秘密にしておこう, ね.]
//footnote[fn40][これはちょうどいい演習問題だからやってみて, ね.]
//footnote[fn41][これも演習問題だ, よ.]
//footnote[fn42][ここでは@<m>{\Phi}は基本表現に属しているものとしている, よ.]
//footnote[fn43][@<hd>{mathcal-n4-super-yang-mills}節で.]
//footnote[fn44][@<hd>{mathcal-n2-sqcd}節で.]
//footnote[fn45][運動項がminimalな.]
//footnote[fn46][2つめの超対称変換を記述したいだけなら@<m>$\delta Z=-(1/4)\bar D^2(\bar\epsilon e^{-V}\tilde Z^\dagger)$のようにカイラル超場の変換には@<m>{\bar\epsilon}だけ, 反カイラル超場の変換には@<m>{\epsilon}だけが登場する形で事足りるけど, このあと汎関数測度の話をするときに@<m>{\epsilon+\bar\epsilon}という形にしておくことで計算がうまくいく, よ.]
//footnote[fn47][@<hd>{カイラル量子異常}節で.]
//footnote[fn48][@<hd>{カイラル量子異常}節では主に, ゲージ対称性.]
//footnote[fn49][かつ超対称.]
//footnote[fn50][@<hd>{カイラル量子異常}節では@<m>{\mathcal D\psi}のような書き方をしていた測度をここでは@<m>{\lbrack dZ\rbrack}のように書いてるけど, 意味は一緒だよ.]
//footnote[50-1][@<hd>{カイラル量子異常}節で]
//footnote[fn51][@<hd>{mathrmspin6congmathrmsu4}項で.]
//footnote[fn52][@<eq>{eq:N=4_SYM_action}では結合定数を省略しているけれど.]
//footnote[fn53][@<hd>{mathcal-n2-スカラー場のハイパーケーラー性}節で.]
//footnote[fn54][共形対称性をもつ理論を共形場理論(conformal field theory, CFT)というけれど, 多くの典型的なCFT（有名どころだと, 臨界温度イジング模型とか）ではもともと模型に温度や結合定数などの動かせるパラメータがあって, @<hd>{統計力学}章で話したように, それが特定の値（相転移点, 臨界点）のときだけCFTになることが多い, よ.]
//footnote[fn55][千奈にちゅーしてもらえるんじゃないかと思ってドキドキした, よ.]
