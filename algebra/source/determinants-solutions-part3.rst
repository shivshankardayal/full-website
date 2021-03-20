Determinants Solutions Part 3
*****************************
101. R.H.S. :math:`= \frac{1}{abc}\begin{vmatrix} a & abc & a(b + c) \\ b & abc
     & b(c + a) \\ c & abc & c(a + b) \end{vmatrix}[R_1\rightarrow aR_1;
     R_2\rightarrow bR_2; R_3\rightarrow cR_3]`

     :math:`= -\frac{abc}{abc}\begin{vmatrix}1 & a & ab + ac \\ 1 & b & bc + ba
     \\ 1 & c & ca + cb\end{vmatrix}` Taking :math:`abc` out and then applying
     :math:`C_1\leftrightarrow C_2`

     :math:`= -\begin{vmatrix} 1 & a & -bc \\ 1 & b & - ca \\ 1 & c & -ab
     \end{vmatrix}[C_3\rightarrow C_3 - (ab + bc + ca)C_1]`

     :math:`= \begin{vmatrix}1 & a & bc \\ 1 & b & ca \\ 1 & c &
     ab\end{vmatrix} = \frac{1}{abc}\begin{vmatrix}a & a^2 & abc \\ b & b^2 &
     abc \\ c & c^2 & abc\end{vmatrix}[R_1\rightarrow aR_1; R_2\rightarrow
     bR_2; R_3\rightarrow cR_3]`

     :math:`= \frac{abc}{abc}\begin{vmatrix}a & a^2 & 1 \\ b & b^2 & 1 \\ c &
     c^2 & 1\end{vmatrix}`

     :math:`= \begin{vmatrix}1 & a & a^2 \\ 1 & b & b^2 \\ 1 & c &
     c^2\end{vmatrix}[C_2\leftrightarrow C_3; C_1\leftrightarrow C_2]`

102. :math:`\Delta = \begin{vmatrix}x^2 & x + 1 & x - 2 \\ 2x^2 & 3x & 3x - 3
     \\ x^2 & 2x - 1 & 2x - 1\end{vmatrix} + \begin{vmatrix} x & x + 1 & x - 2
     \\ 3x - 1 & 3x & 3x - 3 \\ 2x + 3 & 2x - 1 & 2x - 1\end{vmatrix}`

     :math:`= \begin{vmatrix}2x^2 & 3x & 3x - 3 \\ 2x^2 & 3x & 3x - 3 \\ x^2 &
     2x - 1 & 2x - 1\end{vmatrix}[R_1\rightarrow R_1 + R_3] + \\\begin{vmatrix}2
     & 3 & x - 2 \\ 2 & 3 & 3x - 3 \\ 4 & 0 & 2x -1\end{vmatrix}[C_1\rightarrow
     C_1-C_3;C_2\rightarrow C_2 - C_3]`

     :math:`= 0 + \begin{vmatrix}2 & 3 & x \\ 2 & 3 & 3x \\ 4 & 0 &
     2x\end{vmatrix} + \begin{vmatrix}2 & 3 & -2 \\ 2 & 3 & -3 \\ 4 & 0 &
     -1\end{vmatrix}`

     :math:`= xA + B` where :math:`A = \begin{vmatrix}2 & 3 & 1 \\ 2 & 3 & 3 \\
     4 & 0 & 2\end{vmatrix}` and :math:`B = \begin{vmatrix}2 & 3 & -2 \\ 2 & 3
     & -3 \\ 4 & 0 & -1\end{vmatrix}` which are determinants of 3rd order
     independent of :math:`x`

103. :math:`\sum_{r = 1}^n D_r = D_1 + D_2 + \ldots + D_n`

     :math:`= \begin{vmatrix}\sum_{r=1}^nr & x & \frac{n(n + 1)}{2} \\
     \sum_{r=1}^n(2r - 1) & y & n^2 \\ \sum_{r=1}^n(3r - 2) & z & \frac{n(3n -
     1)}{2}\end{vmatrix}`

     :math:`= \begin{vmatrix}\frac{(n(n + 1))}{2} & x & \frac{(n(n + 1))}{2} \\
     n^2 & y & n^2 \\ \frac{n(3n - 1)}{2} & z & \frac{n(3n -
     1)}{2}\end{vmatrix}`

     :math:`= 0` because first and third columns are identical.

104. :math:`\Delta = \begin{vmatrix}-5 & 3 + 5i & \frac{3}{2} - 4i \\ 3 - 5i &
     8 & 4 + 5i \\ \frac{3}{2} + 4i & 4 - 5i & 9\end{vmatrix}`

     :math:`\overline{\Delta} = \begin{vmatrix}-5 & 3 - 5i & \frac{3}{2} + 4i \\ 3 + 5i & 8 & 4 -
     5i \\ \frac{3}{2} - 4i & 4 + 5i & 9\end{vmatrix}`

     Exchanging rows and columns

     :math:`\overline{\Delta} = \Delta \therefore \Delta` is purely real.

105. Putting :math:`b = -c,` we have

     :math:`\Delta = \begin{vmatrix}-2a & a - c & a + c \\ -c + a & 2c & 0 \\ c
     + a & 0 & -2c\end{vmatrix}`

     :math:`= \begin{vmatrix}c - a & a - c & a - c \\ a - c & 2c & 0 \\ c + a &
     0 & -2c\end{vmatrix}[R_1 \rightarrow R_1 + R_3]`

     :math:`= \begin{vmatrix}c - a & 0 & 0 \\ a - c & a + c & a - c \\ c + a &
     a + c & a - c\end{vmatrix}[C_2\rightarrow C_2 + C_1; C_3\rightarrow C_3 +
     C_1]`

     :math:`= (c - a)[(a ^2 - c^2) - (a^2 - c^2)] = 0`

     Hence, :math:`b + c` is a factor of :math:`\Delta.` Similarly it can be
     proven that :math:`a + b` and :math:`c + a` are factors of :math:`\Delta.`


     We see that, upon expansion of determinant, each term of the L.H.S. and
     R.H.S. is a homogeneous expression in :math:`a,b,c` of 3rd degree.

     Let :math:`\begin{vmatrix}-2a & a + b & b + c \\ b + a & -2b & b +
     c \\ c + a & c + b & -2c\end{vmatrix} = k(b + c)(c + a)(a + b)` where
     :math:`k` is independent of :math:`a,b,c`

     Putting :math:`a = 0, b = 1, c = 1` we get

     :math:`\begin{vmatrix}0 & 1 & 1  \\ 1 & -2 & 2 \\ 1 & 2 & -2 \end{vmatrix}
     = 2k`

     :math:`k = 4`

     Thus, we have proven the required condition.

106. :math:`F'(a) = \begin{vmatrix}f_1'(a) & f_2'(a) & f_3'(x) \\ g_1(a) &
     g_2(x) & g_3(a) \\ h_1(a) & h_2(a) & h_3(a)\end{vmatrix} +
     \begin{vmatrix}f_1(a) & f_2(a) & f_3(x) \\ g_1'(a) & 
     g_2'(x) & g_3'(a) \\ h_1(a) & h_2(a) & h_3(a)\end{vmatrix} +
     \begin{vmatrix}f_1(a) & f_2(a) & f_3(x) \\ g_1(a) & g_2(x) & g_3(a) \\
     h_1'(a) & h_2'(a) & h_3'(a)\end{vmatrix}`

     :math:`= 0 + 0 + 0`

     :math:`\because f_r(a)=g_r(a)=h_r(a), r=1,2,3` in the first determinant
     last two, in the second determinant first and third, in the third
     determinant first two, rows are identical. Therefore, all determinants are
     zero.

107. Since :math:`f(x) = 0` is a quadratic equation with repeated root
     :math:`\alpha, \therefore f(x) = a_r(x - \alpha)^2` where :math:`a` is a
     constant.

     Clearly :math:`\Delta(x)` is a polynomial of degree having a maximum value
     of :math:`5`

     :math:`\Delta(\alpha) = \begin{vmatrix}A(\alpha) & B(\alpha) & C(\alpha)
     \\ A(\alpha) & B(\alpha) & C(\alpha) \\ A'(\alpha) & B'(\alpha) &
     C'(\alpha)\end{vmatrix}`

     :math:`\Delta(\alpha) = 0` [ :math:`\because R_1` and :math:`R_2` are
     identical]

     :math:`\Delta'(\alpha) = \begin{vmatrix}A'(\alpha) & B'(\alpha) &
     C'(\alpha) \\ A(\alpha) & B(\alpha) & C(\alpha) \\ A'(\alpha) & B'(\alpha)
     & C'(\alpha)\end{vmatrix} = 0` [ :math:`\because R_1` and :math:`R_3` are
     identical]

     Thus, we can say that :math:`\Delta(x) = 0` has two roots equal to
     :math:`\alpha`

     :math:`\Rightarrow \Delta(x) = (x - \alpha)^2g(x),` where :math:`g(x)` is
     a polynomial of degree :math:`3` at most.

     Now it can be easily proven that :math:`\Delta(x)` is divisible by
     :math:`f(x).`

108. Let :math:`\Delta` be the determinant. Then,

     :math:`\frac{d\Delta}{d\theta} = \begin{vmatrix}-\sin(\theta + \alpha) &
     -\sin(\theta + \beta) & -\sin(\theta + \gamma) \\ \sin(\theta + \alpha) &
     \sin(\theta + \beta) & \sin(\theta + \gamma) \\ \sin(\beta + \gamma) &
     \sin(\gamma - \alpha) & \sin(\alpha - \beta)\end{vmatrix} +
     \begin{vmatrix}\cos(\theta + \alpha) & cos(\theta + \beta) & \cos(\theta +
     \gamma) \\ \cos(\theta + \alpha) & cos(\theta + \beta) & \cos(\theta +
     \gamma) \\ \sin(\beta + \gamma) & \sin(\gamma - \alpha) & \sin(\alpha -
     \beta)\end{vmatrix} + \\ \begin{vmatrix}\cos(\theta + \alpha) &
     cos(\theta + \beta) & \cos(\theta + \gamma) \\ \cos(\theta + \alpha) &
     cos(\theta + \beta) & \cos(\theta + \gamma) \\ 0 & 0 & 0\end{vmatrix}`

     :math:`= 0 + 0 + 0`

     Thus, :math:`\Delta` is a constant, which will be independent of
     :math:`\theta`

109. :math:`\Delta = \begin{vmatrix}f & g & h \\ xf' + f & xg' + g & xh' + h \\
     x^2f'' + 4xf' + 2f & x^2g'' + 4xg' + 2g & x^2h'' + 4xh' + 2h\end{vmatrix}`

     :math:`= \begin{vmatrix}f & g & h \\ xf' & xg' & xh' \\ x^2f'' + 4xf' &
     x^2g'' + 2xg' & x^2h'' + 2xh'\end{vmatrix}[R_2\rightarrow R_2 - R_1;
     R_3\rightarrow R_3 - 2R_1]`

     :math:`= \begin{vmatrix}f & g & h \\ xf' & xg' & xh' \\ x^2f'' & x^2g'' &
     x^2h''\end{vmatrix}[R_3 \rightarrow R_3 - 4R_2]`

     :math:`= x^3\begin{vmatrix}f & g & h\\ f' & g' & h' \\ f'' & g'' &
     h''\end{vmatrix}`
           
     :math:`\Delta' = \begin{vmatrix}f' & g ' & h' \\ f' & g ' & h' \\ x^3f'' &
     x^3g'' & x^3h''\end{vmatrix} + \begin{vmatrix}f & g & h \\ f'' & g'' & h''
     \\ x^3f'' & x^3g'' & x^3h''\end{vmatrix} + \begin{vmatrix}f & g & h \\ f'
     & g' & h' \\ (x^2f'')' & (x^2g'')' & (x^2h'')'\end{vmatrix}`

     :math:`= 0 + 0 + \begin{vmatrix}f & g & h \\ f' & g' & h' \\
     (x^2f'')' & (x^2g'')' & (x^2h'')'\end{vmatrix}` because two rows of first
     two determinants are equal.

110. :math:`\frac{d^n\{f(x)\}}{dx^n} =
     \begin{vmatrix}\frac{d^nx^n}{dx^n} & \frac{d^n\sin x}{dx^n} &
     \frac{d^n\cos x}{dx^n} \\ n! & \sin \frac{n\pi}{2} & \cos \frac{n\pi}{2}
     \\ a & a ^2 & a^2\end{vmatrix}`

     :math:`y = x^n, y_1 = \frac{dy}{dx} = nx^{n - 1}, y_2 =
     \frac{d^2y}{dy^2} = n(n - 1)x^{n - 1}, \ldots y_n = n(n - 1)\ldots 3.2.1 =
     n!`

     :math:`y = \sin x, y_1 = \cos x = \sin\left(\frac{\pi}{2} + x\right), y_2
     = \cos\left(\frac{\pi}{2} + x\right) = \sin\left(\frac{\pi}{2} +
     \frac{\pi}{2} + x\right)`

     Proceeding in the same way :math:`y_n = \sin\left(\frac{n\pi}{2} + x\right)`
           
     :math:`y = \cos x, y_1 = -\sin x = \cos \left(\frac{\pi}{2} + x\right),
     y_2 = -sin\left(\frac{\pi}{2} + x\right) = \cos\left(2\frac{\pi}{2} +
     x\right)`

     Proceeding in the same way :math:`y_n = \cos\left(n\frac{\pi}{2} + x\right)`

     :math:`\frac{d^n\{f(x)\}}{dx^n} = \begin{vmatrix}n!
     &\sin\left(\frac{n\pi}{2} + x\right) & \cos\left(\frac{n\pi}{2} + x\right)
     \\ n! & \sin\frac{n\pi}{2} & \cos\frac{n\pi}{2} \\ a & a^2 & a^3\end{vmatrix}`

     :math:`= \begin{vmatrix}n! &\sin\frac{n\pi}{2} &
     \cos\frac{n\pi}{2} \\ n! & \sin\frac{n\pi}{2} & \cos\frac{n\pi}{2} \\ a &
     a^2 & a^3\end{vmatrix} = 0` because first two rows are identical.

111. :math:`\Delta = \begin{vmatrix}\cos A\cos P + \sin A\sin P & \cos A\cos
     Q + \sin A\sin Q & \cos A\cos R + \sin A\sin R \\ \cos B\cos P + \sin
     B\sin P & \cos B\cos Q + \sin B\sin Q & \cos B\cos R + \sin B\sin R \\
     \cos C\cos P + \sin C\sin P & \cos C\cos Q + \sin C\sin Q & \cos C\cos R +
     \sin C\sin R \end{vmatrix}`

     :math:`= \begin{vmatrix}\cos A & \sin A & 0 \\ \cos B & \sin B & 0 \\ \cos
     C & \sin C & 0\end{vmatrix} + \begin{vmatrix}\cos P & \sin P & 0 \\ \cos Q
     & \sin Q & 0 \\ \cos R & \sin R & 0\end{vmatrix}`

     :math:`= 0 + 0 = 0`

112. We know that :math:`\begin{vmatrix}a & b & c \\ b & c & a \\ c & a &
     b\end{vmatrix} = 3abc - a^3 - b^3 - c^3`

     :math:`(a^3 + b^3 + c^3 - 3abc)^2 = \begin{vmatrix}a & b & c \\ b & c & a
     \\ c & a & b\end{vmatrix}^2`

     :math:`= \begin{vmatrix}a & b & c \\ b & c & a \\ c & a &
     b\end{vmatrix}\begin{vmatrix}-a & c & b \\ -b & a & c \\ -c & b &
     a\end{vmatrix}`

     :math:`= \begin{vmatrix}2bc - a^2 & c^2 & b^2 \\ c^2 & 2bc - b^2 &
     a^2 \\ b^2 & a^2 & 2bc - c^2\end{vmatrix}`

113. L.H.S. :math:`= \begin{vmatrix}\sin\alpha & \cos\alpha & 0 \\ \sin\beta &
     \cos\beta & 0 \\ \sin\gamma & \cos\gamma & 0 \end{vmatrix} \begin{vmatrix}
     \sin\alpha & \cos\alpha & 0 \\ \sin\beta & \cos\beta & 0 \\ \sin\gamma &
     \cos\gamma & 0 \end{vmatrix}`

     :math:`=0.0 = 0`

114. :math:`\Delta = \begin{vmatrix}3 & m \\ 2 & -5\end{vmatrix} = -(15 + 2m)`

     **Case I:** When :math:`\Delta = 0, m = \frac{-15}{2}`

     :math:`\Delta_1 = \begin{vmatrix}m & m \\ 20 & -5\end{vmatrix} = -25m\neq
     0`

     Hence, given system of equation has no solution when :math:`m =
     \frac{-15}{2}`

     **Case II** When :math:`m \neq \frac{-15}{2}`

     :math:`\Delta_2 = \begin{vmatrix}2 & m \\ 2 & 20\end{vmatrix} = 2(30 - m)`

     :math:`x = \frac{\Delta_1}{\Delta} = \frac{25m}{15 + 2m} > 0[\because x
     >0]`

     :math:`\Rightarrow -\infty < m < \frac{-15}{2}` or :math:`0 < m < \infty`

     :math:`y = \frac{\Delta_2}{\Delta} = \frac{2(m - 30)}{15 + 2m} >
     0[\because y > 0]`

     :math:`\Rightarrow -\infty < m < \frac{-15}{2}` or :math:`30 < m < \infty`

     Combining both we get, :math:`-\infty < m < \frac{-15}{2}` or :math:`30 <
     m < \infty`

115. :math:`\Delta = \begin{vmatrix}3 & -1 & 4 \\ 1 & 2 & -3 \\ 6 & 5 &
     \lambda\end{vmatrix}`

     :math:`= 7(\lambda + 5)`

     **Case I** When :math:`\lambda \neq 5 \Rightarrow \Delta \neq 0` which
     means the system of equations has unique solution.

     **Case II** When :math:`\lambda = -5 \Rightarrow \Delta = 0`

     Also, :math:`\Delta_1 = \begin{vmatrix}3 & -1 & 4 \\ -2 & 2 & -3 \\ 3 & 5
     & -5\end{vmatrix} = 0, \Delta_2 = \begin{vmatrix}3 & 3 & 4 \\ 1 & -2 & -3
     \\ 6 & -3 & -5\end{vmatrix} = 0`

     :math:`\Delta_3 = \begin{vmatrix}3 & -1 & 3 \\ 1 & 2 & -2 \\ 6 & 5 &
     -3\end{vmatrix} = 0`

     Since all the determinants are zero, in this case we have infinite
     solutions for given system of equations.

     Putting the value of :math:`\lambda` the set of equation becomes

     :math:`3x - y + 4z = 3; x + 2y - 3z = -2; 6x + 5y - 5z = -3`

     From first two equations we get, :math:`z = \frac{4 - 7x}{5}`

     Substituting this in first we get :math:`y = \frac{1 - 13x}{5}`

     Thus the set of solutions is :math:`x = t, y = \frac{1 - 13t}{5}, z =
     \frac{4 - 7t}{5}`

116. :math:`\Delta = \begin{vmatrix}2 & p & 6 \\ 1 & 2 & q \\ 1 & 1 &
     3\end{vmatrix} = (p - 2)(q - 3)`

     :math:`\Delta_1 = \begin{vmatrix}8 & p & 8 \\ 5 & 2 & q \\ 4 & 1 &
     3\end{vmatrix} = (p - 2)(4q - 15)`

     :math:`\Delta_2 = \begin{vmatrix} 2 & 8 & 6 \\ 1 & 5 & 1 \\ 1 & 4 &
     3\end{vmatrix} = 0`

     :math:`\Delta_3 = \begin{vmatrix}2 & p & 8 \\ 1 & 2 & 5 \\ 1 & 1 &
     4\end{vmatrix} = p -2`

     **Case I** When :math:`\Delta \neq 0` i.e. :math:`p \neq 2, q\neq 3,`
     given system of equations has unique solution.

     **Case II** When :math:`\Delta = 0, p =2, q = 3`

     When :math:`p = 2 \Rightarrow \Delta_1 = 0, \Delta_2 = 0, \Delta_3 = 0`

     Thus, given system of equations has inifinite solutions.

     When :math:`q = 3\Rightarrow \Delta_1\neq 0`

     Thus, given system of equations has no solutions.

117. For non-trivial solution

     :math:`\Delta = 0` or :math:`\begin{vmatrix}\lambda & \sin\alpha &
     \cos\alpha \\ 1 & \cos\alpha & \sin\alpha \\ -1 & \sin\alpha & \cos\alpha
     \end{vmatrix} = 0`

     :math:`\Rightarrow \lambda = \sin 2\alpha + \cos 2\alpha`

     If :math:`\lambda = 1, \sin 2\alpha + \cos 2\alpha = 1`

     :math:`\sin 2\alpha = 1 - \cos 2\alpha = 2\sin^2\alpha`

     :math:`2\sin\alpha(\cos\alpha - \sin\alpha) = 0`

     :math:`\therefore \sin\alpha = 0` or :math:`\tan\alpha = 1`

     :math:`\therefore \alpha = n\pi` or :math:`\alpha = n\pi + \frac{\pi}{4},
     n\in I`

118. :math:`= (a + b + c)\begin{vmatrix}1 & b + c & a^2 \\ 1 & c + a & b^2 \\ 1
     & a + b & c^2\end{vmatrix}[C_1\rightarrow C_1 + C_2]`

     :math:`=(a + b + c)\begin{vmatrix}1 & b + a & a^2 \\ 0 & a - b & b^2 - a^2
     \\ 0 & a - c & c^2 - a^2\end{vmatrix}[R_3\rightarrow R_3 - R_1;
     R_2\rightarrow R_2 - R_1]`

     :math:`= (a + b + c)[(a - b)(c^2 - a^2) - (a - c)(b^2 - a^2)]`

     :math:`= (a + b + c)(a - b)(c - a)(c + a - b - a)`

     :math:`= -(a + b + c)(a - b)(b - c)(c - a)`

119. :math:`\Delta = \begin{vmatrix}\sqrt{13} + \sqrt{3} & 2\sqrt{5} & \sqrt{5}
     \\ \sqrt{15} - \sqrt{6} & 5 - 2\sqrt{10}  & 0 \\ 3 - \sqrt{15} & \sqrt{15}
     - 10 & 0\end{vmatrix}[R_2\rightarrow R_2 - \sqrt{2}R_1;R_3\rightarrow
     R_3 - \sqrt{5}R_1]`

     :math:`= 15\sqrt{2} - 25\sqrt{3}`

120. :math:`\Delta = \begin{vmatrix}x & x(x^2 + 1) & x \\ y & y(y^2 + 1) &
     y \\ z & z(z^2 + 1) & z\end{vmatrix} + \begin{vmatrix}x & x(x^2 + 1) & 1
     \\ y & y(y^2 + 1) & 1 \\ z & z(z^2 + 1) & 1\end{vmatrix}`

     Since first and third columns of first determinant are identical.

     :math:`\Rightarrow \Delta = \begin{vmatrix}x & x(x^2 + 1) & 1
     \\ y & y(y^2 + 1) & 1 \\ z & z(z^2 + 1) & 1\end{vmatrix}`

     :math:`= \begin{vmatrix}x & x^3 & 1 \\ y & y^3 & 1 \\ z & z^3 &
     1\end{vmatrix} + \begin{vmatrix}x & x^3 & x \\ y & y^3 & y \\ z & z^3 &
     z\end{vmatrix}`

     Again second and third columns are identical in second determinant.

     :math:`\Delta = \begin{vmatrix}x & x^3 & 1 \\ y & y^3 & 1 \\ z & z^3 &
     1\end{vmatrix}`

     :math:`= (x - y)(y - z)(z - x)(x + y + z)`

121. Let :math:`a` and :math:`d` be the first term and common difference of
     corresponding A.P.

     :math:`\frac{1}{x} = a + (l - 1)d, \frac{1}{y} = a + (2m - 1)d,
     \frac{1}{z} = a + (3n - 1)d`

     :math:`\Delta = \frac{1}{xyz}\begin{vmatrix}x & y & z \\ l & 2m & 3n \\ 1
     & 1 & 1\end{vmatrix}`

     :math:`= \frac{1}{xyz}\begin{vmatrix}a + (l - 1)d & a + (2m - 1)d & a +
     (3n - 1)d\\ l & 2m & 3n \\ 1 & 1 & 1\end{vmatrix}`

     :math:`= \frac{1}{xyz}\begin{vmatrix}ld - l & 2md - 2m & 2nd - 3n \\ l &
     2m & 3n \\ 1 & 1 & 1\end{vmatrix}[R_1\rightarrow aR_3]`

     :math:`= \frac{1}{xyz}\begin{vmatrix}0 & 0 & 0 \\ l& 2m & 3n \\ 1 & 1 &
     1\end{vmatrix}[R_1\rightarrow (d -1)R_2]`

     :math:`= 0`

122. :math:`\Delta = \begin{vmatrix}1 & a^2 & a^3 \\ 0 & b^2 - a^2 & b^3 - a^3
     \\ 0 & c^2 -a^2& c^3 - a^3\end{vmatrix}[R_2 \rightarrow R_2 - R_1; R_3
     \rightarrow R_3 - R_1]`

     :math:`= (b^2 - a^2)(c^3 - a^3) - (c^2 - a^2)(b^3 - a^3)`

     :math:`= (b - a)(c - a)[(b + a)(c^2 + ac + a^2) - (c + a)(b^2 + ab +
     a^2)]`

     :math:`= (b - a)(c - a)(bc^2 + abc + a^2b + ac^2 + a^2c + a^3 - b^2c - abc
     - a^2c - ab^2 - a^2b - a^3)`

     :math:`= (b - a)(c - a)(bc^2 + ac^2 - b^2c - ab^2)`

     :math:`= (b - a)(c - a)[bc(c - b) + a(c^2 - b^2)]`

     :math:`= (b - a)(c - a)(c - b)(ab + bc + ca)`

     We know that :math:`\begin{vmatrix}1 & a & a^2 \\ 1 & b & b^2
     \\ 1 & c & c^2\end{vmatrix} = (b - a)(c - a)(c - b)`

     Hence, L.H.S. = R.H.S.

123. :math:`\Delta = \begin{vmatrix}b^2 + c^2 & a^2 & bc \\ c^2 + a^2 & b^2 &
     ca \\ a^2 + b^2 & c^2 & ab\end{vmatrix}[C_1\rightarrow -2C_3]`

     :math:`= (a^2 + b^2 + c^2)\begin{vmatrix}1 & a^2 & bc \\ 1 & b^2 & ca \\ 1
     & c^2 & ab\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

     We know that :math:`\begin{vmatrix}1 & a^2 & bc \\ 1 & b^2 & ca \\ 1
     & c^2 & ab\end{vmatrix} = (a - b)(b - c)(c - a)(a + b + c)`

     :math:`\Delta = (a^2 + b^2 + c^2)(a + b + c)(a - b)(b - c)(c - a)`

124. This problem can be solved like :math:`123` and has the same answer.

125. Let :math:`a_1b_1c_1 = 100\times a_1 + 10\times b_1 + c_1 = pk` where
     :math:`p\in R`

     :math:`a_2b_2c_2 = 100\times a_2 + 10\times b_2 + c_2 = qk` where
     :math:`q\in R`

     :math:`a_3b_3c_3 = 100\times a_3 + 10\times b_3 + c_3 = rk` where
     :math:`r\in R`

     :math:`\Delta = \begin{vmatrix}a_1 & b_1 & pk \\ a_2 & b_2 & qk \\ a_3 &
     b_3 & rk\end{vmatrix}[C_3\rightarrow 100C_1 + 10C_2 + C_3]`

     Thus, given determinant is divisible by :math:`k`

126. :math:`\Delta = \begin{vmatrix}a_1 & a_1x + b_1 & c_1 \\ a_2 & a_2x + b_2
     & c_2 \\ a_3 & a_3x + b_3 & c_3\end{vmatrix} + \begin{vmatrix}b_1x &
     a_1x + b_1 & c_1 \\ b_2x & a_2x + b_2 & c_2 \\ b_3x & a_3x + b_3 &
     c_3\end{vmatrix}`

     :math:`= \begin{vmatrix}a_1 & a_1x + b_1 & c_1 \\ a_2 & a_2x + b_2
     & c_2 \\ a_3 & a_3x + b_3 & c_3\end{vmatrix} + x\begin{vmatrix}b_1 &
     a_1x + b_1 & c_1 \\ b_2 & a_2x + b_2 & c_2 \\ b_3 & a_3x + b_3 &
     c_3\end{vmatrix}`

     :math:`= x\begin{vmatrix}a_1 & a_1 & c_1 \\ a_2 & a_2 & c_2 \\ a_3 & a_3
     & c_3\end{vmatrix} + \begin{vmatrix}a_1 & b_1 & c_1 \\ a_2 & b_2 & c_3 \\
     a_3 & b_3 & c_3\end{vmatrix} + \\ x\begin{vmatrix}b_1 & a_1x & c_1 \\ b_2
     & a_2x & c_2 \\ b_3 & a_3x & c_3 \end{vmatrix} + \begin{vmatrix}b_1 & b_1 &
     c_1 \\ b_2 & b_2 & c_2 \\ b_3 & b_3 & c_3\end{vmatrix}`

     Clearly, first and last determinants are zero as they have identical
     columns.

     :math:`= \begin{vmatrix}a_1 & b_1 & c_1 \\ a_2 & b_2 & c_3 \\ a_3 & b_3 &
     c_3\end{vmatrix} + x^2\begin{vmatrix}b_1 & a_1 & c_1 \\ b_2 & a_2 & c_2 \\
     b_3 & a_3 & c_3\end{vmatrix}`
     
     Exchanging first two columns of second determinants

     :math:`= (1 - x^2)\begin{vmatrix}a_1 & b_1 & c_1 \\ a_2 & b_2 & c_2 \\ a_3
     & b_3 & c_3\end{vmatrix}`

127. :math:`\Delta = abc\begin{vmatrix}\frac{1}{a} + 1 & \frac{1}{a}
     & \frac{1}{a} \\ \frac{1}{b} & \frac{1}{b} + 1 & \frac{1}{b} \\
     \frac{1}{c} & \frac{1}{c} & \frac{1}{c} + 1\end{vmatrix}`

     :math:`= abc\left(\frac{1}{a} + \frac{1}{b} + \frac{1}{c} + 1\right)
     \begin{vmatrix} 1 & 1 & 1 \\ \frac{1}{b} & \frac{1}{b} + 1 & \frac{1}{b}
     \\ \frac{1}{c} & \frac{1}{c} & \frac{1}{c} + 1\end{vmatrix}`

     :math:`= abc\left(\frac{1}{a} + \frac{1}{b} + \frac{1}{c} + 1\right)
     \begin{vmatrix}1 & 0 & 0 \\ \frac{1}{b} & 1 & 0 \\ \frac{1}{c} & 0 &
     1\end{vmatrix}[C_2 \rightarrow C_2 - C_1; C_3\rightarrow C_3 - C_1]`

     :math:`= abc\left(\frac{1}{a} + \frac{1}{b} + \frac{1}{c} + 1\right)`

     Now since :math:`a, b, c` are roots of :math:`px^3 + qx^2 + rx + s = 0`

     :math:`\therefore px^3 + qx^2 + rx + s = (x - a)(x - b)(x - c)`

     Comparing coefficients, :math:`a + b + c = \frac{-q}{p}`

     :math:`ab + bc + ca = \frac{r}{p}; abc = \frac{-s}{p}`

     Thus, :math:`abc\left(\frac{1}{a} + \frac{1}{b} + \frac{1}{c} + 1\right) =
     \frac{r - s}{p}`

128. :math:`\Delta = \begin{vmatrix}1 & a & a^4 \\ 0 & b - a & b^4 - a^4 \\ 0 &
     c - a & c^4 - a^4\end{vmatrix}[R_2\rightarrow R_2 - R_1; R_3 \rightarrow
     R_3 - R-1]`

     :math:`= (b - a)(c^4 - a^4) - (c - a)(b^4 - a^4)`

     :math:`= (b - a)(c - a)[(c + a)(c^2 + a^2) - (b + a)(b^2 + c^2)] >
     0~\forall~a<b<c`

129. :math:`\Delta = \begin{vmatrix}a & a^3 & a^4 \\ b & b^3 & b^4 \\ c & c^3 &
     c^4\end{vmatrix} - \begin{vmatrix}a & a^3 & 1 \\ b & b^3 & 1 \\ c & c^3 &
     1\end{vmatrix}`

     :math:`= abc \begin{vmatrix}1 & a^2 & a^3 \\ 1 & b^2 & b^3 \\ 1 & c^2 &
     c^3\end{vmatrix} - \begin{vmatrix}a & a^3 & 1 \\ b & b^3 & 1 \\ c & c^3 &
     1\end{vmatrix}`

     :math:`= abc \begin{vmatrix}0 & a^2 - b^2 & a^3 - b^3\\ 0 & b^2 - c^2 &
     b^3 - c^3 \\ 1 & c^2 & c^3\end{vmatrix} - \begin{vmatrix}0 & a - b & a^3 -
     b^3 \\ 0 & b - c & b^3 - c^3 \\ 1 & c & c^3\end{vmatrix}[R_1 \rightarrow
     R_1 - R_2; R_2 \rightarrow R_2 -R_3]`

     :math:`\Rightarrow abc[(a^2 - b^2)(b^3 - c^3) - (b^2 - c^2)(a^3 - b^3)] - [(a -
     b)(b^3 - c^3) - (b - c)(a^3 - b^3)] = 0`

     :math:`abc(a - b)(b - c)[(a + b)(b^2 + bc + c^2) - (b + c)(a^2 + ab + b^2)] =\\
     (a - b)(b - c)(b^2 + bc + c^2 - a^2 - ab - b^2)`

     Becasue :math:`a,b,c` are distinct we :math:`a - b \neq 0; b - c \neq 0;
     c - a\neq 0`

     :math:`abc(a + b)(b^2 + bc + c^2) - (b + c)(a^2 + ab + b^2) = (b^2 + bc +
     c^2 - a^2 - ab - b^2)`

     :math:`abc(ab^2 + abc + ac^2 + b^3 + b^2c + bc^2 - a^2b - ab^2 - b^3 -
     a^2c - abc - b^2c) = bc + c^2 - a^2 -ab`

     :math:`abc(ac^2 + bc^2 - a^2b - a^2c) = b(c - a) + (c^2 - a^2)`

     :math:`abc[ac(c - a) + b(c^2 - a^2)] = (c - a)(a + b + c)`

     :math:`abc(ab + bc + ca) = a + b + c`

130. Taking :math:`b_1, b_2, b_3` common from columns and multiplying rows with
     them, we get

     :math:`\Delta = \begin{vmatrix}x_1 + a_1b_1 & a_1b_1 & a_1b_1 \\ a_2b_2 &
     x_2 + a_2b_2 & a_2b_2 \\ a_3b_3 & a_3b_3 & x + a_3b_3\end{vmatrix}`

     Taking :math:`x_1,x_2,x_3` common from rows
     
     :math:`= x_1x_2x_3\begin{vmatrix}1 + \frac{a_1b_1}{x_1} & \frac{a_1b_1}{x_1} &
     \frac{a_1b_1}{x_1} \\ \frac{a_2b_2}{x_2} & 1 + \frac{a_2b_2}{x_2} &
     \frac{a_2b_2}{x_2} \\ \frac{a_3b_3}{x_3} & \frac{a_3b_3}{x_3} & 1 +
     \frac{a_3b_3}{x_3}\end{vmatrix}`

     :math:`= x_1x_2x_3\left(1 + \frac{a_1b_1}{x_1} + \frac{a_2b_2}{x_2} +
     \frac{a_3b_3}{c_3}\right) \begin{vmatrix}1 & 1 & 1 \\ \frac{a_2b_2}{x_2} &
     1 + \frac{a_2b_2}{x_2} & \frac{a_2b_2}{x_2} \\ \frac{a_3b_3}{x_3} &
     \frac{a_3b_3}{x_3} & 1 + \frac{a_3b_3}{x_3}\end{vmatrix}[R_1 \rightarrow
     R_1 + R_2 + R_3]`

     :math:`= x_1x_2x_3\left(1 + \frac{a_1b_1}{x_1} + \frac{a_2b_2}{x_2} +
     \frac{a_3b_3}{c_3}\right)\begin{vmatrix}1 & 0 & 0 \\ \frac{a_2b_2}{x_2} &
     1 & 0 \\ \frac{a_3b_3}{x_3} & 0 & 1\end{vmatrix}[C_2\rightarrow C_2 - C_1;
     C_3 \rightarrow C_3 - C_1]`

     :math:`= x_1x_2x_3\left(1 + \frac{a_1b_1}{x_1} + \frac{a_2b_2}{x_2} +
     \frac{a_3b_3}{c_3}\right)`

131. This problem is similar to :math:`92` and has been left as an exercise.

132. :math:`\Delta = abc\begin{vmatrix}a & c & a + c \\ a + b & b & a \\ b &
     b + c & c\end{vmatrix}`

     :math:`= abc \begin{vmatrix}-2a & -2b & 0 \\ a + b & b & a \\ b &
     b + c & c\end{vmatrix}[R_1 \rightarrow R_1 - R_2 - R_3]`

     :math:`= 4a^2b^2c^2`

133. :math:`\Delta = \begin{vmatrix} 1 + a^2 + b^2 & 0 & -2b \\ 0 & 1 + a^2 +
     b^2 & 2a \\ b(1 + a^2 + b^2) & -a(1 + a^2 + b^2) & 1 - a^2 -
     b^2\end{vmatrix} [C_1\rightarrow C_1 - bC_3; C_2\rightarrow C_2 + aC_3]`

     :math:`= (1 + a^2 + b^2)^2(1 -a^2 - b^2 + 2a^2) + 2b^2(1 + a^2 + b^2)^2`

     :math:`= (1 + a^2 + b^2)^3`

134. We know that :math:`P = \frac{a + b + c}{a}; A = \sqrt{s(s - a)(s - b)(s -
     c)}`

     After that this problem is same as :math:`93` and you just need to
     substitute for the values of :math:`A` and :math:`P`.

135. Taking :math:`a,b,c` common from rows and multiplying with columns we get
     the same determinant as in problem :math:`90` and can be solved similarly.

136. :math:`\Delta = \begin{vmatrix}x^3 & 6x^2a + 2a^3 & (x - a)^3 \\ y^3 &
     6y^2a + 2a^3 & (y - a)^3 \\ z^3 & 6z^2a + 2a^3 & (z - a)^3\end{vmatrix}
     [C_2 \rightarrow C_2 - C_3]`

     :math:`= 2\begin{vmatrix}x^3 & 3x^2a + a^3 & (x - a)^3 \\ y^3 & 3y^2a + a^3
     & (y - a)^3 \\ z^3 & 3z^2a + a^3 & (z - a)^3\end{vmatrix}`

     :math:`= 2 \begin{vmatrix}x^3 & 3x^2a + a^3 & 3xa^2 \\ y^3 & 3y^2a + a^3 &
     3ya^2 \\ z^3 & 3z^2a + a^3 & 3za^2\end{vmatrix} [C_3 \rightarrow C_3 - C_1
     - C_2]`

     :math:`= 2 \begin{vmatrix}x^3 & 3x^2a + a^3 & 3xa^2 \\ y^3 - x^3 & 3(y^2 -
     x^2) & 3a^2(y - x) \\ z^3 - x^3 & 3(z^2 - x^2) & 3a^2(z - x)\end{vmatrix}
     [R_2\rightarrow R_2 - R_1; R_3 \rightarrow R_2 - R_1]`

     Now upon expasion desired condition can be proven easily.

137. :math:`\Delta = \begin{vmatrix} 1- x & a & 0 \\ a & a^2 - x & x \\ a^2 &
     a^3 & -x\end{vmatrix}[C_3 \rightarrow C_3 -aC_2]`

     :math:`= x\begin{vmatrix}1 - x & a & 0 \\ a + a^2 & a^2 - x + a^3 & 0 \\
     a^2 & a^3 & -1 \\ \end{vmatrix}[R_2 \rightarrow R_2 + R_3]`

     :math:`= x[a(a + a^2) - (1 - x)(a^2 + a^3 - x)]`

     :math:`= x(a^2 + a^3 - a^2 - a^3 + x + xa^2 + xa^3 - x^2)`

     :math:`= x^2(1 + a ^2 + a^3)- x^3`

138. :math:`y_1 = p\cos px, y_2 = -p^2\sin px, y_3 = -p^3\cos px, y_4 = p^4
     \sin px`

     :math:`y_5 = p^5 \cos px, y_6 = -p^6\sin px, y_7 = -p^7\cos px, y_8 =
     p^8\sin px`

     :math:`\Delta = -p^6 \begin{vmatrix}\sin px & p\cos px & -p^2 \sin px \\
     -p^3\cos px & p^4 \sin px & p^5 \cos px \\ \sin px & p\cos px & -p^2 \sin
     px\end{vmatrix}`

     Clearly first and last rows are identical.

     :math:`\Delta = 0`

139. :math:`\Delta = \begin{vmatrix}1 & 0 & -\sin\theta \\ 0 & 1 & \cos\theta
     \\ \sin\theta & -\cos\theta & 0\end{vmatrix}[C_1 \rightarrow C_1
     - \cos\theta C_3; C_2 \rightarrow C_2 + \sin\theta C_3]`

     :math:`= \cos^2\theta + \sin^2\theta = 1`

140. :math:`\Delta = \begin{vmatrix}\cos\alpha & \sin\alpha\cos\beta & 0 \\
     -\sin\alpha & \cos\alpha\cos\beta & 0 \\ 0 & -\sin\beta & \frac{1}{\cos\beta}
     \end{vmatrix}[C_3 \rightarrow C_3 - \tan\beta C_2]`

     :math:`= \frac{1}{\cos\beta}[\cos\beta(\cos^2\alpha + \sin^2\alpha)] = 1`

141. Multiplying columns with :math:`a, b, c,` we get

     :math:`\Delta = \frac{1}{abc}\begin{vmatrix}a(a^2 + x) & ab^2 & ac^2 \\
     a^2b & b(b^2 + x) & bc^2 \\ a^2c & b^2c & c(c^2 + x)\end{vmatrix}`

     Now taking out :math:`a,b,c` from rows, we have

     :math:`= \begin{vmatrix}a^2 + x & b^2 & c^2 \\ a^2 & b^2 + x & c^2 \\ a^2
     & b^2 & c^2 + x\end{vmatrix}`

     :math:`= \begin{vmatrix}x & 0 & -x \\ 0 & x & -x \\ a^2 & b^2 & c^2 +
     x\end{vmatrix}[R_1\rightarrow R_1 - R_3; R_2\rightarrow R_2 - R_3]`

     :math:`= \begin{vmatrix}x & 0 & 0 \\ 0 & x & -x \\ a^2 & b^2 & a^2 + c^2 +
     x\end{vmatrix}[C_3 \rightarrow C_3 + C_1]`

     :math:`\Rightarrow x^2(a^2 + b^2 + c^2 + x) = 0`

     :math:`\Rightarrow x=0, -(a^2 + b^2 + c^2)`

142. By observation if we put :math:`x = n,` then first two columns are
     same. Thus, it is one of the solutions.

     Similarly,if we put :math:`x = n,` then first and third columns are same,
     hence it is second solution.

     If we take :math:`\frac{x!}{r!(x + 2 - r)!}` common from first column then
     we get a quadratic equation which will have two roots and we have found
     both of them.

143. :math:`\Delta = \frac{1}{a^2}\begin{vmatrix}u + a^2x & aw' - bu & av' - cu
     \\ w' + abx & av - bw' & au' - cw' \\ v' + acx & au' - bv' & aw -
     cv'\end{vmatrix}[C_2\rightarrow aC_2 - bC_1; C_3\rightarrow aC_3 - cC_1]`

     :math:`\Rightarrow x = - \begin{vmatrix}u &  aw' - bu & av' - cu
     \\ w' & av - bw' & au' - cw' \\ v' & au' - bv' & aw -
     cv' \end{vmatrix} \div \begin{vmatrix}a^2 &  aw' - bu & av' - cu
     \\ ab & av - bw' & au' - cw' \\ ac & au' - bv' & aw -
     cv'\end{vmatrix}`

144. We know that value of the determinant in denominator is :math:`(a - b)(b -
     c)(c - a) = k` (say)
     
     :math:`f(a, b, c) = \begin{vmatrix}f(a) - f(b)& f(b) - f(c) & f(c)
     \\ 0 & 0 & 1 \\ a - b & b - c & c\end{vmatrix}[C_1\rightarrow C_1 - C_2;
     C_2\rightarrow C_2 - C_3] \div k`

     :math:`= -(b - c)(f(a) - f(b)) - (a - b)(f(b) - f(c))\div k`

     :math:`= -(a - b)(b - c)\left[\frac{f(a) - f(b)}{a - b} - \frac{f(b) -
     f(c)}{(b - c)}\right]\div k`

     :math:`= -(a - b)(b - c)(f(a, b) - f(b, c))\div k`

     :math:`= (a - b)(b - c)(c - a)\frac{f(b, c) - f(a, b)}{c - a} = (a -
     b)(b - c)(c - a)f(a, b, c)\div (a - b)(b - c)(c - a)`

     :math:`= f(a, b, c)`

145. Becasue :math:`A,B,C` are angles of a triangle. :math:`A + B + C = \pi`

     Also, :math:`e^{i\pi} = \cos\pi + i\sin\pi = -1`

     Taking :math:`e^{iA}, e^{iB}, e^{iC}` common from :math:`R_1, R_2, R_3,`
     we get

     :math:`\Delta = e^{i(A + B + C)}\begin{vmatrix}e^{iA} & e^{-i(A +C)} &
     e^{-i(A + B)} \\ e^{-i(B + C)} & e^{iB} & e^{-i(A + B)} \\ e^{-i(B + C)} &
     e^{-i(A + C)} & e^{iC}\end{vmatrix}`

     :math:`= -\begin{vmatrix}e^{iA} & -e^{iB} & -e^{iC} \\ -e^{iA} & e^{iB} &
     -e^{iC} \\ -e^{iA} & -e^{iB} & e^{iC}\end{vmatrix}`

     Taking :math:`e^{iA}, e^{iB}, e^{iC}` common from :math:`C_1, C_2, C_3,`
     we get

     :math:`= \begin{vmatrix}1 & -1 & -1 \\ -1 & 1 & -1 \\ -1 & -1 &
     1\end{vmatrix} = -4`

     which is purely real.

146. :math:`\Delta = \begin{vmatrix}1 & \sin A\cos A & \cos^2 A \\ 1 & \sin
     B\cos B & \cos^2 B \\ 1 & \sin C\cos C & \cos^2 C \end{vmatrix}[C_1
     \rightarrow C_1 + C_3]`

     Performing :math:`R_3\rightarrow R_3 - R_1; R_2\rightarrow R_2 - R_1,` we
     get

     :math:`= \sin(A - B)\sin(B - C)\sin(C - A)\geq 0`

     Following the expansion the other condition can also be shown and has been
     left as an exercise.

147. Performing :math:`C_1 \rightarrow C_1 - aC_2; C_2\rightarrow C_2 -aC_3]`

     :math:`\Delta = \begin{vmatrix}0 & 0 & 1 \\ \cos nx - a\cos(n + 1)x &
     \cos(n + 1)x - a\cos(n + 2)x & \cos(n + 2)x \\ \sin nx - a\sin(n + 1)x &
     \sin(n + 1)x - a\sin(n + 2)x & \sin(n + 2)x\end{vmatrix}`

     :math:`= \sin(n+1)x\cos nx - a\sin(n+1)x\cos(n+1)x - a\sin(n+2)x\cos nx \\
     + a^2\sin(n+2)x\cos(n+1)x -\sin nx\cos(n+1)x +a\sin nx\cos(n + 2)x \\
     + a\sin(n + 1)x\cos(n + 1)x - a^2sin(n + 1)x\cos(n + 2)x`

     :math:`= \sin(n + 1 - n)x - a\sin(n + 2 - n)x + a^2\sin(n + 2 - n - 1)x`

     :math:`= \sin x - a\sin 2x + a^2\sin x`

     :math:`= (a62 -2a\cos x + 1)\sin x`

148. :math:`\Delta = \begin{vmatrix}2 & \cos^2x & 4\sin 2x \\ 2 & 1 + \cos^2x &
     4\sin 2x \\ 1 & \cos^2x & 1 + 4\sin 2x\end{vmatrix}[C_1 \rightarrow C_1 +
     C_2]`

     :math:`= \begin{vmatrix}0 & -1 & 0 \\ 2 & 1 + \cos^2x & 4\sin 2x \\ 1 &
     \cos^2x & 1 + 4\sin 2x\end{vmatrix}[R_1 \rightarrow R_1 - R_2]`

     :math:`= 2 - 4\sin 2x`

     The above expression has maximum value for :math:`0 < x < \frac{\pi}{2}`
     when :math:`x = \frac{\pi}{4}`

149. Expanding the determinant we get :math:`\Delta = -1 + 2\cos A\cos B \cos C
     + \cos^2 A + \cos^2 B + \cos^2 C`

     Consider the expression :math:`2(\cos^2 A + \cos^2 B + \cos^2 C)`

     :math:`= 1 + \cos 2A + 1 + \cos 2B + 1 + \cos 2C`

     :math:`= 2 + 2\cos(A + B)\cos(A - B) + 2\cos^2 C`

     :math:`= 2 + 2\cos(\pi - C)\cos(A - B) + 2\cos^2C`

     :math:`= 2 - 2\cos C[\cos(A - B) - \cos C]`

     :math:`= 2 - 2\cos C[\cos(A - B) 0 \cos (\pi - (A + B))]`

     :math:`= 2 - 4\cos A\cos B\cos C`

     Thus, :math:`\Delta = 0`

150. Since :math:`A, B, C` are angles of an isosceles triangle, let :math:`A =
     B`

     Thus, first two columns become equal leading determinant to be zero.
