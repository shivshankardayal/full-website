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
     First let us rotate it so line segement is :math:`(z_2 - z_1)(cos90 +
     isin90)` i.e. :math:`i(z_2 - z_1).` Now shifting this by :math:`z_2 - z_1`
     we get :math:`z_3 - z_1 = iz_2 - iz_1 + z_2 - z_1` i.e. :math:`z_3 = -iz_1
     + (1 + i)z_2.` Similarly :math:`z_4` can also be found.

154. Clearly, :math:`z_2 = z_1(cos(120 + arg(z_1)) + isin(120 + arg(z_1)))`
     Similarly, :math:`z_3 = z_1(cos(240 + arg(z_1) + isin(240 + arg(z_1)))`
     which can be computed.

155. We know that three vertices represent an equilateral triangle if
     :math:`z_1^2 + z_2^2 + z_3^2 - z_1z_2 - z_2z_3 -z_1z_3 = 0.` Substituting
     the respecctive values we get

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

     But :math:`a = 2 + \sqrt{3}` does not make triangle equillateral. So
     :math:`a = b = 2 - \sqrt{3}.`

156 and 157 are left as exxercises to the reader.

158. Three points :math:`z_1, z_2` and :math:`z_3` will be collinear if

     .. math::
        \begin{vmatrix}
        z_1 & \overline{z_1}&1\\
        z_2 & \overline{z_2}&1\\
        z_3 & \overline{z_3}&1
        \end{vmatrix}=0

     Given our three points it becomes

     .. math::
        
Rest of the problems are left as exercises.
