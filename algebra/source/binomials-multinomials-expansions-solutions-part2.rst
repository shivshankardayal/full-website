.. meta::
   :author: Shiv Shankar Dayal
   :title: Binomial Theorem
   :description: Algebra
   :keywords: Algebra, ratio, proportions, variations, complex numbers,
              arithmetic progressions, geometric progressions, harmonic
              progressions, series, sequence, quadratic equations,
              permutations, combinations, lograithms, binomial theorem,
              determinant, matrices

Binomials, Multinomials and Expansions Solutions Part 2
*******************************************************
51. Following like previous exercise:

    :math:`\Rightarrow 18 = 2r + 3 + r - 3 \Rightarrow r = 6`

52. Following like previous exercise:

    :math:`\Rightarrow 2r + 4 + r - 7 = 39 \Rightarrow r = 14`

    :math:`{}^rC_{12} = \frac{14 * 13}{2} = 91`

53. Following like previous exercise:

    :math:`\Rightarrow 2n = 3r - 1 + r + 1 \Rightarrow r = \frac{n}{2}`

54. Following like previous exercise:

    :math:`\Rightarrow 2n = p + p + 2 \Rightarrow p = n - 1`

55. Let :math:`r^{th}` and :math:`(r + 1)^{th}` have equal values for
    coefficients. Let :math:`C_r` represent cofficient for :math:`r^{th}` term
    and :math:`C_{r + 1}` for :math:`(r + 1)^{th}` term.

    :math:`C_r = {}^{75}C_{r - 1}`

    :math:`C_{r + 1} = {}^{75}C_r3`

    Given :math:`C_r = C_{r + 1}`

    :math:`\frac{1}{75 - r + 1} = \frac{1}{r}`

    :math:`76 - r = r \Rightarrow r = 38`

    :math:`\therefore {}^{75}C_{37}` and :math:`{}^{75}C_{38}` are equal
    coefficients.

56. Coefficient of :math:`(r + 1)^{th}` term in :math:`(1 + x)^{n + 1} =
    {}^{n + 1}C_r`

    Coefficient of :math:`r^{th}` term in :math:`(1 + x)^n = {}^nC_{r - 1}`

    Coefficient of :math:`(r + 1)^{th}` term in :math:`(1 + x)^n = {}^nC_r`

    Now we know that :math:`{}^nC_{r - 1} + {}^nC_r = {}^{n + 1}C_{r + 1}`

57. We have to find greatest term numerically.

    :math:`therefore` greatest term in :math:`\left(7 -\frac{10}{3}\right)^{11}
    =` greatest term in :math:`\left(7 - \frac{10}{3}\right)^{11}`

    Let :math:`r^{th}` term be the greatest term in the expansion of
    :math:`\left(7 + \frac{10}{3}\right)^{11}`

    :math:`t_r = {}^{11}C_{r - 1}7^{11 -r + 1}\left(\frac{10}{3}\right)^{r -
    1}`

    :math:`t_{r + 1} = {}^{11}C_r7^{11 - r}\left(\frac{10}{3}\right)^r`

    :math:`\frac{t_r}{t_{r + 1}} = \frac{21r}{(12 - r)}10`

    Also, :math:`\frac{t_{r - 1}}{t_r} = \frac{21(r - 1)}{13 - r}10`

    :math:`\because t_r` is the greatest term :math:`\therefore t_r \geq t_{r +
    1}`

    :math:`\frac{21r}{(12 - r)10} \ geq 1 \Rightarrow r \geq \frac{120}{31}`

    Also, :math:`\frac{t_{r - 1}}{t_r} \leq 1`

    :math:`\Rightarrow r\leq \frac{151}{32}`

    Thus, :math:`r = 4`

    :math:`t_4 = \frac{440}{9}7^85^3`

58. In any binomial expansion middle term has the greatest coefficient. Middle
    term in the expansion of :math:`(1 + 2x)^{2n}` is :math:`(n + 1)^{th}`
    term.

    :math:`t_{n + 1} = {}^{2n}C_nx^n, t_{n + 1} = {}^{2n}C_{n + 1}x^{n + 1},
    t_{n} = {}^{2n}C_{n - 1}x^{n - 1}`

    :math:`\frac{t_{n + 1}}{t_{n + 2}} = \frac{n + 1}{n}.\frac{1}{x} > 1
    \Rightarrow x < \frac{n + 1}{n}`

    Similalrly :math:`\frac{t_{n + 1}}{t_n} = \frac{(n + 1)x}{n} > 1
    \Rightarrow x > \frac{n}{n + 1}`

    Thus :math:`\frac{n}{n + 1} < x < \frac{n + 1}{n}`

59. These are similar to problem 57 and have been left as an exercise.

60. This is similar to problem 58 and limit will be :math:`\frac{15}{16} < x <
    \frac{16}{15}`.

61. Given expression :math:`= 6^{2n} - 35n - 1 = (6^2)^n - 35n - 1 = 36^n - 35n
    - 1`

    Clearly, :math:`35^2 = 1225` so we rewrite :math:`36` as :math:`1 + 35`

    :math:`(36)^n - 35n - 1 = (1 + 35)^n - 35n - 1`

    :math:`= 1 + 35n + {}^{35}C_2.35^2 + {}^{35}C_3.35^3 + \ldots +
    {}^{35}C_{35}35^n - 35n - 1`

    :math:`= {}^{35}C_2.35^2 + {}^{35}C_3.35^3 + \ldots + {}^{35}C_{35}35^n`

    All the terms contain powers euqal or greater than :math:`2` with base
    :math:`35` therefore whole expression is divisible by :math:`35^2` or
    :math:`1225`

62. :math:`2^{4n} - 2^n(7n + 1) = (2^4)^n - 2^n.7n - 2^n`

    :math:`= 16^n - 2^n.7n - 2^n = (2 + 14)^n - 2^n.7n - 2^n`

    :math:`= {}^nC_02^n + {}^nC_12^{n - 1}14 + {}^nC_22^{n- 2}14^2 + {}^nC_32^{n
    - 3}14^3 + \ldots {}^nC_n14^n - 2^n.7n - 2^n`

    :math:`= 14^2[{}^nC_22^{n - 2} + {}^nC_32^{n - 3} + \ldots + {}^nC_n14^{n -
    2}]`

    Thus, :math:`2^{4n} - 2^n(7n + 1)` is divisible by :math:`14^2`

63. :math:`3^{4n + 1} + 16n - 3 = 3[3^{4n}] + 16n - 3 = 3[(1 + 80)^n - 1] +
    16n`

    :math:`=3[{}^nC_0 + {}^nC_180 + {}^nC_280^2 + {}^nC_380^3 + \ldots +
    {}^nC_n80^n - 1] + 16n`

    :math:`= 256n + {}^nC_280^2 + {}^nC_380^3 + \ldots + {}^nC_n80^n`

    :math:`80^2` is divisible by :math:`256,` therefore above expression is
    divisible by :math:`256.`

64. Let us solve these one by one:

    i. :math:`4^n - 3n - 1 = (1 + 3)^n - 3n - 1 = 1 + 3n + {}^nC_23^2 +
       {}^nC_33^3 + \ldots + {}^nC_n3^n - 3n -1`

       :math:`= {}^nC_23^2 + {}^nC_33^3 + \ldots + {}^nC_n3^n`

       :math:`= 3^2[{}^nC_2 + {}^nC_33 + \ldots + {}^nC_n3^{n - 2}]`

       The above expression is divisible by :math:`9.`

    ii. :math:`2^{5n} - 31n - 1 = (2^5)^n - 31n - 1 = 32^n - 31n - 1`

        :math:`= (1 + 31)^n - 31n - 1`

        :math:`= 1 + 31n + {}^nC_231^2 + {}^nC_331^3 + \ldots + {}^nC_n31^n -
        31 - 1`

        :math:`= 31^2[{}^nC_2 + {}^nC_331 + \ldots + {}^nC_n31^{n - 2}]`

        The above expression is divisible by :math:`961.`

    iii. :math:`3^{2n + 2} - 8n - 9 = 3^2.3^{2n} - 8n - 9 = 9(1 + 8)^n - 8n -
         9`

         :math:`= 9[1 + 8n + {}^nC_28^2 + {}^nC_38^3 + \ldots + {}^nC_n8^n] -
         8n - 9`

         :math:`= 64n + 9[{}^nC_28^2 + {}^nC_38^3 + \ldots + {}^nC_n8^n]`

         The above expression is divisible by :math:`64`

    iv. :math:`2^{5n + 5} - 31n - 32 = 2^5.(2^5)^n - 31n - 31 = 32(1 + 31)^n -
        31n - 32`

        :math:`= 32[1 + 31n + {}^nC_231^2 + {}^nC_331^3 + \ldots + {}^nC_n31^n]
        - 31n - 32`

        :math:`= 32[{}^nC_231^2 + {}^nC_331^3 + \ldots + {}^nC_n31^n]`

        The above expression is divisible by :math:`31^2` i.e. :math:`961`

    v. :math:`3^{2n} - 1 + 24n - 32n^2 = (1 + 8)^n - 1 + 24n - 32n^2`

       :math:`= 1 + 8n + {}nC_28^2 + {}nC_38^3 + \ldots + {}nC_n8^n - 1 + 24n -
       32n^2`

       :math:`= 32n + \frac{n(n - 1)}{2}8^2 + {}nC_38^3 + \ldots + {}nC_n8^n -
       32n^2`

       :math:`= 32n + 64n^2 - 32n + {}nC_38^3 + \ldots + {}nC_n8^n`

       :math:`= 64n^2 + {}nC_38^3 + \ldots + {}nC_n8^n`

       Above expression is divisible by :math:`256` for :math:`n > 2`

65. Let :math:`r^{th}, (r + 1)^{th}` and :math:`(r + 2)^{th}` terms are the
    three consecutive terms given in the problem.

    :math:`t_r = {}^nC_{r - 1} = \frac{n!}{(r - 1)!(n - r + 1)!} = 165`

    :math:`t_{r + 1} = {}^nC_r = \frac{n!}{r!(n - r)!} = 330`

    :math:`t_{r + 2} \ {}^nC_{r + 1} = \frac{n!}{(r + 1)!(n - r - 1)!} = 462`

    :math:`\frac{t_r}{t_{r + 1}} = \frac{r}{n - r + 1} = \frac{1}{2}
    \Rightarrow 3r = n + 1`

    :math:`\frac{t_{r + 1}}{t_{r + 2}} = \frac{r + 1}{n - r} = \frac{330}{462}`

    :math:`12r = 5n - 7`

    Solving the two equations in :math:`n` and :math:`r,` we get, :math:`n = 11,
    r = 4.`

66. Let :math:`a_1, a_2, a_3` and :math:`a_4` be coefficients of :math:`r^{th},
    (r + 1)^{th}, (r + 2)^{th}` and :math:`(r + 3)^{th}` terms of the expansion
    :math:`(1 + x)^n`

    :math:`a_1 = {}^nC_{r - 1}, a_2 = {}^nC_r, a_3 = {}^nC_{r + 1}, a_4 =
    {}^nC_{r + 2}`

    :math:`\frac{a_2}{a_1} = \frac{n - r + 1}{r}`

    :math:`\frac{a_1}{a_1 + a_2} = \frac{r}{n + 1}`

    Substituting :math:`r + 1` instead of :math:`r` in previous equation, we get

    :math:`\frac{a_2}{a_2 + a_3} = \frac{r + 1}{n + 1}`

    Similarly, :math:`\frac{a_3}{a_3 + a_4} = \frac{r + 2}{n + 1}`

    :math:`\frac{a_1}{a_1 + a_2} + \frac{a_3}{a_3 + a_4} = \frac{2(r + 1)}{n +
    1} = \frac{2a_2}{a_2 + a_3}`

67. :math:`\frac{t_2}{t_3} = \frac{{}^nC_1x^{n - 1}y}{{}^nC_2x^{n - 2}y^2} =
    \frac{240}{720}`

    :math:`\Rightarrow \frac{2x}{(n - 1)y} = \frac{1}{3}`

    :math:`\frac{t_3}{t_4} = \frac{{}^nC_2x^{n - 2}y^2}{{}^nC_3x^{n - 3}y^3} =
    \frac{720}{1080}`

    :math:`\Rightarrow \frac{3x}{(n - 2)y} = \frac{2}{3}`

    Dividing the two obtained equations

    :math:`\frac{2x}{(n - 1)y}\frac{3x}{(n - 2)y} = \frac{1}{2}\frac{2}{3}`

    :math:`\frac{2(n - 2)}{3(n - 1)} = \frac{1}{2}`

    :math:`4n - 8 = 3n - 3 \Rightarrow n = 5`

    Putting this value in :math:`\frac{t_r}{t_{r + 1}},` we get

    :math:`\frac{2}{5 -1}.\frac{x}{y} = \frac{1}{3}`

    :math:`y = \frac{3x}{2}`

    :math:`t_r = {}^nC_1x^{n - 1}y = \frac{3}{2}5x^5 = 240 \Rightarrow x = 2`

    :math:`\Rightarrow y = 3`

68. Let :math:`n` be the index of the expansion and :math:`a, b, c` be the
    :math:`r^{th}, (r + 1)^{th}, (r + 2)^{th}` term respectively.

    :math:`a = {}^nC_{r - 1}, b = {}^nC_r, c = {}^nC_{r + 1}`

    :math:`\frac{a}{b} = \frac{r}{n - r + 1}, \frac{b}{c} = \frac{r + 1}{n -
    r}`

    :math:`an + a = r(a + b), bn - c = r(b + c)`

    :math:`\Rightarrow (b + c)(an + a) = (a + b)(bn - c)`

    :math:`\Rightarrow n = \frac{2ac + b(a + c)}{b^2 - ac}`

69. Coefficients are :math:`C_{14} = {}^nC_{13}, C_{15} = {}^nC_{14}, C_{16} =
    {}^nC_{15}`

    These are in A.P., so we can write

    :math:`\frac{2.n!}{14!(n - 14)!} = \frac{n!}{13!(n - 13!)} +
    \frac{n!}{15!(n - 15)!}`

    Multiplying both sides by :math:`15!(n - 13)!,` we get

    :math:`2.15(n - 13) = 15.14 + (n - 13).(n - 14)`

    :math:`\Rightarrow n^2 - 57n + 782 = 0`

    :math:`n = 23, 34`

70. Let those three terms are :math:`r^{th}, (r + 1)^{th}` and :math:`(r +
    2)^{th}` terms of the expansion.

    :math:`\frac{t_{r- 1}}{t_r} = \frac{r}{n - r + 1} = \frac{56}{70} =
    \frac{4}{5}`

    :math:`9r - 4n = 4`

    :math:`\frac{t_{r}}{t_{r + 1}} = \frac{r + 1}{n - r} = \frac{70}{56}`

    :math:`9r - 5n = -4`

    :math:`\Rightarrow n = 8, r = 4`

71, 72 and 73 are similar problems like ones we have solved and has been left
as exercises.

74. Let the binomial expansion be :math:`(x + y)^n.`

    :math:`a = {}^nC_5x^{n - 5}y^5, b = {}^nC_6x^{n - 6}y^6, c = {}^nC_7x^{n -
    7}y^7, d = {}^nC_8x^{n - 8}y^8`

    :math:`b^2 - ac = \left({}^nC_6x^{n - 6}y^6\right)^2 - {}^nC_5x^{n -
    5}y^5{}^nC_7x^{n - 7}y^7`

    :math:`= \left(\frac{n!}{6!(n - 6)!}x^{n - 6}y^6\right)^2 -
    \frac{n!}{5!(n - 5)!}x^{n - 5}y^5 \frac{n!}{7!(n - 6)!}x^{n - 7}y^7`

    Similary :math:`c^2 - bd` can be computed and it can be shown that
    :math:`\frac{b^2 - ac}{c^2 - bd} = \frac{4a}{3c}`

75. Let us solve these one by one.

    i. We have to prove that :math:`\frac{a + b}{a}, \frac{b + c}{b}, \frac{c +
       d}{c}` are in H.P.

       i.e. :math:`\frac{a}{a + b}, \frac{b}{b + c}, \frac{c}{c + d}` are in
       A.P.

       Let :math:`a = {}^nC_r, b = {}^nC_{r + 1}, c = {}^nC_{r + 2}, d =
       {}^nC_{r + 3}`

       :math:`\frac{a}{a + b} = \frac{n!}{r!(n -
       r!)}\left(\frac{1}{\frac{n!}{r!(n - r!)}} + \frac{n!}{(r + 1)!(n - r -
       1)!}\right)`

       :math:`= \frac{r + 1}{n + 1}`

       Similarly :math:`\frac{b}{b + c} = \frac{r + 2}{n + 1}`

       and, :math:`\frac{c}{c + d} = \frac{r + 3}{n + 1}`

       Clearly, these are in A.P.

    ii. Since :math:`\frac{a}{a + b}, \frac{b}{b + c}, \frac{c}{c + d}` are in
        A.P. from the previous part.

        :math:`\frac{2b}{b + c} = \frac{a}{a + b} + \frac{c}{c + d}`

        Solving this further leads to the equality :math:`(bc + ad)(b - c) =
        2(ac^2 - b^2d)`

76. Since the coeficients of given terms are in A.P., we can write that

    :math:`\frac{n!}{n - 4!} - \frac{2.n!}{5!(n - 5)!} + \frac{n!}{6!(n - 6!)}
    = 0`

    :math:`\frac{n!}{4!(n - 6!)}\left[\frac{1}{(n - 5)(n - 6)}
    -\frac{2}{5(n - 5) + \frac{1}{6.5}}\right]`

    Clearly, :math:`\frac{n!}{(n - 6!)}\neq 0`

    :math:`\Rightarrow n^2 - 23n + 132 = 0\Rightarrow n = 11, 12`

77. Since the coeficients of given terms are in A.P., we can write that

    :math:`\frac{2n!}{(2n - 1)!} + \frac{2.2n!}{2!(2n - 2)!} + \frac{2n!}{3!(2n
    - 3)!} = 0`

    :math:`2n - 2n(2n - 1) + \frac{n(2n - 1)(2n - 2)}{3} = 0`

    :math:`4n^3 - 18^2 + 14n = 0`

    :math:`\because n \neq 0, \Rightarrow 4n^2 - 9n + 7 = 0`

78. Since the coeficients of given terms are in A.P., we can write that

    :math:`{}^nC_{r - 1} - 2{}^nC_r + {}^nC_{r + 1} = 0`

    :math:`\frac{n!}{(r - 1)!(n - r + 1)!} - 2\frac{n!}{r!(n - r)!} +
    \frac{n!}{(r + 1)!(n - r - 1)!} = 0`

    :math:`\frac{n!}{(r - 1)!(n - r - 1)!}\left[\frac{1}{(n - r)(n - r + 1)} -
    2\frac{1}{r(n - r)} + \frac{1}{r(r + 1)}\right] = 0`

    Solving this gives the desired equation.

79. This problem is easy and similar to other problems and has been left as
    exercise.

80. Given series is :math:`C_1 + 2.C_2 + 3.C_3 + \ldots + n.C_n`

    Its :math:`r^{th}` term :math:`t_r = r.{}^nC_r = n.{}^{n - 1}C_{r -1}`

    :math:`C_1 + 2.C_2 + 3.C_3 + \ldots + n.C_n = \sum_{r = 1}^nr.{}^nC_r`

    :math:`= n\sum_{r=1}^n{}^{n - 1}C_{r - 1} = n.2^{n - 1}`

    **Calculus Method:** This method requires knowledge of calculus.

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Differentiating both sides w.r.t. :math:`x`

    :math:`n.(1 + x)^{n - 1} = {}^nC_1 + 2{}^nC_2x^2 + \ldots + n{}^nCnx^{n -
    1}`

    Putting :math:`x = 1,` we get

    :math:`n.2^{n - 1} = {}^nC_1 + 2{}^nC_2 + \ldots + n.{}^nC_n`

81. Given series is :math:`C_0 + 2.C_1 + 3.C_2 + \ldots + (n + 1).C_n`

    Its :math:`r^{th}` term :math:`t_r = r{}^nC_{r - 1}`

    :math:`= (r - 1 + 1){}^nC_{r - 1} = (r - 1){}^nC_{r - 1} + {}^nC_{r - 1}`

    :math:`= n{}^{n - 1}C_{r - 2} + {}^nC_{r - 1}[\because (r - 1){}^nC_{r - 1}
    = n{}^{n - 1}C_{r - 2}]`

    Thus, :math:`\sum_{r = 1}^{n + 1}t_r = n.2^{n - 1} + 2^n = (n + 2)2^{n -
    1}`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Multiplying both sides by :math:`x,` we get

    :math:`x(1 + x)^n = {}^nC_0x + {}^nC_1x^2 + {}^nC_2x^3 + \ldots +
    {}^nC_nx^{n + 1}`

    Differentiating w.r.t. :math:`x,` we get

    :math:`[(1 + x)^n + nx(1 + x)^{n - 1}] = {}^nC_0 + 2{}^nC_1x +
    3{}^nC_2x^2 + \ldots + (n + 1){}^nC_nx^n`

    Substituting :math:`x = 1,` we get

    :math:`C_0 + 2.C_1 + 3.C_2 + \ldots + (n + 1).C_n = (n + 2).2^{n - 1}`

82. :math:`t_r = (2r - 1){}^nC_{r - 1} = 2(r - 1){}^nC_{r - 1} + {}^nC_{r - 1}`

    :math:`=2n {}^{n - 1}C_{r - 2} + {}^nC_{r - 1}`

    :math:`\sum_{r = 1}^{n + 1}t_r = \sum_{r = 1}^{n + 1}2n {}^{n - 1}C_{r - 2}
    + \sum_{r = 1}^{n + 1}{}^nC_{r - 1}`

    :math:`= 2n({}^{n - 1}C_0 + {}^{n - 1}C_1 + {}^{n - 1}C_2 + \ldots +
    {}^{n - 1}C_{n - 1}) + ({}^nC_0 + {}^nC_1 + {}^nC_2 + \ldots + {}^nC_n)`

    :math:`= 2n.2^{n - 1} + 2^n = 2^n(n + 1)`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Substituting :math:`x = x^2` and multiplying both sides with :math:`x`

    :math:`x(1 + x^2)^n = C_0x + C_1x^3 + C_2x^5 + \ldots + C_nx^{2n + 1}`

    Differentiating both sides w.r.t :math:`x` and substituting :math:`x = 1,`
    we get the desired equation as earlier.

83. Given series is :math:`C_1 - 2.C_2 + 3.C_3 - 4.C_4 + \ldots + (-1)^nn.C_n =
    0`

    :math:`t_r = (-1)^{r - 1}r.{}^nC_r = (-1)^{r - 1}n.{}^{n - 1}C_{r - 1}`

    :math:`\sum_{r = 1}^{n}t_r = \sum_{r = 1}^{n}(-1)^{r - 1}n.{}^{n - 1}C_{r -
    1}`

    :math:`n({}^{n - 1}C_0 - {}^{n - 1}C_1 + {}^{n - 1}C_2 + \ldots + (-1)^{n -
    1}){}^{n - 1}C_{r - 1} = n(1 - 1)^{n - 1} = 0`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Differentiating w.r.t. :math:`x` and substituting :math:`x = -1`

    :math:`n({}^{n - 1}C_0 - {}^{n - 1}C_1 + {}^{n - 1}C_2 + \ldots + (-1)^{n -
    1}){}^{n - 1}C_{r - 1} = n(1 - 1)^{n - 1} = 0`

84. Given series is :math:`C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots +
    \frac{C_n}{n + 1} = \frac{2^{n + 1} - 1}{n + 1}`

    :math:`t_r = \frac{{}^nC_{r - 1}}{r}`

    :math:`C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots + \frac{C_n}{n + 1} =
    \sum_{r = 1}^n \frac{{}^nC_{r - 1}}{r} = \sum_{r = 1}^n\frac{{}^{n +
    1}C_r}{n + 1}\left[\because \frac{{}^nC_{r - 1}}{r} = \frac{{}^{n +
    1}C_r}{n + 1}\right]`

    :math:`= \frac{1}{n + 1}({}^{n + 1}C_1 + {}^{n + 1}C_2 + {}^{n + 1}C_{n +
    1})`

    :math:`=\frac{2^{n + 1} - 1}{n + 1}`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Integrating w.r.t :math:`x` between limits :math:`0` and :math:`1,` we get

    :math:`\left[\frac{(1 + x)^{n + 1}}{n + 1}\right]_0^1 = \left[C_0x +
    C_1\frac{x^2}{2} + C_2\frac{x^3}{3} + \ldots + C_n\frac{x^{n + 1}}{n +
    1}\right]_0^1`

    :math:`\Rightarrow C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots +
    \frac{C_n}{n + 1} = \frac{2^{n + 1} - 1}{n + 1}`

85. Given series is :math:`C_0 - \frac{C_1}{2} + \frac{C_2}{3} - \ldots +
    (-1)^n\frac{C_n}{n + 1}`

    :math:`t_r = (-1)^{r - 1}\frac{{}^nC_{r - 1}}{r}`

    :math:`\therefore C_0 - \frac{C_1}{2} + \frac{C_2}{3} - \ldots +
    (-1)^n\frac{C_n}{n + 1} = \sum_{r = 1}^{n + 1}(-1)^{r - 1}\frac{{}^nC_{r -
    1}}{r} = \sum_{r = 1}^{n + 1}(-1)^{r - 1}\frac{{}^{n + 1}C_r}{n +
    1}\left[\because \frac{{}^nC_{r - 1}}{r} = \frac{{}^{n + 1}C_r}{n + 1}\right]`

    :math:`= \frac{1}{n + 1}[{}^{n + 1}C_1 - {}^{n + 1}C_2 + {}^{n + 1}C_3 -
    \ldots + (-1)^n.{}^{n + 1}C_{n + 1}]`

    :math:`= \frac{1}{n + 1}[-({}^{n + 1}C_0 + {}^{n + 1}C_1 - {}^{n + 1}C_2 + {}^{n + 1}C_3 -
    \ldots + (-1)^{n+1}.{}^{n + 1}C_{n + 1}) + {}^{n + 1}C_0]`

    :math:`= \frac{1}{n + 1}\left[-(1 - 1)^{n + 1} + {}^{n + 1}C_0\right] =
    \frac{1}{n + 1}`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Integrating w.r.t :math:`x` between limits :math:`0` and :math:`1,` we get

    :math:`\left[\frac{(1 + x)^{n + 1}}{n + 1}\right]_0^{-1} = \left[C_0x +
    C_1\frac{x^2}{2} + C_2\frac{x^3}{3} + \ldots + C_n\frac{x^{n + 1}}{n +
    1}\right]_0^{-1}`

    :math:`0 - \frac{1}{n + 1} = -C_0 + \frac{C_1}{2} - \frac{C_3}{3} +
    \ldots + (-1)^{n + 1}\frac{C_n}{n + 1}`

    :math:`\Rightarrow C_0 - \frac{C_1}{2} + \frac{C_2}{3} - \ldots + (-1)^n
    \frac{C_n}{n + 1} = \frac{1}{n + 1}`

86. Given series is :math:`\frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} +
    \ldots`

    :math:`t_r = \frac{{}^nC_{2r - 1}}{23} = \frac{{}^nC_{2r - 1}}{(2r - 1) +
    1} = \frac{{}^{n + 1}C_{2r}}{n + 1}`

    :math:`\frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} + \ldots = \sum_{r =
    1} = \frac{1}{n + 1}\sum_{r = 1}{n + 1}C_{2r} = \frac{2^n - 1}{n + 1}`

    **Calculus Method:**

    Adding the results of 84 and 85, we get

    :math:`2\left[\frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} + \ldots\right]
    = \frac{2^{n + 1} - 1 - 1}{n + 1} = \frac{2(2^n - 1)}{n + 1}`

    :math:`\Rightarrow \frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} +
    \ldots = \frac{2^n - 1}{n + 1}`

87. Given series is :math:`2.C_0 + 2^2\frac{C_1}{2} + 2^3\frac{C_2}{3} +
    \ldots + 2^{n + 1}\frac{C_n}{n + 1}`

    :math:`t_r = 2^r\frac{{}^nC_{r - 1}}{r} = 2^r\frac{{}^{n + 1}C_r}{n + 1}`

    Now :math:`2.C_0 + 2^2\frac{C_1}{2} + 2^3\frac{C_2}{3} + \ldots + 2^{n +
    1}\frac{C_n}{n + 1} = \sum_{r = 1}^{n + 1} 2^r\frac{{}6{n + 1}C_r}{n + 1}`

    :math:`= \frac{1}{n + 1}[\{{}^{n + 1}C_0 + 2.{}^{n + 1}C_1 + 2^2.{}^{n +
    1}C_2 + \ldots + 2^{n + 1}{}^{n + 1}C_{n + 1}\} - {}^{n + 1}C_0]`

    :math:`= \frac{1}{n + 1}[(1 + 2)^{n + 1} - 1] = \frac{3^{n + 1} - 1}{n +
    1}`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Integrating between limits :math:`0` and :math:`2,` we get the desired
    result.

88. :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

    :math:`(x + 1)^n = C_0x^n + C_1x^{n - 1} + C_2x^{n - 2} + \ldots + C_n`

    Multiplying these two, we get

    :math:`(1 + x)^{2n} = (C_0 + C_1x + C_2x^2 + \ldots + C_nx^n)(C_0x^n +
    C_1x^{n - 1} + C_2x^{n - 2} + \ldots + C_n)`

    Coefficient of :math:`x^{n + r}` on R.H.S :math:`= C_0C_r + C_1C_{r + 1} +
    \ldots + C_{n - r}C_n`

    Coefficient of :math:`x^{n + r}` on L.H.S. :math:`= {}^{2n}C_{n + r} =
    \frac{(2n)!}{(n + r)!(n - r)!}`

    Equating coefficients we get desired result.

89. From 88 recall that :math:`(1 + x)^{2n} = (C_0 + C_1x + C_2x^2 + \ldots +
    C_nx^n)(C_0x^n + C_1x^{n - 1} + C_2x^{n - 2} + \ldots + C_n)`

    Equating coefficients of :math:`x^n,` we get

    :math:`C_0^2 + C_1^2 + C_2^2 + \ldots + C_n^2 = \frac{(2n)!}{n!n!}`

90. :math:`t_r = r.\frac{{}^nC_r}{{}^nC_{r - 1}} = n - r + 1`

    :math:`\sum_{r=1}^n = \frac{n(n + 1)}{2}`

91. :math:`\{(1 + x)^n\}^2 = (1 + x)^{2n}`

    :math:`({}^nC_0x + {}^nC_1x + {}^nC_2 + \ldots + {}^nC_n)^2 = ({}^{2n}C_0 +
    {}^{2n}C_1x + {}^{2n}C_2x + \ldots + {}^{2n}C_{2n}x^{2n})`

    Substituting :math:`x = 1,` we get desired equation.

92. This problem is same as previous one, just that instead of :math:`2, 5` has
    been used.

93. :math:`t_r = (4r + 1){}^nC_{r - 1} = 4n{}^{n - 1}C_{r - 1} + {}^nC_{r - 1}`

    :math:`C_0 + 5.C_1 + 9.C_2 + \ldots + (4n + 1).C_n = \sum_{r = 0}^nt_r`

    :math:`=4n \sum_{r = 0}^n{}^{n - 1}C_{r - 1} + \sum_{r = 0}^n{}^nC_{r - 1}`

    :math:`= 4n.2^{n - 1} + 2^n = (2n + 1)2^n`

94. L.H.S. :math:`1 - (1 + x)C_1 + (1 + 2x)C_2 - (1 + 3x)C_3 + \ldots`

    :math:`= 1 - C_1 + C_2 - C_3 + \ldots -x(C_1 - 2C_2 + 3C_3 + \ldots)`

    We know that :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + C_3x^3 + \ldots`

    Substituting :math:`x = -1,` we get

    :math:`0 = = 1 - C_1 + C_2 - C_3 + \ldots`

    Thus our original expression becomes :math:`-x(C_1 - 2C_2 + 3C_3 + \ldots)
    = 0`

    :math:`C_1 - 2C_2 + 3C_3 + \ldots = 0`

    :math:`t_r = (-1)^{r - 1}r.C_r`

    :math:`C_1 - 2C_2 + 3C_3 + \ldots = \sum_{r = 1}(-1)^{r - 1}r.C_r = n\sum_{r =
    1}{}^{n- 1}C_{r - 1}`

    :math:`= n({}^{n - 1}C_0 - {}^{n - 1}C_1 + {}^{n - 1}C_2 + \ldots + (-1)^{n
    -1}{}^{n - 1}C_{n - 1})`

    :math:`= n(1 - 1)^{n - 1} = 0`

95. :math:`t_r = (4r - 1)C_{r - 1} = 4rC_{r - 1} - C_{r - 1} = 4n{}^{n - 1}C_{r
    - 1} - C_{r - 1}`

      :math:`3.C_1 + 7.C_2 + 11.C_3 + \ldots + (4n - 1)C_n = 4n \sum_{r =
      1}^{n}{}^{n - 1}C_{r - 1} - \sum_{r = 1}^n{}^nC_{r - 1}`

      :math:`= (2n - 1)2^n + 1`

Problem no. 96 and 97 are similar to what we have solved and have been left as
exercise.

98. Let :math:`(1 + x - 3x^2)^{2163} = a_0 + a_1x + a_2x^2 + \ldots
    +a_{6489}^{6489}`

    Substituting :math:`x = 1,` we get

    :math:`a_0 + a_1 + a_2 + \ldots + a_{6489} = (-1)^2163 = -1`

99. This problem can be solved by substituting :math:`1, \omega, \omega^2` for
    :math:`x` and adding. it has been left as an exercise.

100. :math:`t_{r + 1} = {}^{10}C_r2^{\frac{10 - r}{2}}3^{\frac{r}{5}},` where
     :math:`r = 0, 1, 2, \ldots, 10`

     For rational terms :math:`r =` a multiple of :math:`5 = 0, 5, 10`

     :math:`10 - r =` a multiple of :math:`2 = 0, 2, 4, 6, 8, 10`

     For both the only common values are :math:`r = 0, 10`

     :math:`\therefore` sum of rational terms :math:`= t_1 + t_{11}`

     :math:`= 41`
