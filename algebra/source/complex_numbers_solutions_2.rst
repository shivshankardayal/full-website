********************************
Complex Numbers Solutions Part 2
********************************
51. Let :math:`x` be a real root then we have

    .. math::
       x^2 + \alpha x + \beta = 0 \Rightarrow x^2 + \alpha x = -\beta

    Taking conjugate we have

    .. math::
       -\overline{\beta} = \overline{x^2} + \overline{\alpha x}

       -\overline{\beta} = x^2 + \overline{\alpha}x [\because x \text{ is
       real.}]

    Subtracting, we get

    .. math::
       \beta - \overline{\beta} = (\overline{\alpha} - \alpha)x

    Multiplying first equation with :math:`\overline{\alpha}` and second with
    :math:`\alpha` and subtracting we get

    .. math::
       \alpha\overline{\beta} - \overline{\alpha}\beta = (\overline{\alpha} -
       \alpha)x^2

    Thus we have our desired result.

52. Let :math:`f(z) = m(z - i) + i` and :math:`f(z) = n(z + i) + 1 + i` where
    :math:`m` and :math:`n` are quotients upon division. Substituing :math:`z =
    i` in the first equation and :math:`z = -i` in the second we
    get. :math:`f(i) = i` and :math:`f(-i) = 1+i`.

    Let :math:`g(z)` be the quotient and :math:`az + b` be the remainder upon
    division of :math:`f(z)` by :math:`z^2 + 1`. Hence, we have

    :math:`f(z) = g(z)(z^2 + 1) + az + b`. Substituting :math:`z = i` and
    :math:`z = -i` we have

    .. math::
       f(i) = i = ai + b [\because i^2 + 1 = 0]
       f(-i) = 1 + i = -ai + b [\because (-i)^2 + 1 = 0]
       
    Adding

    .. math::
       2b = 1 + 2i \Rightarrow b = \frac{1 + 2i}{2}

    Now :math:`a` can be calculated and :math:`az + b` evaluated.

53. Given,

    .. math::
       iz^3 + z^2 - z + i = 0 \Rightarrow iz^2(z - i) - 1(z - i) = 0
       \Rightarrow (iz^2 - 1)(z - i) = 0

       \therefore \text{Either } iz^2 - 1 = 0 \Rightarrow z^2 = -i \Rightarrow |z|^2 =
       1 \Rightarrow |z| = 1

       \text{or } z - i = 0 \Rightarrow z = i \Rightarrow |z| = 1

54. We know that for two complex numbers :math:`z1` and :math:`z2`

    .. math::
       |z1 + z2|^2 + |z1 - z2|^2 = 2|z1|^2 + 2|z2|^2

       \text{Let, } z1 = \alpha + \sqrt{\alpha^2 - \beta^2} \text{and } z1 =
       \alpha - \sqrt{\alpha^2 - \beta^2}

       (|z1| + |z2|)^2 = [|z1|^2 + |z2|^2] + 2|z1||z2|

       = \frac{1}{2}[|z1 + z2|^2 + |z1 - z2|^2] + 2|z1z2|

       = \frac{1}{2}[|2\alpha|^2 + |2\sqrt{\alpha^2 - \beta^2}|^2] + 2|(\alpha +
       \sqrt{\alpha^2 - \beta^2})(\alpha - \sqrt{\alpha^2 - \beta^2})|

       = \frac{1}{2}[4|\alpha|^2 + 2|\alpha^2 - \beta^2|] + 2|\alpha^2 -
       (\alpha^2 - \beta^2)|

       = (|\alpha + \beta| + |\alpha - \beta|)^2

    Hence, proven.

55. Given, :math:`|z1| = |z2| = 1 \therefore~a^2 + b^2 = 1` and :math:`c^2 +
    d^2 = 1`.

    .. math::
       \text{Also given that } Re(z1\overline{z2}) = 0 \Rightarrow ac + bd = 0
       \therefore \frac{a}{d} = - \frac{b}{c} = p

       \therefore a = pd \text{ and } b = -pc

       \because a^2 + b^2 = 1 \Rightarrow p^2(c^2 + d^2) = 1 \Rightarrow p^2 =
       1 (\because c^2 + d^2 = 1) \Rightarrow p = \pm 1

    Now when :math:`p = 1, a = p \text{ and } b = -c` and when :math:`p = -1, a
    = -p \text{ and } b = c`.

    Now from these equalities asked equalities can be proven.

56. To be proven is that

    .. math::
       \left|\frac{z_1 - z_2}{1 - \overline{z_1}z_2}\right| < 1

       \Rightarrow \left|\frac{z_1 - z_2}{1 - \overline{z_1}z_2}\right|^2 < 1

       \Rightarrow |z_1 - z_2|^2 < |1 - \overline{z_1}z_2|^2

       \Rightarrow |z_1 - z_2|\overline{|z_1 - z_2|} < (1 -
       \overline{z_1}z_2)\overline{(1 - \overline{z_1}z_2)}

       \Rightarrow (z_1 - z_2)(\overline{z_1} - \overline{z_2}) < (1 -
       \overline{z_1}z_2)(1 - z_1\overline{z_2})

       \Rightarrow |z_1|^2 + |z_2|^2 < 1 + |z_1|^2|z_2|^2

       \Rightarrow (1 + |z_1|)(1 + |z_2|)(1 - |z_1|)(1 - |z_2|) > 0

    Now if :math:`|z_1| < 1` and :math:`|z_2| < 1` hence our desired result is proven.

    57 and 58 are left as an  exercise to the reader.

59. Let :math:`z = r_1e^{i\theta_1}` and :math:`w =
    r_2e^{i\theta_2}`. :math:`\because |z| \le 1` and :math:`|w| \le 1` we have
    :math:`r+1 \le 1` and :math:`r_2 \le 1`.

    .. math::
       |z - w|^2 = (r_1cos\theta_1 - r_2cos\theta_2)^2 + (r_1sin\theta_1 -
       r_2sin\theta_2)^2

       = r_1^2 + r_2^2 -2r_1r_2cos(\theta_1 - \theta_2)

       = (r_1 - r_2)^2 + 2r_1r_2 - 2r_1r_2cos(\theta_1 - \theta_2)

       = (r_1 - r_2)^2 + 4r_1r_2sin\left(\frac{\theta_1 - \theta_2}{2}\right)^2

       \le (r_1 - r_2)^2 + (\theta_1 - \theta_2)^2 [\because r_1, r_2 \le 1 \text{
       and } sin\theta \le \theta.]

       = (|z| - |w|)^2 + (Arg(z) - Arg(w))^2

60. (i) Let :math:`z = r(cos\theta + isin\theta).`

    .. math::
       \frac{z}{|z|} = cos\theta - isin\theta \Rightarrow \left|\frac{z}{|z|} -
       1\right| = |(cos\theta - 1) + isin\theta| = \sqrt{(cos\theta - 1)^2 +
       sin^2\theta}

       = \sqrt{2 - 2cos\theta} = \sqrt{4sin^2\frac{\theta}{2}} =
       2sin\frac{\theta}{2} \le \theta = arg(z)

    (ii) :math:`|z - |z|| = |z - 1 - (|z| - 1)| \ge |z - 1| - ||z| - 1|`

    Now it can be easily proven that :math:`|z - |z|| = r|\theta| =
    |z||arg(z)|`

    Hence, our desired result is proven.

61. Let :math:`z = r(cos\theta + isin\theta) \therefore \frac{1}{z} =
    \frac{1}{r}(cos\theta -isin\theta)`. Now

    .. math::
       \left|z + \frac{1}{z}\right| = a

       \text{L. H. S. = }\left|(r + \frac{1}{r})cos\theta + i(r -
       \frac{1}{r})sin\theta\right| = \left(r +
       \frac{1}{r}\right)cos^2\theta + \left(r -
       \frac{1}{r}\right)^2sin^2\theta = a^2

       \Rightarrow \left(r - \frac{1}{r}\right)^2 = a^2 - 4cos^2\theta

    Now, when :math:`r` will be greatest :math:`r - \frac{1}{r}` will be
    greatest, which will be greatest when :math:`cos\theta = 0`. Therefore,

    .. math::
       r - \frac{1}{r} = a [\because r - \frac{1}{r} > 0 \text{ and } a > 0.]

       \therefore r^2 - ar - 1 = 0

       \therefore \text{Greatest value of } r = \frac{a + \sqrt{a^2 + 4}}{2}

    Similarly, least value can be found.

    62, 63 and 64 are left as exercise for the reader.

65. Since roots of the equation are given we can write the following:

    .. math::
       (x - a)(x - b) ... (x - k) = x^n + p_1x^{n-1} + p_2x^{n-2} + ... +
       p_{n-1}x + p_n

    substituing :math:`x = i` we get

    .. math::
       (i - a)(i - b) ... (i - k) = i^n + p_1i^{n-1} + p_2i^{n - 2} + ... +
       p_{n-1}i + p_n

    Dividing both sides by :math:`i^n`

    .. math::
       (1 + ia)(1 + ib) .. (1 + ik) = 1 + \frac{p_1}{i} + \frac{p-2}{i^2} +
       ... + \frac{p_{n-1}}{i^{n-1}} + \frac{1}{i^n}

    Taking modulus and squaring we get our desired result. Problem no. 66 is
    left as an exercise for the reader.

67. Since the triangle is an equilateral triangle all three sides are equal.

    .. math::

       \Rightarrow |z1 - z2| = |z2 - z2| = |z3 - z1| \Rightarrow |z1 - z2|^2 =
       |z2 - z2|^2 = |z3 - z1|^2

       \Rightarrow (z1 - z2)(\overline{z1} - \overline{z2}) = (z2 -
       z3)(\overline{z2} - \overline{z3}) = (z3 - z1)(\overline{z3} -
       \overline{z1}) = r(say)

       \Rightarrow r\left(\frac{1}{z1 - z2} + \frac{1}{z2 - z3} +
       \frac{1}{z3 - z1}\right) = \overline{z1} - \overline{z2} +
       \overline{z2} - \overline{z3} + \overline{z3} - \overline{z1} = 0

       \Rightarrow \frac{1}{z1 - z2} + \frac{1}{z2 - z3} + \frac{1}{z3 - z1} =
       0

       \Rightarrow (z1 - z2)(z2 - z3) + (z1 - z2)(z3 - z1) + (z3 - z1)(z2 - z3)
       = 0

    Now this leads upon multipliation and rearranging to:

    .. math::
       z1^2 + z2^2 + z3^2 = z1z2 + z2z3 + z3z1

68. Given,

    .. math::
       z_1^2 + z_2^2 -2z_1z_2cos\theta = 0

    Dividing by :math:`z_2^2` we get

    .. math::
       \left(\frac{z_1}{z_2}\right)^2 + 1 - 2\frac{z_1}{z_2}cos\theta = 0

    Solving this as a quaddratic equation we have roots as

    .. math::
       \frac{z_1}{z_2} = \frac{2cos\theta \pm~\sqrt{4cos^2\theta - 4} }{2}

       \Rightarrow \frac{z_1}{z_2} = cos\theta \pm isin\theta

       \Rightarrow |z_1| = |z_2|.

    Hence, :math:`z_1, z_2` and origin form an isosceles triangle.

69. Let points :math:`O, P` and :math:`Q` represents origin, :math:`A` and
    :math:`B` respectivel.

    Given,

    .. math::
       \frac{A}{B} + \frac{B}{A} = 1 \Rightarrow A^2 + B^2 = AB \Rightarrow A^2
       = B(A - B) \text{ and } B^2 = A(B - A)

    Dividing

    .. math::
       \frac{A^2}{B^2} = -\frac{B}{A} \Rightarrow A^3 = -B^3 \Rightarrow |A| =
       |B|

       \Rightarrow |B| = |B - A| \text{ and } |A| = |B - A|

    This :math:`\triangle OPQ` is an isosceles triangle.

70. Let :math:`z_1 = x_1 + iy_1, z_2 = x_2 + iy_2` and :math:`z_3 = x_3 +iy_3.`
    Then area of a triangle is given by

    .. math::
       = \left|\frac{1}{2}\begin{vmatrix}x_1 & y_1 & 1\\x_2 & y_2 & 1\\x_3 & y_3
       & 1\end{vmatrix}\right|

       C_1 \rightarrow C_1 + iC_2

       = \left|\frac{1}{2}\begin{vmatrix}x_1 + iy_1 & y_1 & 1\\x_2 + iy_2 & y_2 &
       1\\x_3 + iy_3 & y_3 & 1\end{vmatrix}\right|

    Now :math:`C_2` can be written as :math:`\frac{1}{2i}(z - \overline{z})`.

    .. math::
       = \left|\frac{1}{2}\begin{vmatrix}z_1 & \frac{1}{2i}(z_1 -
       \overline{z_1}) & 1\\z_2 & \frac{1}{2i}(z_2 - \overline{z_2}) & 1\\z_3 &
       \frac{1}{2i}(z_3 - \overline{z_3}) & 1\end{vmatrix}\right|

    Taking :math:`\frac{1}{2i}` common and :math:`C_2 \rightarrow C_2 - C_1`

    .. math::
       = \left|\frac{1}{4i}\begin{vmatrix}z_1 &  -\overline{z_1} & 1\\z_2 & -\overline{z_2} & 1\\z_3 &
        -\overline{z_3} & 1\end{vmatrix}\right|

    Now expanding this will yield desired result.

71. Given,

    .. math::
       (z + 1)^n = z^n \Rightarrow \left(1 + \frac{1}{z}\right)^n = 1
       \Rightarrow 1 + \frac{1}{z} = 1^{\frac{1}{n}}

       \Rightarrow 1 + \frac{1}{z} = (cos\theta + isin\theta)^{\frac{1}{n}} =
       cos\frac{2r\pi}{n} + isin\frac{2r\pi}{n} \text{ where } r = 0, 1, 2, 3,
       ...

    But when :math:`r = 0 \Rightarrow \frac{1}{z} = 0` which is not possible.

    Solving for :math:`z` will lead us to

    .. math::
       z = -\frac{1}{2} - \frac{i}{2}cos\frac{r\pi}{n}

    Thus :math:`Re(z) = -\frac{1}{2}` which implies the roots lie on the line
    :math:`x = -\frac{1}{2}` and therefore we can conclude they are collinear.

72. Let :math:`z_1, z_2, z_3` and :math:`z_4` are represented by points
    :math:`A, B, C` and :math:`D`. Then, we have

    .. math::
       AD = |z_1 - z_4|, BC = |z_2 - z_3|, CD = |z_3 - z_4| \text{ and so on.}

       (z_1 - z_4)(z_2 - z_3) = (z_2 - z_4)(z_3 - z_1) + (z_3 - z_4)(z_1 - z_2)

       \Rightarrow |z_1 - z_4||z_2 - z_3|~\le~|z_2 - z_4||z_3 - z_1| + |z_3 -
       z_4| + |z_1 - z_2|

    Hence proven.

73. Equation of line passing trhough :math:`a` and :math:`ib` is given by

    .. math::
       \begin{vmatrix}z & \overline{z} & 1\\ a & \overline{a} & 1\\ ib &
       -i\overline{b} & 1\end{vmatrix} = 0

       \Rightarrow (\overline{a} + i\overline{b})z - (a - ib)\overline{z} -
       i(a\overline{b} + \overline{a}b) = 0

       \because a, b \in R, \overline{a} = a, \overline{b} = b

       \Rightarrow (a + ib)z - (a - ib)\overline{z} = 2abi

    Dividing both sides by :math:`2abi` we get desired result.

74. Given,

    .. math::
       |z_1| - |z_2| = |z_1 - z_2| \Rightarrow OA - OB = AB,

    where :math:`O, A` and :math:`B` represents the complex numbers of origin,
    :math:`z_1` and :math:`z_2`. This implies :math:`A` and :math:`B` lie on
    the line passing through origin and they lie on the same side of origin.

    :math:`\therefore arg~z_1 - arg~z_2 = 2n\pi.`

75. Given,

    .. math::
       z - z_1.z_2. ... .z_n = 0

       \Rightarrow arg~z  - arg(z_1.z_2. ... .z_n) = 0

       \Rightarrow arg~z - arg(z_1 + z_2 + ... + z_n) = 0

76. We know that :math:`\triangle ABC` and :math:`\triangle DOE` will be similar if

    .. math::

	   \frac{AC}{AB} = \frac{DE}{DO} \text{ and } \angle BAC = \angle ODE

       i.e. \left|\frac{z_3 - z_1}{z_2 - z_1}\right| = \left|\frac{z_5 -
       z_4}{0 - z_4}\right| 

       \text{and } arg\left(\frac{z_3 - z_1}{z_2 - z_1}\right) =
       \left(\frac{z_5 - z_4}{0 - z_4}\right) 

    By solving two previous equations we get our desired result.

77. Given, :math:`OA = 1` and :math:`|z| = 1 \therefore OP = 1` and
    :math:`\therefore OP = OA`

    :math:`OP_0 = |z_0|` and :math:`OQ = |z\overline{z_0}| =
    |z||\overline{z_0}| = |\overline{z_0}| = |z_0|`

    :math:`\therefore OP_0 = OQ`

    .. math::
       \angle P_0OP = arg\left(\frac{z_0}{z}\right)

       \angle AOQ = arg\left(\frac{1}{z\overline{z_0}}\right) =
       arg\left(\frac{\overline{z}}{\overline{z_0}}\right) [\because
       z\overline{z} = 1]

       = -arg\left(\frac{\overline{z_0}}{z}\right) =
       arg\left(\frac{z_0}{z}\right) [\because -arg~\overline{z} = arg~z]

    Thus the triangles are congruent. Now since :math:`PP_0 = AQ \Rightarrow |z
    - z_0| = |zz_0 - 1|`

78. Using section formula we have,

    .. math::
       P = \frac{az_2 + bz_1}{a + b} \text{ and } Q = \frac{az_2 - bz_1}{a - b}

    Now finding :math:`OP^2 + OQ^2` is as easy as solving an expression which
    is left as an exercise.

79. Given,

    .. math::
       a + b + c = 0 \text{ and } az_1 + bz_2 + cz_3 = 0

    So we have

    .. math::
       az_1 + bz_2 - (a + b)z_3 = 0 \Rightarrow z_3 = \frac{az_1 + bz_2}{a + b}

    This implies that :math:`z_3` lies on the line joining :math:`z_1` and
    :math:`z_3` in the ratio of :math:`a:b` inernally or externally depending
    on their sign.

80. Let equation of a line passing through origin is :math:`a\overline{z} +
    \overline{a}z = 0.` Now let us assume that all the points lie on the same
    side of this line so we have

    .. math::
       a\overline{z_i} + \overline{a}z_i > 0 \text{ or } a\overline{z_i} +
       \overline{a}z_i < 0 \text{ for } i = 1, 2, 3, ..., n

    Thus,

    .. math::
       a\sum_{i=1}^n\overline{z_i} + \overline{a}\sum_{i=1}^nz_i > 0 \text{ or }
       a\sum_{i=1}^n\overline{z_i} + \overline{a}\sum_{i=1}^nz_i < 0

    But it is given that :math:`\sum_{i=1}^nz_i = 0`. Therefore all these
    points lie on different sides of the line passing through the origin.

81. This is similar to 80. and is left as an exercise to the reader.

82. Let :math:`OA` and :math:`OB` be the unit vectors representing :math:`z_1`
    and :math:`z_2`. Then, we have

    .. math::
       \overrightarrow{OA} = \frac{z_1}{|z_1|}, \overrightarrow{OB} =
       \frac{z_2}{|z_2|}

    Using vector math we can now say that the complex number representing the
    bisector of angle between these two will be given by

    .. math::
       z = t\left(\frac{z_1}{|z_1|} + \frac{z_2}{|z_2|}\right), \text{ where }
       t \text{ is an arbitrary number.}

    Problem no. 83. to 90 are based on basic geometry and is left as exercises
    for the reader.

91. Given,

    .. math::
       |z| = 2, \text{ Let } z_1 = -1 + 5z \Rightarrow |z_1 + 1| = 5|z| = 10

    Thus, :math:`z1` lies on a circle with center (-1, 0) and radius 10.

92. Given :math:`z - 25i \le 15.` It represents a circle having center at (0, 25)
    and having a radius of 15. The pictorial representation is given below:

    .. tikz:: 

       \draw[->, => stealth] (-1, 0) -- (3, 0);
       \draw[->, => stealth] (0, -1) -- (0, 4.5);
       \draw (0, 2.5) circle(1.5);
       \draw (0, 0) -- (3, 4);
       \draw (0, 2.5) -- (1.2, 1.6);
       \draw (3, 0) node[anchor=north] {$X$};
       \draw (0, 4.5) node[anchor=east] {$Y$};
       \draw (0, 2.5) node[anchor=east] {$C(0, 2.5)$};
       \draw (3mm, 0) arc(0:atan(1.333):3mm);
       \draw (3mm, 2mm) node[anchor=west] {$\theta$};
       \draw (0, 0) node[anchor=north east] {$O$};
       \draw (1.2, 1.6) node[anchor=north west] {$P$};
       \draw (0, 2.2) arc(270:270+atan(1.333):3mm);
       \draw (.1, 2.2) node[anchor=north west] {$\theta$};

    Let :math:`OP` be tangent to the circle at point :math:`P.`

    Let :math:`\angle POX=\theta` then :math:`\angle OCP=\theta.` Now
    :math:`OC=25, CP=15 \therefore OP=20.` Now :math:`tan\theta = \frac{OP}{CP}
    = \frac{20}{15} = \frac{4}{3}.`

    :math:`\therefore` Least positive value of argz = :math:`\theta =
    tan^{-1}\frac{4}{3}` 

93. Given :math:`|z - z_1|^2 + |z - z_2|^2 = k`

    .. math::
       \Rightarrow |z|^2 + |z_1|^2 - 2R(z\overline{z_1}) + |z|^2 + |z_2|^2
       -2R(z\overline{z_2}) = k

       \Rightarrow 2|z|^2 - 2R[z(\overline{z_1} + \overline{z_2})] = k -
       (|z_1|^2 + |z_2|^2)

       \Rightarrow |z|^2 - 2R\left[z\left(\frac{\overline{z_1 +
       z_2}}{2}\right)\right] + \frac{1}{4}|z_1 + z_2|^2 = \frac{k}{2} +
       \frac{1}{4}[|z_1 + z_2|^2 - 2|z_1|^2 - 2|z_2|^2]

       \Rightarrow \left[z - \frac{z_1 + z_2}{2}\right]^2 =
       \frac{1}{2}\left[k - \frac{1}{2}\{|z_1|^2 + |z_2|^2
       -2R(z_1\overline{z_2})\}\right]

       \Rightarrow \left[z - \frac{z_1 + z_2}{2}\right]^2 =
       \frac{1}{2}\left[k - \frac{1}{2}|z_1 - z_2|^2\right]

    This equation represents a circle with center at :math:`\frac{z_1 +
    z_2}{2}` and radius :math:`\frac{1}{2}\sqrt{2k - |z_1 - z_2|^2},` provided
    :math:`k \ge \frac{|z_1 - z_2|^2}{2}.`

94. Since :math:`|z - 1| = 1, z` represents a circle with center at (1, 0) and
    a radius of 1. It is shown below:

    .. tikz::

       \draw[->, => stealth] (-1, 0) -- (2.5, 0);
       \draw[->, => stealth] (0, -1) -- (0, 2);
       \draw (2.5, 0) node[anchor=north] {$X$};
       \draw (0, 2) node[anchor=east] {$Y$};
       \draw (0, 0) node[anchor=north east] {$O$};
       \draw (1, 0) circle(1);
       \draw (1, 0) node[anchor=north] {$C(1, 0)$};

    Now, :math:`|z - 1| = 1.` Let :math:`z = x + iy` then :math:`x^2 + y^2 =
    2x.` Also,

    .. math::
       \frac{z - 2}{z} = \frac{x - 2 + iy}{x + iy} = \frac{x^2 - 2x + y^2 +
       i2y}{x^2 + y^2} = i\frac{y}{x}

    Now from figure shown z will be either in first quadrant or fourth
    quadrant.

    **Case I.** When :math:`z` lies in the first quadrant. This implies
    :math:`arg z = \theta,` where :math:`tan\theta = \left|\frac{y}{x}\right| =
    \frac{y}{x} \therefore itan(arg z) = itan\theta = i\frac{y}{x}.`

    **Case II.** When :math:`z` lies in the fourth quadrant. Thus :math:`arg z
    = 2\pi - \theta,` where :math:`tan\theta = \left|\frac{y}{x}\right| =
    \frac{-y}{x}.` Now :math:`itan(arg z) = itan(2\pi - \theta) = -tan\theta =
    i\frac{y}{x}`

    Hence, proven.

95. Let :math:`z = x + iy.` Hence,

    .. math::
       arg\left(\frac{z - 1}{z + 1}\right) = \frac{\pi}{4}

       \Rightarrow tan(arg\left(\frac{z - 1}{z + 1}\right)) = 1

       \Rightarrow \frac{2y}{x^2 + y^2 - 1} = 1

       \Rightarrow x^2 + y^2 - 2y - 1 = 0

    Clearly, it is a cricle having center at (0, 1) and radius
    :math:`\sqrt{2}.` Again, :math:`\frac{z - 1}{z + 1}` is in first
    quadrant. This means :math:`x^2 + y^2 > 1` and :math:`y > 0.`

    Thus, locus of :math:`z` is the arc of circle having center at (0, 1) and
    radius :math:`\sqrt{2}` above x-axis.

96. Let :math:`z = x + iy.` Now,

    .. math::
       u + iv = (z - 1)(cos\alpha - isin\alpha) + \frac{1}{z - 1}(cos\alpha +
       isin\alpha)

       = (x - 1)cos\alpha + ysin\alpha + i[ycos\alpha - (x - 1)sin\alpha] +
       \frac{x - 1 - iy}{(x - 1)^2 + y^2}(cos\alpha + isin\alpha)


    Equating imaginary parts, we get

    .. math::
       v = ycos\alpha - (x - 1)sin\alpha + \frac{(x - 1)sin\alpha -
       ycos\alpha}{(x - 1)^2 + y^2} = 0

       \Rightarrow [ycos\alpha - (x - 1)sin\alpha][(x - 1)^2 + y^2] = 0

    :math:`\therefore` either :math:`ycos\alpha - (x - 1)sin\alpha = 0
    \Rightarrow y = tan\alpha(x - 1),` which is a straight line passing through
    (1, 0).

    or :math:`(x - 1)^2 + y^2 - 1 = 0` which is a circle with center at (1, 0)
    and radius unity. Hence, proven.

97. Given,

    .. math::
       1 + a_1z + a_2z^2 + ... + a_nz^n = 0

       \Rightarrow |a_1z| + |a_2z^2| + ... + |a_nz^n| \ge 1

       \Rightarrow L.H.S. = |a_1||z| + |a_2||z|^2 + ... + |a_n||z|^n

       < 2|z| + 2|z|^2 + ... to \infty [\because |a_n| < 2]

    Let :math:`|z| < 1` then

    .. math::
       \frac{2|z|}{1 - |z|} < 1 \Rightarrow |z| > \frac{1}{3}

    When :math:`|z| > 1` clearly :math:`|z| > \frac{1}{3}` hence :math:`z` does
    not lie in the interior of the circle with radius :math:`\frac{1}{3}.`

98. Given,

    .. math::
       2 = z^ncos\theta_0 + z^{n - 1}cos\theta_1 + ... + zcos\theta_n

       \Rightarrow 2 = |z^ncos\theta_0 + z^{n - 1}cos\theta_1 + ... +
       zcos\theta_n|

       < |z^ncos\theta_0| + |z^{n - 1}cos\theta_1| + ... + |zcos\theta_n|

       \le |z|^n + |z|^{n - 1} + ... + 1 [\because cos\theta \le 1]

       < 1 + |z| + |z|^2 + ... to \infty

       \Rightarrow 2 < \frac{|z|}{1 - |z|} [when |z| < 1]

       \Rightarrow |z| > \frac{1}{2}

    Also, when :math:`|z| > 1` then :math:`|z| > \frac{1}{2}.` Thus all roots
    lie outside the circle :math:`|z| = \frac{1}{2}.`

99. Points :math:`z_1, z_2, z_3, z_4` will be concyclic if

    .. math::
       \left(\frac{z_2 - z_4}{z_1 - z_4}\right)\left(\frac{z_1 - z_3}{z_2 -
       z_3}\right) \text{ is real.}

    Given,

    .. math::
       \frac{2}{z_1} = \frac{1}{z_2} + \frac{1}{z_3} = \frac{z_2 + z_3}{z_2z_3}

       \therefore z_1 = \frac{2z_2z_3}{z_1 + z_3}

    Now,

    .. math::
       \left(\frac{z_2 - z_4}{z_1 - z_4}\right)\left(\frac{z_1 - z_3}{z_2 -
       z_3}\right)

       = \left(\frac{z_2 - z_4}{\frac{2z_2z_3}{z_2 + z_3} -
       z_4}\right)\left(\frac{\frac{2z_2z_3}{z_2 + z_3} - z_3}{z_2 - z_3}\right)

       = \frac{1}{2}

    Hence, :math:`z_1, z_2, z_3, z_4` are concyclic.

100. The origin O is circumcenter of :math:`\triangle ABC` and AP is
     perpendicular to BC. Let :math:`P \equiv z.`

     We have OP = OA = OB = OC.

     .. tikz::

        \draw (0, 0) circle(1);
        \draw (.866, -.5) -- (-.866, -.5) -- (.5, .866) -- cycle;
        \draw (.5, .866) -- (.5, -.866);
        \filldraw (0, 0) circle(1pt);
        \draw (0, 0) node[anchor=north] {$O$};
        \draw (.866, -.5) node[anchor=north west] {$C(z_3)$} (-.866, -.5)
        node[anchor=north east] {$B(z_2)$} (.5, .866) node[anchor=south]
        {$A(z_1)$} (.5, -.866) node[anchor=north] {$P(z)$};

     :math:`\therefore |z| = |z_1| = |z_2| = |z_3|`

     :math:`\Rightarrow |z|^2 = |z_1|^2 = |z_2|^2 = |z_3|^2`

     :math:`z\overline{z} = z_1\overline{z_1} = z_2\overline{z_2} =
     z_3\overline{z_3}`

     Since AP is perpendicular to BC, therefore

     .. math::
        arg \frac{z_1 - z}{z_2 - z_3} = \frac{\pi}{2} \text{ or }
        -\frac{\pi}{2}

        \Rightarrow \frac{z_1 - z}{z_2 - z_3} \text{ is purely imaginary.}

        \Rightarrow \left(\frac{z_1 - z}{z_2 - z_3}\right) = -\frac{z_1 - z}{z_2
        - z_3}

        \Rightarrow \frac{z_1 - z}{z_2 - z_3} + \frac{\overline{z_1} -
        \overline{z}}{\overline{z_2} - \overline{z_3}} = 0

     Solving this will yield :math:`z = \frac{z_1z_3}{z_1}.`

