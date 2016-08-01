********************************
Complex Numbers Solutions Part 4
********************************
151. Clearly A is (1, 0) or (-1, 0). Let A is (1, 0). Then :math:`z = cos0 +
     isin0.` Clearly, B and C would be :math:`cos120 + isin120` and
     :math:`cos240 + isin240.`

152. Equation of line :math:`DM` can be found from straight line formula. Line
     :math:`AM` is perpendicular to :math:`BD` and :math:`BD = 2AC` so
     :math:`A` can be found.

153. Vector representing line joining :math:`z_1` and :math:`z_2` is :math:`z_2
     - z_1.` Now if this is rotated by 90 degree and shifted by :math:`z_2 -
     z_1` then it would represent side joining :math:`z_2` and :math:`z_3.`
     First let us rotate it so line segment is :math:`(z_2 - z_1)(cos90 +
     isin90)` i.e. :math:`i(z_2 - z_1).` Now shifting this by :math:`z_2 - z_1`
     we get :math:`z_3 - z_1 = iz_2 - iz_1 + z_2 - z_1` i.e. :math:`z_3 = -iz_1
     + (1 + i)z_2.` Similarly :math:`z_4` can also be found.

154. Clearly, :math:`z_2 = z_1(cos(120 + arg(z_1)) + isin(120 + arg(z_1)))`
     Similarly, :math:`z_3 = z_1(cos(240 + arg(z_1) + isin(240 + arg(z_1)))`
     which can be computed.

155. We know that three vertices represent an equilateral triangle if
     :math:`z_1^2 + z_2^2 + z_3^2 - z_1z_2 - z_2z_3 -z_1z_3 = 0.` Substituting
     the respective values we get

     .. math::
        a^2 - 1 + 2ai + 1 - b^2 + 2bi - a + b - abi - i = 0

     Equating real and imaginary parts we get

     .. math::
        a^ - b^2 - a + b = 0 \Rightarrow (a - b)(a + b + 1) = 0

     So either :math:`a = b` or :math:`a + b = -1` but if we choose :math:`a +
     b = -1` then the other part leads us to :math:`ab = 3` which is not
     solvable.

     Choosing :math:`a = b` the imaginary part becomes

     .. math::
        2a + 2b - ab - 1 = 0

        4a - a^2 - 1 = 0

        a = 2 \pm \sqrt{3}

     But :math:`a = 2 + \sqrt{3}` does not make triangle equilateral. So
     :math:`a = b = 2 - \sqrt{3}.`

156 and 157 are left as exercises to the reader.

158. Three points :math:`z_1, z_2` and :math:`z_3` will be collinear if

     .. math::
        \begin{vmatrix}
        z_1 & \overline{z_1}&1\\
        z_2 & \overline{z_2}&1\\
        z_3 & \overline{z_3}&1
        \end{vmatrix}=0

     Given our three points they become collinear when substituted in this
     equation.

159. If :math:`P` divides :math:`6i` and :math:`3` internally, then P is

     .. math::
        z = \frac{6i + 6}{2 + 1} = 2 + 2i

     If :math:`P` divides :math:`6i` and :math:`3` externally, then P is

     .. math::
        z = \frac{6i - 6}{2 - 1} = -6 + 6i

     The mid-point is :math:`4-2i`. Thus, locus of :math:`P` is a circle at
     center represented by complex number :math:`4 -2i` whose radius is
     :math:`\sqrt{4^2 + 2^2}` i.e. :math:`\sqrt{20}`.

     Clearly, :math:`z` satisfies :math:`z\overline{z} = (4+2i)2 +
     (4-2i)\overline{z}.`

160. Let three non-collinear points be :math:`A(z1), B(z2)` and
     :math:`C(z3)`. Let :math:`P(x)` be any point on the circle.
     Consider the following diagram:

     .. image:: _static/images/concyclic_complex.png
        :alt: Concylcic complex numbers

     Then either
     :math:`\angle ACB = \angle APB` (when they are in the same segment) or
     :math:`\angle ACB + \angle APB = \pi` (when they are in the opposite
     segment).

     .. math::
        arg\left(\frac{z_3 - z_2}{z_3 - z_1}\right) -
        arg\left(\frac{z - z_2}{z - z_1}\right) = 0

     or

     .. math::
        arg\left(\frac{z_3 - z_2}{z_3 - z_1}\right) +
        arg\left(\frac{z - z_1}{z - z_2}\right) = \pi

     .. math::
        arg\left[\left(\frac{z_3 - z_2}{z_3 - z_1}\right)\left(\frac{z -
        z_1}{z - z_2}\right)\right] = 0

     or

     .. math::
        arg\left[\left(\frac{z_3 - z_2}{z_3 - z_1}\right)\left(\frac{z -
        z_1}{z - z_2}\right)\right] = \pi

     In any case, we get :math:`\frac{(z_3 - z_2)}{(z_3 - z_1)}\frac{(z -
     z_1)}{(z - z_2)}` is purely real. Hence, proved.

161. Following from previous problem we have one equation for the condition for
     the four vertices to be cyclic. Also, sum of all four angles of the
     quadrilateral is equal to be :math:`2\pi`. From these two equations, the
     results can be deduced.

162. We have to prove that

     .. math::
        \begin{split}\begin{vmatrix}z_1 & z_1' & 1\\z_2 & z_2' & 1\\z_3 & z_3' &
        1\end{vmatrix} = 0\end{split}

     i.e.

     .. math::
        z_1({z^\prime}_2-{z^\prime}_3) +
        z_2({z^\prime}_3-{z^\prime}_1)+z_3({z^\prime}_1-{z^\prime}_2) = 0

     Consider following two triangles:

     .. image:: _static/images/two_triangles.png
        
     :math:`\triangle ABC` and :math:`\triangle PQR` will be similar if all
     their angles are equal and ratios of sides as well.

     i. :math:`\angle BAC = \angle QPR` i.e.

        .. math::
           :label: Equation 1

           arg\left(\frac{z_3 - z_1}{z_2 - z_1}\right) =
           arg\left(\frac{{z^\prime}_3 - {z^\prime}_1}{{z^\prime}_2 -
           {z^\prime}_1}\right)

     ii. :math:`\frac{AB}{PQ} = \frac{AC}{PR}` or :math:`\frac{AC}{AB} =
         \frac{PR}{PQ}`

         or

         .. math::
            :label: Equation 2

            \frac{z_3 - z_1}{z_2 - z_1} = \frac{{z^\prime}_3 -
            {z^\prime}_1}{{z^\prime}_2 - {z^\prime}_1}

     From (1) and (2), upon simplification we get the desired result.

163. From these two equation we have

     .. math::
        r = \frac{c - a}{b - a}

     and

     .. math::
        r = \frac{\omega - u}{v -u}

     Equating these two equations and taking modulus and argument, it follows
     from the previous problem that the two triangles are similar.

164. Let point :math:`z` lies on the perpendicular bisector then we know that
     all the points on perpendicular bisector will be equidistant from
     :math:`z_1` and :math:`z_2`. Thus, the equation is :math:`|z - z_1| = |z -
     z_2|`.

165. Mid-point of such a diameter is :math:`\frac{z_1 + z_2}{2}`. Let :math:`P`
     be a point lying on this circle, which, is represented by complex number
     :math:`z`. Thus, the equation of circle is :math:`\left|z - \frac{z_1 +
     z_2}{2}\right| = \left|z_1 - \frac{z_1 + z_2}{2}\right|` or :math:`\left|z -
     \frac{z_1 + z_2}{2}\right| = \left|z_2 - \frac{z_1 + z_2}{2}\right|`.

166. The equation can be written as :math:`\left|z - z_1\right| = c\left|z -
     z_2\right|`, which, when substituted with :math:`z_1 = x_1 + iy_1` and
     :math:`z_2 = x_2 + iy_2` gives following

     .. math::
        \left|(x - x_1) + i(y - y_1)\right| = c\left|(x - x_2) + i(y - y_2)\right|

     .. math::
        (x - x_1)^2 + (y - y_1)^2 = c^2\{(x - x_2)^2 + (y - y_2)^2\}

     which, upon simplification gives equation of a circle.

167. Given equation is :math:`\left|z\right| = 1` i.e. :math:`\left|z\right|^2
     = 1` i.e. :math:`z\overline{z} = 1` i.e. :math:`2z\overline{z} = 2` i.e.

     .. math::
        \frac{2}{z} = 2\overline{z}.
     
168. :math:`L.H.S. = \left|z_1 + z_2\right|` :math:`\Rightarrow \left|z_1 +
     z_2\right|^2 = {r^2}_1 + {r^2}_2 + 2r_1r_2cos(\theta_1 - \theta_2).`
     Similarly, :math:`\left(\left|z_1\right| + \left|z_1\right|\right)^2 =
     \left({r^2}_1 + {r^2}_2 + 2r_1r_2\right).`

     Thus, :math:`cos(\theta_1 - \theta_2) = 0` :math:`\Rightarrow arg(z_1) -
     arg(z_2) = 2n\pi.`

169. The equation :math:`\left|z - 2 + 2i\right| = 1` represents a circle with
     center at :math:`(2, -2i)` with unity radius. Since, the line between
     :math:`(2, -2i)` and origin will make an angle of :math:`45^\circ.` This
     is shown in the following diagram:

     .. image:: _static/images/169.png
        :alt: Problem no. 169

     Therefore, :math:`P` is :math:`2 - \frac{1}{\sqrt{2}} +
     i(\frac{1}{\sqrt{2}} -2)`

170. This is similar problem to previous one and has been left as an exercise
     to the reader.

171. From given equation,

     .. math::
        \left(\frac{\left|z-1\right| + 4}{3\left|z - 1\right| + 2}\right) =
        \frac{1}{2}

     :math:`\Rightarrow \left|z - 1\right| > 10`

     This represents area which lies outside a circle with center at :math:`(1,
     0)` and radius 100.

172. Let :math:`z = x + iy` then the equation becomes :math:`x^2 - y^2 + x +
     1 + iy(1 + 2x) = 0`. Clearly, imaginary part has to be zero i.e. either
     :math:`y = 0` or :math:`x = -\frac{1}{2}`. So, it is real and positive for
     all points on the x-axis. When, :math:`x = -\frac{1}{2}` the real part
     becomes :math:`y^2 = \frac{3}{4}`. Thus, for points :math:`x =
     -\frac{1}{2}` and :math:`-\frac{\sqrt{3}}{2}<y<\frac{\sqrt{3}}{2}` the
     required condition is satisfied.
     
173. First equation represents a circle whose center is at :math:`(0, ia)` and
     radius equal to :math:`\sqrt{a + 4}`. The second equation represents
     interior of a circle with center at :math:`(2, 0)` and radius unity. Now,
     for the possibility of existence of :math:`z` the two circles must
     intersect each other.

     :math:`C_1C_2 < r_1 + r_2` i.e. :math:`\sqrt{a^2 + 4} < 1 + \sqrt{a + 4}.`

     Solving this equation will yield the range of :math:`a` for which
     condition is satisfied.

174. This is similar problem to previous one and has been left as an exercise
     to the reader.

175. This is similar to 170 and has been left as an exercise to the reader.

176. This is similar to previous one and has been left as an exercise to the
     reader.

177. This is similar to 173 and 174 and has been left as an exercise to the
     reader.

178. :math:`Re(1 + i)z^2 = x^2 - y^2 -2xy > 0` which is true for :math:`y = 0`
     and values of :math:`y` within :math:`-1 \pm \sqrt{2}x.`

179. This is an easy problem and has been left as an exercise to the reader.

180. This is an easy problem and has been left as an exercise to the reader.
     
181. Consider the following picture:

     .. image:: _static/images/181.png
        :alt: Problem no. 181

     Given, :math:`b_1z_1 + b_3z_3 = -(b_2z_2 + b_4z_4)` and :math:`b_1 + b3 =
     -(b_2 + b_4)`

     .. math::
        \therefore \frac{b_1z_1 + b_3z_3}{b_1 + b_3} = \frac{b_2z_2 +
        b_4z_4}{b_2 + b_4}

     The point dividing :math:`AC` in the ratio :math:`b_3:b_1` is same as the
     point dividing :math:`BD` in the ratio :math:`b_4:b_2`. Let this point be
     :math:`O`.

     Let, :math:`b_1b_2\left|z_1 - z_2\right|^2 = b_3b_4\left|z_3 -
     z_4\right|^2`

     .. math::
        \Rightarrow b_1b_2AB^2 = b_3b_4CD^2

     .. math::
        b_1b_2(b_3^2 + b_4^2 -2b_3b_4cos\alpha) = b_3b_34(b_2^2 + b_1^2 -
        2b_1b_2cos\alpha)

     .. math::
        \Rightarrow \frac{b_3}{b_4} + \frac{b_4}{b_3} = \frac{b_1}{b_2} +
        \frac{b_2}{b_1} \Rightarrow \frac{b_3}{b_4} = \frac{b_1}{b_2}

     .. math::
        \Rightarrow \frac{AO}{OC} = \frac{BO}{OD}

     i.e. :math:`\triangle AOB` is similar to :math:`\triangle COB`. Similarly,
     :math:`\triangle AOD` is similar to :math:`\triangle BOC`
     i.e. :math:`\angle DAO = \angle OBC` i.e. points :math:`A, B, C` and
     :math:`D` are concyclic.

182. Let :math:`f(x) = k(x - \alpha)(x - \beta - i\gamma)(x - \beta + i\gamma)`
     i.e. :math:`f(x) = k(x - \alpha)[(x - \beta)]^2 + \gamma^2]`

     :math:`f^\prime(x) = k[{(x - \beta)^2 + \gamma^2} + (x - \alpha)2(x -
     \beta)]` i.e.  :math:`k[3x^2 -2(a + 2\beta)x + \beta^2 + \gamma^2 +
     2\alpha\beta]`

     Descriminant of above equation is given by

     :math:`D = 4[(\alpha + 2\beta)^2 -3(\beta^2 + \gamma^2 + 2\alpha\beta)]`
     i.e. :math:`4(\alpha^2 + \beta^2 -3\gamma^2 -2\alpha\beta)`

     The roots are complex if :math:`D < 0` i.e. :math:`(\beta - \alpha)^2 <
     3\gamma^2` i.e. :math:`\left|\beta - \alpha\right| <
     \sqrt{3}\left|\gamma\right|`.

     This is possible if :math:`A` lies inside the equilateral triangle with
     base :math:`BC`.

183. Let :math:`a = \alpha + i\beta` and :math:`z = x + iy`, then
     :math:`\overline{a}z + a\overline{z} = 0` becomes as :math:`\alpha x +
     \beta y = 0` or :math:`y = \left(\frac{-\alpha}{\beta}\right)x.`

     Its reflection in the x-axis is

     .. math::
        y = \frac{\alpha}{\beta}x or \alpha x - \beta y = 0

     .. math::
        \left(\frac{a + \overline{a}}{2}\right)\left(\frac{z +
        \overline{z}}{2}\right) - \left(\frac{a -
        \overline{a}}{2}\right)\left(\frac{z - 
        \overline{z}}{2}\right) = 0

     .. math::
        \Rightarrow az + \overline{a}\overline{z} = 0

184. .. math::
       z = \frac{\alpha + \beta t}{\gamma + \delta t} \Rightarrow (\gamma +
       \delta t)z = \alpha + \beta t \Rightarrow (\delta z - \beta)t = \alpha -
       \gamma z

     .. math::
        \Rightarrow t = \frac{\alpha - \gamma z}{\delta z - \beta}

     As :math:`t` is real,

     .. math::
        \frac{\alpha - \gamma z}{\delta z - \beta} = \frac{\overline{\alpha} -
        \overline{\gamma z}}{\overline{\delta z} - \overline{\beta}}

     .. math::
        \Rightarrow (\alpha - \gamma z)(\overline{\delta z} - \overline{\beta})
        = (\overline{\alpha} - \overline{\gamma z})(\delta z - \beta)

     .. math::
        :label: Equation 3

        \Rightarrow (\overline{\gamma}\delta -
        \gamma\overline{\delta})z\overline{z} +
        (\gamma\overline{\beta}-\overline{\alpha}\delta)z +
        (\alpha\overline{\delta} - \beta\overline{\gamma})\overline{z} =
        (\alpha\overline{\beta} - \overline{\alpha}\beta)

     Since :math:`\frac{\gamma}{\delta}` is real, :math:`\frac{\gamma}{\delta}
     = \frac{\overline{\gamma}}{\overline{\delta}}` or
     :math:`\gamma\overline{\delta} - \delta\overline{\gamma} = 0`

     Therefore, (3) can be written as

     .. math::

        \overline{a}z + a\overline{z} = c

     where :math:`a = i(\alpha\overline{\delta}) - \beta\overline{\gamma}` and
     :math:`c = i(\overline{\alpha}\beta - \alpha\overline{\beta})`

     Note that :math:`a \ne 0` for if :math:`a = 0` then

     .. math::
        \alpha\overline{\delta} - \beta\overline{\gamma} = 0

     .. math::
        \Rightarrow \frac{\alpha}{\beta} =
        \frac{\overline{\gamma}}{\overline{\delta}} = \frac{\gamma}{\delta}

     .. math::
        \Rightarrow \alpha\delta - \beta\gamma = 0.

     which is against the hypothesis.

     Also, note that :math:`c = i(\overline{\alpha}\beta -
     \alpha\overline{\beta})` is a purely real number. Thus, :math:`z =
     \frac{\alpha + \beta t}{\gamma + \delta t}` represents a straight line.

185.
     1. :math:`(3 + 3\omega + 5\omega^2)^2 - (2 + 6\omega + 2\omega^2)`
        i.e. :math:`(3 + 3\omega + 3\omega^2 + 2\omega^2)^2 - (2 + 2\omega +
        2\omega^2 + 4\omega)` i.e. :math:`4\omega^4 - 4\omega = 0 \because
        \omega^3 = 1`

     2. .. math::
          (2 - \omega)(2 - \omega^2)(2 - \omega^{10})(2 - \omega^{11})

        .. math::
           = (2 - \omega)(2 - \omega^2)(2 - \omega)(2 - \omega^2)

        .. math::
           = [(2 - \omega)(2 - \omega^2)(2 - \omega)(2 - \omega^2)]^2

        .. math::
           = (4 - 2\omega - 2\omega^2 + \omega^3)^2

        .. math::
           = (5 - 2(\omega + \omega^2))^2

        .. math::
           = (5 + 2)^2 = 49

     3. Evaluating,
     
        .. math::
          [(1 - \omega)(1 - \omega^2)]^2

        .. math::
           = [1 -(\omega + \omega^2) + \omega^3]^2

        .. math::
           = [1 - (-1) + 1]^2 = 9

     4. Evaluating,

        .. math::
           (-\omega -\omega)^5 + (-\omega^2 - \omega^2)^5

        .. math::
           = -32\omega^2 - 32\omega = 32

        5th and 6th parts are left as exercises for the reader.

186. .. math::
       a^2 + b^2 + c^2 - ab - bc - ca

       = a^2 + \omega^3b^2 + \omega^3c^2 + (\omega + \omega^2)ab + (\omega +
       \omega^2)bc + (\omega + \omega^2)ca

       = (a^2 + ab\omega + ca\omega^2) + (ab\omega^2 + b^2\omega^3 +
       bc\omega) + (ca\omega + bc\omega^2 + c^2\omega^3)

       = a(a + b\omega + c\omega^2) + b\omega^2(a + b\omega + c\omega^2) +
       c\omega(a + b\omega + c\omega^2)

       = (a + b\omega + c\omega^2)(a + b\omega^2 + c\omega)

187. Let :math:`x = \sqrt{-1 - \sqrt{-1 - \sqrt{-1 - ... to \infty}}}`

     :math:`\therefore x = \sqrt{-1 - x}` or :math:`x^2 = -1 - x` or :math:`x^2
     + x + 1`. Thus, the two roots are :math:`\omega` and :math:`\omega^2.`

188. This problem has been left as an exercise to the reader.
       
189.
     1. :math:`a^2 - ab + b^2 = a^2 + (\omega + \omega^2)ab + b^2\omega^3`

        :math:`\Rightarrow a^2 + ab\omega + ab\omega^2 + b^2\omega^3`

        :math:`\Rightarrow a(a + b\omega) + b\omega^2(a +b\omega)`

        :math:`(a +b\omega)(a + b\omega^2)`

     2. It can be solves as 1.

     3. :math:`a^3 + b^3 = (a + b)(a^ - ab + b^2)` which can be solved using 2.

     4. :math:`a^3 - b^3 = (a - b)(a^2 + ab + b^2)` which can be solved using 2
        as well.

     5. Given expression is :math:`(a + b + c)(a^2 + b^2 + c^2 - ab - bc - ca).`
        Now this can be solved using previous problems' solution

190. :math:`x^2 + x + 1 = 0 \Rightarrow x = \frac{-1 \pm \sqrt{3}}{2} = \omega
     or \omega^2`

     When :math:`x = \omega`, :math:`x^{3p} + x^{3q+1} + x^{3r+2}`

     :math:`= \omega^{3p} + \omega^{3q+1} + \omega^{3r+2}`

     :math:`= 1 + \omega + \omega^2 = 0`

     When :math:`x = \omega^2`, :math:`x^{3p} + x^{3q+1} + x^{3r+2}`

     :math:`= \omega^{6p} + \omega^{6q+2} + \omega^{6r+4}`

     :math:`= 1 + \omega + \omega^2 = 0`

     Since all the roots of the equation :math:`x^2 + x + 1` satisfies the
     given expression it is divisible by :math:`x^2 + x + 1.`

191. It is similar to 190 and has been left as an exercise to reader.

192. It is an easy problem and requires simplification and thus has been left
     as an exercise to the reader.

193. Similar to 192 it requires simple calculation and has been left as an
     exercise to the reader.

194. It is another easy problem and has been left as an exercise to the reader.

195. Hint: Use Euler'r formula and take i out from denominator to solve it.

196. Hint: Using quadratic equation formula the roots are:

     .. math::
        z = \frac{2 cos \theta \pm \sqrt{4 cos^2 \theta - 4}}{2} = cos\theta
        \pm isin\theta

     Now the expression can be easily evaluated using De'Moivre's formula.

197. Given, :math:`x_r = cos\frac{\pi}{2^rr} + isin\frac{\pi}{2^r} =
     e^{\frac{i\pi}{2^r}}`

     Thus, :math:`x_1x_2x_3 ... to \infty`

     :math:`= e^{i\pi\(\frac{1}{2} + \frac{1}{2^2} + \frac{1}{2^3} + ...)}`

     Using sum for infinite terms of a G.P.

     :math:`= e^{i\pi}`

     :math:`= -1`

198. :math:`L. H. S. = \left[\sqrt{2}\left\{cos\left(\frac{\pi}{4}\right) +
     isin\left(\frac{\pi}{4}\right)\right\}\right]^n +
     \left[\sqrt{2}\left\{cos\left(\frac{\pi}{4}\right) -
     isin\left(\frac{\pi}{4}\right)\right\}\right]^n`

     Simplifying this using De'Moivre's formula we get our desired result.

199. .. math::
       \sum_{k = 1}^6\left(sin\frac{2\pi k}{7} -icos\frac{2\pi k}{7}\right)


     .. math::
        = -i \sum_{k = 1}^6\left(cos\frac{2\pi k}{7} + isin\frac{2\pi k}{7}\right)
     
     .. math::
        = -i \sum_{k = 1}^6 e^{\frac{i2\pi k}{7}}

     .. math::
        = -i \left[e^{\frac{i2\pi}{7}} + e^{\frac{i4\pi}{7}} + .. +
        e^{\frac{i12\pi}{7}}\right]

     .. math::
        = -i \left[\left(\frac{1 - e^{2\pi}}{1 - e^{\frac{i2\pi}{7}}}\right) -
        1\right]

     .. math::
        = -i [0 - 1] = i

200. Let :math:`cot^{-1}p = \theta`, then :math:`cot\theta =
     p`. Now, L. H. S. is

     .. math::
        e^{2mi\theta}\left(\frac{icot\theta + 1}{icot\theta - 1}\right)^m  =
        e^{2mi\theta}\left[\frac{i(cot\theta - i)}{i(cot\theta + i)}\right]^m

     .. math::
        = e^{2moi\theta}\left(\frac{cos\theta - isin\theta}{cos\theta +
        isin\theta}\right)^m

     .. math::
        = e^{2mi\theta}\left(\frac{e^{-i\theta}}{e^i\theta}\right)^m =
        e^2mi\theta . e^{-2mi\theta} = e^0 = 1

