.Permutations and Combinations Solutions Part 5
***********************************************
201. Let the :math:`n` letters be denoted by :math:`1,2,3,4,\ldots,n`.

     Let :math:`A_i` denote the set of distribution of letters in envelops(one
     letter in each envelope) so that only:math:`i` th letter is put in the
     corresponding envelope.

     Then :math:`n(A_i) = 1\times (n-1)!` for every :math:`i`(since remaining
     (:math:`n - 1`) letters leaving the :math:`i` th letter can be put in
     remaining (:math:`n - 1`) envelopes in :math:`(n-1)!` ways.)

     Similarly, :math:`n(A_i\cap A_j) = 1\times 1\times (n-2)! = (n-2)!`

     :math:`n(A_i\cap A_j\cap A_k) = (n-3)!` etc.

     Required number :math:`= n(A_1^\prime \cap A_2^\prime\cap\ldots\cap
     A_n^\prime)`

     :math:`=n(A_1\cup A_2\cap\ldots\cup A_n)^\prime`

     :math:`= n! - n(A_1\cup A_2\cup\ldots\cup A_n)`

     :math:`= n! \left[\sum n(A_i) - \sum n(A_i\cap A_j+ \sum n(A_i\cap
     A_j\cap A_k) - \ldots + (-1)^{n-1}n(A_1\cap A_2\cap
     \ldots\cap A_n))\right]`

     :math:`= n! \left[{}^nC_1(n-1)! -{}^nC_2(n-2)! + \ldots+(-1^{n-1})
     {}^{n-1}C_{n-1}\right]`

     :math:`=n!\left(\frac{1}{2!}-\frac{1}{3!}+\ldots+(-1)^n\frac{1}{n!}\right)`
202. Number of non-congruent square size :math:`1\times 1, 2\times 2, \ldots,
     8\times 8` is each :math:`1`

     :math:`\therefore` number of non-congruent squares :math:`= 8`

     Number of non-congruent squares :math:`= 8`

     Number of non-congruent rectangles which are not squares(here rectangle
     may be of size :math:`m\times n`, where :math:`m\neq n` and :math:`m =
     1, 2, 3, \ldots, 8, n=1, 2, 3, \ldots, 8`)

     :math:`= {}^8C_2 = 28`

     :math:`\therefore` Required number :math:`= 28 + 8 = 36`
203. Given numbers are :math:`1, 2, 3, \ldots, n`

     Let the three selected numbers in A.P. are :math:`a,b,c`, then

     :math:`2b = a + c`

     Clearly, :math:`a + c` should be an even integer. This is possible only
     when both :math:`a` and :math:`c` are odd or both are even.

     **Case I:** When :math:`n` is even. Let :math:`n = 2m`

     Number of odd numbers :math:`= m`

     Number of even numbers :math:`= m`

     No. of ways of choosing :math:`a` and :math:`c` are :math:`=2.{}^mC_2`

     :math:`= \frac{n(n - 2)}{4}`

     **Case II:** When :math:`n` is odd. Let :math:`n = 2m + 1`

     Number of odd numbers :math:`= m + 1`

     Number of even numbers :math:`= m`

     Required number :math:`= {}^{m+1}C_2 + {}^mC_2 = \frac{1}{4}(n - 1)^2`
204. Since there are two packs of :math:`52` playing cards, thereffore, number
     of cards of the same suit and same denomination will be :math:`2` for each
     denomination.

     Number of ways of selecting :math:`26` cards out of :math:`52`
     :math:`= {}^{52}C_{26}`

     But card of any denomination of a particualr suit can be selected in
     :math:`2` ways.

     :math:`\therefore` Desired answer :math:`= {}^{52}C_{26}`
205. Total no. of vertices of the polygon :math:`= n(n > 5)`

     Total no. of selection of :math:`3` vertices out of :math:`n = {}^nC_3`

     Since each selection of :math:`3` vertices gives one triangle, total no. of
     triangles formed :math:`= {}^nC_3 = \frac{n(n - 1)(n - 2)}{6}`

     Number of triangles formed having two sides commin with the sides of a
     polygon = numbers of selections of :math:`3` consecutive vertices of the
     polygon :math:`= n`

     Number of triangled formed having exactly one side common with the sides
     of the polygon :math:`=` number of selection of :math:`3` vertices out of
     which only two are consecutive :math:`= n.{}^{n-4}C_1 = n(n - 4)`

     :math:`\therefore` Required no. of triangles :math:`={}^nC_4 - n(n - 4)`

     :math:`= \frac{n}{6}(n - 4)(n - 5)`
206. Let us solve these one by one:

     i. If :math:`n` objects are :math:`a_1, a_2, \ldots, a_n` then possible
        selection will be :math:`a_1a_2a_3, a_2a_3a_4, \ldots,a_{n-2}a_{n-1}a_n`

        :math:`\therefore` Required number :math:`= n - 3 + 1 = n - 2`

     ii. Total no. of selections of :math:`3` objects when there is no
         restrictions :math:`={}^nC_3`

         Number of selection of :math:`3` objects which are consecutive
         :math:`= n - 2`

         :math:`\therefore` Required number :math:`= ^nC_3 - n + 2`

     iii. **Case I:** When :math:`n` is even.

          Number of ways of selecting :math:`3` points from :math:`\frac{n}{2}`
          points which are not consecutive for odd positions
          :math:`= {}^{\frac{n}{2}}C_3`

          Same is the number of ways for even positions.

          Thus, total no. of ways :math:`=2.{}^{\frac{n}{2}}C_3`

          **Case II:** When :math:`n` is odd.

          Number of ways of selecting :math:`3` points from
          :math:`\frac{n+1}{2}` odd positions :math:`={}^\frac{n+1}{2}C_3`

          Number of wyas of selecting :math:`3` points from
          :math:`\frac{n-1}{2}` even positions :math:`={}^\frac{n - 1}{2}C_3`

          Sum of all these is the desired anwer.
207. Let :math:`S_1, S_2, S_3, S_4` be the four intermediate stations where
     the train stops.

     :math:`a~S_1~b~S_2~c~S_3~d~S_4~e`

     Let :math:`a, b, c, d, e` be the number of stations between :math:`A` and
     :math:`S_1`, :math:`S_1` and :math:`S_2`, :math:`S_2` and :math:`S_3`,
     :math:`S_3` and :math:`S_4` and :math:`S_4` and :math:`B` respectively.

     Then, :math:`a + b + c + d + e = 8` where :math:`a\geq 0, b\geq 1, c\geq 1,
     d\geq 1, e\geq 0`

     Let :math:`x = a, y = b - 1, z =c - 1, t = d - 1, w = e`

     Now, :math:`x + y + z + t + w = a + b + c + d + e - 3`

     :math:`= 8 - 3 = 5`

     :math:`\therefore` Required number = Number of non-negative integral
     solutions of previous equality :math:`={}^{n + r - 1}C_1 ={}^9C_5 = 126`
208. Total number of points in the plane :math:`= m`

     Number of straight lines formed by these :math:`m` points :math:`={}^mC_2
     = n` (say)

     If each pair of these :math:`n` lines intersect at different points, then
     total number of points of intersection of these :math:`n`lines
     :math:`{}^nC_2`.

     Number of lines passing through :math:`A_1 = m - 1`

     Each pair of these :math:`m - 1` lines intersect at :math:`A_1` and that
     too is not to be counted.

     Number of pair of lines intersecting at :math:`A_1 ={}^{m - 1}C_2`

     Similar will be the case for lines meeting at :math:`A_2, A_3, \ldots, A_m`

     Hence required number of points of intersection :math:`={}nC_2 - ({}^{m -
     1}C_2 + {}^{m - 1}C_2 + \ldots ~\text{to}~m~\text{terms})`

     :math:`={}^nC_2 - m.{}^{m-1}C_2 = \frac{m(m - 1)}{8}(m^2 - 5m + 6)`

     :math:`= \frac{1}{8}\frac{m!}({m - 4)!}`
209. The word BAC cannot be spelt if the :math:`m` selected coupons do not
     contain at least one of :math:`A, B` and :math:`C`.

     Number of ways of selecting :math:`m` coupons which are :math:`A` or
     :math:`B = 2^m`

     This also includes the case when all the :math:`m` coupons are either
     :math:`A` or all are :math:`B`.

     Number of ways of selecting :math:`m` coupons which are :math:`B` or
     :math:`C = 2^m`

     This also includes the case when all the :math:`m` coupons are either
     :math:`B` or all are :math:`C`.

     Number of ways of selecting :math:`m` coupons which are :math:`A` or
     :math:`C = 2^m`

     This also includes the case when all the :math:`m` coupons are either
     :math:`A` or all are :math:`C`.

     Number of ways of selecting  :math:`m` coupons when all are :math:`A = 1`

     Number of ways of selecting  :math:`m` coupons when all are :math:`B = 1`

     Number of ways of selecting  :math:`m` coupons when all are :math:`C = 1`

     :math:`\therefore` Required answer :math:`= 3.(2^m - 1)`
210. Number of types of cards(number of suits) :math:`= 4` (Heart, Club, Spade
     and Diamond)

     Number of consecutive cards in each suit :math:`= 13`

     Number of ways of selecting :math:`5` consecutive cards from out of
     :math:`13` from one suit :math:`= n - r + 1 = 13 - 5 + 1 = 9`

     But one card of any denomination can be selected from any one of the
     :math:`4` suits in :math:`4` ways.

     :math:`\therefore~5` cards of five different denominations can be selected
     from :math:`4` suits in :math:`4^5` ways.

     :math:`\therefore` Required numbers :math:`= 9\times 4^5 = 9216`

     Number of ways of selecting :math:`5` consecutive cards :math:`=9216`

     Number of ways of selecting :math:`5` consecutive cards from one suit
     :math:`= 9`

     :math:`\therefore` Number of ways of selecting :math:`5` cards from the
     same suit :math:`= 9\times 4 = 36`

     :math:`\therefore` Required number :math:`= 9216 - 36 = 9180`
211. Let :math:`A = {a_1, a_2,\ldots, a_n}`

     For element :math:`a_1` and one subset :math:`P_1` there are two
     possibilities(i) :math:`a_1\in P_1` (ii) :math:`a_1\notin P_1`

     :math:`\therefore` Total number of ways for one element :math:`a_1` and
     :math:`m` subsets :math:`= P_1.P_2.\ldots .P_m = 2^m`

     Number of ways in which :math:`a_1` belongs to all :math:`m` subsets
     :math:`= 1^m`

     Number of ways in which :math:`a_1` does not belong to all :math:`m`
     subsets :math:`= 1^m`

     Number of ways in which :math:`a_1\in(P_1\cap P_2\cap\ldots\cap P_m)=1^m`

     Number of ways in which
     :math:`a_1\notin(P_1\cap P_2\cap\ldots\cap P_m)=2^m - 1^m`

     Numer of ways in which
     :math:`a_1\notin(P_1\cup P_2\cup\ldots\cup P_m) = 1^m`

     Numer of ways in which one element
     :math:`a_1\in(P_1\cup P_2\cup\ldots\cup P_m) = 2^m - 1^m`

     i. Here exactly :math:`r` elements of :math:`A` belongs to
        :math:`P_1\cup P_2\cup\ldots P_m`

        :math:`\therefore` Required number :math:`={}^nC_r(2^m - 1^m)^r.(1^m)^{n
        - r}`
     ii. Here :math:`P_1\cap P_2\cap\ldots \cap P_m` contains exactly :math:`r`
         elements means :math:`r` elements belong to :math:`P_1\cap P_2\cap
         \ldots \cap P_m` and :math:`n - r` elements do not belong to
         :math:`P_1\cap P_2\cap\ldots \cap P_m`

         Required number :math:`={}^nC_r(1^m)^r(2^m - 1^m)^{n - r}`
     iii. Let :math:`P_{m+1} = A - (P_1\cup P_2\cup\ldots \cup P_m)`

          Since :math:`P_i\cap P_j = \phi, i\neq j,` where :math:`i, j =
          1, 2, 3, \ldots, m`

          Each element of :math:`A` should belong to exactly one of the
          :math:`(m + 1)` subsets.

          For element of :math:`a_1` of :math:`A,` number of ways :math:`= m+1`

          For element of :math:`a_2` of :math:`A,` number of ways :math:`= m+1`

          :math:`\ldots`

          For element of :math:`a_n` of :math:`A,` number of ways :math:`= m+1`

          Desired answer :math:`= (m + 1)^n`
212. Number of boxes :math:`= 2m,` number of identical balls :math:`= m`

     Number of selections of :math:`m` boxes out of :math:`2m ={}^{2m}C_m`

     Since :math:`m` balls are identical, thus, they can be arranged among
     themselves in :math:`\frac{m!}{m!}`

     :math:`\therefore` Required number :math:`={}^{2m}C_m = \frac{2m!}{m!m!}`

     We will show by induction that :math:`\frac{4^m}{2\sqrt{n}}\leq
     \frac{2m!}{(m!)^2}\geq \frac{4^m}{\sqrt{m + 1}}`

     Let :math:`P(m): \frac{4^m}{2\sqrt{m}}\leq \frac{2m!}{(m!)^2}`

     When :math:`m = 1` L. H. S. :math:`= \frac{4}{2} = 2`
     and R. H. S. :math:`= \frac{2}{1^2} = 2`

     Let :math:`P(k)` be true.

     To prove :math:`P(k+1)` to be true i.e. :math:`\frac{4^{k+1}}{2\sqrt{k +
     1}}\leq \frac{(2k + 2)!}{(k + 1)!^2} = \alpha` (say)

     Multiplying both sides by :math:`\frac{(2k+1)(2k+2)}{(k + 1)^2}` we get

     :math:`\frac{2(2k + 1)4^k}{2\sqrt{k}(k + 1)}\leq \frac{(2k +
     2)!}{(k+1)!^2}`

     Now :math:`\frac{\beta}{\alpha} = \frac{(2k + 1)4^k}{\sqrt{k}(k +
     1)}.\frac{2\sqrt{k + 1}}{4^{k + 1}}`

     :math:`= \frac{\sqrt{4k^2 + 4k + 1}}{\sqrt{4k^2 + 4k}} >1`

     Thus, :math:`P(k + 1)` is true if :math:`P(k)` is true.

     Second part is left as an exercise.
213. Number of selections with :math:`1` lady and :math:`4` gentlemen
     :math:`={}^4C_1.{}^6C_4 = 60`

     Number of selections with :math:`2` ladies and :math:`3` gentlemen
     :math:`=({}^4C_2 -{}^2C_0).{}^6C_3= 100`

     Number of selections with :math:`3` ladies and :math:`2` gentlemen
     :math:`=({}^4C_3 -{}^2C_1).{}^6C_2= 30`

     :math:`\therefore` Reuired number :math:`= 60 + 100 + 30 = 190`

Problem 214 has been left as an exercise.

215. To get one point of intersection as desired in the question we need two
     points on the first line and two points in the second line. Now two points
     on the first line can be selected out of :math:`m` points in
     :math:`^mC_2` ways. Again, two points on the second line out of :math:`n`
     points in :math:`^nC_2` ways.

     One such selection of :math:`4` points two on one line and two on the other
     gives one point of intersection.

     :math:`\therefore` Desired answer :math:`={}^mC_2.{}^nC_2 = \frac{1}{4}
     mn(m - 1)(n - 1)`
216. Let :math:`y` be the children after John and Mary marry.

     Then :math:`x + x + 1 + y = 24` or :math:`2x + y = 23`

     Let :math:`z` be the number of fights then

     :math:`z ={}^xC_1.{}^yC_1 +{}^xC_1.{}^{x + 1}C_1 +{}^yC_1.{}^{x + 1}C_1`

     :math:`= xy + x(x + 1) + y(y + 1)`

     :math:`x(23 - 2x) + x(x + 1)+ (23 - 2x)(x + 1)`

     :math:`z = -3x^2 + 45x + 23`

     Since :math:`x` is real :math:`\therefore 45^2 - 12(z - 23)\geq 0`

     :math:`z\leq \frac{2301}{12} = 191.75`

     Therefore, number of fights possible :math:`= 191`
217. :math:`2520 = 2^3.3^2.5.7`

     Each term of the product :math:`(1 + 2 + 2^2 + 2^3)`:math:`(1 + 3 + 3^2)`
     :math:`(1+5)(1+7)` is a divisor of :math:`2520`

     :math:`\therefore` Number of divisors :math:`= 48`

     Sum of divisors :math:`(1 + 2 + 2^2 + 2^3)(1 + 3 + 3^2)(1 + 5)(1 + 7)`

     :math:`= 9360`
218. Set of three positive integers whose sum is :math:`5` are :math:`\{3, 1,
     1\}, \{2, 2, 1\}`

     Elements of 1st set can be arranged in :math:`\frac{3!}{2!}` ways.

     Elements of 2nd set can be arranged in :math:`\frac{3!}{2!}` ways.

     :math:`\therefore` Required number :math:`= \frac{3!}{2!}{}^5C_3.{}^2C_1.
     {}^1C_1 + \frac{3!}{2!}.{}^5C_2.{}3^C_2.{}^1C_1 = 60 + 90 =150`
219. Let :math:`m = (n - 1)!`, then :math:`n! = mn`

     :math:`\frac{(n!)!}{(n!)^{(n-1)!}} = \frac{(mn)!}{(n!)^m}`

     :math:`=` number of ways in which :math:`mn` different things can be
     distributed among :math:`m` persons when each person gets :math:`n` things

     :math:`=` an integer
220. :math:`\frac{(ab)!}{a!(b!)^a} =` number of ways of dividing :math:`ab`
     different things in :math:`a` sets each having :math:`b` things

     :math:`=` an integer
221. Let :math:`a, b, c, d, e, f, g` be the number of persons entering through
     the doors :math:`A, B, C, D, E, F, G` respectively.

     Then, :math:`a + b + c + d + e + f + g = 200`

     Number of ways of divigin :math:`200` persons in :math:`7` parts

     :math:`={}^{n + r - 1}C_r ={}^{206}C_6`

     Number of ways of dividing :math:`200` persons in :math:`7` sets conatining
     :math:`a, b, c, d, e, f, g` persons respectively :math:`= \frac{200!}{a!b!
     c!d!e!f!g!}`

     Now :math:`a` persons in the first set can be arranged among themselves
     in the list in :math:`a!` ways.

     Similarly, :math:`b, c, d, e, f, g` persons can be arranged among
     themselves in :math:`b!, c!, d!, e!, f!, g!` ways respectively.

     :math:`\therefore` Desired answer :math:`={}^{206}C_6.\frac{200!}{a!b!c!d!
     e!f!g!}.a!b!c!d!e!f!g!`

     :math:`={}^{206}C_6.(200)! ={}^{206}P_6`
222. Let the four persons be given :math:`a, b, c, d` things respectively, then

     :math:`a + b + c + d = 16,` where :math:`a, b, c, d \geq 3`

     Let :math:`x = a - 3, y = b - 3, z=c - 3, t = d - 3`

     Then :math:`x + y + z + t = a + b + c + d - 12 = 4, x,y,z,t\geq 0`

     :math:`\therefore` Desired answer :math:`=` number of ways of distributing
     :math:`4` identical things among :math:`4` persons where each person can
     get zero or more things

     :math:`={}^{n + r - 1}C_r ={}^7C_4 = 35`
223. Let the number of red, white, blue and green balls be :math:`x, y, z` and
     :math:`w` respectively, then :math:`x + y + z + w = 10,` where :math:`x, y,
     z, w \geq 0`

     :math:`\therefore` desired answer :math:`=` number of non-negative integral
     solutions of above equations

     :math:`=` number of ways of distributing :math:`10` identical things among
     :math:`4` persons where each gets zero or more things

     :math:`={}^{n + r - 1}C_r ={}^{13}C_{10} ={}^{13}C_3 = 286`

     When the selection has to contain balls of all colors :math:`x + y + z + w
     = 10,` where :math:`x, y, z, w\geq 1`

     Let :math:`a = x - 1, b = y - 1, c = z - 1, d = w -1`

     Thus, :math:`a + b + c + d = 6`

     :math:`\therefore` desired answer :math:`={}^{4 + 6 - 1}C_6 = 84`
224. Number of ways in which each of the :math:`8` questions can be allotted
     :math:`2` marks out of :math:`30` marks

     :math:`= 1.1.1.1.1.1.1.1 = 1`

     Number of ways in which remaining :math:`14` marks can be allotted to
     :math:`8` questions where any question many be allotted zero or more
     marks :math:`={}^{n + r - 1}C_r ={}^{21}C_{14} = 116280`
225. The candidate must score :math:`150` marks.

     :math:`\therefore` desired answer :math:`=` coeff. of :math:`x^{150}` in
     :math:`(1 + x + \ldots + x^{50})^3.(1 + x + \ldots + x^100)`

     :math:`=` coeff. of :math:`x^{150}` in :math:`\left(\frac{1 - x^{51}}{1 -
     x}\right)^3\frac{1 - x^{101}}{1 - x}`

     :math:`=` coeff. of :math:`x^{150}` in :math:`(1 - 3x^{51} + 3x^{102} -
     x^{101})(1 - x)^{-4}` [leaving terms conatining powers of :math:`x`
     greater than :math:`150` ]

     :math:`={}^{153}C_{150} - 3.{}^{102}C_{99} + 3.{}^{51}C_48 -{}^{52}C_49`

     :math:`= 110556`
226. Let :math:`y_1 = x_1 - 1, y_2 = x_2 - 1, \ldots, y_k = x_k - k`

     Then :math:`y_1, y_2, \ldots, y_k \geq 0`

     Also, as :math:`x_1 + x_2 + \ldots + x_k = n`

     :math:`y_1 + y_2 + \ldots +y_k = x_1 + x_2 + \ldots + x_k - (1 + 2 +
     \ldots + k)`

     :math:`= n - \frac{k(k + 1)}{2} = m` (say)

     :math:`\therefore` Desired answer :math:`=` number of non-negative integral
     solutions of the equation :math:`y_1 + y_2 + \ldots + y_k = m`

     :math:`={}^{k + m - 1}C_m`
227. Given :math:`x + y + z + t = 29` where :math:`x\geq 1, y\geq 2, z\geq 3,
     t\geq 0`

     Let :math:`p = x -1, q = y - 2, r = z - 3`

     :math:`p + q + r + t = 23` where :math:`p, q, r, t\geq 0`

     :math:`\therefore` Desired answer :math:`=` number of ways in which
     :math:`23` identical things can be distributed among :math:`4` persons when
     each person can get any number of things

     :math:`={}^{n + r - 1}C_r ={}^{4 + 23 - 1}C_{23} = 2600`
228. **Case I:** When :math:`4t = 0,` i.e. :math:`t = 0`

     In this case, :math:`x + y + z = 20`

     Number of non-negative integral solutions :math:`={}^{n + r - 1}C_r =
     {}^{22}C_{20}`

     **Case II:** When :math:`t = 1`, number of non-negative integral solutions
     :math:`= {3 + 16 - 1}C_{16} ={}^{18}C_{}16`

     **Case III:** When :math:`t = 2`, number of non-negative integral solutions
     :math:`={}^{14}C_{12}`

     **Case IV:** When :math:`t = 3`, number of non-negative integral solutions
     :math:`={}^{10}C_8`

     **Case V:** When :math:`t = 4`, number of non-negative integral solutions
     :math:`={}^6C_4`

     **Case VI:** When :math:`t = 5`, number of non-negative integral solutions
     :math:`={}^2C_0`

     Thus, desired answer :math:`= 536`
229. Given :math:`x + y + z + u + t = 20`

     :math:`x + y + z = 5`

     thus, :math:`u + t = 15`

     Number of non-negative integral solutions of :math:`x + y + z = 5`
     :math:`={}^{n + r - 1}C_r ={}^7C_5`

     Number of non-negative integral solutions of :math:`u + t = 15`
     :math:`={}^{2 + 15 - 1}C_{15}`

     :math:`\therefore` Required number :math:`={}^7C_5.{}^{16}C_15 = 336`
230. Let :math:`w` be a non-negative integer such that
     :math:`3x + y + z + w = 30`

     Let :math:`a = x - 1, b = y - 1, c = z - 1, d = w,` then

     :math:`3a + b + c + d = 30,` where :math:`a, b, c, d\geq 0`

     Clearly, :math:`0\leq a\geq 8`. If :math:`a = k,` then :math:`b + c + d =
     25 - 3k`

     Number of non-negative integral solutions of above equation
     :math:`={}^{n + r - 1}C_k = \frac{3}{2}(3k^2 - 53k + 234)`

     :math:`\therefore` Desired answer :math:`=\frac{3}{2}\sum_{k=0}^8(3k^2 -
     53k + 234)`

     :math:`= 1215`
231. Given :math:`a + b + c + d = 20, a, b, c, d\geq 1`

     Let :math:`a<b<c<d`

     Let :math:`x = a, y = b - a, z = c - b, t = d - c`

     :math:`a = x, b = y + x, c = x + y + z, d = x + y + z + t`

     :math:`4x + 3y + 2z + t = 20`

     Sum of minimum values of :math:`4x, 3y, 2z, t = 4 + 3 + 2 + 1 = 10`

     :math:`\therefore` Required number :math:`=` coeff. of :math:`x(20 - 10)`
     in :math:`(1 - x^4)^{-1}(1 - x^2)^{-1}(1 - x^2)^{-1}(1 - x)^{-1}`

     :math:`= 23`

     But :math:`a, b, c, d` can be arranged in :math:`4!` ways.

     :math:`\therefore` Desired answer :math:`= 23. 4! = 552`
232. Any number between :math:`1` and :math:`1000000` must be of less than
     seven digits. Therefore, it must be of the form

     :math:`a_1a_2a_3a_4a_5a_6,` where :math:`a_1, a_2, a_3, a_4, a_5, a_6 \in
     {0, 1, 2,\ldots, 9}`

     Sum of digits :math:`= 18`

     i.e. :math:`a_1 + a_2 + a_3 + a_4 + a_5 + a_6 = 18`

     :math:`\therefore` Desired answer :math:`=` coeff. of :math:`x^{18}` in
     :math:`(1 + x + x^2+ \ldots + x^9)^6`

     :math:`= 25927`
233. Desired answer :math:`=` coeff. of :math:`x^n` in :math:`\left[(1 + x + x^2
     + \ldots + x^n)^2(1 + x)^n\right]`

     :math:`= 2^{n - 1}(n + 2)`
234. Number of ways in which one crew out of :math:`3` can be arranged on the
     steering :math:`={}^3C_1`

     Since :math:`2` particular persons are always to maintain on bow side
     therefore, :math:`2` more persons for the bow side can be selected out of
     remaining :math:`6` persons in :math:`^6C_2` ways and :math:`4` persons
     can be selected out of remaining :math:`4` in :math:`^4C_4` ways.

     Now :math:`4` persons on bow side and storke side can be arranged among
     themselves in :math:`4!` ways.

     :math:`\therefore` Desired answer :math:`={}^3P_1.{}^6C_2.4!.4! = 25920`
235. Total no. of letters :math:`= 11`

     E occurs thrice, N occurs thrice, D occurs twice. Different letters are
     I, N, D, E, P, T

     **Case I:** When three letters are identical and remaining two are
     identical. Letters selected will be

     i. three E's and two N's; number of selections :math:`= 1`
     ii. three E's and two D's; number of selections :math:`=1`
     iii. three N's and two D's; number of selections :math:`=1`
     iv. three E's and two E's; number of selections :math:`=1`

     **Case II:** When three letters are identical and remaining two are
     different. Letters selected will be

     i. three E's and two out of I, N, D, P, T
     ii. three N's and two out of I, E, D, P, T

     Number of selections :math:`=1.{}^5C_2 + 1.{}^5C_2 = 20`

     **Case III:** When two letters are identical and are of one type, two are
     identical and are of second type and rest one is different. Letters
     selected will be

     i. two E's and two N's and one out of I, D, P, T
     ii. two E's and two D's and one out of I, N, P, T
     iii. two N's and two D's and one out of I, E, P, T

     Number of selections :math:`={}^4C_1 +{}^4C_1 +{}^4C_1 = 12`

     **Case IV:** When two letters are identical and remaining three are
     different. Letters selected will be

     i. two E's and three out of I, N, D, P,T
     ii. two N's and three out of I, E, D, P, T
     iii. two D's and three out of I, E, N, P, T

     Number of selections in this case :math:`=3.{}^5C_3 = 30`

     **Case V:** When all :math:`5` letter are different.

     Number of selections :math:`={}^6C_5 = 6`

     :math:`\therefore` Desired answer :math:`= 4 + 20 + 12 + 30 + 6 = 72`
236. **1st Part:** Here :math:`a` occurs two limes, :math:`l` occurs three
     times and three
     are three other different letters :math:`p, r, e` we have to select
     :math:`4` letters.

     :math:`\therefore` Desire number :math:`=` coeff. pf :math:`x^4` in
     :math:`\left[(1 + x + x^2 + x^3)(1 + x + x^2)(1 + x^3)\right]`

     :math:`= 22`

     **2nd Part:** Required number :math:`=` coeff. of :math:`x^4` in
     :math:`4!\left(1 + \frac{x}{1!} + \frac{x^2}{2!}\right)\left(1 +
     \frac{x}{1!} + \frac{x^2}{2!} + \frac{x^3}{3!}\right)\left(1 +
     \frac{x}{1!}\right)^3`

     :math:`= 286`
237. :math:`\frac{^(n+4)P_4}{(n + 2)!}-\frac{143}{}4.n!`

     :math:`= \frac{(n+4)(n+3)}{n!} - \frac{143}{4.n!}`

     :math:`= \frac{1}{n!}\left[\frac{4(n + 4)(n + 3)- 143}{4}\right]`

     :math:`= \frac{1}{4.n!}\left[4n^2 + 28n - 95\right]`

     which is clearly less than :math:`0` for :math:`n = 1, 2`
238. :math:`\frac{195}{4.n!} - \frac{(n + 3)(n + 2)(n + 1)}{(n + 1)!}`

     :math:`\frac{1}{n!}\left[\frac{195}{4} - (n + 3)(n + 2)\right]`

     which is clearly greater than :math:`0` for :math:`n = 1, 2, 3, 4`
239. :math:`^{n-2}P_4:{}^{n+2}C_8 = 16:57`

     :math:`\frac{1}{(n + 2)(n + 1)n(n - 1)} = \frac{1}{21.20.19.18}`

     :math:`n = 19`
240. :math:`^nP_r ={}^nP_{r + 1}`

     :math:`\Rightarrow n - r = 1`

     :math:`^nC_r ={}^nC_{r - 1}`

     :math:`\Rightarrow r = n - r + 1`

     Solving these two we have :math:`n = 3, r = 2`

Rest of the problems have been left as exercies.
