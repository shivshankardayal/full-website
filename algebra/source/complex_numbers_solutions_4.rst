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
     3\gamma^2` i.e. 


Rest of the problems are left as exercises.
