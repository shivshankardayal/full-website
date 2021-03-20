Permutations and Combinations Solutions Part 6
**********************************************
251. L.H.S. :math:`= 2.6.10.\ldots(4n - 6)(4n - 2)`

     :math:`= 2^n(1.3.5.\ldots.(2n - 3)(2n - 1))`

     :math:`= \frac{2^n(1.2.3.4.5.\ldots(2n - 3)(2n - 2)(2n -
     1)2n)}{2.4.6.\ldots.2n}`

     :math:`= \frac{2^n(1.2.3.4.5.\ldots(2n - 3)(2n - 2)(2n -
     1)2n)}{2^n(1.2.3.\ldots.n)}`

     :math:`= \frac{2n!}{n!} =` R.H.S.

252. L.H.S. :math:`= {}^{47}C_4 + \sum_{i=0}^3{}^{50- i}C_3 + \sum_{j=1}^5{}^{56 -
     j}C_{53 - j}`

     :math:`= {}^{47}C_4 + {}^{47}C_3 + \sum_{i=0}^2{}^{50 - i}C_3 +
     \sum_{j=1}^5{}^{56 - j}C_{53 - j}`

     [ We know that :math:`{}^nC_r + {}^nC_{r - 1} = {}^{n + 1}C_r` ]

     :math:`= {}^{48}C_4 + \sum_{i=0}^2{}^{50- i}C_3 + \sum_{j=1}^5{}^{56 -
     j}C_{53 - j}`

     :math:`= {}^{48}C_4 + {}^{48}C_3 + \sum_{i=0}^1{}^{50 - i}C_3 +
     \sum_{j=1}^5{}^{56 - j}C_{53 - j}`

     :math:`= {}^{49}C_4 + \sum_{i=0}^1{}^{50- i}C_3 + \sum_{j=1}^5{}^{56 -
     j}C_{53 - j}`

     Following similarly we obtain,

     :math:`= {}^{51}C_4 + \sum_{j=1}^5{}^{56 - j}C_{53 - j}`

     [ We know that :math:`{}^nC_r = {}^nC_{n - r}` ]

     Thus, we can rewrite the previous expression as

     :math:`= {}^{51}C_4 + \sum_{j=1}^5{}^{56 - j}C_3`

     Again, we follow as previously to obtain

     :math:`= {}^{57}C_4`

253. L.H.S. :math:`= {}^nC_k + \sum_{j=0}^m{}^{n+j}C_{k - 1}`

     [ We know that :math:`{}^nC_r + {}^nC_{r - 1} = {}^{n + 1}C_r` ]

     Rewriting given expression,

     :math:`= {}^nC_k + {}^nC_{k - 1} + \sum_{j=1}^m{}^{n+j}C_{k - 1}`

     :math:`= {}^{n + 1}C_k + \sum_{j=1}^m{}^{n+j}C_{k - 1}`

     Repeating,

     :math:`= {}^{n + 1}C_k + {}^{n + 1}C_{k - 1} + \sum_{j=2}^m{}^{n+j}C_{k - 1}`

     :math:`= {}^{n + 2}C_k + \sum_{j=2}^m{}^{n+j}C_{k - 1}`

     Repeating this for remaining values of :math:`j`, we obtain

     :math:`= {}^{n + m + 1}C_k`

254. L.H.S. :math:`= {}^mC_1 +{}^{m+1}C_2 + \ldots +{}^{m + n - 1}C_n`

     :math:`= {}^mC_0 + {}^mC_1 +{}^{m+1}C_2 + \ldots +{}^{m + n - 1}C_n -
     {}^mC_0`

     [ We know that :math:`{}^nC_r + {}^nC_{r - 1} = {}^{n + 1}C_r` and
     :math:`{}^nC_0 =1` ]

     Applying the above formula, we get

     :math:`= {}^{m+1}C_1 + {}^{m+1}C_2 + \ldots +{}^{m + n - 1}C_n - 1`

     :math:`= {}^{m+2}C_2 + {}^{m+2}C_3 + \ldots +{}^{m + n - 1}C_n - 1`

     Repeating this we obain,

     :math:`= {}^{m + n}C_n - 1`

     We obtain the same value by computing R.H.S. in similar manner which turns
     out to be,

     :math:`= {}^{m + n}C_m - 1`

     :math:`\because {}^nC_r = {}^nC_{n - r}`

     L.H.S. = R.H.S.

255. For a number to be divisible by :math:`25` last two digits should be one
     of :math:`00, 25, 50, 75`.

     Since we have only one :math:`0`, last two digits cannot be :math:`00`.

     **Case I:** When last two digits are :math:`25`

     No. of ways to fill ten thousand's place :math:`= 5` because we cannot use
     :math:`0`

     No. of ways to fill thousand's place :math:`= 5`

     No. of ways to fill hundred's place :math:`= 4`

     :math:`\therefore` Total no. of ways :math:`= 100`

     **Case II:** When last two digits are :math:`75`

     Like Case I total no. of such numbers :math:`= 100`

     **Case III:** When last two digits are :math:`50`

     No. of ways to fill ten thousand's place :math:`= 6`

     No. of ways to fill thousand's place :math:`= 5`

     No. of ways to fill hundred's place :math:`= 4`

     Total no. of such numbers :math:`= 120`

     :math:`\therefore` Desired answer is :math:`320`

256. For a number to be divisible by :math:`4` last two digits should be
     :math:`12, 24, 32, 52`

     No. of ways to fill ten thousand's place :math:`= 3`

     No. of ways to fill thousand's place :math:`= 2`

     No. of ways to fill hundred's place :math:`= 1`

     :math:`\therefore` Desired answer :math:`= 4*3*2 = 24`

257. For a number to be divisible by :math:`3` sum of digits should be
     divisible by :math:`3`. The combination of such digits are :math:`123,
     234, 345, 135, 1245`

     Considering :math:`123` with :math:`0`

     No. of ways to fill thousand's place :math:`= 3`

     No. of ways to fill hundred's place :math:`= 3`

     No. of ways to fill ten's place :math:`= 2`

     :math:`\therefore` total no. of permutations :math:`= 18`

     Total no. of numbers including :math:`0 = 4*18 = 72`

     Total no. of permutation of :math:`1245 = 4! = 24`

     Total no. of numbers divisible by :math:`6 = 24 + 72 = 96`

     For these numbers to be divisible by :math:`6` these should be even.

     **Case I:** When out three digit no. has two odd digits

     If :math:`0` is at unit's place, total no. of such numbers :math:`= 3 * 2`

     If :math:`0` is not at unit's place, total no. of such numbers :math:`=
     2 * 2`

     There are three such numbers(with two odd digits), therefore total no. of
     numbers :math:`= 3 * (3 * 2 + 2 *2) = 30`

     **Case II:** When there are two even numbers in our combination of three
     digit numbers

     If :math:`0` is at unit's place, total no. of such numbers :math:`= 3 * 2`

     If :math:`0` is not at unit's place, total no. of such numbers :math:`=
     2 * 2`

     There are one such numbers(with one odd digits), therefore total no. of
     numbers :math:`= 1 * (3 * 2 + 2 *2) = 10`

     **Case III:** When the no. is permutation of :math:`1245`

     Half of these will have even no. at unit's place i.e. :math:`12`

     Therefore, total no. of numbers divisible by :math:`6 = 40 + 12 = 52`

258. If the two :math:`3` were different then,
     
     Unit's place can be filled in :math:`3` ways.

     Thousand's place can be filled in :math:`3` ways.

     Hundred's place can be filled in :math:`2` ways.

     Therefore, total no. of :math:`4` digit numbers :math:`= 3 * 3 *2 = 18`

     However, the two :math:`3` are same, therefore total no. of numbers
     :math:`= \frac{18}{2} = 9`

     Out of :math:`9` numbers at unit's, ten's and hundred's place there will
     be :math:`3` will come four times, :math:`1` will come twice and :math:`0`
     will come thrice.

     On thousand's place :math:`3` will come six times and :math:`1` will come
     three times.

     Sum of digits at unit's place :math:`= 4*3 + 2*1 = 14`

     Sum of digits at ten's place :math:`= 4*3 + 2*1 = 14`

     Sum of digits at hundred's place :math:`= 4*3 + 2*1 = 14`

     Sum of digits at thousand's place :math:`= 6*3 + 3*1 = 21`

     Thus, sum of digits :math:`= 22554`

259. Total no. of ways of taking :math:`1` thing at a time :math:`= n`

     Total no. of ways of taking :math:`2` thing at a time :math:`= n^2`

     Total no. of ways of taking :math:`3` thing at a time :math:`= n^3`

     :math:`\ldots`

     Total no. of ways of taking :math:`r` thing at a time :math:`= n^r`

     :math:`\therefore` total no. of ways :math:`= n + n^2 + n^3 + \ldots +
     n^r`

     :math:`= \frac{n(n^r - 1)}{n - 1}`

260. Smallest :math:`7` digit number :math:`= 1000000`

     largest :math:`7` digit number :math:`= 9999999`

     :math:`\therefore` Total no. of :math:`7` digit numbers :math:`= 9000000`

     Half of these will have sum of digits as even, which is :math:`4500000`

261. Ways of choosing :math:`k` numbers out of :math:`r(r\le n) = r^k`

     However, :math:`(r - 1)^k` ways will not have :math:`r` as maximum.

     :math:`\therefore` Desired answer :math:`= r^k - (r - 1)^k`

262. Ways of filling most significant position :math:`= 9`

     Ways of filling next signifcant position :math:`= 8 \because` we cannot
     repeat digits.

     This is true for next :math:`n - 1` positions. Thus, total no. of numbers
     formed :math:`= 9.8^{n - 1}`

263. No. of ways of filling first position :math:`= 26 \because` it has to be
     an alphabet.

     No. of ways of filling next five positions :math:`= 36`

     However, the identifier can be of one to six characters. Thus, total
     no. of identifiers :math:`= 26 + 26.36 + 26.36^2 + \ldots + 26.36^4`

     :math:`= 26.\frac{36^5 - 1}{35}`

264. First we compute total no. of :math:`5` digit numbers.

     Ways to fill ten thousand's position :math:`= 9`

     No. of ways to fill rest of positions :math:`= 10`

     :math:`\therefore` Total no. of :math:`5` digit numbers :math:`= 9\times
     10^4`
           
     However, these will include numbers without repetitions.

     No. of numbers with no repetition :math:`= 9\times 9\times 8 \times
     7\times 6`

     :math:`\therefore` Desired answer :math:`= 90000 - 27216 = 62784`

265. Total no. of numbers between :math:`2\times 10^4` and :math:`6\times 10^4`
     is :math:`4\times 10^4`

     Half of these will have sum of digits as even, which is :math:`20000`

266. Let us solve these two parts:

     i. Treating :math:`A_1` and :math:`A_2` as one entity. Total no. of ways
        of arranging them :math:`9!`

        However, :math:`A_1` and :math:`A_2` can be arranged in :math:`2!` ways
        among themselves.

        Thus, total no. of ways in which :math:`A_1` and :math:`A_2` are
        together :math:`= 9!2!`

     ii. Total no. of permutations :math:`= 10!`

         Out of these half the time :math:`A_1` will be above :math:`A_2`.

         Thus, desired answer :math:`= \frac{10!}{2}`

267. Since no man should sit between two women we have to sit all the men
     together.

     Treating all men as one entity, total no. of ways to sit them :math:`=
     (n + 1)!`

     However, :math:`m` men can be seated in :math:`m!` ways among themselves.

     Thus, total no. of desired arrangements :math:`= (n + 1)!m!`

268. No. of Is is :math:`2`, no. of Ts is :math:`2`, no. of Es is
     :math:`3`. Rest of the characters come once each.

     Treating all vowels as one character total no. of characters :math:`= 7`

     No. of ways to arrange them :math:`= \frac{7!}{2!}`

     Six vowels can be arranged in :math:`\frac{6!}{2!3!}` no. of ways among
     themselves.

     Thus, total no. of desired words :math:`= \frac{7!6!}{2!2!3!} = 151200`

269. Total no. of arrangements :math:`= \frac{18!}{5!6!7!}`

     Treating all balls of same color as one ball so that they stay together,
     total no. of arrangements :math:`= 3!`

     Thus, desired answer :math:`= \frac{18!}{5!6!7!} - 3!`

270. No. of ways of seating men together :math:`= 7!`

     No. of ways of seating women together :math:`= 3!`

     No. of ways of seating two men together :math:`= 2!`

     No. of arragements when three ladies and two men are together :math:`=
     7!3!2!`

     Treating all ladies as one we have :math:`8` people and ladies can be
     seated in :math:`3!` ways among themselves.
     
     No. of arragements with ladies together and no codition on sitting men
     :math:`= 8!3!`

     :math:`\therefore` Desired no. of seating arragements :math:`= 8!3! -
     7!3!2!`

271. Total no. of permuatations :math:`= n!`

     Treating :math:`p` things as one we have :math:`n - p + 1` things.

     No. of arragements when :math:`p` things are together :math:`(n - p + 1)!`

     However, :math:`p` things can be arranged in :math:`p!` ways among
     themselves.

     :math:`\therefore` No. of ways in which :math:`p` things are never
     together :math:`= n! - (n - p + 1)!p!`

272. Let us mark ten positions in a line XOXOXOXOXOX where Xs mark position of
     '-' and Os mark positions of '+'. There are total of :math:`7` positions
     to be filled by :math:`4` '-' signs.

     No. of ways :math:`= {}^7C_4 = 35`

273. let Gentelman be G and lady be L. They can be seated as,

     GLGGLGLG

     On both of these Gentelman can now exchange places in :math:`5!` ways

     Ladies can exchange places in :math:`3!` ways

     So total number of ways is :math:`5!*3! = 720`

274. There are three S, two C, and one U and E each.

     i. Treating two Cs as one character.

        SXSXSXS can be a way where S is position of S and
        X is position of other characters.

        No. of ways to fill S :math:`= {}^4C_3`

        However, rest of :math:`3` characters can be arranged in :math:`3!`
        ways. Thus, total no. of ways :math:`= 24`

     ii. The total number of permutation of letters (T) :math:`= \frac{7!}{2!3!}`
         
         With two C together (A) :math:`= \frac{6!}{2!}`
         
         With three S together (B) :math:`= \frac{6!}{2!} - \frac{5!}{2!}`
         
         With both S and C together (C) :math:`= 5! - 4!`

         :math:`\therefore` Desired answer :math:`= T - A - B + C = 96`

275. No. of words beginning with E :math:`= 5!`

     No. of words beginning with H :math:`= 5!`

     No. of words beginning with ME :math:`= 4!`

     No. of words beginning with MH :math:`= 4!`

     No. of words begining with MOE :math:`= 3!`

     No. of words begining with MOH :math:`= 3!`

     No. of words begining with MOR :math:`= 3!`

     No. of words beginning with MOTE :math:`= 2!`

     There are two words which beging with MOTH and MOTHER is first of them.

     :math:`\therefore` Rank of MOTHER :math:`= 309`
     
276. There are :math:`7` intermediate destinations and Delhi as final
     destination. Thus, there are :math:`8` places where passengers can go
     to. Let the intermediate stations be :math:`S_1, S_2, \ldots, S_7`

     People starting at Calcutta will have :math:`8` destinations.

     People starting at :math:`S_1` will have :math:`7` destinations.

     People starting at :math:`S_2` will have :math:`6` destinations.

     Proceeding similarly, total no. of tickets possible :math:`= 8 + 7 +
     \ldots + 1`

     :math:`= \frac{8*9}{2} = 36`

     Thus, total no. of sets possible :math:`= {}^{36}C_5`

277. This problem is similar to previous one. Answer is :math:`{}^{55}C_6`

278. A day can be either clear or overcast. Thus, we have two
     possibilities. Total no. of possibilties for :math:`7` days :math:`= 2^7 =
     128`

279. No. of ways of selecting :math:`1` book :math:`= {}^{2n + 1}C_1`

     No. of ways of selecting :math:`2` book :math:`= {}^{2n + 1}C_2`

     :math:`\ldots`

     No. of ways of selecting :math:`n` book :math:`= {}^{2n + 1}C_n`

     :math:`\therefore {}^{2n + 1}C_1 + {}^{2n + 1}C_2 + \ldots + {}^{2n +
     1}C_n = 63 = S` (say) 

     We know that, :math:`{}^{2n + 1}C_0 + {}^{2n + 1}C_1 + \ldots + {}^{2n +
     1}C_n + \ldots + {}^{2n + 1}C_{2n + 1} = 2^{2n + 1}`

     We also know that, :math:`{}^nC_r = {}^nC_{n - r}`

     :math:`1 + 2S + 1 = 2^{2n + 1}`

     :math:`1 + S = 2^{2n} = 64 \Rightarrow n = 3`

280. :math:`k` flowers can be chosen from first bag in :math:`{}^kC_k` ways.

     :math:`k` flowers can be chosen from second bag in :math:`{}^{k + 1}C_k` ways.

     :math:`k` flowers can be chosen from third bag in :math:`{}^{k + 2}C_k` ways.

     :math:`\ldots`

     :math:`k` flowers can be chosen from mth bag in :math:`{}^{k + m - 1}C_k` ways.

     :math:`therefore` Desired answer :math:`S = {}^kC_k + {}^{k + 1}C_k +
     {}^{k + 2}C_k + \ldots + {}^{k + m - 1}C_k`

     :math:`S = 1 + (k + 1) + \frac{(k + 1)(k + 2)}{2!} + \ldots + \frac{(k + m
     - 1)!}{(m - 1)!(k!)}`

     :math:`S = {}^{k + 1}C_0 + {}^{k + 1}C_1 + {}^{k + 2}C_2 + \ldots +
     {}^{k + m - 1}C_{m - 1}`

     [ The above could also be rewritten using :math:`{}^nC_r = {}^nC_{n - r}`
     and :math:`{}^nC_0 = {}^mC_0 = 1` ]

     Now we know that :math:`{}^nC_r + {}^nC_{r - 1} = {}^{n + 1}C_r`

     Applying the above on the series we get, :math:`S = {}^{k + m}c_{m - 1} =
     {}^{k + m}c_{k + 1}`

281. Total no. of ways of choosing :math:`11` persons out of :math:`50 =
     {}^{50}C_{11}`

     Treating three persons as one, no. of ways of choosing :math:`11` when all
     three stay together in committee :math:`= {}^{47}C_8`

     Thus, desired answer :math:`= {}^{50}C_{11} - {}^{47}C_8`

282. Let :math:`S_1, S_2, S_3` be the three intermediate stations where the
     train stops.

     :math:`a, S_1, b, S_2, c, S_3, d`

     Let :math:`a, b, c, d` be the number of stations between starting station
     and :math:`S_1`, :math:`S_1` and :math:`S_2`, :math:`S_2` and :math:`S_3`
     and :math:`S_3` and final destination.

     Thus, :math:`a + b + c + d = m - 3` where :math:`a \geq 0, b\geq 1, c\geq
     1, d\geq 0`

     Let :math:`x = a, y = b - 1, z = c - 1, w = d`

     :math:`x + y + z + w = a + b + c + d - 2 = m - 5`

     Desired answer is non-negative solution of above equation :math:`= {}^{m -
     2}C_3`

283. Let us solve these one by one:

     i. :math:`2` elements have to be part of both. No. of ways of choosing
        :math:`2` out of :math:`n = {}^nC_2`

        Rest of elements should be either part of :math:`P` or :math:`Q` or
        should not be there at all. Thus, there are three possibilities for
        each number. Total possibilites for :math:`n - 2` numbers :math:`= 3^{n
        - 2}`

        Thus, desired answer :math:`= {}^nC_23^{n - 2}`

     ii. There are three ways this can be satisfied for an element. The element
         can be member or :math:`P` or :math:`Q` or not a member of
         either. Thus, there are three possibilities for each element. Thus,
         total no. of possibilities for :math:`n` elements is :math:`3^n`

284. Let us solve these one by one.

     i. Let :math:`A = {a_1, a_1, \ldots, a_n}`

        For element :math:`a_1` and one subset :math:`P_1` there are two
        posiibilities.

        Either :math:`a_1\in P_1` or :math:`a_1\notin P_1`

        :math:`\therefore` Total no. of ways for one element :math:`a_1` of
        :math:`A` and one subset :math:`P_1 = 2`

        No. of ways in which :math:`a_1` does not belong to :math:`P_1 = 1`

        :math:`\therefore` Total no. of ways for :math:`a_1` and :math:`m`
        subsets :math:`= 2^m`

        Total no. of ways :math:`a_1` belongs to all of the :math:`m` subsets
        :math:`=1^m`

        Total no. of ways :math:`a_1` belongs to none of the :math:`m` subsets
        :math:`=1^m`

        :math:`\therefore a_1 \in (P_1\cap P-2\cap\ldots P_m) = 1^m`

        :math:`\therefore a_1\notin (P_1\cap P-2\cap\ldots\cap P_m) = 2^m - 1^m`

        :math:`\therefore a_1\in (P_1\cup P-2\cup\ldots\cup P_m) = 2^m - 1^m`

        Now, this has to be applied for :math:`n - 1` elements. Thus, no. of
        ways in which :math:`n - 1` elements belong to :math:`P_1\cup
        P-2\cup\ldots\cup P_m` is :math:`(2^m  - 1^m){n - 1}`

        The element which is not found can be chosen in :math:`n` ways. Thus,
        desired answer :math:`=n(2^m - 1^m)^{n - 1}`

     ii. We have already computed that :math:`\therefore a_1\notin (P_1\cap
         P-2\cap\ldots\cap P_m) = 2^m - 1^m`

         Thus, for :math:`n` elements to not belong to the intersection of
         :math:`m` subsets :math:`= (2^m - 1^m)^n`

285. No. of possible choices are :math:`(3, 1, 1), (1, 3, 1), (1, 1, 3), (2, 2,
     1), (2, 1, 2), (1, 2, 2)` where each number represents no. of choices from
     a paper.

     For :math:`(3, 1, 1)` no. of choices :math:`= {}^5C_3\times {}^5C_1\times
     {}^5C_1`

     :math:`= 250`

     For three such sets no. of choices :math:`= 750`

     For :math:`(2, 2, 1)` no. of choices :math:`= {}^5C_2\times {}^5C_2\times
     {}^5C_1`

     :math:`= 500`

     For three such sets no. of choices :math:`= 1500`

     :math:`\therefore` Total no. of ways in which questions can be answered
     :math:`= 2250`

286. The product will be divisible by :math:`3` if one of the numbers is
     divisible by :math:`3`.

     **Case I:** When one of the numbers choses is divisible by :math:`3`

     Total no. of ways :math:`= 33*67`

     **Case I:** When both of the numbers choses is divisible by :math:`3`

     Total no. of ways :math:`= {}^{33}C_2`

     Thus, desired answer :math:`= 33*(16 + 67) = 33*83 = 2739`

287. No. of ways of selecting :math:`2` husbands :math:`= {}^5C_2 = 10`

     After selecting two husbands we have only :math:`3` wives to choose
     from. Thus, no. of ways of choosing wives :math:`= {}^3C_2 = 3`

     However, wives can be part of either side thus total no. of wasy :math:`=
     10\times 3\times 2 = 60`

288. The line which is parallel to :math:`n` concurrent line has to be part of
     all triangles. Also, the line which is parallel to it will be part of no
     triangle. Thus, total no. of possible triangles :math:`= {}^{n - 1}C_2`

289. Total no. of points of intersection :math:`{}^nC_2 = m` (say)

     If these points are not collinear then total no. of triangles formed
     :math:`= {}^mC_3`

     One line will have :math:`n - 1` collinear points. These lines will not
     form any triangle among themselves. Thus, total no. of such triangles
     :math:`{}^{n - 1}C_3`

     However, there are :math:`n` such lines. Thus total no. of triangles not
     formed by collinear points of these lines :math:`= n{}^{n - 1}C_3`

     Thus, answer is :math:`= {}^mC_3 - n{}^{n - 1}C_3`

290. There can be :math:`3, 4` or :math:`5` bowlers in the team.

     Thus total no. of selecting team :math:`= {}^5C_3*{}^{10}C_8 +
     {}^5C_4*{}^{10}C_7 + {}^5C_5*{}^{10}C_6`

291. From each bag :math:`1, 2, 3` up to :math:`m` balls can be selected.

     No. of ways of selecting :math:`1` ball from each bag :math:`=
     {}^mC_1*{}^mC_1`

     No. of ways of selecting :math:`2` balls from each bag :math:`=
     {}^mC_2*{}^mC_2`

     :math:`\ldots`

     No. of ways of selecting :math:`m` balls from each bag :math:`=
     {}^mC_m*{}^mC_m`

     :math:`\therefore` answer is :math:`= ({}^mC_1)^2 + ({}^mC_2)^2 + \ldots +
     ({}^mC_m)^2`

     :math:`= {}^{2m}C_m - 1` :math:`[\because({}^mC_0)^2 + ({}^mC_1)^2 + ({}^mC_2)^2 + \ldots +
     ({}^mC_m)^2 = {}^{2m}C_m]`

292. Let us solve this part by part.

     i. For women to be in majority there can be :math:`7, 8, 9` women.

        Thus no. of possible committees :math:`= {}^9C_7*{}^8C_5 +
        {}^9C_8*{}^8C_4 + {}^9C_9*{}^8C_3`

     ii. This is similar to part one and has been left as an exercise.

293. Let the distance between lines be :math:`1` unit. For squares with side
     :math:`1` unit: Along the :math:`m` horizontal lines :math:`m - 1` squares
     can be formed and along the :math:`n` vertical lines :math:`n - 1` sqaures
     can be formed. Thus, total no. of such squares :math:`= (m - 1)(n - 1)`

     For squares with side
     :math:`2` unit: Along the :math:`m` horizontal lines :math:`m - 2` squares
     can be formed and along the :math:`n` vertical lines :math:`n - 2` sqaures
     can be formed. Thus, total no. of such squares :math:`= (m - 2)(n - 2)`

     Since :math:`m < n,` total no. of squares :math:`= \sum_{i = 1}^{m -
     1}(m - i)(n - i)`

     :math:`= \sum_{i = 1}^{m - 1}(mn - (m + n)i - i^2)`

     This gives us our desired answer.

294. The set of lines given are parallel. The two sets are perpendicular to
     each other as we know from co-ordinate geometry. Thus, following from
     previous exercise we arrive at the same answer.

295. Total no. of ways of dividing :math:`3n` elements in three groups which
     contain equal no. of elements :math:`= \frac{2n!}{6(n!)^3}`

296. No. of ways in which :math:`50` different things can be divided in
     :math:`5` sets three of them having :math:`12` things and two of them
     having :math:`7` things each :math:`= \frac{50!}{(12!)^3(7!)^23!2!}`

297. This problem is same as previous.

298. :math:`\frac{n!}{a!b!\ldots k!}` is no. of ways of dividing :math:`n`
     different things in groups of :math:`a, b, \ldots, k` things.

299. :math:`\frac{(ab)!}{a!(b!)^a}` is no. of ways of distributing :math:`ab`
     different things in :math:`a` groups of :math:`b` things each. Thus, it is
     an integer.

300. :math:`\frac{(n^2)!}{(n!)^{n + 1}}` can be rewritten as
     :math:`\frac{(n^2)!}{n!(n!)^{n}}` which is distributing :math:`n^2`
     different things into :math:`n` groups each containing :math:`n` things.

