Permutations and Combinations Solutions Part 4
**********************************************
151. We know that if :math:`{}^nC_x ={}^nC_y` then either :math:`x = y` or
     :math:`x + y = n`

     Using this property in reverse manner :math:`^{20}C_{13} ={}^{20}C_7` and
     :math:`^{20}C_{14} ={}^{20}C_6`

     Thus, :math:`^{20}C_{13} +{}^{20}C_{14} -{}^{20}C_6 -{}^{20}C_7 = 0`
152. :math:`\frac{n!}{(n - r + 1)!(r - 1)!} = 36`

     :math:`\frac{n!}{(n-r)!r!} = 84`

     :math:`\frac{n!}{(n - r - 1)!(r + 1)!} = 126`

     From first two we have :math:`3n - 10r + 3 = 0`

     From last two we have :math:`2n - 5r - 3 = 0`

     Solving these two equations we get :math:`n = 9, r = 3`
153. Total no. of ways of selecting :math:`4` vertices out of :math:`n ={}^nC_4`

     Thus, :math:`^nC_4` quadrilaterals will be formed.
154. Total no. of parties :math:`={}^7C_3 = 35`

     Total no. of ways he can invite them when a particular friend is always
     present :math:`= ^1C_1.{}^6C_2 = 15`
155. Let us solve these one by one:

     i. When a particular member is always selected then :math:`5` selections
        out of remaining :math:`11` can be done in :math:`^{11}C_5` ways.
     ii. When a particular member is always excluded then :math:`6` selections
         out of remaining :math:`11` can be done in :math:`^{11}C_6` ways.
156. Let us solve these one by one:

     i. Total no. of ways of seating them :math:`={}^6P_6 = 6!`

        Treating C and D as one person so that they always sit together, total
        no. of ways of
        seating them :math:`={}^5P_5 = 5!` but C and D can be arranged in
        :math:`2!` ways
        among themselves making it :math:`5!2!`

        Thus, total no. of arrangements when C and D do not sit together
        :math:`= 6! - 5!2!`
     ii. Since C is always included rest :math:`3` positions can be selected
         from remaining
         :math:`5` in :math:`^5C_3 = 10` ways.
     iii. Since C is always included and E is always excluded :math:`3`
          positions can be selected
          from remaining :math:`4` in :math:`^4C_2 = 6` ways.
157. Total no. of possible tickets :math:`={}^nC_2 = \frac{n(n - 1)}{2} = 105`

     :math:`\Rightarrow n^2 - n - 210 = 0`

     :math:`\Rightarrow (n - 15)(n + 14) = 0`

     But :math:`n` cannot be negative :math:`\therefore n = 15`
158. Total no. of ways of selecting :math:`2` points from :math:`15 + 6`
     :math:`={}^{21}C_2`

     Total no. of ways of selecting :math:`2` points from :math:`6` collinear
     points :math:`={}^6C_2`

     But these lines are actually only one line.

     :math:`\therefore` total no. of straight lines :math:`={}^{21}C_2
     -{}^6C_2 + 1`

     Total no. of triangles formed :math:`={}^6C_3 +{}^6C_2.{}^{15}C_1
     +{}^6C_1.{}^{15}C_2`
159. **Case I:** When no points from collinear points are selected.

     Total no. of quadrilaterals formed :math:`={}^5C_4`

     **Case II:** When one point from collinear points are selected.

     Total no. of quadrilaterals formed :math:`={}^5C_3.{}^5C_1`

     **Case III:** When two points from collinear points are selected.

     Total no. of quadrilaterals formed :math:`={}^5C_2.{}^5C_2`

     Sum of these three cases gives us the total no. of quadrilaterals formed.
160. **Case I:** When two points from :math:`3` interior points are selected.

     Total no. of triangles formed :math:`={}^3C_2.{}^4C_1 +{}^3C_2.{}^5C_1`

     **Case I:** When two points from :math:`4` interior points are selected.

     Total no. of triangles formed :math:`={}^4C_2.{}^3C_1 +{}^4C_2.{}^5C_1`

     **Case I:** When two points from :math:`5` interior points are selected.

     Total no. of triangles formed :math:`={}^5C_2.{}^4C_1 +{}^5C_2.{}^3C_1`

     Sum of these gives total no. of triangles formed.
161. No. of ways of selecting goalkeeper :math:`={}^2C_1`

     Rest :math:`10` players can be selected out of remaining :math:`12` in
     :math:`^{12}C_{10}` ways.
162. :math:`2` men can be chosen from :math:`5` men in :math:`^5C_2` ways.

     :math:`2` women can be chosen from :math:`6` women in :math:`^6C_2` ways.

     Thus, total no. of selecting :math:`2` men and :math:`2` women from
     :math:`5` men and :math:`6` women :math:`={}^5C_2.{}^6C_2`
163. Since all boys have to get at least one article at least one boy will
     receive two of them.

     Thus, total no. of ways
     :math:`={}^8C_2.{}^6C_1.{}^5C_1.{}^4C_1.{}^3C_1.{}^2C_1.{}^1C_1`

     But the boy receiving two articles can be any of :math:`7`boys.

     :math:`\therefore = 7({}^8C_2.{}^6C_1.{}^5C_1.{}^4C_1.{}^3C_1.{}^2C_1.{}^1C_1)`
164. **Case I:** When :math:`3` ladies are included.

     :math:`3` ladies can be included in :math:`^4C_3` ways.

     Remaining :math:`2` positions can be filled by :math:`7` men in
     :math:`^7C_2` ways.

     **Case II:** When :math:`4` ladies are included.

     :math:`4` ladies can be included in :math:`^4C_4` ways.

     Remaining :math:`1` position can be filled in :math:`^7C_1` from :math:`7`
     men.

     Thus, total no. of ways :math:`={}^4C_3.{}^7C_2 +{}^4C_4.{}^7C_1`
165. **Case I:** When the student answers :math:`3` questions from each group.

     Total no. of ways :math:`={}^5C_3.{}^5C_3`

     **Case II:** When he answers :math:`4` from first group and :math:`2` from
     second.

     Total no. of ways :math:`={}^5C_4.{}^5C_2`

     **Case III:** When he answers :math:`2` from first group and :math:`4` from
     second.

     Total no. of ways :math:`={}^5C_4.{}^5C_2`

     Thus, total no. of ways :math:`= 2({}^5C_4.{}^5C_2) +{}^5C_3.{}^5C_3`
166. Let us solve these one by one.

     i. Since a particular professor is included, no. of ways of choosing
        :math:`1` more professor out of remaining :math:`9 ={}^9C_1`

        No. of ways of picking :math:`3` students out of :math:`20 ={}^{20}C_3`

        Total no. of ways of forming committee :math:`={}^9C_1.{}^{20}C_3`

     ii. Since a particular professor is excluded, no. of ways of choosing
        :math:`2` professors out of remaing :math:`9 ={}^9C_2`

        No. of ways of picking :math:`3` students out of :math:`20 ={}^{20}C_3`

        Total no. of ways of forming committee :math:`={}^9C_2.{}^{20}C_3`
167. **Case I:** When only one girl is part of committee.

     No. of ways of choosing girls :math:`= ^7C_1`

     No. of ways of choosing boys :math:`= ^6C_4`

     Thus, no. of ways of forming the committee :math:`={}^7C_1.{}^6C_4`

     **Case II:** When two girls are part of committee.

     No. of ways of choosing girls :math:`={}^7C_2`

     No. of ways of choosing boys :math:`={}^6C_3`

     Thus, no. of ways of forming the committee :math:`={}^7C_2.{}^6C_3`

     Similarly, the committee may have three, four or five girls.

     Total no. of ways of forming committee :math:`={}^7C_1.{}^6C_4
     +{}^7C_2.{}^6C_3 +
     {}^7C_3.{}^6C_3 +{}^7C_4.{}^6C_1 +{}^7C_5{}.^6C_0`
168. Let us solve these one by one:

     i. Total no. of persons :math:`= 6 + 4 = 10`

        Since there is no restriction, total no. of ways of forming the
        committee :math:`= ^{10}C_5`

     ii. Following 167 for this case, total no. of committees possible
         :math:`={}^6C_4.{}^4C_1 +{}^6C_3.{}^4C_2 +{}^6C_2.{}^4C_3 +{}^6C_1.{}^4C_4`
169. Following like 167 total no. of ways of forming committee

     :math:`={}^8C_1.{}^4C_4 +{}^8C_2.{}^4C_3 +{}^8C_3.{}^4C_2 +{}^8C_2.{}^4C_1`
170. Following like 167. total no. of ways for selections

     :math:`={}^{9}C_8.{}^6C_4 + {}^{9}C_7.{}^6C_5 + {}^9C_6.{}^6C_6`

Problem no. 171 to 174 have been left as exercises.

175. Let us solve these one by one.

     i. :math:`2` points can be selected out of :math:`8` and :math:`1` from
        P and Q.

        Total no. of such triangles :math:`= {}^8C_2.{}^2C_1`

        :math:`1` point can be selected out of :math:`8` and both P and Q.

        Total no. of such triangles :math:`= {}^8C_1.{}^2C_2`

     ii. When P is included and Q is excluded :math:`2` points have to be chosen
         out of :math:`8`.

         Total no. of such triangles :math:`= {}^8C_1.{}^2C_2`
176. Total candidates are :math:`10`. Elector can vote for either :math:`2`
     vacancies or :math:`1` vacancy.

     Thus, total no. of ways he can vote :math:`= {}^{10}C_2 + {}^{10}C_1 = 55`

Problem no. 177 and 178 have been left as exercises.

179. From apples zero or more can be selected making it :math:`6` choices.

     From oranges zero or more can be selected making it :math:`5` choices.

     From mangoes zero or more can be selected making it :math:`4` ways.

     Total no. of choices :math:`= 120` but one of these contain no fruits.
     Thus, desired answer :math:`= 119`
180. Total no. of selections for red balls :math:`2^4 - 1` as one red ball
     has to be always selected.

     Total no. of selections for green balls :math:`2^3`

     Thus, desired answer :math:`= 15 . 8 = 120`
181. There are three different coins and to make a sum at least one has to be
     selected. Thus, desired answer :math:`= 2^3 - 1 = 7`
182. Following like previous problem, answer :math:`= 2^5 - 1 = 31`
183. The voter can vote for :math:`1, 2` or :math:`3` candidates. Total no. of
     ways the voter can vote :math:`= {}^6C_3 + {}^6C_2 + {}^6C_1 = 41`
184. Let there are vacancies for :math:`n` members. So no. of candidates
     :math:`= n + 1`

     Total no. of ways of voting :math:`{}^{n+1}C_n + {}^{n + 1}C_{n - 1}\ldots
     + {}^{n + 1}C_1`

     :math:`= 2^{n + 1} - 2 = 30 \Rightarrow n = 5`
185. Following the formula for distribution, no. of ways :math:`= \frac{12!}
     {4!}^3`

Rest of the problems are left as exercises.
