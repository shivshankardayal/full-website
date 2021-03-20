Determinants Solutions Part 2
*****************************
51. :math:`\Delta = \begin{vmatrix}0 & 0 & -2 \\ 4 & x & 1 \\ x & 2 &
    5\end{vmatrix}[R_1\rightarrow R_1 - R_3]`

    :math:`\Rightarrow -2[8 - x^2] = 0 \Rightarrow x = \pm 2\sqrt{2}`

52. :math:`\Delta = \begin{vmatrix}x + a + b + c & b & c \\ x + a + b + c & x +
    b & c \\ x + a + b + c & b & x + c\end{vmatrix}[C_1\rightarrow C_1 + C_2 +
    C_3]`

    :math:`= (x + a + b + c)\begin{vmatrix}1 & b & c \\ 1 & x + b & c \\ 1 & b
    & x + c\end{vmatrix}`

    :math:`= (x + a + b + c)\begin{vmatrix}1 & b & c \\ 0 & b & 0 \\ 0 & 0 &
    x\end{vmatrix}[R_2\rightarrow R_2 - R_1;R_3\rightarrow R_3 - R_1]`

    :math:`\Rightarrow (x + a + b + c)bx = 0`

    :math:`\Rightarrow x = 0, -(a + b + c)`

53. :math:`\Delta = \begin{vmatrix}10 + x & 5 & 2 \\ 14 + x & 7 + x & 6 \\ 10 +
    x & 5 & 3 + x\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

    :math:`= \begin{vmatrix}0 & 0 & -x - 1 \\ 14 + x & 7 + x & 6 \\ 10 + x & 5
    & 3 + x\end{vmatrix}[R_1\rightarrow R_1 - R_3]`

    :math:`\Rightarrow -(x + 1)[(14 + x)*5 - (7 + x)(10 + x)] = 0`

    :math:`\Rightarrow -(x + 1)(70 + 5x - 70 - 17x -x^2) = 0`

    :math:`\Rightarrow (x + 1)(x^2 + 12x) = 0`

    :math:`\Rightarrow x = 0, -1, -12`

54. :math:`\Delta = \begin{vmatrix}a + b & b + c & c + a\\ b + c & c + a & a +
    b \\ c + a & a + b & b + c\end{vmatrix}`

    :math:`= \begin{vmatrix}a & b & c \\ b + c & c + a & a + b \\ c +
    a & a + b & b + c\end{vmatrix} + \begin{vmatrix}b & c & a \\ b + c & c + a
    & a + b \\ c + a & a + b & b + c\end{vmatrix}`

    :math:`= \begin{vmatrix}a & b & c \\ b & c & a \\ c + a & a + b & b +
    c\end{vmatrix} + \begin{vmatrix}a & b & c \\ c & a & b \\ c + a & a + b &
    b + c\end{vmatrix} + \\ \begin{vmatrix}b & c & a \\ b & c & a \\ c + a &
    a +  b & b + c\end{vmatrix} + \begin{vmatrix}b & c & a \\ c & a & b \\ c +
    a & a + b & b + c\end{vmatrix}`

    Clearly third matrix is :math:`0` as it has two equal rows.

    :math:`= \begin{vmatrix}a & b & c \\ b & c & a \\ c & a & b\end{vmatrix} +
    \begin{vmatrix}a & b & c \\ b & c & a \\ a & b & c\end{vmatrix} + \\
    \begin{vmatrix}a & b & c \\ c & a & b \\ c & a & b\end{vmatrix} +
    \begin{vmatrix}a & b & c \\ c & a & b \\ a & b & c\end{vmatrix} + \\
    \begin{vmatrix}b & c & a \\ c & a & b \\ c & a & b\end{vmatrix} +
    \begin{vmatrix}a & b & c \\ c & a & b \\ a & b & c\end{vmatrix}`

    Clearly, second, third, fourth and fifth matrixes are :math:`0` as they
    have two equal rows.

    :math:`= 2\begin{vmatrix}a& b & c \\ b& c & a \\ c & a & b\end{vmatrix}=
    R.H.S.`

55. This problem is same as :math:`54` and has been left as an exercise to the
    reader.

56. :math:`\Delta = \begin{vmatrix}1 & 2\cos\alpha & \cos\alpha +
    \sin\alpha \\ 1 & 2\cos\beta & \cos\beta + \sin\beta \\ 1 &
    2\cos\gamma & \cos\gamma + \sin\gamma\end{vmatrix}[C_2\rightarrow C_2 + C_3]`

    :math:`= \begin{vmatrix}1 & 2\cos\alpha & \sin\alpha \\ 1 & 2\cos\beta &
    \sin\beta \\ 1 & 2\cos\gamma & \sin\gamma \end{vmatrix}[C_3 \rightarrow C_3
    - \frac{1}{2}C_2]`

    :math:`= 2\begin{vmatrix}1 &\cos\alpha & \cos\alpha \\ 1 & \cos\beta &
    \sin\beta \\ 1 & \cos\gamma & \sin\gamma \end{vmatrix}`

57. :math:`\Delta = \begin{vmatrix}-2a & a^2 + 1 & a \\ -2b & b^2 + 1 & b
    \\ -2c & c^2 + 1 & c\end{vmatrix}[C_1\rightarrow C_1 - C_2]`

    :math:`= -2 \begin{vmatrix}a & a^2 + 1 & a \\ b & b^2 + 1 & b \\ c & c^2 +
    1 & c\end{vmatrix}`

    :math:`= 0` because two columns are identical.

58. Multiplying rows with :math:`-1` and exchanging rows and columns, we get

    :math:`\Delta = (-1)^3\begin{vmatrix}0 & c & b \\ -c & 0 & a \\ -b & -a &
    0\end{vmatrix}` (:math:`\Delta` is value of original matrix, not after
    multiplication and exchange)

    :math:`\Delta = -1\Delta \Rightarrow \Delta = 0`

59. Multiplying rows with :math:`a, b, c`, we get

    :math:`\Delta = \frac{1}{abc}\begin{vmatrix}a & a^2 & abc \\ b & b^2 & abc
    \\ c & c^2 & abc\end{vmatrix}`

    :math:`= \frac{abc}{abc}\begin{vmatrix}a & a^2 & 1 \\ b & b^2 & 1 \\
    c & c^2 & 1\end{vmatrix}`

    Performing :math:`C_1\leftrightarrow C_2 \& C_1\leftrightarrow C_3`

    :math:`= \begin{vmatrix}1 & a & a^2 \\ 1 & b & b^2 \\ 1 & c &
    c^2\end{vmatrix}`

60. Multiplying columns with :math:`x, y , z,` we get

    :math:`\Delta = \frac{1}{xyz}\begin{vmatrix}ax & by & cz \\ x^2 & y^2 & z^2
    \\ xyz & xyz & xyz\end{vmatrix}`

    :math:`= \frac{xyz}{xyz}\begin{vmatrix}ax & by & cz \\ x^2 & y^2 & z^2 \\ 1
    & 1 & 1\end{vmatrix}`

61. This problem involves just exchange of rows and columns and has been left
    as an exercise to the reader.

62. :math:`\Delta = m!(m + 1)!(m + 2)!\begin{vmatrix}1 & m+1 & (m + 1)(m+2) \\ 1 & m + 2
    & (m + 1)(m+ 3) \\ 1 & m+ 3 & (m + 3)(m+4)\end{vmatrix}`

    :math:`= m!(m + 1)!(m + 2)!\begin{vmatrix}1 & m + 1 & (m + 1)^2 \\ 1 & m +
    2 & (m + 2)^2 \\ 1 & (m + 3) & (m + 3)^2\end{vmatrix}[C_3 \rightarrow C_3 -
    C_2]`

    :math:`= m!(m + 1)!(m + 2)!(-1)(-1)2[\because \begin{vmatrix}1 & a & a^2 \\
    1 & b & b^2 \\ 1 & c & c^2\end{vmatrix} = (a - b)(b - c)(c - a)]`

63. :math:`\Delta = \begin{vmatrix}1 & 1 \\ 2 & -3\end{vmatrix} = -3 - 2 =
    -5\neq 0`

    :math:`\Delta_1 = \begin{vmatrix}4 & 1 \\ 9 & -3\end{vmatrix} = -21`

    :math:`\Delta_2 = \begin{vmatrix}1 & 4 \\ 2 & 9\end{vmatrix} = 1`

    By Cramer's rule

    :math:`x = \frac{\Delta_1}{\Delta} = \frac{21}{5}`

    :math:`y = \frac{\Delta_2}{\Delta} = -\frac{1}{5}`

64. :math:`\Delta = \begin{vmatrix}2 & -1 & 3 \\ 1 & 1 & 1 \\ 1 & -1 &
    1\end{vmatrix}`

    :math:`= \begin{vmatrix}2 & -1 & 3 \\ 1 & 1 & 1 \\ 0 & -2 &
    0\end{vmatrix}[R_3\rightarrow R_3 - R_2]`

    :math:`= 2(2 - 3) = -2`

    :math:`\Delta_1 = \begin{vmatrix}9 & -1 & 3 \\ 6 & -1 & 1 \\ 2 & -1 &
    1\end{vmatrix}`

    :math:`= -2`

    :math:`\Delta_2 = \begin{vmatrix}2 & 9 & 3 \\ 1 & 6 & 1 \\ 1 & 2 &
    1\end{vmatrix}`

    :math:`= -4`

    :math:`\Delta_3 = \begin{vmatrix}2 & -1 & 9 \\ 1 & 1 & 6 \\ 1 & -1 &
    2\end{vmatrix}`

    :math:`= -6`

    :math:`x = \frac{\Delta_1}{\Delta} = 1, y = \frac{\Delta_2}{\Delta} = 2, z
    = \frac{\Delta_3}{\Delta} = 3`

65. :math:`\Delta = \begin{vmatrix}2 & 3\\ 4 & 6\end{vmatrix} = 0`

    :math:`\Delta_1 = \begin{vmatrix}6 & 3 \\ 10 & 6\end{vmatrix} = 6 \neq 0`

    Thus, we can say that given system of equations is inconsistent and has no
    solution.

66. :math:`\Delta = \begin{vmatrix}1 & 1 & -1 \\ 2 & 3 & 1 \\ 4 & 3 &
    1\end{vmatrix}`

    :math:`= \begin{vmatrix}0 & 0 & -1 \\ 3 & 4 & 1 \\ 5 & 4 &
    1\end{vmatrix}[C_1\rightarrow C_1 + C_3;C_2\rightarrow C_2 + C_3]`

    :math:`= -1(12 - 20) = 8 \ neq 0`

    Hence, given system of equations has a consistent and has unique solution.

67. :math:`\Delta = \begin{vmatrix}1 & 1 \\ 2 & 2\end{vmatrix} = 0`

    :math:`\Delta_1 = \begin{vmatrix}2 & 1 \\ 4 & 2\end{vmatrix} = 0`

    :math:`\Delta_2 = \begin{vmatrix}1 & 2 \\ 2 & 4\end{vmatrix} = 0`

    Hence, given system of equations is consistent and has infinite number of
    solutions.

68. :math:`\Delta = \begin{vmatrix}2 & 1 & 13 \\ 6 & 3 & 18 \\ 1 & -1 &
    -3\end{vmatrix}`

    :math:`= -63 \neq 0` [Note that this is a system of equations with three
    unknown quantities and has a different condition.]

    Hence, given system of equations is inconsistent.

69. :math:`\Delta = \begin{vmatrix}1 & 1 & -6 \\ 3 & -1 & -2 \\ 1 & -1 &
    2\end{vmatrix}`

    :math:`= 0`

    Hence, the given system of equations has non-trivial solution.

70. For the non-trivial solution, :math:`\Delta = 0`

    :math:`\Delta = \begin{vmatrix}1 & 1 & -k \\ 3 & -1 & -2 \\ 1 & -1 &
    2\end{vmatrix} = 0`

    Solving, we get

    :math:`k = 6`

    Substituting this in equations, we get

    :math:`x + y - 6z = 0; 3x - y - 2z = 0; x - 2y + 2z = 0`

    Adding first two, we get

    :math:`4x - 8x = 0\Rightarrow z = \frac{x}{2}`

    :math:`x + y - 3x = 0\therefore y = 2x`

    Thus, for :math:`k = 6,` solution of given system of equations will be
    :math:`x = t, y = 2t , z = \frac{t}{2},` where :math:`t` is an arbitrary
    number.

71. :math:`\Delta = \begin{vmatrix}1 & -2 \\ 7 & 6\end{vmatrix} = 6 - 7 * -2 =
    20`

    :math:`\Delta_1 = \begin{vmatrix}0 & -2 \\ 40 & 6\end{vmatrix} = 80`

    :math:`\Delta_2 = \begin{vmatrix}1 & 0 \\ 7 & 40\end{vmatrix} = 40`

    :math:`x = \frac{\Delta_1}{\Delta} = \frac{80}{20} = 4`

    :math:`y = \frac{\Delta_2}{\Delta} = \frac{40}{20} = 2`

Problems :math:`72` to :math:`85` have been left as exercises as they are
similar to what we have solved.

86. Following like :math:`62, \Delta = \frac{2*n!(n + 1)!(n + 2)!}{(n!)^3}`

    :math:`= 2(n + 1)(n + 1)(n + 2) = 2n^3 + 8n^2 + 10n + 4`

    :math:`\Rightarrow \frac{D}{(n!)^3}` is divisible by :math:`n`

87. Let :math:`A28 = A\times 100 + 2\times 10 + 8 = pk`

    :math:`3B9 = 3\times 100 + B\times 10 + 9 = qk`

    :math:`62C = 6\times 100 + 2\times 10 + C = rk`

    where :math:`p , q, r` are integers.

    :math:`\Delta = \begin{vmatrix}A & 3 & 6 \\ pk & qk & rk \\ 2 & B &
    2\end{vmatrix}[R_2\rightarrow R_2 + 10R_3 + 100R_1]`

    :math:`k \begin{vmatrix}A & 3 & 6 \\ p & q & r \\ 2 & B & 2\end{vmatrix}`

    Thus, required divisibility condition is satisfied.

88. :math:`\Delta = \begin{vmatrix}x & \frac{x(x - 1)}{2} & \frac{x(x - 1)(x -
    2)}{6} \\ y & \frac{y(y - 1)}{2} & \frac{y(y - 1)(y - 2)}{6} \\ z &
    \frac{z(z - 1)}{2} & \frac{z(z - 1)(z - 2)}{6}\end{vmatrix}`

    :math:`= \frac{xyz}{2.6}\begin{vmatrix}1 & x - 1 & (x - 1)(x - 2) \\ 1 &
    y - 1 & (y - 1)(y - 2) \\ 1 & z - 1 & (z - 1)(z - 2)\end{vmatrix}`

    :math:`= \frac{xyz}{12}\begin{vmatrix}1 & x - 1 & (x - 1)^2 \\ 1 & y - 1 &
    (y - 1)^2 \\ 1 & z - 1 & (z - 1)^2\end{vmatrix}[C_3\rightarrow C_3 + C_2]`

    :math:`= \frac{xyz}{12}(x - y)(y - z)(z - x)[\because \begin{vmatrix}1 & a
    & a^2 \\ 1 & b & b^2 \\ 1 & c & c^2\end{vmatrix} = (a - b)(b - c)(c - a)]`

89. :math:`\Delta = \begin{vmatrix}p - a & b - q & 0 \\ 0 & q - b & c - r \\ a
    & b & r\end{vmatrix}[R_1\rightarrow R_1 - R-2; R_2 \rightarrow R_2 - R_3] =
    0`

    :math:`\Rightarrow (p -a)[r(q - b) - b(c - r)] - (b - q)[0 - a(c - r)] = 0`

    :math:`\Rightarrow r(p - a)(q - b) + b(p - a)(r - c) + a(q - b)(r - c) = 0`

    :math:`\Rightarrow\frac{r}{r - c} + \frac{b}{q - b} + \frac{a}{p - a} = 0`

    :math:`\Rightarrow \frac{r}{r - c} + \left(\frac{b}{q - b} + 1\right) +
    \left(\frac{q}{p - a} + q\right) = 0 + 1 + 1`

    :math:`\Rightarrow \frac{p}{p - a} + \frac{q}{q - b} + \frac{r}{r - c} = 2`

90. :math:`\Delta = \begin{vmatrix}x(x - 2a) & x(2b - x) & 0 \\ 0 & -(x - 2b) &
    x(ac - x) \\ a^2 & b^2 & (x - c)^2\end{vmatrix}[R_1\rightarrow R_1
    -R_2;R_2\rightarrow R_2 - R_3]`

    :math:`= x^2\begin{vmatrix}x - 2a & -(x - 2b) & 0 \\ 0 & x - 2b & -(x - 2c) \\ a^2
    & b^2 & (x - c)^2\end{vmatrix}`

    :math:`= x^2(x - 2a)(x - 2b)(x - 2c)\begin{vmatrix}1 & -1 & 0 \\ 0 & 1 & -1
    \\ \frac{a^2}{x - 2a} & \frac{b^2}{x - 2c} & x + a\frac{c^2}{x -
    2c}\end{vmatrix}`

    :math:`= x^2(x - 2a)(x - 2b)(x - 2c)\left(x + \frac{a^2}{x - 2a} +
    \frac{b^2}{x - 2b} + \frac{c^2}{x - 2c}\right)\\\begin{vmatrix}1 & -1 & 0 \\
    0 & 1 & 0 \\ \frac{a^2}{x - 2a} & \frac{b^2}{x - ac} &
    1\end{vmatrix}[C_3\rightarrow C_1 + C_2 + C_3]`

    :math:`= x^2(x - 2a)(x - 2b)(x - 2c)\left(x + \frac{a^2}{x - 2a} +
    \frac{b^2}{x - 2b} + \frac{c^2}{x - 2c}\right)`

91. :math:`\Delta = \frac{1}{a(a + d)^2(a + 2d)^3(a + 3d)^2(a +
    4d)}\begin{vmatrix} (a + d)(a + 2d)  & a + 2d & a \\ (a + 2d)(a + 3d) & a +
    3d & a + d \\ (a + 3d)(a + 4d) & a + 3d & a + 2d\end{vmatrix}`

    :math:`= \frac{1}{a(a + d)^2(a + 2d)^3(a + 3d)^2(a + 4d)} \begin{vmatrix}(a
    + d)(a + 2d) & 2d & a \\ (a + 2d)(a + 3d) & 2d & a + d \\ (a + 3d)(a + 4d)
    & 2d & a + 2d\end{vmatrix}[C_2\rightarrow C_2 - C_3]`

    :math:`= \frac{1}{a(a + d)^2(a + 2d)^3(a + 3d)^2(a + 4d)} \begin{vmatrix}(a
    + d)(a + 2d) & 2d & a \\ (a + 2d)2d & 0 & d \\ (a + 3d)2d & 0 &
    d\end{vmatrix}[R_2\rightarrow R_2 - R_1; R_3\rightarrow R_3 - R_2]`

    :math:`= \frac{1}{a(a + d)^2(a + 2d)^3(a + 3d)^2(a + 4d)}.-2d[2d^2(a + 2d -
    a - 3d)]`

    :math:`= \frac{4d^4}{a(a + d)^2(a + 2d)^3(a + 3d)^2(a + 4d)}`

92. :math:`\Delta = \frac{1}{(a + x)(b + c)(c + x)(a + y)(b + y)(c + y)(a +
    z)(b + z)(c + z)w}\Delta_1`

    where :math:`\Delta_1 = \begin{vmatrix}(b + x)(c + x) & (b + y)(c + y) & (b
    + z)(c + z) \\ (c + x)(a + x) & (c + y)(a + y) & (c + z)(a + z) \\ (a +
    x)(b + x) & (a + y)(b + y) & (a + z)(b + z)\end{vmatrix}`

    :math:`\Delta_1 = \begin{vmatrix}(b + x)(c + x) & (b + y)(c + y) & (b
    + z)(c + z) \\ (c + x)(a - b) & (c + y)(a - b) & (c - z)(a - b) \\ (b +
    x)(a - c) & (b + y)(a - c) & (b + z)(a - c)\end{vmatrix}[R_2\rightarrow R_2
    - R-1; R_3\rightarrow R_3 - R_1]`

    :math:`= (a - b)(a - c)\begin{vmatrix}(b + x)(c + x) & (b + y)(c + y) & (b
    + z)(c + z) \\ c + x & c + y & c + z \\ b + x & b + y & b + z\end{vmatrix}`

    :math:`= (a - b)(a - c)\begin{vmatrix}x(c + x) & y(c + y) & z(c + z) \\ c +
    x & c + y & c + z \\ b - c & b - c & b - c\end{vmatrix}[R_1\rightarrow
    R_1 - bR_2; R_3\rightarrow R_3 - R_2]`

    :math:`= (a - b)(b - c)(a - c)\begin{vmatrix}(x - z)(c + x + z) & (y - z)(c
    + y + z) & z(c + z) \\ x - z & y - z & c + z \\ 0 & 0 &
    1\end{vmatrix}[C_1\rightarrow C_1 - C_2; C_2\rightarrow C_2 - C_3]`

    :math:`= (a - b)(b - c)(a - c)(x - z)(y - z)\begin{vmatrix}c + x + z & c +
    y + z & z(c + z) \\ 1 & 1 & c + z \\ 0 & 0 & 1\end{vmatrix}`

    :math:`= (a - b)(b - c)(a - c)(x - z)(y - z)[c + x + z - c - y - z]`

    :math:`= (a - b)(b - c)(a - c)(x - z)(y - z)(x - y)`

    :math:`\Delta = \frac{(a - b)(b - c)(a - c)(x - z)(y - z)(x - y)}{(a -
    b)(b - c)(a - c)(x - z)(y - z)(x - y)}`

93. Let :math:`\alpha = s - a, \beta = s - b, \gamma = s - c,` then

    :math:`\beta + \gamma = 2s - (b + c) = a, \gamma + \alpha = b, \alpha +
    \beta = c, \alpha + \beta + \gamma = 3s - (a + b + c) = 3s - 2s = s`

    :math:`\Delta = \begin{vmatrix}(\beta + \gamma)^2 & \alpha^2 & \alpha^2 \\
    \beta^2 & (\gamma + \alpha)^2 & \beta^2 \\ \gamma^2 & \gamma ^2 & (\alpha +
    \beta)^2\end{vmatrix}`

    Follwing like exercise :math:`15`

    :math:`= 2\alpha\beta\gamma(\alpha + \beta + \gamma)^3`

    :math:`= 2(s - a)(s - b)(s - c)s^3`

94. :math:`\Delta = \frac{1}{a}(a^2 + b^2 + c^2)\begin{vmatrix}x & ay + bx & cx
    + az \\ y & by - cz -ax & bz + cy \\ z & bz + cy & cz - ax -
    by\end{vmatrix}[C_1\rightarrow aC_1 + bC_2 + cC_3]`

    :math:`= \frac{1}{ax}(a^2 + b^2 + c^2)\begin{vmatrix}x^2 + y^2 + z^2 &
    b(x^2 + y^2 + z^2) & c(x^2 + y^2 + z^2) \\ y & by - cz -ax & bz + cy \\ z &
    bz + cy & cz - ax - by\end{vmatrix}[R_1\rightarrow xR_1 + yR_2 + zR_3]`

    :math:`= \frac{(a^2 + b^2 + c^2)(x^2 + y^2 + z^2)}{ax}\begin{vmatrix}1 & b
    & c \\ y & by - cz -ax & bz + cy \\ z & bz + cy & cz - ax -
    by\end{vmatrix}`

    :math:`= \frac{(a^2 + b^2 + c^2)(x^2 + y^2 + z^2)}{ax}\begin{vmatrix}1 & b
    & c \\ 0 & -cz - ax & bz \\ 0 & cy & -ax - by\end{vmatrix}[R_2\rightarrow
    R_2 - yR_1; R_3\rightarrow R_3 - zR_1]`

    :math:`= \frac{(a^2 + b^2 + c^2)(x^2 + y^2 + z^2)}{ax}[(cz + ax)(ax + by) -
    bcyz]`

    :math:`= (a^2 + b^2 + c^2)(x^2 + y^2 + z^2)(ax + by + cz)`

95. :math:`\begin{vmatrix}2 + 4\sin 4\theta & \sin^2\theta & 4\sin\theta \\2 +
    4\sin 4\theta & 1 + \sin^2\theta & 4\sin\theta \\ 2 + 4\sin 4\theta &
    \sin^2 \theta & 1 + 4\sin 4\theta\end{vmatrix} = 0[C_1\rightarrow C_1 + C_2
    + C_3]`

    :math:`\Rightarrow (2 + 4\sin 4\theta)\begin{vmatrix}1 & \sin^2\theta &
    4\sin 4\theta \\ 0 & 1 & 0 \\ 0 & 0 & 1\end{vmatrix} = 0[R_2\rightarrow R_2
    - R_1; R_3\rightarrow R_3 - R_1]`

    :math:`\Rightarrow 2(2 + 4\sin 4\theta) = 0`

    :math:`\sin 4\theta = -\frac{1}{2} \Rightarrow 4\theta = \frac{7\pi}{6},
    \frac{11\pi}{6}`

    :math:`\theta = \frac{7\pi}{24}, \frac{11\pi}{24}`

96. :math:`\Delta = \frac{1}{abc}\begin{vmatrix}a[a^2 + (b^2 + c^2)\cos\phi] &
    ba^2[1 - \cos\phi] & ca^2(1 - cos\phi) \\ ab^2(1 - \cos\phi) & b[b^2 + (c^2
    + a^2)\cos\phi] & cb^2(1 - \cos\phi) \\ ac^2(1 - \cos\phi) & bc^2(1 -
    \cos\phi) & c[c^2 + (a^2 + b^2)\cos\phi]\end{vmatrix}[R_1\rightarrow aR_1
    + bR_2 + cR_3]`

    :math:`= \begin{vmatrix}a^2 + (b^2 + c^2)\cos\phi & a^2(1 - \cos\phi) &
    a^2(1 - \cos\phi) \\ b^2(1 - \cos\phi) & b^2 + (c^2 + a^2)\cos\phi & b^2(1 -
    \cos\phi) \\ c^2(1 - \cos\phi) & c^2(1 - \cos\phi) & c^2 + (a^2 +
    b^2)\cos\phi\end{vmatrix}`

    :math:`= (a^2 + b^2 + c^2)\begin{vmatrix}1 & 1 & 1 \\ \\ b^(1 - \cos\phi) &
    b^2 + (c^2 + a^2)\cos\phi & b^2(1 - \cos\phi) \\ c^2(1 - \cos\phi) &
    c^2(1 - \cos\phi) & c^2 + (a^2 + b^2)\cos\phi\end{vmatrix}[R_1\rightarrow
    R_1 + R_2 + R_3]`

    Performing :math:`C_1\rightarrow C_1 - C_2; C_2\rightarrow C_2 - C_3,` we
    get

    :math:`= (a^2 + b^2 + c^2)\begin{vmatrix}0 & 0 & 1 \\ -(a^2 + b^2 +
    c^2)\cos\phi & (a^2 + b^2 + c^2)\cos\phi & b^2(1 - \cos\phi) \\ 0 & -(a^2 +
    b^2 + c^2)\cos\phi & c^2 + (a^2 + b^2)\cos\phi\end{vmatrix}`

    :math:`= (a^2 + b^2 + c^2)(a^2 + b^2 + c^2)^2\cos^2\phi = \cos^2\phi`

97. :math:`\Delta = \frac{1}{abc}\begin{vmatrix}-abc & ab^2 + abc & ac^2 + abc
    \\ a^2b & -abc & bc^2 + abc \\ a^c + abc & b^2c + abc &
    -abc\end{vmatrix}[R_1\rightarrow aR_1; R-2 \rightarrow bR_2; R_3\rightarrow
    cR_3]`

    :math:`= \begin{vmatrix}-bc & ab + ac & ac + ab \\ ab + bc & -ac & bc + ab
    \\ ac + bc & bc + ac & ab\end{vmatrix}`

    :math:`= (ab + bc + ca)\begin{vmatrix}1 & 1 & 1 \\ ab + bc & -ac & bc + ab
    \\ ac + bc & bc + ac & ab\end{vmatrix}[R_1\rightarrow R_1 + R_2 + R_3]`

    :math:`= (ab + bc + ca)\begin{vmatrix}1 & 0 & 0 \\ ab + bc & -(ab + bc +
    ca) & 0 \\ ac + bc & 0 & -(ab + bc + ca)\end{vmatrix}[C_2\rightarrow C_2 -
    C_1; C_3\rightarrow C_3 - C_1]`

    :math:`= (ab + bc + ca)^3`

98. Given :math:`y = \frac{u}{v}, \frac{dy}{dx} = \frac{vu' - uv'}{v^2}
    \Rightarrow v^2\frac{dy}{dx} = vu' - uv'`

    :math:`= v^3\frac{dy}{dx} = v^2u' - uvv'`

    Again differentiating w.r.t. :math:`x,` we get

    :math:`v^3\frac{d^2y}{dx^2} + 3v^2v'\frac{dy}{dx} = 2vv'u' + v^2u" - uvv" -
    (uv' + u'v)v'`

    :math:`v^3\frac{dy^2}{dx^2} = -2u'vv' + 2uv'^2 + v^2u" - uvv" = \Delta`

99. :math:`\Delta = \begin{vmatrix}x  & x & x \\ x & x + a & x \\ x & x & x +
    a^2\end{vmatrix} + \begin{vmatrix}1 & x & x \\ 0 & x + a & x \\ 0 & x & x +
    a^2\end{vmatrix}`

    :math:`= \begin{vmatrix}x & x & x \\ 0 & a & 0 \\ 0 & 0 &
    a^2\end{vmatrix}[R_2\rightarrow R_2 - R_1; R_3\rightarrow R_3 - R_1] + (x +
    a)(x + a^2) - x^2`

    :math:`= xa^3 + x(a + a^2) + a^3`

    :math:`= a^3\left[1 + x\left(1 + \frac{1}{a} + \frac{1}{a^2}\right)\right]`

    :math:`= a^3\left[1 + \frac{x(a^3 - 1)}{a^2(a - 1)}\right]`

100. L.H.S. :math:`= pa(qra^2 - p^2bc) - qb(q^2ca - prb^2) + rc(pqc^2 - r^2ab)`

     :math:`= pqra^3 - abcp^3 - abcq^3 + pqrb^3 + pqrc^3 - abcr^3`

     :math:`= pqr(a^3 + b^3 + c^3) - abc(p^3 + q^3 + r^3)`

     :math:`= pqr(a^3 + b^3 + c^3 - 3abc) - abc(p^3 + q^3 + r^3 - 3pqr)`

     :math:`pqr(a^3 + b^3 + c^3 - 3abc) - 0[\because p + q + r = 0]`

     R.H.S. :math:`= pqr \begin{vmatrix}a & b & c \\ c & a & b \\ b & c &
     a\end{vmatrix}`

     :math:`= pqr(a + b + c)\begin{vmatrix}1 & b & c \\ 1 & a & b \\ 1 & c &
     a\end{vmatrix}[C_1\rightarrow C_1 + C_2 + C_3]`

     :math:`= pqr(a + b + c)\begin{vmatrix}o & b- a & c - b \\ 0 & a - c & b -
     a \\ 1 & c & a\end{vmatrix}[R_1\rightarrow R_1-R_2;R_2\rightarrow R_2 -
     R_3]`

     :math:`= pqr(a^3 + b^3 + c^3 - 3abc) =` L.H.S
