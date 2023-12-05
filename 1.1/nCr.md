## n個の中からｒ個を組み合わせの数$C_n^r$を求める

$$
\begin{align}
C_n^r=\frac{n!}{r!(n-r)!}\notag
\end{align}
$$
この式でこのまま計算する場合大きな$n$の値に対して$n!$でオーバーフロー可能性がある
例えば

$$
\begin{align}
C_{10}^5=\frac{10!}{5!5!}=\frac{3628800}{120\cdot120}=252\notag
\end{align}
$$
最終結果はオーバーフローしない値でも、$int$型なら$10!$のところでオーバーフローしてしまう

$C_n^r$は$
\left\{
\begin{alignedat}{2}
C_n^r&=\frac{n-r+1}{r}C_n^{r-1}\\
C_n^0&=1
\end{alignedat}
\right.
$
という漸化式をもちいて表現できる
