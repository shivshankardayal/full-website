Determinants Solutions Part 4
*****************************
151. :math:`\Delta = \begin{vmatrix}1 & \frac{\log y}{\log x} & \frac{\log
     z}{\log x} \\ \frac{\log x}{\log y} & 1 & \frac{\log y}{\log z} \\
     \frac{\log x}{\log z} & \frac{\log y}{\log z} & 1\end{vmatrix}`

     :math:`= \frac{1}{\log x\log y\log z}\begin{vmatrix}\log x & \log y & \log
     z \\ \log x & \log y & \log z \\ \log x & \log y & \log x\end{vmatrix}`

     :math:`= 0` because all three rows are identical.

152. :math:`\Delta = \begin{vmatrix}a^{2x} + a^{-2x} + 2 & a^{2x} + a^{-2x} - 2
     & 1 \\ b^{2x} + b^{-2x} + 2 & b^{2x} + b^{-2x} - 2 & 1 \\ c^{2x} +
     c^{-2x} + 2 & c^{2x} + c^{-2x} - 2 & 1\end{vmatrix}`

     :math:`= \begin{vmatrix}a^{2x} + a^{-2x} & a^{2x} + a^{-2x} & 1 \\
     b^{2x} + b^{-2x} & b^{2x} + b^{-2x} & 1 \\ c^{2x} + c^{-2x} & c^{2x} +
     c^{-2x} & 1\end{vmatrix} [C_1\rightarrow C_1 - 2C_3; C_2\rightarrow C_2 +
     2C_3]`

     :math:`= 0` because first two columns are identical.

153. Considering first determinant only:

     :math:`\Delta = \begin{vmatrix}115 & 114 & 103 \\ 108 & 106 & 111 \\ 113 &
     116 & 104\end{vmatrix}[C_1\leftrightarrow C_2; C_2\leftrightarrow C_3]`

     Performing :math:`R_1\leftrightarrow R_3`

     :math:`\Delta = -\begin{vmatrix}113 & 116 & 104 \\ 108 & 106 & 111 \\
     115 & 114 & 103\end{vmatrix}`

     Thus, given condition is satisfied.

154. :math:`\sum{n = 1}^N U_n = \begin{vmatrix}\sum{n = 1}^N n & 1 & 5 \\
     \sum{n = 1}^N n^2 & 2N + 1 & 2N + 1 \\ \sum{n = 1}^N n^3 & 3N^2 &
     3N\end{vmatrix}`

     :math:`= \begin{vmatrix}\frac{n(n + 1)}{2} & 1 & 5 \\ \frac{n(n + 1)(2n +
     1)}{6} & 2N + 1 & 2N + 1 \\ \left\{\frac{n(n + 1)}{2}\right\}^2 & 3N^2 &
     3N\end{vmatrix}`

     Taking :math:`\frac{N(N + 1)}{2}` common from first column and then
     performing :math:`C_1\rightarrow C_1 - \frac{1}{6}(C_2 + C_3)`

     :math:`= \frac{N(N + 1)}{2}\begin{vmatrix}0 & 1 & 5 \\ 0 & 2N + 1 & 2N + 1
     \\ 0 & 3N^2 & 3N\end{vmatrix}`

     Since first column has only :math:`0` as element the sum of determinants
     is zero.

155. :math:`\because A, B, C` are angles of a triangle, therefore :math:`A +
     B + C == \pi; \sin(A + B + C) = 0; \cos(A + B) = -\cos C`

     :math:`\therefore \Delta = \begin{vmatrix}0 & \sin B & \cos C \\ -\sin B
     & 0 & \tan A \\ -\cos C & -\tan A & 0 \end{vmatrix}`

     Changing rows into corresponding columns

     :math:`= \begin{vmatrix}0 & -\sin B & -\cos C \\ \sin B & 0 & -\tan A \\
     \cos C & \tan A & 0\end{vmatrix}`

     Taking :math:`-1` common from second and third columns, we have

     :math:`= \begin{vmatrix}0 & \sin B & \cos C \\ \sin B & 0 & \tan A \\
     \cos C & -\tan A & 0\end{vmatrix} = -\Delta`

     :math:`\Rightarrow 2\Delta = 0 \Rightarrow \Delta = 0`

156. Taking :math:`b - a` common from first and third columns

     :math:`\Delta = (b - a)^2 \begin{vmatrix}b & b - c & c \\ a & a - b & b \\
     c & c - a & a\end{vmatrix}`

     :math:`= (b - a)^2 \begin{vmatrix}b - c & b - c & c \\ a - b & a - b & b
     \\ c - a & c - a & a\end{vmatrix}[C_1 \rightarrow C_1 - C_3]`

     Since the first two columns are same the determinant is zero.

157. We can rewrite it as :math:`\sum_{j = 0}^{n - 1}\Delta_j =
     \begin{vmatrix}\sum_{j = 0}^{n - 1} j & n & 6 \\ \sum_{j = 0}^{n - 1} j^2
     & 2n^2 & 4n - 2 \\ \sum_{j = 0}^{n - 1}j^3 & 3n^3 & 3n^2 - 3n\end{vmatrix}`

     :math:`= \begin{vmatrix}\frac{n(n - 1)}{2} & n & 6 \\ \frac{n(n - 1)(2n -
     1)}{6} & 2n^2 & 4n - 2 \\ \left\{\frac{n(n - 1)}{2}\right\}^2 & 3n^3 &
     3n^2 - 3n\end{vmatrix}`

     :math:`= \frac{n(n - 1)}{2}\begin{vmatrix}1 & n & 6 \\ \frac{2n - 1}{3} &
     2n^2 & 4n - 2 \\ \frac{n(n - 1)}{2} & 3n^3 & 3n^2 - 3n\end{vmatrix}`

     :math:`= \frac{n(n - 1)}{2}\begin{vmatrix}0 & n & 6 \\ 0 & 2n^2 & 4n - 2
     \\ 0 & 3n^3 & 3n^2 -3n\end{vmatrix}[C_1\rightarrow C_1 - \frac{C_3}{6}]`

     Since first column is entirely made up of zeros the value of determinant
     is zero, which is a constant as desired.

158. :math:`\sum_{r = 0}^m(2r - 1) = \frac{1}{2}(m + 1)(2m - 1 - 1) = m^2 - 1`

     :math:`\sum_{r = 0}^m({}^nC_r) = 2^m`

     :math:`\sum_{r = 0}^m1 = m + 1`

     Thus, first two rows of determinant become zero leading the desired sum to
     be :math:`0.`

159. :math:`= \begin{vmatrix}{}^xC_r & {}^{x + 1}C_{r + 1} & {}^{x + 1}C_{r +
     2} \\ {}^yC_r & {}^{y + 1}C_{r + 1} & {}^{y + 1}C_{r + 2} \\ {}^zC_r &
     {}^{z + 1}C_{r + 1} & {}^{z + 1}C_{r + 2}\end{vmatrix} [C_3 \rightarrow
     C_3 + C_2; C_2\rightarrow C_2 + C_1]`

     Performing :math:`C_3\rightarrow C_3 + C_2` we get the determinant on
     R.H.S.

160. :math:`\sum_{r = 1}^n \Delta_r = \begin{vmatrix}\sum_{r = 1}^nr & n + 1 &
     1 \\ \sum_{r = 1}^nr^2 & 2n - 1 & \frac{2n + 1}{3} \\ \sum_{r = 1}^nr^3 &
     3n + 2 \\ \frac{n(n + 1)}{2}\end{vmatrix}`

     :math:`= \begin{vmatrix}\frac{n(n + 1)}{2} & n + 1 & 1 \\ \frac{n(n +
     1)(2n + 1)}{6} & 2n - 1 & \frac{2n + 1}{3} \\ \left\{\frac{n(n +
     1)}{2}\right\}^2 & 3n + 2 & \frac{n(n + 1)}{2}\end{vmatrix}`

     If we take :math:`\frac{n(n + 1)}{2}` common from first column then first
     and third column becomes same. Thus, :math:`\sum_{r = 1}^n \Delta_r = 0`

161. :math:`\sum_{r = 1}^n 2^{r - 1} = 1 + 2 + \ldots + 2^{n - 1} = \frac{2^n -
     1}{2 - 1} = 2^n - 1`

     :math:`\sum_{r = 1}^n 2.3^{r - 1} = 2.\frac{3^n - 1}{3 - 1} = 3^n - 1`

     :math:`\sum_{r = 1}^n 4.5^{r - 1} = 4.\frac{35^n - 1}{5 - 1} = 5^n - 1`

     Thus, we see that first row and third rows are equal leading the sum of
     the determinants to zero.

162. :math:`\Delta = \begin{vmatrix}2x - 1 & 2x - 3 & x^2 - 4x + 4 \\ 2x - 3 &
     2x - 5 & x^2 - 6x + 9 \\ 2x -5 & 2x -7 & x^2 - 8x + 16\end{vmatrix} [C_1
     \rightarrow C_1 - C_1; C_2\rightarrow C_2 - C_3]`

     :math:`= \begin{vmatrix}2x - 1 & 2x - 3 & x^2 \\ 2x - 3 & 2x - 5 & x^2 \\
     2x - 5 & 2x - 7 & x^2\end{vmatrix} + \begin{vmatrix}2x - 1 & 2x - 3
     & -4x \\ 2x - 3 & 2x - 5 & -6x \\ 2x - 5 & 2x - 7 & -8x\end{vmatrix} +
     \begin{vmatrix}2x - 1 & 2x - 3 & 4 \\ 2x - 3 & 2x - 5 & 9 \\ 2x - 5 & 2x -
     7 & 16\end{vmatrix}`

     Clearly, if we perform :math:`R_1\rightarrow R_1- R_2; R_2\rightarrow
     R_2 - R_3` will make :math:`R_1` and :math:`R_3` same in the first
     determinant.

     This is also true for second determinant.

     :math:`= \begin{vmatrix}2 & 2 & -5 \\ 2 & 2 & -7 \\ 2x - 5 & 2x -
     7 & 16\end{vmatrix}`

     Clearly, the determinant is independent of :math:`x`

163. :math:`\Delta = \begin{vmatrix}2 & 1 + i & 3 \\ 1 - i &
     0 & 2 + i \\ 3 & 2 - i & 1\end{vmatrix}`

     Taking complex conjugate and exchanging rows into corresponding columns

     :math:`\overline{\Delta} = \begin{vmatrix}2 & 1 + i & 3 \\ 1 - i &
     0 & 2 + i \\ 3 & 2 - i & 1\end{vmatrix} = \Delta`

     Since :math:`\overline{\Delta} = \Delta,` the determinant is purely real.

164. :math:`\Delta = \begin{vmatrix}x - 3 & 2x & 2 \\ 3x + 2 & x & 1 \\ 5x + 1
     & 5x & 5\end{vmatrix} + \begin{vmatrix}x - 3 & 1 & 2 \\ 3x + 2 & 2 & 1 \\ 5x + 1
     & 4 & 5\end{vmatrix}`

     If we take out :math:`x` common from second column of first determinant
     then second and third columns are same, making it zero. Now expandng
     second determinant

     :math:`= \begin{vmatrix}x & 1 & 2 \\ 3x & 2 & 1 \\ 5x & 4 & 5
     \end{vmatrix} +` a determinant of constants(say :math:`k`)

     :math:`= x \begin{vmatrix}0 & 1 & 2 \\ 1 & 2 & 1 \\ 1 & 4 & 5\end{vmatrix}
     [C_1\rightarrow C_1 - C_2] + k`

     :math:`= x \begin{vmatrix}0 & 1 & 2 \\ 1 & 2 & 1 \\ 0 & 2 & 4\end{vmatrix}
     [R_3\rightarrow R_3 - R_2] + k`

     :math:`= x\begin{vmatrix}0 & 1 & 2 \\ 1 & 2 & 1 \\ 0 & 0 & 0\end{vmatrix}
     [C_3\rightarrow C_3 - 2C_1] + k`

     :math:`= k`

165. :math:`\Delta = \begin{vmatrix}a^n - x & a^n(a - 1) & a^{n + 1}(a - 1) \\
     a^{n + 3} - x & a^{n + 3}(a - 1) & a^{n + 4}(a - 1) \\ a^{n + 6} - x &
     a^{n + 6}(a - 1) & a^{n + 7}(a - 1)\end{vmatrix}[R_2\rightarrow R_2 - R_1;
     R_3\rightarrow R_3 - R_2]`

     :math:`=a^{n(n + 1)}(a - 1)^2\begin{vmatrix}a^n - x & 1 & 1 \\ a^{n + 3} -
     x & a^3 & a^3 \\ a^{n + 6} - x & a^6 & a^6\end{vmatrix} = 0`

     Since second and third columns are same, the edterminant is zero.

166. :math:`\Delta = \sum_{r = 2}^n (-2)^r \begin{vmatrix}{}^nC_r & {}^{n -
     2}C_{r - 1} & {}^{n - 2}C_r \\ 0 & 1 & 1 \\ 0 & -1 & 9\end{vmatrix}
     [C_1\rightarrow C_1 + 2C_2 + C_3]`

     :math:`= \sum_{r = 2}^n (-2)^r{}^nC_r`

     :math:`= \sum_{r = 0}^n (-2)^r{}^nC_r - ({}^nC_0 -2{}^nC_1)`

     :math:`= 2n - 1 + (-1)^n`

167. Performing :math:`R_1\rightarrow aR-1, R_2\rightarrow bR_2, R_3\rightarrow
     cR_3` and then taking out :math:`abc` out from first two columns,

     :math:`\Delta = abc\begin{vmatrix}bc & 1 & a(b + c) \\ ca & 1 & b(c + a)
     \\ ab & 1 & c(a + b)\end{vmatrix}`

     Performing :math:`C_3\rightarrow C_3 + C_1` and then taking :math:`ab + bc
     + ca` out

     :math:`= abc(ab + bc + ca)\begin{vmatrix}bc & 1 & 1 \\ ca & 1 & 1 \\ ab &
     1 & 1\end{vmatrix}`

     Since last two columns are same, the determinant is zero.

Rest of the problems are left as exercises.
