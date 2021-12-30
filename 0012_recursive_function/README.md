# 題目12. 遞迴程式練習

## 問題描述

給定下列遞迴函式 :
$$
\begin{equation}
	f(n)=
	\begin{cases}
		n+1, & \text{when }n=0\text{, }n=1 \\
		f(n-1)+f\left(\left\lfloor\dfrac{n}{2}\right\rfloor\right), & \text{when }n>1
	\end{cases}
\end{equation}
$$
請計算出 $f(k)$ 。

**輸入格式**
輸入值為一個大於 1 的整數。

**輸出格式**
$f(k)$ 的計算結果。

**範例**
$$
f(10)=60 \\
f(12)=94
$$
