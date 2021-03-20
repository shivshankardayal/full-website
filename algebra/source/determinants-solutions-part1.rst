Determinants Solutions Part 1
*****************************
1. Let :math:`\Delta = \begin{vmatrix}4 & 9 & 7\\3 & 5 & 7\\5 & 4 &
   5\end{vmatrix}`

   :math:`\Delta = \begin{vmatrix}1 & 4 & 0\\3 & 5 & 7\\5 & 4 &
   5\end{vmatrix}[R_1\rightarrow R_1 - R_2]`

   :math:`\Delta = \begin{vmatrix}1 & 4 & 0\\0 & -7 & 7\\0 & -16 &
   5\end{vmatrix}[R_2\rightarrow R_2 -3R_1~\text{and}~R_3\rightarrow R_3 -
   5R_1]`

   :math:`= 1(-35 + 112) = 77` (expanding along first column)
2. Let :math:`\Delta = \begin{vmatrix}1 & a & a^2\\1 & b & b^2\\1 & c &
   c^2\end{vmatrix}`

   :math:`\Delta = \begin{vmatrix}0 & a - b & a^2 -b^2\\0 & b - c & b^2 -
   c^2\\1 & c & c^2\end{vmatrix}[R_1\rightarrow R_1 - R_2, R_2\rightarrow R_2 -
   R_3]`

   :math:`= (a - b)(b - c)\begin{vmatrix}0 & 1 & a + b\\0 & 1 & b + c\\1 & c &
   c^2\end{vmatrix}`

   :math:`= (a - b)(b - c)(b + c - a - b)`

   :math:`= (a - b)(b - c)(c - a)`
3. Let :math:`a = 2, b = 3, c = 4`

   So from previous example, :math:`\Delta = \begin{vmatrix}1 & a & a^2\\1 & b
   & b^2\\1 & c & c^2\end{vmatrix} = (a - b)(b - c)(c - a)`

   :math:`= (2 - 3)(3 - 4)(4 - 2) = 2`
4. :math:`\Delta = \begin{vmatrix}a + b + c & b & c\\a + b + c & c & a\\a + b +
   c & a & b\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

   :math:`=(a + b + c)\begin{vmatrix}1 & b & c\\0 & c - b & a - c\\0 & a- b &
   b- c\end{vmatrix}[R_2\rightarrow R_2 - R_1, R_3 \rightarrow R_3 - R_1]`

   :math:`= (a + b + c)[(c - b)(b - c) - (a - b)(a - c)]`

   :math:`=(a + b + c)(ab + bc + ca - a^2 - b^2 - c^2)`

   :math:`= -\frac{1}{2}(a + b + c)[(a - b)^2 + (b -c)^2 + (c - a)^2]`

   :math:`\because a, b, c` are positive :math:`\therefore a + b + c > 0`

   Again, since :math:`a, b, c` are unequal :math:`\therefore (a - b)^2 + (b
   -c)^2 + (c - a)^2 > 0`

   Thus, :math:`\Delta < 0`

5. :math:`\Delta = \begin{vmatrix}a + b + c & a + b & a\\ a + b + c & b + c & b
   \\ a + b + c & c + a\\ c\end{vmatrix}[C_1\rightarrow C_1 + C_3]`

   :math:`= (a + b + c)\begin{vmatrix}1 & a + b & a\\ 1 & b + c & b
   \\ 1 & c + a & c\end{vmatrix}`

   :math:`= (a + b + c)\begin{vmatrix}1 & a + b & a\\ 0 & c - a & b -
   a\\ 0 & c -b & c - a\end{vmatrix}[R_2\rightarrow R_2 - R_1; R_3\rightarrow
   R_3-R_1]`

   :math:`= (a + b + c)[(c - a)^2 - (c - b)(b - a)]`

   :math:`= a^3 + b^3 + c^3 - 3abc`

6. :math:`\Delta = \begin{vmatrix}1 + a_1 + a_2 + a_3 & a_2 & a_3\\1 + a_1 +
   a_2 + a_3& 1 + a_2 & a_3\\1 + a_1 + a_2 + a_3 & a_2 & 1 +
   a_3\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

   :math:`= (1 + a_1 + a_2 + a_3)\begin{vmatrix}1 & a_1 & a_3\\ 1 & 1 + a_2 &
   a_3\\ 1 & a_2 & 1 + a_3\end{vmatrix}`

   :math:`= (1 + a_1 + a_2 + a_3)\begin{vmatrix}0 & -1 & 0\\ 0 & 1 & -1 \\ 1 &
   a_2 & 1 + a_3\end{vmatrix}[R_1\rightarrow R_1 - R_2; R_2\rightarrow R_2 -
   R_3]`

   :math:`= (1 + a_1 + a_2 + a_3)\begin{vmatrix}-1 & 0 \\ 1 & -1\end{vmatrix}`

   :math:`= 1 + a_1 + a_2 + a_3`

7. :math:`\Delta = \begin{vmatrix}2(a + b + c) & a & b \\ 2(a + b + c) & b +
   c + 2a & b \\ 2(a + b + c) & a + c + a + 2b\end{vmatrix}[C_1\rightarrow
   C_1 + C_2 + C_3]`

   :math:`= 2(a + b + c)\begin{vmatrix}1 & a & b \\ 1 & b + c + 2a & b \\ 1 & a
   & c + a + 2b\end{vmatrix}`

   :math:`= 2(a + b + c)\begin{vmatrix}0 & -(b + c + a) & 0 \\ 0 & (b + c + a)
   & -(a + b + c) \\ 1 & a & c + a + 2b\end{vmatrix}[R_1\rightarrow R_1 - R_2;
   R_2\rightarrow R_2 - R_3]`

   :math:`= 2(a + b + c)^3\begin{vmatrix}0 & -1 & 0 \\ 0 & 1 & -1 \\ 1 & a &
   c + a + 2b\end{vmatrix}`

   :math:`= 2(a + b + c)^3\begin{vmatrix}-1 & 0 \\ 1 & -1\end{vmatrix}`

   :math:`= 2(a + b + c)^3`

8. :math:`\Delta = \begin{vmatrix}2a & 2b & a - b - c \\ 2b & 2c & b - c - a \\
   2c & 2a & c - a - b\end{vmatrix}[C_1\rightarrow C_1 + C_2;C_2\rightarrow C_2
   -C_3]`

   :math:`= 4\begin{vmatrix}a & b & a - b - c \\ b & c & b - c - a \\
   c & a & c - a - b\end{vmatrix}`

   :math:`= 4\begin{vmatrix}a & b & -c \\ b & c & b - c - a \\ c & a &
   -b\end{vmatrix}[C_3\rightarrow C_3 - C_1 + C_2]`

   Proceeding like exercise 4, we get
   
   :math:`= -4[(-(a + b + c)(a^2 + b^2 + c^2 - ab - bc - ca)]`

   :math:`4(a^3 + b^3 + c^3 - 3abc)`

9. :math:`\Delta = \begin{vmatrix}a + b + c & a + b + c & a + b + c \\ 2b & b -
   c - c & 2b \\ 2c & 2c & c - a - b\end{vmatrix}[R_1\rightarrow R_1 + R_2 +
   R_3]`

   :math:`=(a + b + c)\begin{vmatrix}1 & 1 & 1\\ 2b & b -
   c - c & 2b \\ 2c & 2c & c - a - b\end{vmatrix}`

   :math:`= (a + b + c)\begin{vmatrix}1 & 0 & 0 \\ 2b & -b - c- a & 0 \\ 2c & 0
   & -c -a -b\end{vmatrix}[C_2\rightarrow C_2 - C_1;C_3\rightarrow C_3 - C_1]`

   :math:`= (a + b + c)\begin{vmatrix}-b -c -a & 0\\ 0 & -c -a -b\end{vmatrix}`

   :math:`= (a + b + c)^3`

10. :math:`\Delta = \frac{1}{xyz}\begin{vmatrix}x^2 + y^2 + z^2 \\ x^3 & y^3 &
    z^3 \\ xyz & xyz & xyz \end{vmatrix}[C_1\rightarrow xC1;
    C_2\rightarrow yC2; C_2\rightarrow zC_3]`

    :math:`=\frac{xyz}{xyz}\begin{vmatrix}x^2 + y^2 + z^2 \\ x^3 & y^3 &
    z^3 \\ 1 & 1 & 1\end{vmatrix}`

    :math:`= \begin{vmatrix}1 & 1 & 1\\ x^2 & y^2 & z^2\\ x^3 & y^3 & z3
    \end{vmatrix}` (Doing double row exchange)

    :math:`= \begin{vmatrix}1 & 0 & 0\\ x^2 & y^2 - x^2 & z^2 - x^2 \\ z^3 &
    y^3 - x^3 & z^3 - x^3\end{vmatrix}[C_2\rightarrow C_2 - C_1; C_3\rightarrow
    C_3 - C_1]`

    :math:`= \begin{vmatrix}y^2 - x^2 & z^2 - x^2 \\ y^3 - x^3 & z^3 -
    x^3\end{vmatrix}`

    :math:`=(y - z)(z - x)\begin{vmatrix}y + x & z + x\\ y^2 + xy + x^2 & z^2 +
    zx + x^2\end{vmatrix}`

    :math:`= (y - z)(z - x)\begin{vmatrix}y + x & z - y \\ y^2  + xy + x^2 \\
    (z^2 - y^2) + zx - zy\end{vmatrix}`

    :math:`=(y - z)(z - x)(z - y)\begin{vmatrix}y + x & 1 \\ y^2 + xy + x^2 \\
    1 & x + y + z\end{vmatrix}`

    :math:`= (x - y)(y - z)(z - x)(xy + yz + zx)`

11. :math:`\Delta = \frac{1}{abc}\begin{vmatrix}a(a^2 + 1) & ab^2 & ac^2 \\
    a^2b & b(b^2 + 1) & bc^2 \\ a^2c & b^2c & c(c^2 +
    1)\end{vmatrix}[C_1\rightarrow aC1; C_2\rightarrow bC2; C_2\rightarrow
    cC_3]`

    :math:`= \frac{abc}{abc}\begin{vmatrix}a^2 + 1 & b^2 & c^2 \\ a^2 & b^2 + 1 &
    c^2 \\ a^2 & b^2 & c^2 + 1\end{vmatrix}` [taking :math:`a, c, c` common
    from rows]

    :math:`= \begin{vmatrix}1 + a^2 + b^2 + c^2 & b^2 & c^2 \\ 1 + a^2 + b^2 +
    c^2 & b^2 + 1 & c^2 \\ 1 + a^2 + b^2 + c^2 & b^2 & c^2 +
    1\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

    :math:`= (1 + a^2 + b^2 + c^2)\begin{vmatrix}1 & b^2 & c^2 \\ 1 & b^2 + 1 &
    c^2 \\ 1 & b^2 & c^2 + 1\end{vmatrix}`

    :math:`= (1 + a^2 + b^2 + c^2)\begin{vmatrix}1 & b^2 & c^2 \\ 0 & 1 & 0 \\
    0 & 0 & 1\end{vmatrix}[R_2\rightarrow R_2 - R_1;R_3\rightarrow R_3 - R_1]`

    :math:`= (1 + a^2 + b^2 + c^2)\begin{vmatrix}1 & 0 \\ 0 & 1\end{vmatrix}`

    :math:`= (1 + a^2 + b^2 + c^2)`

12. :math:`\Delta = a_1a_2a_3\begin{vmatrix}\frac{1}{a_1} + 1 & \frac{1}{a_2} &
    \frac{1}{a_3} \\ \frac{1}{a_1} & \frac{1}{a_2} + 1 & \frac{1}{a_3} \\
    \frac{1}{a_1} & \frac{1}{a_2} & \frac{1}{a_3} + 1\end{vmatrix}[C_1\rightarrow
    \frac{1}{a_1}C_1; C_2\rightarrow \frac{1}{a_2}C_2; C_3\rightarrow
    \frac{1}{a_3}C_3]`

    :math:`= a_1a_2a_3\begin{vmatrix}1 + \frac{1}{a_1} + \frac{1}{a_2} +
    \frac{1}{a_3} & \frac{1}{a_2} & \frac{1}{a_3} \\ 1 + \frac{1}{a_1} +
    \frac{1}{a_2} + \frac{1}{a_3} & \frac{1}{a_2} + 1 & \frac{1}{a_3} \\ 1 +
    \frac{1}{a_1} + \frac{1}{a_2} + \frac{1}{a_3} & \frac{1}{a_2} &
    \frac{1}{a_3} + 1\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

    :math:`=a_1a_2a_3\left(1 + \frac{1}{a_1} + \frac{1}{a_2} +
    \frac{1}{a_3}\right)\begin{vmatrix} 1 & \frac{1}{a_2} & \frac{1}{a_3} \\ 1
    & \frac{1}{a_2} + 1 & \frac{1}{a_3} \\ 1 & \frac{1}{b_2} & \frac{1}{a+3} +
    1\end{vmatrix}`

    :math:`=a_1a_2a_3\left(1 + \frac{1}{a_1} + \frac{1}{a_2} +
    \frac{1}{a_3}\right)\begin{vmatrix}1 & \frac{1}{a_2} & \frac{1}{a_3} \\ 0 &
    1 & 0 \\ 0 & 0 & 1\end{vmatrix}[R_2\rightarrow R_2 - R_1;R_3\rightarrow R_3
    - R_1]`

    :math:`==a_1a_2a_3\left(1 + \frac{1}{a_1} + \frac{1}{a_2} +
    \frac{1}{a_3}\right)`

13. :math:`\Delta = \begin{vmatrix}x & x^2 & 1 \\ y & y^2 & 1 \\ z & z^2 &
    1\end{vmatrix} + \begin{vmatrix}x & x^2 & x^3 \\ y & y^2 & y^3 \\ z & z^2 &
    z^3\end{vmatrix}`

    :math:`= \begin{vmatrix}x & x^2 & 1 \\ y & y^2 & 1 \\ z & z^2 &
    1\end{vmatrix} + xyz\begin{vmatrix}1 & x & x^2 \\ 1 & y & y^2 \\ 1 & z &
    z^2\end{vmatrix}`

    Performing :math:`C_2\leftrightarrow C_3; C_1\leftrightarrow C_2`
    
    :math:`= (1 + xyz)\begin{vmatrix}1 & x & x^2 \\ 1 & y & y^2 \\ 1 & z &
    z^2\end{vmatrix}`

    :math:`\Rightarrow (1 + xyz)(x - y)(y - z)(z - x) = 0`

    :math:`\because x, y, z\neq 0` as they are different, :math:`(x - y), (y -
    z), (z - x)\neq 0`

    :math:`\therefore 1 + xyz = 0 \Rightarrow xyz = -1`

14. :math:`\Delta = \begin{vmatrix}0 & -2c & -2b \\ b & c + a & b \\ c & c &
    a + b\end{vmatrix}[R_1\rightarrow R_1 - R_2 - R_3]`

    :math:`= \frac{1}{c}\begin{vmatrix}0 & 02c & -2b \ 0 & c(c + a - b) & b(c -
    a - b) \\ c & c & a + b\end{vmatrix}[R_2\rightarrow cR_2 - bR_3]`

    :math:`= \frac{1}{c}[c(-2bc)(c - a - b - (c + a - b)]`

    :math:`= 4abc`

15. :math:`\Delta = \begin{vmatrix}(b + c)^2 - a^2 & 0 & a^2 \\ b^2 - (c + a)^2
    & (c + a)^2 - b^2 & b^2 \\ 0 & c^2 - (a + b)^2 & (a +
    b)^2\end{vmatrix}[C_1\rightarrow C_1 - C_2; C_2\rightarrow C_2 - C_3]`

    :math:`= (a + b + c)^2\begin{vmatrix}b + c - a & 0 & a^2 \\ b - c -a & c +
    a - b & b^2 \\ 0 & c -a -b & (a + b)^2\end{vmatrix}`

    :math:`= (a + b + c)^2\begin{vmatrix}b + c - a & 0 & a^2 \\ b -c -a & c + a
    -b & b^2 \\ 2a - 2b & -2a & 2ab\end{vmatrix}[R_3\rightarrow R_3 - R_1 -
    R_2]`

    :math:`= (a + b + c)^2\begin{vmatrix}b + c - a & 0 & a^2 \\ 0 & c + a - b &
    b^2 \\ -2b & -2a & 2ab\end{vmatrix}[C_1\rightarrow C_1 + C_2]`

    :math:`= \frac{(a + b + c)^2}{ab}\begin{vmatrix}a(b + c) & a^2 & a^2 \\ b^2
    & b(c + a) & b^2 \\ 0 & 0 & 2ab\end{vmatrix}[C_1\rightarrow aC_1 +
    C3;C_2\rightarrow bC_2 + C_3]`

    :math:`= \frac{(a + b + c)^2}{ab}.ab.2ab\begin{vmatrix}b + c & a & a \\ b &
    c + a & b \\ 0 & 0 & 1\end{vmatrix}`

    :math:`= 2ab(a + b + c)^2[(b + c)(c + a)- ab]`

    :math:`=2abc(a + b + c)^3`

16. :math:`\begin{vmatrix}15 - x & 1 & 10 \\ -4 -2x & 0 & 6 \\ -8 & 0 &
    3\end{vmatrix} = 0[R_2\rightarrow R_2 -R_1; R_3 \rightarrow R_3 - R_1]`

    :math:`-36 + 6x = 0 \Rightarrow x = 6`

17. :math:`\begin{vmatrix}a + b + c - x & c & b \\ a + b + c - x & b - x & a \\
    a + b + c - x & a & c - a\end{vmatrix} = 0[C_1\rightarrow C_1 + C_2 + C_3]`

    :math:`(a + b + c - x)\begin{vmatrix}1 & c & b \\ 1 & b - x & a \\ 1 & a &
    c - x\end{vmatrix} = 0`

    :math:`[\because a + b + c = 0]`

    :math:`(-x)\begin{vmatrix}1 & c & b \\ 0 & b - c -x & a - b \\ 0 & a -c & c
    -b - x\end{vmatrix}=0[R_2\rightarrow R_2 - R_1; R_3\rightarrow R_3 - R_1]`

    :math:`x[(b - c - x)(c - b - x) - (a - c)(a - b)] = 0`

    :math:`x[x^2 - a^2 - b^2 - c^2 + ab + bc + ca] = 0`

    :math:`\therefore` Either :math:`x = 0` or

    :math:`x^2 = a^2 + b^2 + c^2 - ab - bc - ca`

    :math:`= a^2 + b^2 + c^2 - \frac{1}{2}[(a + b + c)^2 - a^2 - b^2 - c^2]`

    :math:`= \frac{3}{2}(a^2 + b^2 + c^2)[\because a + b + c = 0]`

    :math:`x = \pm\sqrt{\frac{3}{3}(a^2 + b^2 + c^2)}`

18. :math:`D_1 = \begin{vmatrix}a & b & c \\ d & e & f \\ g & h &
    k\end{vmatrix}`

    :math:`= \begin{vmatrix}a & b & c \\ tx & ty & tz \\ g & h &
    k\end{vmatrix}`

    :math:`= t\begin{vmatrix}a & b & c \\ x & y & z \\ g & h & k\end{vmatrix}`

    :math:`= t\begin{vmatrix}a & x & g \\ b & y & h \\ c & z & k\end{vmatrix}`
    [Changing rows into corresponding columns]

    :math:`= -t\begin{vmatrix}a & g & x \\ b & h & y \\ c & k &
    z\end{vmatrix}[C_2\leftrightarrow C_3]`

    :math:`= -tD_2`

19. L.H.S. :math:`= \frac{1}{a^2b^2c^2}\begin{vmatrix}a^3 & a^2bc & a^3bc \\
    b^3 & ab^2c & ab^3c \\ c^3 & abc^2 & abc^3\end{vmatrix}[R_1\rightarrow
    a^2R_1; R_2\rightarrow b^2R_2; R_3\rightarrow c^2R_3]`

    :math:`= \frac{abc.abc}{a^2b^2c^2}\begin{vmatrix}a^3 & a & a^2 \\ b^3 & b &
    b^2 \\ c^3 & c & c^2\end{vmatrix}`

    :math:`= \begin{vmatrix}1 & a & a^2 \\ 1 & b & b^2 \\ 1 & c &
    c^2\end{vmatrix}[C_1\leftrightarrow C_2 ~\&~ C_2\leftrightarrow C_3]`

20. Let :math:`x` be the first term and :math:`y` be the common ratio of G.P.,
    then

    :math:`a = xy^{p -1}; b = xy^{q - 1}; c = xy^{r - 1}`

    :math:`\Rightarrow \log a = \log x + (p - 1)\log y; \log b = \log x + (q -
    1)\log y; \log c = \log x + (r - 1)\log y`

    :math:`\Delta = \begin{vmatrix}\log x + (p - 1)\log y & p & 1 \\ \ \log x +
    (q - 1)\log y & q & 1 \\ \log x + (r - 1)\log y & r & 1\end{vmatrix}`

    :math:`= \begin{vmatrix}(p - 1)\log y & p & 1 \\ (q - 1)\log x & q & 1 \\
    (r - 1)\log y & r & 1\end{vmatrix}[C_1\rightarrow C_1 - \log x C_3]`

    :math:`= \log y \begin{vmatrix}p - 1 & p & 1 \\ q - 1 & q & 1 \\ r - 1 & r
    & 1\end{vmatrix}`

    :math:`= 0[C_1\rightarrow C_1 - C_2 + C_3]`

21. :math:`\Delta = \begin{vmatrix}2 & 9 & 2 \\ -4 & 5 & 7 \\ 2 & 1 &
    6\end{vmatrix}[C_1\rightarrow C_1 - C_3;]`

    :math:`= \begin{vmatrix}2 & 9 & 2 \\ 0 & 23 & 11 \\ 0 & -8 &
    4\end{vmatrix}[R_2\rightarrow R_2 + 2_R1;R_3\rightarrow R_3 - R_2]`

    :math:`= 2(23 * 4 -(11 * -8)) = 2(92 + 88) = 360`

22. :math:`\Delta = \begin{vmatrix}1 & 1 & 17 \\ 3 & 3 & 19 \\ 5 & 5 &
    21\end{vmatrix}[C_1\rightarrow C_1 - C_3]`

    :math:`= 0` (because first two columns are identical)

23. :math:`\Delta = \begin{vmatrix}1 & 4 & 0 \\ 3 & 5 & 7 \\ 5 & 4 &
    5\end{vmatrix}[R_1\rightarrow R_1 - R_2]`

    :math:`= \begin{vmatrix}1 & 0 & 0 \\ 2 & -7 & 7 \\ 5 & -16 &
    5\end{vmatrix}[C_2 \rightarrow C_2 - 4C_1]`

    :math:`= (-7 * 5 - (-16 * 7)) = (112 - 35) = 77`

24. :math:`\Delta = \begin{vmatrix}1 & 4 & 9 \\ 4 & 9 & 16 \\ 9 & 16 &
    25\end{vmatrix}`

    :math:`= \begin{vmatrix}1 & 3 & 5 \\ 4 & 5 & 7 \\ 9 & 7 &
    9\end{vmatrix}[C_3\rightarrow C_3 - C_2; C_2\rightarrow C_2 - C_1]`

    :math:`= \begin{vmatrix}1 & 3 & 2 \\ 4 & 5 & 2 \\ 9 & 7 &
    2\end{vmatrix}[C_3\rightarrow C_3 - C-2]`

    :math:`= \begin{vmatrix}1 & 3 & 2 \\ 3 & 2 & 0 \\ 5 & 2 &
    0\end{vmatrix}[R_3\rightarrow R_3 - R_2; R_2\rightarrow R_2 - R_1]`

    :math:`= 2(3 * 2 - 5 * 2) = -8`

25. :math:`\Delta = \begin{vmatrix}1 & 0 & 0 \\ 1 & x & 0 \\ 1 & 0 &
    y\end{vmatrix}[C_3\rightarrow C_3 - C_1; C_2\rightarrow C_2 - C_1]`

    :math:`= xy`

26. :math:`\Delta = \begin{vmatrix}1 & 0 & 0 \\ a & b - a & c - a \\ a^3 &
    b^3 - a^3 & c^3 - a^3\end{vmatrix}[C_3\rightarrow C_3 - C_1; C_2\rightarrow
    C_2 - C_1]`

    :math:`= (b - a)(c - a)\begin{vmatrix}1 & 0 & 0 \\ a & 1 & 1 \\ a^3 & a^2 +
    ab + b^2 & a^2 + ca + c^2\end{vmatrix}`

    :math:`= (b - a)(c - a)(a^2 + ca + c^2 - a^2 - ab - b^2)`

    :math:`= (b - a)(c - a)(c^2 - b^2 + a(c - b))`

    :math:`= (a - b)(b - c)(c - a)(a + b + c)`

27. :math:`\Delta = \begin{vmatrix}1 & b + c & b^2 + c^2 \\ 0 & a - b & a^2 -
    b^2 \\ 0 & b - c & b^2 - c^2\end{vmatrix}[R_3\rightarrow R_3 - R_2;
    R_2\rightarrow R_2 - R_1]`

    :math:`= (a - b)(b - c)\begin{vmatrix}1 & b + c & b^2 + c^2 \\ 0 & 1 & a +
    b \\ 0 & 1 & b + c\end{vmatrix}`

    :math:`= (a - b)(b - c)(b + c - a - b) = (a - b)(b - c)(c - a)`

28. :math:`\Delta = \begin{vmatrix}0 & a - b & a^2 - b^2 + ca - bc \\ 0 & b - c
    & b^2 - c^2 + ab - ca \\ 1 & c & c^2 - ab\end{vmatrix}[R_2\rightarrow R_2 -
    R_3; R_1\rightarrow R_1- R_2]`

    :math:`= (a - b)(b - 1)\begin{vmatrix}0 & 1 & a + b + c \\ 0 & 1 & a + b +
    c \\ 1 & c& c^2 - ab\end{vmatrix}`

    :math:`= 0` because first two rows are identical.

29. :math:`\Delta = \begin{vmatrix}1 & bc & bc(b + c) \\ 0 & c(a - b) & c[a^2 +
    ca - b^2 - bc] \\ 0 & a(b - c) & a[ab + b^2 - c^2 -
    ac]\end{vmatrix}[R_3\rightarrow R_3 - R_2;R_2\rightarrow R_2 - R_1]`

    :math:`= (a - b)(b - c)\begin{vmatrix}1 & bc & bc(b + c) \\ 0 & c & c(a + b
    + c) \\ 0 & a & a(a + b + c)\end{vmatrix}`

    :math:`= (a - b)(b - c)[ac(a + b + c) - ac(a + b + c)]`

    :math:`= 0`

30. :math:`\Delta = \begin{vmatrix}1 & a & a + b + c \\ 1 & b & a + b + c \\ 1
    & c & a + b + c\end{vmatrix}[C_3\rightarrow C_3 + C_2]`

    :math:`= (a + b + c)\begin{vmatrix}1 & a & 1 \\ 1 & b & 1 \\ 1 & c &
    1\end{vmatrix}`

    :math:`= 0` because last two columns are equal.

31. Let :math:`x` be the first term and :math:`d` be the common difference of
    corresponsing A.P.

    :math:`\therefore \frac{1}{a} = x + (p - 1)d; \frac{1}{b} = x + (q - 1)d;
    \frac{1}{c} = x + (r - 1)d`

    :math:`\Delta = \begin{vmatrix}c(b - a) & p - q & 0 \\ a(c - b) & q - r & 0
    \\ ab & c & 1\end{vmatrix}`

    :math:`= c(b - a)(q - r) - a(c - b)(p - q)`

    :math:`= \frac{1}{x + (r - 1)d}\left(\frac{1}{x + (q - 1)d} - \frac{1}{x + (p -
    1)d}\right)(q - r) - \frac{1}{x + (p - 1)d}\left(\frac{1}{x + (r - 1)d} -
    \frac{1}{x + (q - 1)d}\right)(p - q)`

    :math:`= \frac{(p - q)(q - r)d}{(x + (p - 1)d)(x + (q - 1)d)(x + (r - 1)d)}
    - \frac{(p - q)(q - r)d}{(x + (p - 1)d)(x + (q - 1)d)(x + (r - 1)d)}`

    :math:`= 0`

32. Since :math:`t` is a constant its computation will involve only constant
    terms of the determinant. What implies is that we can set :math:`x = 0` to
    form a determinant which will evaluate to :math:`x`.

    :math:`\therefore \Delta = \begin{vmatrix}0 & -1 & 3 \\ 1 & 1 & -4 \\ -2 &
    4 & 0\end{vmatrix}`

    :math:`= \frac{1}{3}\begin{vmatrix}0 & 0 & 3 \\ 1 & -1 & -4 \\ -2 & 12 &
    0\end{vmatrix}[C_2\rightarrow 3C_2 + C_3]`

    :math:`= \frac{1}{3}(3(1 * 12 - (-2 * -1))) = 10`

33. Taking :math:`a, b, c` common from first three columns we have

    :math:`\Delta = abc \begin{vmatrix}1 & 1 & 1 \\ a & b & c \\ a^2 & b^2 &
    c^2\end{vmatrix}`

    :math:`= abc\begin{vmatrix}1 & 0 & 0 \\ a & b - a & c - a \\ a^2 & b^2 - a^2 &
    c^2 - a^2\end{vmatrix}[C_2\rightarrow C_2 - C_1; C_3\rightarrow C_3 - C_1]`

    :math:`= abc(b - a)(c - a)\begin{vmatrix}1 & 0 & 0 \\ a & 1 & 1 \\ a^2 &
    b + a & c+ a\end{vmatrix}`

    :math:`= abc(b - a)(c - a)[c + a - (b + a)]`

    :math:`= abc(a - b)(b - c)(c - a)`

34. :math:`\because a, b , c` are in A.P. :math:`b = a + d, c = a + 2d` where
    :math:`d` is the common difference of A.P>

    :math:`\therefore \Delta = \begin{vmatrix}x + 1 & x + 2 & x + a \\ x + 2 &
    x + 3 & x + a + d \\ x + 3 & x + 4 & x + a + 2d\end{vmatrix}`

    :math:`= \begin{vmatrix}x + 1 & x + 2 & x + a \\ 1 & 1 & d \\ 1 & 1 &
    d\end{vmatrix}[R_3\rightarrow R_3 - R_2;R_2\rightarrow R_2 - R_1]`

    :math:`= 0` because last two rows are equal.

35. :math:`\Delta = \begin{vmatrix}1 + \omega + \omega^2 & \omega & \omega^2 \\
    1 + \omega + \omega^2 & \omega^2 & 1 \\ 1 + \omega + \omega^2 & 1
    & \omega^2\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

    :math:`\because \omega` is cube root of unity :math:`\therefore 1 +
    \omega + \omega^2 = -1`

    :math:`\Rightarrow \Delta = \begin{vmatrix}-1 & \omega & \omega^2 \\ -1
    &\omega^2 & 1 \\ -1 &1 & \omega^2\end{vmatrix}`

    :math:`= \begin{vmatrix}-1 & \omega & \omega^2 \\ 0 & \omega^2 - \omega &
    1 - \omega^2 \\ 0 & 1 - \omega & 0\end{vmatrix}`

    :math:`= (1 - \omega)(1 - \omega^2) = 1 + \omega^3 -\omega - \omega^2 = 0`

36. :math:`\Delta = \begin{vmatrix}k & 0 & 0 \\ 1 & 1 & 1 \\ 1 & 2 &
    3\end{vmatrix}[C_2\rightarrow C_2 - C_1; C_3\rightarrow C_3 - C_2]`

    :math:`= \begin{vmatrix}k & 0 & 0 \\ 1 & 1 & 0 & 1 & 2 &
    1\end{vmatrix}[C_3\rightarrow C_3 - C_2]`

    :math:`= k`

37. :math:`\Delta = \begin{vmatrix}a^2 + b^2 + c^2 + x & b^2 & c^2 \\ a^2 +
    b^2 + c^2 + x & b^2 + x & c^2 \\ a^2 + b^2 + c^2 + x & b^2 & c^2 +
    x\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

    :math:`= (a^2 + b^2 + c^2 + x)\begin{vmatrix}1 & b^2 & c^2 \\ 0 & x & 0 \\
    0 & 0 & x\end{vmatrix}[R_3\rightarrow R_3 - R_1; R_2\rightarrow R_2 - R_1]`

    :math:`= (a^2 + b^2 + c^2 + x)x^2`

38. :math:`\Delta = \begin{vmatrix}a + b + c & b + c& a^2 \\ a + b + c & c + a
    & b^2 \\ a + b + c & a + b & c^2\end{vmatrix}[C_1\rightarrow C_1 + C_2 +
    C_3]`

    :math:`= (a + b + c)\begin{vmatrix}1 & b + c & a^2 \\ 0 & a - b & b^2 - a^2
    \\ 0 & a -c & c^2 - a^2\end{vmatrix}[R_3\rightarrow R_3 - R_1;
    R_2\rightarrow R_2 - R_1]`

    :math:`= (a + b + c)(a - b)(c - a)\begin{vmatrix}1 & b + c & a^2 \\ 0 & 1 &
    -(a + b) \\ 0 & -1 & (c + a)\end{vmatrix}`

    :math:`= (a + b + c)(a - b)(b - c)(c - a)`

39. :math:`\Delta = \begin{vmatrix}a + b + c & a - b & a \\ a + b + c & b - c &
    b \\ a + b + c & c - a & c\end{vmatrix}[C_1 \rightarrow C_1 + C_2 + C_3]`

    :math:`= (a + b + c)\begin{vmatrix}1 & a - b & a \\ 1 & b - c & b \\ 1 & c-
    a & c\end{vmatrix}`

    :math:`= (a + b + c)\begin{vmatrix}1 & -b & a \\ 1 & -c & b \\ 1 & -a &
    c\end{vmatrix}[C_2 \rightarrow C_2 - C_3]`

    :math:`= (a + b + c)\begin{vmatrix}1 & -b & a \\ 0 & b- c & b - a \\ 0 & b -
    a & c - a\end{vmatrix}[R_3\rightarrow R_3 - R_1; R_2\rightarrow R_2 - R_1]`

    :math:`= (a + b + c)[(b - c)(c - a) - (b - a)^2]`

    :math:`= (a + b + c)[bc - ab - c^2 + ac - b^2 - a^2 + 2ab]`

    :math:`= 3abc - a^3 - b^3 - c^3`

40. :math:`\Delta = \begin{vmatrix}2(a + b + c)& b + c & c + a \\ 2(a + b + c)
    & c + a & a + b \\ 2(a + b + c) & a + b & b +
    c\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

    :math:`= 2(a + b + c)\begin{vmatrix}1 & b + c & c + a \\ 1 & c + a & a + b
    \\ 1 & a + b & b + c\end{vmatrix}`

    :math:`= 2(a + b + c)\begin{vmatrix}1 & b + c & c + 1 \\ 0 & a - b & b - c
    \\ 0 & a - c & b - a\end{vmatrix}[R_3\rightarrow R_3 - R_1; R_2 \rightarrow
    R_2 - R_1]`

    :math:`= 2(a + b + c)[ -(a - b)^2 + (b - c)(c - a)]`

    :math:`= 2(a + b + c)[- a^2 - b^2 + 2ab + bc - ab - c^2 + ac]`

    :math:`= -2(a + b + c)(a^3 + b^3 - c^3 - 3abc)`

41. :math:`\Delta = \begin{vmatrix}x & x & x \\ y + a & y + b & y + c \\ z +
    a & z + b & z + c\end{vmatrix} + \begin{vmatrix}a & b & c \\ y+ a & y + b &
    y + c \\ z + a & z + b & z + c\end{vmatrix}`

    :math:`= \begin{vmatrix}x & x & x \\ y & y & y \\ z + a & z + b & z +
    c\end{vmatrix} + \begin{vmatrix} x & x & x \\ a & b & c \\ z + a & z + b &
    z + c\end{vmatrix} + \\\begin{vmatrix}a & b & c \\ y & y & y \\ z + a & z + b
    & z + c\end{vmatrix} + \begin{vmatrix}a & b & c \\ a & b & c \\ z+ a & z +
    b &  z + c\end{vmatrix}`

    If we take :math:`x` and :math:`y` common from first determinant then its
    first two rows will become same and thus the value of determinant is
    :math:`0`. Similarly, since two rows of last determinant are same its
    value is :math:`0`

    :math:`= \begin{vmatrix} x & x & x \\ a & b & c \\ z + a & z + b &
    z + c\end{vmatrix} + \\\begin{vmatrix}a & b & c \\ y & y & y \\ z + a & z + b
    & z + c\end{vmatrix}`

    :math:`=\begin{vmatrix}x & x & x \\ a & b & c \\ z & z & z\end{vmatrix} +
    \begin{vmatrix}x & x & x \\ a & b & c \\ a & b & c\end{vmatrix} + \\
    \begin{vmatrix}a & b & c \\ y & y & y \\ z & z & z \end{vmatrix} +
    \begin{vmatrix}a & b & c \\ y & y & y \\ a & b & c\end{vmatrix}`

    Following similarly, all four determinants above are :math:`0`

42. :math:`\Delta = -\begin{vmatrix}0 & q - p & r - p \\ p - q & 0 & r - q \\
    p - r & q - r & 0\end{vmatrix}` Multiplying rows with :math:`-1`

    :math:`= -\begin{vmatrix}0 & p - q & p - r \\ q - p & 0 & q - r \\ r - p &
    r - q & 0\end{vmatrix}` Exchanging rows anb columns

    :math:`= -\Delta \Rightarrow 2\Delta = 0 \Rightarrow \Delta = 0`

43. :math:`\Delta = \begin{vmatrix}3a + 3b & 3a + 3b & 2a + 3b\\ a + 2b & a &
    a + b \\ a + b & a + 2b & a\end{vmatrix}[R_1\rightarrow R_1 + R_2 + R_3]`

    :math:`= 3(a + b)\begin{vmatrix}1 & 1 & 1 \\ a + 2b & a & a + b \\ a + b &
    a + 2b & a\end{vmatrix}`

    :math:`= 3(a + b)\begin{vmatrix}1 & 0 & 0 \\ a + 2b & -2b & -b \\ a + b &
    b & - b\end{vmatrix}[C_2\rightarrow C_2 - C_1; C_3\rightarrow C_3 - C_1]`

    :math:`= 3(a + b)(2b^2 + b^2)`

    :math:`= 9b^2(a + b)`

44. :math:`\Delta = \frac{1}{a}\begin{vmatrix}a^2 + b^2 + c^2 & b - c & c + b
    \\ a^2 + b^2 + c^2 & b & c - a \\ a^2 + b^2 + c^2 \\ b + a &
    c\end{vmatrix}[C_1\rightarrow aC_1 + bC_2 + cC_3]`

    :math:`=\frac{a^2 + b^2 + c^2}{a}\begin{vmatrix}1 & b - c & c + b \\ 1 & b
    & c - a \\ 1 & b + a & c - a\end{vmatrix}`

    :math:`= \frac{a^2 + b^2 + c^2}{a}\begin{vmatrix}1 & b - c & c + b \\ 0 & c
    & -(a + b) \\ 0 & (a + c) & -b\end{vmatrix}`

    :math:`= \frac{a^2 + b^2 + c^2}{a}(-bc + a^2 + ac + bc + ca)`

    :math:`= (a^2 + b^2 + c^2)(a + b + c)`

    :math:`\because a^2 + b^2 + c^2 > 0` the determinant has same sign as
    :math:`a + b + c`

45. :math:`\Delta = \frac{1}{abc}\begin{vmatrix}a(b^2 + c^2) & a^2b & a^2c \\
    ab^2 & b(c^2 + a^2) & b^2c \\ c^2a & c^2b & c(a^2 +
    b^2)\end{vmatrix}[R_1\rightarrow aR_1;R_2\rightarrow bR_2; R_3\rightarrow
    cR_3]`

    Taking out :math:`a, b, c` from columns

    :math:`= \frac{abc}{abc}\begin{vmatrix}b^c + c^2 & a^2 & a^2 \\ b^2 & c^2 +
    a^2 & b^2 \\ c^2 & c^2 & a^2 + b^2\end{vmatrix}`

    :math:`=\frac{1}{c^2}\begin{vmatrix}0 & -2c^2 & -2b^2 \\ 0 & c^2(c^2 + a^2)
    - b^2c^2 & b^2c^2 - b^2(a^2 + b^2) \\ c^2 & c^2 & a^2 +
    b^2\end{vmatrix}[R_1\rightarrow R_1- R_2 - R_3;R_2\rightarrow c^2R_2 -
    b^2R_3]`

    :math:`= \frac{c^2}{c^2}[-2b^2c^4 + 2b^2c^2(a^2 + b^2) + 2b^2c^2(c^2 +
    a^2) - 2b^4c^2]`

    :math:`= 2b^2c^2[-c^2 + a^2 + b^2 + c^2 + a^2 - b^2]`

    :math:`= 4a^2b^2c^2`

46. :math:`\Delta = \frac{1}{a^2b^2c^2}\begin{vmatrix}a^2(b + c)^2 & b^2c^2 &
    b^2c^2 \\ a^2c^2 & b^2(c + a)^2 & c^2a^2 \\ a^2b^2 & b^2a^2 & c^2(a +
    b)^2\end{vmatrix}[C_1\rightarrow a^2C_1;C_2\rightarrow
    b^2C_2;C_3\rightarrow c^2C_3]`

    Taking :math:`\alpha=ab, \beta=bc, \gamma=ca`
    
    :math:`= \frac{1}{\alpha\beta\gamma}\begin{vmatrix}(\alpha + \gamma)^2 &
    \beta^2 & \beta^2 \\ \gamma^2 & (\alpha + \beta)^2 & \gamma^2 \\ \alpha^2 &
    \alpha^2 & (\beta + \gamma)^2\end{vmatrix}`

    Following like exercise :math:`15`

    :math:`= \frac{2\alpha\beta\gamma(\alpha + \beta +
    \gamma)^3}{\alpha\beta\gamma}`

    :math:`2(\alpha + \beta + \gamma)^3`

47. Applying :math:`R_1\rightarrow cR_1; R_2\rightarrow aR_2; R_3\rightarrow
    bR_3` and then take :math:`a, b, c` common from :math:`C_2, C_3` and
    :math:`C_1` respectively, we have

    :math:`\Delta = \begin{vmatrix}(a + b)^2 & c^2 & c^2 \\ a^2 & (b + c)^2 &
    a^2 \\ b^2 & b^2 & (c + a)^2\end{vmatrix}`

    Following like exercise :math:`15`, we get

    :math:`=2abc(a + b + c)^3`

48. Applyting :math:`R_1\rightarrow cR_1, R_2\rightarrow aR_2, R_3\rightarrow
    bR_3`

    :math:`\Delta = \frac{1}{abc}\begin{vmatrix}a^2 + b^2 & c^2 & c^2 \\ a^2 &
    b^2 + c^2 & a^2 \\ b^2 & b^2 & c^2 + a^2\end{vmatrix}`

    Following like exercise :math:`45`, we get

    :math:`= \frac{4a^2b^2c^2}{abc} = 4abc`

49. :math:`\Delta = \begin{vmatrix}0 & 0 & x - a & a & a & a \\ b & x &
    b\end{vmatrix}[R_1\rightarrow R_1 - R_2]`

    :math:`= (x - a)(ax - ab) = 0\Rightarrow a(x - a)(x - b) = 0`

    :math:`\therefore x = a, b`

50. :math:`\Delta = \begin{vmatrix}x + 13 & x + 14 & x + 15 \\ 6 & x + 4 & 4 \\
    7 & 8 & x + 8\end{vmatrix}[R_1\rightarrow R_1 + R_2 + R_3]`

    :math:`= \begin{vmatrix}x + 13 & x + 13 & x + 13\\ 6 & x + 4 & 4 \\
    7 & 8 & x + 8\end{vmatrix} + \begin{vmatrix}0 & 1 & 2\\ 6 & x + 4 & 4 \\
    7 & 8 & x + 8\end{vmatrix}`

    Solving these two, we get :math:`x = 1, \frac{-13 \pm \sqrt{249}}{2}`
