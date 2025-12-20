= 篠澤広に Higgs 機構を教えてもらう姫崎莉波

== Higgs機構と姫崎莉波

姫崎莉波は数学の苦手を克服し, 大学で素粒子物理学の道を志していた.@<fn>{fn1}

//say[莉波][広ちゃーん！ヒッグス機構について教えて！]

//say[広][いきなりどうしたの, 莉波]

//say[莉波][素粒子がどうやって質量を獲得するか気になって調べてたら, 「@<b>{ヒッグス機構}」っていう単語が出てきたんだけど, これがわからなくて……一応ディラック場あたりまでは自分で勉強したんだけど……]

//say[広][わかった.やろうか.ヒッグス機構を理解するためには, まずは「自発的対称性の破れ」を理解することが大切だね.その後に, ヒッグス機構を説明しようか.]

//say[莉波][ありがとう！お願いします！！]

//beginsay[広]
スカラー粒子だけからなるモデル
//texequation{
\mathcal{L} \equiv T-V = \frac12 (\partial _\mu \phi)(\partial ^\mu \phi) - (\frac12 \mu ^2 \phi ^2 +\frac14 \lambda \phi ^4)
//}
(@<m>{\lambda >0})を考えるよ.これは,大域的な@<m>{Z(2)}対称性@<fn>{fn2}を持ってる.@<m>{\phi}を@<m>{-\phi}に変えてもラグランジアンが変わらないね.この形は, @<m>{\phi ^4}理論と言われたりしていて, 場の量子論では良く見るラグランジアン.
//endsay

//say[莉波][見たことある形！確かに, @<m>{\phi \rightarrow -\phi}としてみたら対称性を持ってることがわかるね.]

//say[広][まず, @<m>{\mu ^2> 0}の時を考えるよ.@<m>{\phi}に対するポテンシャル@<m>{V}, 今は@<m>{\displaystyle V=\frac12 \mu ^2 \phi ^2 +\frac14 \lambda \phi ^4}のグラフは次の形になる.微分してみればわかるね.]

//image[fig1][]

//say[広][ここで, エネルギーが一番小さくなる基底状態のことを真空と呼ぶんだったね.今真空はどこ？]

//say[莉波][@<m>{\phi = 0}だよね.]

//say[広][そう, すると, この場合は質量が@<m>{\mu}のスカラー場とみなせるよ.例えば, この真空に近いところだけ考えてみようか.ラグランジアンはどうなる？]

//say[莉波][@<m>{\phi}の2次まで残して, @<m>{\displaystyle \mathcal L = \frac12 (\partial_\mu \phi)(\partial^\mu \phi) - \frac12 \mu ^2 \phi ^2}とみなそうかな？あ, クラインゴルドン！]

//say[広][そうだね.クラインゴルドン場のラグランジアンで, @<m>{\mu}は物理的な質量だ.今は真空が一つあって,特に不思議なことはないね.@<br>{}それじゃあ@<m>{\mu ^2 <0}の時を考えてみよう.グラフはどうなる?]

//beginsay[莉波]
えーと,まず@<m>{\displaystyle \frac12 \mu^2 \phi ^2}の項はもう質量項とはみなすことができないよね.ポテンシャルを微分してみようかな……
//texequation{
\frac{\partial V}{\partial \phi} = \phi (\mu ^2 + \lambda \phi ^2)
//}
だから, 微分が0になるのは……@<m>$\displaystyle \phi = \pm \sqrt{\frac{-\mu ^2}{\lambda}}$だ!
//endsay

//say[広][いちいち書くのはめんどくさいから,この値を@<m>{\pm v}とおこうか.すると, グラフはこんなふうになるね.]

//image[fig2][]

//say[莉波][え！？最小のところが二つあるの！？]

//say[広][あるよ.つまり, 真空がふたつある.しかも, @<b>{真空の周り}を見ると, そこではもう対称性がないね.ラグランジアンとしては大域的な@<m>{Z(2)}対称性を持っているのに, 安定な真空状態が実現されているとその周りで対称性は無くなっている.これが,@<b>{自発的対称性の破れ}だよ.@<fn>{fn3}]

//say[莉波][これが自発的対称性の破れか！]

//say[広][違う分野だと, 物性分野の永久磁石なんかが例としてよく挙げられるね.磁石をキュリー温度っていう閾値以上に温めると, 磁石を構成する原子の磁気モーメントが任意の方向を向いて, 回転対称性を復活させるのと一緒に磁性を失うよ.でも, これをゆっくり冷やしたら 永久磁石の性質は依然見えないけど, 一部に方向が揃うところが見つかる.任意の方向が自発的に選ばれて, 回転対称性を破るよ.私は物性の人間じゃないから, 詳しいことはわからないけど.ちなみに, このキュリー温度は, 鉄はだいたい770度, コバルトはだいたい1110度らしいね.]

//say[莉波][磁石でも見られる現象なんだ……]

//say[広][じゃあ, 真空を原点に取り直すために, @<m>{\phi (x) =v + \eta (x)}と取り直してみようか.ラグランジアンに代入してみて]


//beginsay[莉波]
うん！@<m>{v}は定数だから, 
//texequation{
\mathcal{L} &= \frac12 (\partial _\mu \eta)(\partial ^\mu \eta ) -\frac12 \mu ^2 (v + \eta)^2 -\frac{\lambda}{4}(v + \eta)^4 \\
&= \frac12 (\partial _\mu \eta)(\partial ^\mu \eta ) -\lambda v^2 \eta ^2 -\lambda v \eta ^3 -\frac14 \lambda \eta^4 + \mathrm{const.}
//}
あ, 質量項！
//endsay

//say[広][そう, @<m>{\eta ^2}の項を見れば, @<m>{\eta}場をみた時に@<m>$\sqrt{2\lambda v^2}$, つまり@<m>$\sqrt{-2\mu ^2}$の質量を獲得していることになるね.]

//say[莉波][なるほど……真空の周りでポテンシャルを展開してあげることで, 場がどんな質量を獲得するかわかるんだね！]

//beginsay[広]
じゃあとりあえずもうひとつ,自発的対称性の破れの例をみてみようか.次は, 大域的@<m>{U(1)}対称性.簡単に言えば, 角度を変える変換に対する対称性だよ.今回は,複素スカラー場.@<m>$\phi = \frac{1}{\sqrt{2}}(\phi _1 + i\phi _2)$のラグランジアン, 
//texequation{
\mathcal{L} =  (\partial _\mu \phi )^*(\partial ^\mu \phi ) -(\mu ^2 \phi \phi^* +\lambda (\phi \phi^*)^2)
//}
を考えよう.今, @<m>{\mu ^2 <0}で, @<m>{\lambda >0}とする.これは, @<m>{U(1)}変換@<m>$\phi \rightarrow e^{i\alpha}\phi$に関して対称性を持つね.ラグランジアンを@<m>{\phi _1 ,\phi _2}を使って書き直すと,  
//texequation{
\mathcal{L} = \frac12 (\partial _\mu \phi_1)(\partial ^\mu \phi_1)+\frac12 (\partial _\mu \phi_2)(\partial ^\mu \phi_2) -\frac{\mu^2}{2}(\phi_1 ^2+\phi_2 ^2) - \frac{\lambda}{4}(\phi_1 ^2+\phi_2 ^2)^2
//}
//endsay

//say[莉波][代入しただけだよね.]

//say[広][じゃあ, ポテンシャルが最小になるのはどこ？]

//say[莉波][えーと,さっきと同じようにポテンシャルを微分して……@<br>{}@<m>$\displaystyle \phi_1 ^2 +\phi_2 ^2 =-\frac{\mu ^2}{\lambda}$だ！今回は@<m>{Z(2)}の時みたいな離散的な点じゃなくて, @<b>{真空が連続的に現れてる}！]

//say[広][そのとおり.これも@<m>$\displaystyle v=\sqrt{-\frac{\mu ^2}{\lambda}}$として, 真空を@<m>{\displaystyle \phi_1 ^2 +\phi_2 ^2 =v^2}と考えようか.すると, グラフはこんな形になるね.]

//image[fig3][]

//say[広][今回はグラフが3次元になってることに注意して.紙面裏向きに@<m>{\phi _2}軸が伸びてるよ.グラフを@<m>{V}軸周りに頭の中でぐるっと回転させてみるとわかりやすいよ.]

//say[莉波][おっけー！]

//say[広][それじゃあ, この真空の中から一点を選んでその周りで展開してみようか.この時点で自発的対称性の破れが起きていることになるね.]

//say[莉波][えーと, @<m>{(\phi_1,\phi_2) = (v,0)}まわりでいいかな. @<m>$\displaystyle \phi (x) = \frac{1}{\sqrt{2}} \{ v + \eta (x) + i \xi (x)\}$って展開しよう.うわあ, これ項がいっぱい出てくるなあ……]

//say[広][安心して.今私たちが見たいのはどんな項？]

//beginsay[莉波]
そっか！質量項までを見たいから, 場の2次の項まで取り出してくればいいんだ！すると……
//texequation{
\mathcal{L} \simeq \frac12 (\partial _\mu \eta)(\partial ^\mu \eta) + \frac12 (\partial _\mu \xi)(\partial ^\mu \xi) -\lambda v^2 \eta ^2
//}
になる！あれ, @<m>{\xi}の2次項はないんだ！
//endsay

//say[広][そのとおり.これを見ると, @<m>{\eta}場は@<m>$\sqrt{2\lambda v^2} = \sqrt{-2\mu ^2}$の質量を獲得して, @<m>{\xi}場は質量を持たないことがわかるね.ここで重要なことをひとつ話すよ.]

//say[莉波][うん！]

//say[広][こうやって質量を持たない粒子が現れたのは, 連続的な真空の中から1点だけを任意に選んだことによって生まれるもの.連続的な対称性を自発的に破るとき, 常に質量0のスカラー粒子が現れるよ.この粒子を@<b>{南部・ゴールドストン粒子}と呼ぶ.]

//say[莉波][南部って, あの南部陽一郎さん！？]

//say[広][そう, あの南部陽一郎さん.有名だよね.この業績でノーベル物理学賞を受賞してるし, 素粒子物理学の発展を語る上で南部さんは外せないよね.この定理は, 1960年に提唱されてるよ.]

//say[莉波][ここで出てくるんだね……]

//beginsay[広]
じゃあ, 次の話題に移る前にちょっと@<b>{共変微分}を確認しておこうか.まず, 電子のラグランジアン
//texequation{
\mathcal{L} = i \bar{\psi} \gamma ^\mu \partial _\mu \psi -m\bar{\psi} \psi
//}
を考えるよ.
//endsay

//say[莉波][ディラック方程式を勉強した時に見たよ！]

//say[広][このラグランジアンについて, 局所@<m>{U(1)}位相変換@<m>$\psi (x) \rightarrow e^{i\alpha (x) } \psi(x)$に対する不変性を課そうか.さっきと違って, @<m>{\alpha}が@<m>{x}の関数になってるよ.この時, @<m>{\psi}の微分の変換を見てみて.]

//beginsay[莉波]
えーと, 
//texequation{
\partial _\mu  \psi (x) \rightarrow e^{i\alpha (x)} \partial _\mu  \psi (x) + i e^{i\alpha (x)} \psi (x) \partial _\mu \alpha (x)
//}
だから……あ, ラグランジアンが不変にならないね！
//endsay

//beginsay[広]
そのとおり.だから, ここで共変微分を導入するよ.今は,共変微分@<m>{D_\mu}を
//texequation{
D_\mu = \partial_\mu - ieA_\mu (x)
//}
としよう.@<m>{A_\mu}は電磁場だよ.@<m>{e}は結合定数で, 今は電子の電荷.ここで, 電磁場の変換を
//texequation{
A_\mu (x) \rightarrow A_\mu (x) + \frac1e \partial_\mu \alpha (x)
//}
とすると,@<m>{D_\mu \psi (x)}の変換は, 
//texequation{
D_\mu \psi (x) \rightarrow e^{i\alpha (x)} D_\mu \psi (x)
//}
になってくれるね.だから,@<m>{U(1)}局所ゲージ不変性を持つラグランジアンは, 
//texequation{
\mathcal{L} &= i \bar{\psi} \gamma ^\mu D_\mu  \psi -m\bar{\psi} \psi \\
&= i \bar{\psi} \gamma ^\mu \partial _\mu \psi -m\bar{\psi} \psi + e \bar{\psi} \gamma ^\mu \psi A_\mu
//}
とかける.この最後の項は何だと思う？
//endsay

//say[莉波][電流密度を@<m>$j_\mu = -e \bar{\psi} \gamma ^\mu \psi$とすると, カレントと電磁場の相互作用かな？]

//say[広][そのとおり.ここでひとつ注意しなきゃいけないのが, 電磁場の質量項@<m>{\displaystyle \frac12 m^2 A_\mu A^\mu}はゲージ不変じゃないから, 入らないよ,だから, 光子の質量は0じゃなきゃいけないことがここでわかる.]

//say[莉波][なるほど！ゲージ不変性を課した縛りで光子の質量がわかるんだね！]

//beginsay[広]
ここで,ラグランジアンにおける電磁場の運動項は, @<m>$F_{\mu\nu} = \partial _\mu A _\nu - \partial _\nu A _\mu$を用いると, 
//texequation{
\mathcal{L} = -\frac14 F_{\mu\nu} F^{\mu\nu}
//}
とかけた.だから, QEDのラグランジアンは
//texequation{
\mathcal{L} = -\frac14 F_{\mu\nu} F^{\mu\nu} + i \bar{\psi} \gamma ^\mu \partial _\mu \psi -m\bar{\psi} \psi + e \bar{\psi} \gamma ^\mu \psi A_\mu
//}
とかけるね.
//endsay

//say[莉波][やったことある！]

//say[広][それじゃあ, 複素スカラー場に対してこんなラグランジアンを考えよう.また@<m>{\mu^2 < 0 \,,\,\lambda>0}だよ. ]
//texequation{
\mathcal{L} = (D_\mu \phi)^* (D^\mu \phi)  -\mu^2 \phi^* \phi -\lambda (\phi^* \phi)^2 -\frac14 F_{\mu\nu} F^{\mu\nu}
//}

//say[莉波][南部-ゴールドストンボソンを考えた時のラグランジアンに電磁場を導入した感じかな？]

//say[広][うん.@<m>{\mu^2 >0}の時は普通の質量@<m>{\mu}を持つ荷電スカラー粒子になるからね.これを, @<m>{\phi = (v,0)}の周りで展開してみようか.]

//beginsay[莉波]
おっけー！ラグランジアンに@<m>$\phi = \frac{1}{\sqrt{2}} \{v + \eta (x) + i \xi (x)\}$を代入して, 
//texequation{
\frac12 (\partial _\mu \eta)(\partial ^\mu \eta) +\frac12 (\partial _\mu \xi)(\partial ^\mu \xi) -\lambda v^2\eta ^2 +\frac{e^2}{2}v^2 A^\mu A_\mu -ev A_\mu \partial ^\mu \xi - \frac14 F_{\mu\nu} F^{\mu\nu}
//}
大事なのはこんな感じかな？あとは高次の項と定数項だ！
//endsay

//beginsay[広]
いいね.これを見ると, @<m>{\eta}場が質量@<m>$\sqrt{2\lambda v^2}$を獲得してるのに加えて, ゲージ場が質量@<m>{ev}を獲得していることがわかるね.あと, 質量0の南部-ゴールドストン粒子がまた出てきてるよ.ここで大事なのが, 質量0の@<m>{A_\mu}が質量を獲得したせいで, 偏極の自由度が2から3に上がってること.でも, 今やったことはラグランジアンを@<m>{v}の周りで展開しただけだから, 自由度が増えるのはおかしいね.だから, ラグランジアンには@<b>{見かけ上の余分な自由度}があるはず.これを,ゲージ変換の自由度を使って消すことを考えようか.@<m>{\theta (x),h(x)}を実数として, @<m>{\phi}を
//texequation{
\phi \rightarrow \frac{1}{\sqrt{2}} (v + h(x))e^{\frac{i\theta(x)}{v}}
//}
と変えてみる.@<m>{h(x)}を, ヒッグス場と呼ぶよ.@<m>{\theta(x)}はただのパラメタで, 本質的な自由度じゃない.ここで, @<m>{v}が大きいと, これは
//texequation{
\frac{1}{\sqrt{2}} (v + h(x) +i \theta(x))
//}
にしていいね.すると, @<m>{A_\mu}は
//texequation{
A_\mu \rightarrow A_\mu +\frac{1}{ev} \partial _\mu \theta (x)
//}
として, ゲージを一つ決めることにするよ.これを使って, ラグランジアンを計算してみて.
//endsay

//beginsay[莉波]
了解！えーと, 大変な計算だけど……
//texequation{
\mathcal{L} = \frac12 (\partial _\mu h)(\partial ^\mu h) -\lambda v^2 &h^2 +\frac{e^2}{2} v^2 A^{\mu} A_\mu -\lambda v h^3 -\frac14 \lambda h^4  \\
&+\frac{e^2}{2} A_\mu ^2 h^2 +ve^2 A_\mu ^2 h-\frac14 F_{\mu\nu} F^{\mu\nu}
//}
かな？あ, @<m>{\theta(x)}の項が出てきてないね！
//endsay

//say[広][うん.だから, 今回は南部-ゴールドストン粒子の項が出てこない.さらに, ヒッグス場との相互作用によってゲージ場が質量@<m>{ev}を獲得してると見れる.これが, ゲージ場の質量獲得の仕組みで, @<b>{ヒッグス機構}って呼ぶよ.一般的に, 自発的対称性の破れが起きるモデルで, ゲージ場の結合がある場合は, 南部-ゴールドストン粒子が現れずに, ゲージ場が質量を獲得することができるよ.この南部-ゴールドストン粒子はゲージ場の縦波成分として吸収されてる.]

//say[莉波][これがヒッグス機構かあ！]

//say[広][ヒッグス場に対応する粒子を, ヒッグス粒子と呼ぶ.ヒッグス機構の正しさを証明するためには, このヒッグス粒子が観測されるかどうかが重要なんだけど……]

//say[莉波][見つかったの？]

//say[広][見つかった.2012年に, CERN(欧州原子核研究機構)からヒッグス粒子を観測したという発表がされて, その会見にはヒッグス博士もいたよ.]

//say[莉波][そんなに最近のことなんだね……]

//say[広][ただ, まだまだ素粒子理論は多くの課題を抱えているよ.標準模型では, 宇宙の物質やエネルギーのうち5％しか説明できない.あと,標準理論は重力を扱ってない理論だからね.これからの発展に期待.]

//say[莉波][私も勉強頑張って素粒子の研究をできるようになるぞー！]

==[nonum] 参考文献

//mbibpaper[][M.Peskin,D.Schroeder @<i>{An Introduction to Quantum Fied Theory} CRC Press(1995)]
//mbibpaper[][戸本誠　『2016年度3年後期素粒子物理学 1　第11回 2017年1月20日』　高エネルギー物理学研究室（N研）@<br>{}@<href>{https://www.hepl.phys.nagoya-u.ac.jp/~makoto.nagoya/lectures/ParticlePhysics_3_2016/11_20170120.pdf}]
//mbibpaper[][陣内修,渡邊靖志　『素粒子物理入門　改訂版　基本概念から最先端まで』　培風館(2023)]
//mbibpaper[][坂本眞人　『場の量子論(@<m>$\text{I\hspace{-1.2pt}I}$)　ファインマン・グラフとくりこみを中心にして』　裳華房(2020)]

//footnote[fn1][数学Cは独学した]
//footnote[fn2][@<m>{\phi \rightarrow -\phi}なる変換に対して不変]
//footnote[fn3][ラグランジアンとしての対称性は隠れてしまう.]
