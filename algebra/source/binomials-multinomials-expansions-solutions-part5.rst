.. meta::
   :author: Shiv Shankar Dayal
   :title: Binomial Theorem
   :description: Algebra
   :keywords: Algebra, ratio, proportions, variations, complex numbers,
              arithmetic progressions, geometric progressions, harmonic
              progressions, series, sequence, quadratic equations,
              permutations, combinations, lograithms, binomial theorem,
              determinant, matrices

Binomials, Multinomials and Expansions Solutions Part 5
*******************************************************
201. Given :math:`\frac{C_0}{2^n} + \frac{2.C_1}{2^n} + \frac{3.C_2}{2^n} + \ldots + \frac{(n + 1)C_n}{2^n} = 16`

     L.H.S. :math:`= \frac{1}{2^n}[C_0 + 2C_1 + 3C_2 + \ldots + (n + 1)C_n]`

     We know that :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n]`

     Mutliplying with :math:`x` and differentiating w.r.t. :math:`x,` following is otained

     :math:`(1 + x)^n + nx(1 + x)^{n - 1} = C_0 + 2C_1x + 3C_2x^2 + \dots + (n + 1)C_nx^n`

     Substituting :math:`x = 1`

     :math:`2^n + n2^{n - 1} = C_0 + 2C_1 + 3C_2 + \ldots + (n + 1)C_n`

     Thus, L.H.S. :math:`= \frac{1}{2^n}[2^n + n.2^{n - 1}] = 16`

     :math:`\Rightarrow n = 30`

202. L.H.S. :math:`= a_1C_0 + (a_1 + d)C_1 + (a_1 + 2d)C_2 + \ldots + (a_1 + nd)C_n` where :math:`d` is the common difference of the
     A.P.

     Follwoing like 196 we obtain it as :math:`2^{n - 1}[2a_1 + nd] = 2^{n - 1}[a_1 + a_{n + 1}]`

203. We have just proven in 202 that :math:`S = 2^{n - 1}[2a + nd]`

     :math:`(n + 1)S = 2^{n - 1}(n + 1)(2a + nd) = 2^n\frac{n + 1}{2}[2a + nd] = 2^n.s`

204. Given :math:`(1 + x + x^2 + \ldots + x^p)^n = a_0 + a_1x + a_2x^2 + \ldots +
     a_{np}x^{np}`

     Differentiating w.r.t :math:`x,` and substituting :math:`x = 1` desired result can obtained.

205. We have to prove that :math:`C_0 - 2^2C_1 + 3^2 C_2 - \ldots + (-1)^n(n + 1)^2C_n = 0, n > 2`

     We know that :math:`(1 - x)^n = C_0 - C_1x + C_2x^2 - \ldots + (-1)^nC_nx^n`

     Multiplying with :math:`x` and differentiating w.r.t :math:`x,` following is obtained

     :math:`(1 - x)^n - nx(1 - x)^{n - 1} = C_0 - 2.C_1x + 3.C_2x - \ldots + (-1)^n(n + 1)C_nx^{n}`

     Mutliplying again with :math:`x,` then differentiating again w.r.t :math:`x` and substituting :math:`x = 1` desired equation is
     proved.

206. We know that :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     Integrating within limit :math:`0` and `1`

     :math:`C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots  = \frac{2^{n + 1} - 1}{n + 1}`

     We also have :math:`(1 - x)^n = C_0 - C_1x + C_2x^2 - \ldots + (-1)^nC_n x^n`

     Integrating between limits :math:`0` and :math:`1`

     :math:`C_0 - \frac{C_1}{2} + \frac{C_2}{3} - \ldots  = \frac{1}{n + 1}`

     Subtracting the integrated results we get the desired equation.

207. L.H.S. :math:`= \left(\frac{C_0}{1} - \frac{C_0}{2}\right) + \left(\frac{C_1}{2} - \frac{C_1}{3}\right) + \ldots +
     (-1)n\left(\frac{C_n}{n + 1} - \frac{C_n}{n + 2}\right)`

     :math:`= \left(C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots\right) - \left(\frac{C_1}{2} + \frac{C_2}{3} + \ldots\right)`

     The first sum can be obtained by integrating :math:`(1 + x)^n` within limits :math:`0` and :math:`1` while the second sum can
     be obtained by integrating :math:`x(1 + x)^n` within limits :math:`0` and :math:`1`.

208. We know that :math:`x(1 - x)^n = C_0x - C_1x^2 + C_2x^3 - \ldots + (-1)^nC_nx^n{n + 1}`

     Integrating within limits :math:`0` and :math:`1` we achieve the desired solution.

209. We can integrate :math:`x^2(1 - x)^n` within limits :math:`0` and :math:`1` to get the desired equation proven.

210. We know that :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     Integrating within limits :math:`0` and :math:`3` we achieve the desired result.

211. L.H.S. :math:`= \frac{{}^{15}C_0}{1.2} + \frac{{}^{15}C_1}{2.3} + \ldots + \frac{{}^{15}C_{15}}{16.17}`

     Now this can be solved like 207.

212. This problem is similar to 173 and has been left as an execise.

213. This problem is same as 207 you just need to expand the sum.

Rest of the problems have been left as exercises.
