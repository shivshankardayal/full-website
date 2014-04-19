*************************
Complex Numbers Solutions
*************************
1. Let :math:`\sqrt{7+8i} = a+ib \therefore 7+8i = a^2-b^2 + 2iab`

   Comparing real and imaginary parts we have,

   :math:`a^2 - b^2 = 7 \text{ and } 2ab = 8.` Now, we can write following

   :math:`(a^2+b^2)^2 = (a^2-b^2)^2 + 4a^2b^2 = 7^2 + 8^2 = 113`

   :math:`\Rightarrow a^2 + b^2 = \pm\sqrt{113}`

   Now we can rewrite this as :math:`2a^2 = 7 \pm \sqrt{113} \Rightarrow a =
   \pm \sqrt{\frac{7 \pm \sqrt{113}}{2}}` and similarly :math:`b = \pm \sqrt{
   \frac{\pm\sqrt{113} - 7}{2}}` thus we have our complex number :math:`a + ib.` Problem
   no. 2, 3, 4, and 5 can be solved similarly.

6. Given complex number can be rewritten as :math:`\frac{x^2}{y^2} +
   \frac{y^2}{x^2} -2 * \frac{i}{4}\left(\frac{x}{y} + \frac{y}{x}\right) +
   \left(\frac{i}{4}\right)^2 - \left(\frac{i}{4}\right)^2+ \frac{31}{16}`
   
   On simplification
   :math:`\Rightarrow \left(\frac{x}{y} + \frac{y}{x} - \frac{i}{4}\right)^2`
   
   Therefore, square root is
   :math:`\pm \left(\frac{x}{y} + \frac{y}{x} - \frac{i}{4}\right)`

   Problem no. 7, 8, 9 and 10 can be solved similarly.

11. Given expression can be rewritten as :math:`i^n(i^{80} + i^{50}) =
    i^n(i^{20*4} + i^{12*4 + 2}) = i^n(1 - 1) = 0.` Problem no. 12, 13, 14 and
    15 can be solved similarly.

16. Given,

    .. math::
       \frac{1}{1-cos\theta + 2i sin\theta} = \frac{1-cos\theta - 2i sin\theta}
	   {(1-cos\theta)^2 + 4 sin^2\theta}

    Now all that remains is isolating real and imaginary parts.

17. Given,

    .. math:: 
       \frac{(cosx + isinx)(cosy + isiny)}{(cotu +i)(i + tanv)} \\
	   
       = \frac{(cosxcosy - sinxsiny)+i(sinxcosy + cosxsiny)}{\frac{(cosu +
       isinu)(sinv + icosv)}{sinu cosv}}\\
       
       = \frac{sinu cosv(cos(x+y) + isin(x+y))}{cos(u+v) + isin(u+v)}
	   
    Now it is as simple as multiplying this with conjugate of denominator and
    expanding. However, there is a very neat way of solving this using Euler's
    formula so let us see that also.

    Using Euler's formula we can rewrite the fraction as

    .. math::
       sinu cosv\frac{e^{ix}e^{iy}} {e^{iu}e^{i\left(\frac{\pi}{2} - v\right)}}.`

    Now, all which remains is simplyfying this which the reader can do.
	
18. Let :math:`z=x+iy` then

    .. math::
       \Rightarrow~z^2 + |z| = x^2 - y^2 + 2ixy + \sqrt{x^2 + y^2} = 0

    Since both real and imaginary parts are zero we have following

    .. math::
       2xy = 0 \Rightarrow~ x=0 \text{ or } y=0 \\

       \text{If } x=0 \text{ then} \\

       -y^2 + \sqrt{y^2} = 0 \\

       \Rightarrow~y=\pm 1 \\

       \text{If } x=0 \text{ then} \\

       x^2 + \sqrt{x^2} = 0

       \Rightarrow~x=\pm 1

    But when :math:`x=\pm 1, x^2 + \sqrt{x^2} = 2 \ne 0`
    So our complex numebr is  0 or :math:`\pm i`. 

    **Second Method:** :math:`z^2 = -|z|` = a real number

    :math:`\therefore z` is a real number or is a purely imaginary number.

    **Case I:** When :math:`z` is real. Let :math:`z = x` then as shown above
    :math:`x=0.`

    **Case II:** When :math:`z` is purely imaginary. Let :math:`z = y` then as
    shown above :math:`y=\pm 1`

    Thus, :math:`z = 0, \pm i`

19. Let :math:`z = x + iy`. For part :math:`|z| = 0 \Rightarrow \sqrt{x^2 +
    y^2} = 0`

    :math:`\Rightarrow x^2 + y^2 = 0 \Rightarrow x = 0` and :math:`y = 0`

    If :math:`z = 0 \Rightarrow x = 0` and :math:`y = 0 \Rightarrow |z| = 0`.

20. .. math::
      \frac{z_1z_2}{\overline{z_1}} = \frac{(1 - i)(2 + 7i}{1 + i} =
      \frac{9 + 5i}{1 + i} = \frac{(9 + 5i)(1 - i)}{2} = \frac{14 - 4i}{2}

      Im\left(\frac{z_1z_2}{\overline{z_1}}\right) = -2

21. Given :math:`(x + 5i) - (3 - iy)=7 + 8i \Rightarrow (x - 3) + (5 - y)i =
    7 + 8i.` Equating real and imaginary parts we have :math:`x - 3 = 7
    \Rightarrow x = 10` and :math:`5 - y = 8 \Rightarrow y = 13`

    Problem 22 is similar and is left as an exercise to the reader.

23. Given that :math:`|z| = 1 \Rightarrow x^2 + y^2 = 1`. Now we need to
    evaluate :math:`\frac{z - 1}{z + 1} \Rightarrow \frac{(x - 1) + iy}{(x + 1)
    + iy}`. Multiplying and dividing by conjugate of denominator we have
    :math:`\frac{((x - 1) + iy)(x + 1) - iy)}{(x + 1) + iy)(x + 1) - iy)}
    \Rightarrow \frac{(x^2 + y^2 - 1) + i(xy + y - xy + y)}{(x + 1)^2 + y^2}`.
    Now we know that from given equality real part of previous expression is
    zero therefore it is purely imaginary.

24. Given, :math:`|z - i| < 1` we have following

    .. math::
       |z + 12 -6i| = |(z - i) + (12 - 5i)| \le |z - i| + |12 - 5i|

       \Rightarrow |z + 12 - 6i| < 1 + 13 = 14

25. .. math::
      |z + 6| = |2z + 3| \Rightarrow x^2 + 12x + 36 + y^2 = 4x^2 + 12x + 9 +
      4y^2 \Rightarrow 3x^2 + 3y^2 = 27

      \Rightarrow x^2 + y^2 = 9 \Rightarrow |z| = 3

26. Given, :math:`\sqrt{a - ib} = x - iy \Rightarrow a - ib = x^2 - y^2 -
    i2xy`. Equating real and imaginary parts we have, :math:`a = x^2 - y^2
    \text{and} b = 2xy`. :math:`\therefore \sqrt{a + ib} = \sqrt{x^2 - y^2 +
    i2xy} = x + iy`.

27. We will solve this problem by method of negation. Let us say there is a
    complex number :math:`y + iz` which is root of this equation. Therefore,
    this root will satisfy this equation. Hence,

    .. math::
       \frac{A^2}{y + iz -a} + \frac{B^2}{y + iz -b} + ... + \frac{H^2}{y + iz
       -h} = y + iz + l

    Multiplying and dividng each term with conjugate of denominator we get

    .. math::
       \frac{A^2(y - a -iz)}{(y - a)^2 + z^2} + \frac{B^2(y - b -iz)}{(y -
       b)^2 + z^2} + \frac{C^2(y - c -iz)}{(y - c)^2 + z^2} + ... +
       \frac{H^2(y - h -iz)}{(y - h)^2 + z^2} = y + iz + l

    Considering imaginary parts only, we have

    .. math::
       -iz\left[\frac{A^2}{(y - a)^2 + z^2} + \frac{B^2}{(y - b)^2 + z^2} +
       \frac{C^2}{(y - c)^2 + z^2} + ... + \frac{H^2}{(y - h)^2 + z^2}\right] = iz

       \Rightarrow iz\left[ 1 + \frac{A^2}{(y - a)^2 + z^2} + \frac{B^2}{(y -
       b)^2 + z^2} + \frac{C^2}{(y - c)^2 + z^2} + ... + \frac{H^2}{(y - h)^2 +
       z^2}\right] = 0

    Since the expression has one within bracket it is greater
    than 1. :math:`\therefore iz = 0 \Rightarrow z = 0`. Hence, proven.

28. Since our complex number is unimodular :math:`|z| = 1`. Let, :math:`z =
    cos\theta + isin\theta`. Eqauting it to given equivalent ratio we have

    .. math::
       cos\theta + isin\theta = \frac{c + i}{c - i} = \frac{(c + i)(c +
       i)}{(c - i)(c + i)}

       \Rightarrow cos\theta + isin\theta = \frac{c^2 - 1 + 2ci}{c^2 + 1}

    Equating real and imaginary parts,

    .. math::
       cos\theta = \frac{c^2 - 1}{c^2 + 1} \Rightarrow c^2 =
       cot^2\frac{\theta}{2} \Rightarrow c = \pm cot\frac{\theta}{2}

       \text{And} sin\theta = \frac{2c}{c^2 + 1} \Rightarrow c =
       cot\frac{\theta}{2}, tan\frac{theta}{2}

    From these two common value of :math:`c` is :math:`cot\frac{\theta}{2}`
    where :math:`\theta \ne 2n\pi`.[:math:`\because z` is not purely real.]

    :math:`\therefore z = \frac{c + i}{c - i}`.

29. Let us name the given number as :math:`z`.

    .. math::
       z = \frac{sin\frac{x}{2} + cos\frac{x}{2} - itanx}{1 + 2isin\frac{x}{2}}
       
       \Rightarrow z = \frac{(sin\frac{x}{2} + cos\frac{x}{2} - itanx)(1 -
       2isin\frac{x}{2})}{(1 + 2isin\frac{x}{2})(1 - 2isin\frac{x}{2})}

    Since :math:`z` is real :math:`Im(z) = 0` hence equating imaginary part of
    above to zero we get following since denominator is real:

    .. math::
       -tanx - 2sin\frac{x}{2}sin\frac{x}{2} -2sin\frac{x}{2}cos\frac{x}{2} = 0

       \Rightarrow 2sin\frac{x}{2}\left(sin\frac{x}{2} +
       cos\frac{x}{2}\right) + \frac{2sin\frac{x}{2}cos\frac{x}{2}}{cosx} = 0

       \Rightarrow sin\frac{x}{2} = 0 \Rightarrow x = 2n\pi \text{where}
       n = 0, 1, 2, 3, ...
       
       \text{or} \left(sin\frac{x}{2} + cos\frac{x}{2}\right)cosx +
       cos\frac{x}{2} = 0

       \Rightarrow 2sin^3\frac{x}{2} - 2cos^3\frac{x}{2} - sin\frac{x}{2} = 0

       \Rightarrow tan^3\frac{x}{2} - tan\frac{x}{2} - 2 = 0

    Let :math:`\alpha` be a root which satisfies this equation. Hence,
    :math:`x = 2n\pi + \alpha, n \in I`.

30. Let :math:`z = \sqrt{3} + 2i` then :math:`\overline{z} = \sqrt{3} - 2i,
    |z| = \sqrt{3 + 4} = \sqrt{7}` and :math:`arg(z) =
    tan^{-1}\frac{\sqrt{3}}{2}.`

31. Given complex number is:

    .. math::
       z = \frac{a + ib}{x - iy} = \frac{(a + ib)(x + iy)}{x^2 + y^2} =
       \frac{(ax -by) + i(ay + bx)}{x^2 + y^2}

       \Rightarrow r = |z| = \frac{(ax -by)^2 + (ay + bx)^2}{(x^2 + y^2)^2}

       \Rightarrow arg(z) = \theta = tan^{-1}\frac{ax - by}{ay + bx}

32. Let :math:`z_1 = x_1 + iy_1` and :math:`z_2 = x_2 + iy_2`. Given,

    .. math::
       |z_1 + z_2|^2 + |z_1 - z_2|^2 = (x_1 + x_2)^2 + (y_1 + y_2)^2 + (x_1 - x_2)^2 +
       (y_1 - y_2)^2
       
       \Rightarrow 2{(x_1^2 + y_1^2) + (x_2^2 + y_2^2)} = 2(|z_1|^2 + |z_2|^2).

33. Given,

    .. math::
       |z_1 + z_2|^2 = (x1 + x_2)^2 + (y_1 + y_2)^2 = x_1^2 + x_2^2 + 2x_1x_2 + y_1^2 +
       y_2^2 + 2y_1y_2 = |z_1|^2 + |z_2|^2 + 2x_1x_2 + 2y_1y_2

       \Rightarrow |z_1|^2 + |z_2|^2 + 2Re{(x_1 + iy_1)(x_2 -iy_2)} = |z_1|^2 +
       |z_2|^2 + 2Re(z_1\overline{z_2})

       \text{Also, } \Rightarrow |z_1|^2 + |z_2|^2 + 2Re{(x_1 - iy_1)(x_2
       +iy_2)} = |z_1|^2 + 
       |z_2|^2 + 2Re(z_2\overline{z_1}).

34. .. math::
      \text{R.H.S. = } \left|\frac{1}{z_1} + \frac{1}{z_2}\right| 

      \Rightarrow \left|\frac{z_2 + z_1}{z_1z_2}\right|

      \because |z_1| = 1 \text{and } |z_2| = 1 \therefore |z_1z_2| = 1

      \Rightarrow \left|\frac{z_2 + z_1}{z_1z_2}\right| = |z_1 + z_2|

35. Given,

    .. math::
       |z -2| = 2|z - 1| \Rightarrow x^2 - 4x + 4 = 4x^2 -8x +4 + 4y^2

       \Rightarrow 3x^2 + 3y^2 = 4x \Rightarrow |z|^2 = \frac{4}{3}Re(z).

36. Given,

    .. math::
       \sqrt[3]{a+ib} = x+iy \Rightarrow a + ib = x^3 -3xy^2 + i(3x^2y -y^3)

    Equating real and imaginary parts

    .. math::
       a = x^3 - 3xy^2 \text{and } b = 3x^2y -y^3

       \Rightarrow \frac{a}{x} = x^2 - 3y^2 \text{and } \frac{b}{y} = 3x^2 -
       y^2

    Adding both

    .. math::
       \frac{a}{x} + \frac{b}{y} = 4(x^2 - y^2).

37. Given,

    .. math::
       x + iy = \sqrt{\frac{a + ib}{c + ib}} \Rightarrow (x + iy)^2 = \frac{a +
       ib}{c + id}

       \Rightarrow |(x + iy)^2| = \left|\frac{a + ib}{c + id}\right| =
       \frac{|a + ib|}{|c + id|}

       \Rightarrow (x^2 + y^2)^2 = \frac{a^2 + b^2}{c^2 + d^2}.

38. Given,

    .. math::
       \frac{3}{2 + cos\theta + isin\theta} = a + ib \Rightarrow \frac{3(2 +
       cos\theta -isin\theta)}{(2 + cos\theta + isin\theta)(2 + cos\theta -
       isin\theta)} = a + ib

    Taking 3 to denominator and equating real and imaginary parts we have

    .. math::
       a = 2 + cos\theta \text{and } b = sin\theta

       \Rightarrow a^2 + b^2 =  4 + 4cos\theta + cos^2\theta + sin^2\theta

       \Rightarrow 5 + 4cos\theta = 8 + 4cos\theta - 3 = 4a - 3.

39. Given,

    .. math::
       |2z - 1| = |z - 2|, \text{let } z = x + iy

       \Rightarrow 4x^2 - 4x + 1 + 4y^2 = x^2 - 4x +4 + y^2

       \Rightarrow 3x^2 + 3y^2 = 3 \Rightarrow x^2 + y^2 = 1 \Rightarrow |z|
       = 1.

40. Given,

    .. math::
       m + in = \frac{1 - ix}{1 + ix} = \frac{1 - x^2 - 2ix}{1 + x^2}

    Equating real and imaginary parts, we get

    .. math::
       m = \frac{1 - x^2}{1 + x^2} \text{and } n = -\frac{2x}{1 + x^2}

       \therefore m^2 + n^2 = \frac{(1 - x^2)^2}{(1 + x^2)^2} +
       \frac{4x^2}{(1 + x^2)^2} = 1.

41. This is similar to problem 40 and hence left as an exercise to reader.

42. Given,

    .. math::

       \left(1+i\frac{x}{a}\right) \left(1+i\frac{x}{c}\right)
       \left(1+i\frac{x}{c}\right) ... = A+iB

       \text{Let, } L.H.S. = z1 \text{and } R.H.S. = z2

       \because z1 = z2 \therefore z1\overline{z1} = z2\overline{z2}

       \therefore \left(1+\frac{x^2}{a^2}\right) \left(1+\frac{x^2}{b^2}\right)
       \left(1+\frac{x^2}{c^2}\right) ... = A^2+B^2 [\because \overline{z1z2} =
       \overline{z1}~\overline{z2}]

43. Let :math:`z_1 = x_1 + iy_1` and :math:`z_2 = x_2 + iy_2`. Then we have,

    .. math::
       \frac{z_1 + z_2}{z_1 - z_2} = \frac{((x_1 + x_2) + i(y_1 + y_2))((x_1 -
       x_2)  + i(y_1
       - y_2))}{((x_1 - x_2) - i(y_1 - y_2))((x_1 - x_2) + i(y_1 - y_2))}

    Neglecting the denominator

    .. math::
       \Rightarrow \text{Numerator } = x_1^2 -x_2^2 + y_1^2 - y_2^2 + i(x_1y_2 -
       x_2y_1)

    Now it is given that :math:`|z_1| = |z_2|`. Hence result is either 0 or
    purely imaginary based on the fact if :math:`z_1` is purely real and
    :math:`z_2` is purely imaginary or not.

44. Let, :math:`z = x + iy`. Now given is that,
    
    .. math::
       1\cap z \Rightarrow 1 + 0i \cap x + iy \Rightarrow 1 \le x \text{and } 0 \le y.

    Now,

    .. math::
       \text{Let, } p = \frac{1 - z}{1 + z} = \frac{(1 - x + iy)(1 + x -
       iy)}{(1 + x + iy)(1 + x - iy)} = \frac{1 - x^2 - y^2 - i2y}{(1 + x)^2 +
       y^2}

       \because x \ge 1 \text{ and } y \ge 0 \therefore Re(p) \le 0 \text{and }
       Im(p) \le 0.

45. From the given equation we can deduce that

    .. math::
       z = - \frac{1}{|z| + a}

    Since :math:`a > 0` and :math:`|z| > 0, z` is a negative real number from
    previous equation.

46. Given,

    .. math::
       x + iy + \alpha \sqrt{(x - 1)^2 + y^2} + 2i = 0

    Equating real and imaginary parts

    .. math::
       y + 2 = 0 \Rightarrow y = -2 \text{and } x + \alpha \sqrt{(x - 1)^2 +
       y^2} = 0

    Substituing value of :math:`y` in second equation

    .. math::
       \alpha \sqrt{x^2 -2x + 5} = -x \Rightarrow (\alpha^2 - 1)x^2 -
       2\alpha^2x + 5\alpha^2 = 0

    Solving this quadratic equation is left as an exercise.

47. This is similar to problem no. 46 and is left as an exercise. Reader is
    implored to study chapter on quadratic equations for this.

48. .. math::
      (x + iy)^5 = x^5 + i5x^4y - 10x^3y^2 - i10x^2y^3 + 5xy^4 + iy^5

      = (x^5 -10x^3y^2 + 5xy^4) + i(5x^4y -10x^2y^3 + y^5)

    Taking modulus and squaring

    .. math::
       (x^2 + y^2)^5 = (x^5 - 10x^3y^2 + 5xy^4)^2 + (5x^4y - 10x^2y^3 + y^5)^2

49. .. math::
      (x + ia)(x + ib)(x + ic) = [x^2 -ab + i(a + b)x](x + ic)

      = (x^3 - abx - acx -bcx) + i(cx^2 -abc + ax^2 + bx^2)

    Taking modulus and squaring

    .. math::
      (x^2 + a^2)(x^2 + b^2)(x^2 + c^2) = (x^3 - abx - acx -bcx)^2 + (cx^2 -abc + ax^2 + bx^2)^2

50. .. math::
      (1 + x)^n = a_0 + a_1x + a_2x^2 + a_3x^3 + a_4x^4 + ...

    Substituing :math:`x = i` we get

    .. math::
       (1 + i)^n = a_0 + ia_1 - a_2 - ia_3 + a_4 + ...

    Taking modulus and squaring

    .. math::
       2^n = (a_0 - a_2 + a_4 - ...)^2 + ( a_1 - a_3 + a_5 - ...)^2

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
       z = t(\frac{z_1}{|z_1|} + \frac{z_2}{|z_2|}), \text{ where } t \text{ is
       an arbitrary number.}

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

101. Since :math:`P, A, B` are collinear

     .. math::
        \therefore \begin{vmatrix}z & \overline{z} & 1\\a & \overline{a} & 1\\
        b & \overline{b} & 1\end{vmatrix} = 0

        \Rightarrow z(\overline{a} - \overline{b}) - \overline{z}(a - b) +
        (a\overline{b} - \overline{a}b) = 0

     Similarly, :math:`P, C, D` are collinear

     .. math::
   
        \Rightarrow z(\overline{c} - \overline{d}) - \overline{z}(c - d) +
        (c\overline{d} - \overline{c}d) = 0

     Multiplying the first equation with :math:`c - d` and second with :math:`a
     - b` and subtracting resulting equations we get

     .. math::
        z(\overline{a} - \overline{b})(c - d) - \overline{z}(\overline{c} -
        \overline{d})(a - b) = (c\overline{d} - \overline{c}d)(a - b) -
        (a\overline{b} - \overline{a}b)(c - d)

     Given that :math:`a, b, c, d` all lie on the circle :math:`|z| = r
     \therefore |z|^2 = r^2 \Rightarrow z\overline{z} = r^2 \Rightarrow
     \overline{z} = \frac{r^2}{z}`

     Substituting accordingly in previous equation

     .. math::
        z\left(\frac{r^2}{a} - \frac{r^2}{b}\right)(c - d) -
        z\left(\frac{r^2}{c} - \frac{r^2}{d}\right)(a - b) =
        \left(\frac{cr^2}{d} - \frac{dr^2}{c}\right)(a - b) -
        \left(\frac{ar^2}{b} - \frac{br^2}{a}\right)(c - d)

     Solving this will yield desired result.

102. We have,

     .. math::
        \frac{z + 1}{z - 2} = \frac{3 + t + i\sqrt{3 - t^2}}{1 + t + i\sqrt{3 -
        t^2}}

        \therefore \left|\frac{z + 1}{z - 1}\right|^2 = \frac{(3 + t)^2 + 3 -
        t^2}{(1 + t)^2 + 3 - t^2} = \frac{6(t + 2)}{2(t + 2)} = 3

     Thus modulus of required fraction is independent of :math:`t`.

     Also, :math:`z = x + iy = 2 + t + i\sqrt{3 - t^2} \Rightarrow y = 3 - (x -
     2)^2` or :math:`(x - 2)^2 + y^2 = 3.`

     Thus locus of complex number represents a circle with center at :math:`(2,
     0)` having radius 3.

103. Given,

     .. math::
        \begin{vmatrix}a & b & c\\b & c & a\\c & a & b\end{vmatrix} = 0

        \Rightarrow a^3 + b^3 + c^3 - 3abc = 0

        \Rightarrow (a + b + c)[a^2 + b^2 + c^2 - ab -bc - ca] = 0

        \Rightarrow (a - b)^2 + (b - c)^2 + (c - a)^2 = 0

        \Rightarrow a = b = c [\because a + b + c \ne 0 \because z_1 \ne = 0]

     The circle made by these is shown below:

     .. tikz::

        \draw (0, 0) circle(1);
        \draw (0, 1) -- (-.707, -.707) -- (.707, -.707) -- cycle;
        \draw (-.707, -.707) -- (0, 0) -- (.707, -.707);
        \draw (0, 0) node[anchor = south] {$O$};
        \draw (-3mm, -3mm) arc(210:340:3mm);

     Now OA = OB = OC where O is the origin and A, B and C are the points
     representing :math:`z_1, z_2` and :math:`z_3` respectively.

     :math:`\therefore` O is the circumcenter of :math:`\triangle ABC.`

     Now

     .. math::

        arg\left(\frac{z_3}{z_2}\right) = \angle BOC = 2\angle BAC
        
        = 2arg\left(\frac{z_3 - z_1}{z_2 - z_1}\right) = arg\left(\frac{z_3 -
        z_1}{z_2 - z_1}\right)^2

     Hence, proven.

104. .. math::
       z_2 = \frac{OQ}{OP}z_1e^{i\theta} = cos\theta z_1e^{i\theta}

     and

     .. math::
        z_3 = \frac{OR}{OP}z_1e^{i2\theta} = cos2\theta z_1e^{i2\theta}

     Hence,

     .. math::
        z_2^2cos2\theta = z_1z_3cos^2\theta.

105. Given circles are :math:`|z| = 1` or :math:`x^2 + y^2 - 1 = 0` and
     :math:`|z - 1| = 4` or :math:`x^2 + y^2 -2x - 15 = 0.`

     Let the circles cut by these two circles orthogonally is

     .. math::
        x^2 + y^2 + 2gx + 2fy +c = 0

     Now since first two circles cut this third one orthogonally

     .. math::
        \therefore 2g.0 + 2f.0 = c - 1 \Rightarrow c = 1

     and

     .. math::
        \therefore 2g(-1) + 2f.0 = c - 15 \Rightarrow g = 7

     Therefore the required circles are

     .. math::
        x^2 + y^2 + 14x + 2fy + 1 = 0

        |z + 7 + if| = \sqrt{48 + f^2}

106. Given :math:`|z + 3| = t^2 - 2t + 6` represents a circle with center
     (-3, 0) and radius :math:`t^2 -2t + 6.` The inequality :math:`|z -
     3\sqrt{3}i| < t^2` means :math:`z` lies in the interior of circle having
     center at :math:`(0, 3\sqrt{3})` having radius :math:`t^2.`

     Let A is center of first circle and B is center of second circle. Clearly
     when both the circles are disjoint or touching then no solution is
     possible.

     Further solution is left as an exercise.

107. Let :math:`z = x + iy`
 
     .. math::
        \frac{az + b}{cz + d} = \frac{ax + iay + b}{cx + icy + d} =
        \frac{[(ax + b) + iay][(cx + d) - icy]}{(cx + d)^2 + d^2}

        Im\left(\frac{az + b}{cz + d}\right) = \frac{ay(cx + d) - cy(ax +
        b)}{(cx + d)^2 + d^2}

        \Rightarrow \frac{ady - bcy}{(cx + d)^2 + d^2}

     Now since :math:`ad > bc` sign is same as :math:`y` i.e. positive. Hence,
     proven.

108. Given,

     .. math::
        z_1 = \frac{i(z_2 + 1)}{z_2 - 1} \Rightarrow x_1 + iy_1 = \frac{i(x_2 +
        iy_2 + 1)}{(x_2 - 1) + iy_2}

        = \frac{[-y_2 + i(x_2 + 1)][(x_2 - 1) + iy_2]}{(x_2 - 1)^2 + y_2^2}

     Now equating for real part and then evaluating the desired equation will
     yield the result.

109. :math:`sin25\theta + icos25\theta` This question is left as en exercise.

110. Let :math:`z = x + iy.` Now we have

     .. math::
        z^2 + |z| = x^2 - y^2 + i2xy + \sqrt{x^2 - y^2} = 0

     Equating imaginary parts we have :math:`2xy = 0` which means either
     :math:`x = 0` or :math:`y = 0.` Let :math:`y = 0` then we have

     .. math::
        x^2 + \sqrt{x^2} = 0

     Since :math:`x` is real the only possible solution is :math:`x = 0`. So
     :math:`z = 0.`

     If :math:`x = 0` then weh have

     .. math::
        y^2 + \sqrt{-y^2} = 0

        y^4 + y^2 = 0

        y^2 = -1 \Rightarrow y = \pm i

     Thus we have :math:`z = \pm i.`

111. Problem no. 111 to 118 have been left as exercises ot the reader.

119. Given,

     .. math::
        |1 - \overline{z_1}z_2|^2 - |z_1 - z_2|^2

        = (1 - \overline{z_1}z_2)(1 - z_1\overline{z_2}) - (z_1 -
        z_2)(\overline{z_1} - \overline{z_2}) [\because |z|^2 = z\overline{z}]

        = (1 - \overline{z_1}z_2 - z_1\overline{z_2} + |z_1|^2|z_2|^2) -
        (|z_1|^2 - \overline{z_1}z_2 - z_1\overline{z_2} + |z_2|^2)

        = (1 - |z_1|^2 - |z_2|^2 + |z_1|^2|z_2|^2)

        = (1 - |z_1|^2)(1 - |z_2|^2)

120. Consider two complex numbers :math:`z_1 = a_1 + ib_1` and :math:`z_2 = a_2
     + ib_2.` Now we have to prove :math:`|z_1 + z_2| \le |z_1| + |z_2|` which
     can be further extended to prove the result.

     .. math::
        \sqrt{(a_1 + a_2)^2 + (b_2 + b_2)^2} \le \sqrt{a_1^2 + b_1^2} +
        \sqrt{a_2^2 + b_2^2}

     Squaring both sides and simplifying we get

     .. math::
        a_1a_2 + b_1b_2 \le \sqrt{(a_1^2 + b_1^2)(a_2^2 + b_2^2)}

        \Rightarrow (a_1a_2 + b_1b_2)^2 - (a_1^2 + b_1^2)(a_2^2 + b_2^2) \le 0

        \Rightarrow -(a_1b_2 - a_2b_1)^2 \le 0

     which is true. Hence, proven.

121. We have,

     .. math::
        \left|\frac{\overline{z_1} - 2\overline{z_2}}{2 -
        z_1\overline{z_2}}\right| = 1

        \Rightarrow |\overline{z_1} - 2\overline{z_2}|^2 = |2 -
        z_1\overline{z_2}|^2

        \Rightarrow (\overline{z_1} - 2\overline{z_2})(z_1 - 2z_2) = (2 -
        z_1\overline{z_2})(2 - \overline{z_1}z_2)

        \Rightarrow |z_1|^2 - 2z_1\overline{z_2} - 2\overline{z_1}z_2 +
        4|z_2|^2 = 4 - 2z_1\overline{z_2} - 2\overline{z_1}z_2 + |z_1|^2|z_2|^2

        \Rightarrow |z_1|^2|z_2|^2 - 4|z_2|^2 - |z_1|^2 - 4 = 0

        \Rightarrow \because |z_1| \ne 1 |z_2| = 2

122. It can be solves similarly as 121 and is left as an exercise.

123. We have,

     .. math::
        \left|\frac{z_1 + z_2}{2} + \sqrt{z_1z_2}\right| + \left|\frac{z_1 +
        z_2}{2} - \sqrt{z_1z_2}\right|

        = \frac{1}{2}\left|(\sqrt{z_1} + \sqrt{z_2})^2\right| +
        \frac{1}{2}\left|(\sqrt{z_1} - \sqrt{z_2})^2\right|

        = |z_1| + |z_2|

124. From problem no. 54 it follows that :math:`|a + \sqrt{a^2 - b^2}| + |a -
     \sqrt{a^2 - b^2}| = |a + b| + |a - b|.`

     Substituting :math:`a = \beta` and :math:`b = \sqrt{\alpha\gamma}` we have

     .. math::
        |\beta + \sqrt{\alpha\gamma}| + |\beta - \sqrt{\alpha\gamma}|

        = |\alpha|\left(|\frac{\beta}{\alpha} + \sqrt{\frac{\gamma}{\alpha}}| +
        |\frac{\beta}{\alpha} - \sqrt{\frac{\gamma}{\alpha}}|\right)

        = |alpha|\left(|-z_1 - z_2 + \sqrt{z_1z_2}| + |-z_1 - z_2 -
        \sqrt{z_1z_2}|\right)

        = |\alpha|(|z_1| + |z_2|)

125. We have,

     .. math::
        |a| = 1 \Rightarrow |a|^2 = 1 \Rightarrow a\overline{a} = 1 \Rightarrow
        \overline{a} = \frac{1}{a}

     From this we can write

     .. math::
        \frac{1}{a} + \frac{1}{b} + \frac{1}{c} = \overline{a} + \overline{b} +
        \overline{c} = 3

126. Given,

     .. math::
        |z + 4| \le 3 \Rightarrow |z + 1 + 3| \le 3 \Rightarrow |z + 1| + 3 \le
        3 [\because |z_1 + z_2| \le |z_1| + |z_2|]

        |z + 1| \le 0

     Following similarly

     .. math::
        |z + 4| = |z + 1 + 3| \ge |z + 1| - 3 \Rightarrow |z + 1| \ge 6

     So least value is 0 and greatest value is 6.

127. Let :math:`z_1 = r_1cos\theta_1 + isin\theta_1` and :math:`z_2 =
     r_2cos\theta_2 + isin\theta_2.` Now it can be easily shown that

     .. math::
        4|z_1 + z_2|^2 - (|z_1| + |z_2|)^2\left(\frac{z_1}{|z_2|} +
        \frac{z_2}{|z_2|}\right)^2 \ge 0

128. Given equation is :math:`z^2 + az + b = 0.` Let :math:`p, q` are two of
     its roots. Then we have :math:`p + q = -a` and :math:`pq = b.` Taking
     modulus of both we have :math:`|p + q| = |a|` and :math:`|pq| = b.` Now it
     is required that :math:`|p| = |q| = 1.` Therefore we have :math:`|p + q|
     \le |p| + |q| = 2 \therefore |a| \le 2.` Similarly :math:`|b| = |pq| =
     |p||q| = 1.` Since :math:`p, q` have unit modullii we can have them as
     :math:`p = cos\theta_1 + isin\theta_1` and :math:`q = cos\theta_2 +
     isin\theta_2.`

     .. math::
        pq = (cos\theta_1 + isin\theta_1)(cos\theta_2 + isin\theta_2)

        = cos(\theta_1 + \theta_2) + isin(\theta_1 + \theta_2)

        \therefore arg(b) = arg(pq) = \theta_1 + \theta_2

        p + q = cos\theta_1 + isin\theta_1 + cos\theta_2 + isin\theta_2

        = cos^2{\frac{\theta_1}{2}} + i^2sin^2{\frac{\theta_1}{2}} +
        i2sin{\frac{\theta_1}{2}}cos{\frac{\theta_1}{2}} +
        cos^2{\frac{\theta_2}{2}} + i^2sin^2{\frac{\theta_2}{2}} +
        i2sin{\frac{\theta_2}{2}}cos{\frac{\theta_2}{2}}

        = cos\frac{\theta_1 + \theta_2}{2} + isin\frac{\theta_1 + \theta_2}{2}

        \therefore arg(a) = arg(p + q) = \frac{\theta_1 + \theta_2}{2}

        \therefore argb = 2arga

129. Let :math:`a = x + iy.` First we consider first two inequalities

     .. math::
        |z| \le |Re(z)| + |Im(z)|

        \Rightarrow \sqrt{x^2 + y^2} \le x + y

     Sqauting we have

     .. math::
        x^2 + y^2 \le x^2 + y^2 + 2xy \Rightarrow 2xy \ge 0

     which is true. Now we consider last two inequalities

     .. math::
        |Re(z)| + |Im(z)| \le \sqrt{2}|z|

        \Rightarrow x + y \le \sqrt{2(x^2 + y^2)}

     Squaring we get

     .. math::
        x^2 + y^2 + 2xy \le 2(x^2 + y^2) \Rightarrow (x - y)^2 \ge 0

     which is also true. Hence, proven.

130. Translating the given equation we have

     .. math::
        |z|^2 - 2|z| - 4 \ge 0

     The greatest root of this equation is :math:`\sqrt{5} + 1.` Hence proven.

131. Since :math:`\alpha, \beta, \gamma, \delta` are root of the equation.

     .. math::
        (x - \alpha)(x - \beta)(x - \gamma)(x - \delta) = ax^4 + bx^3 + cx^2 +
        dx + e

     Substituting :math:`x = i` we get following

     .. math::
        (i - \alpha)(i - \beta)(i - \gamma)(i - \delta) = ai^4 + bi^3 + ci^2 +
        di + e
   
        \Rightarrow (1 + i\alpha)(1 + i\beta)(1 + i\gamma)(1 + i\delta) = a -
        ib - c + id + e

     Taking modulus and squaring we get our desired result.

132. This is similar to 131 and is left as an exercise.

133. Let :math:`|z_1| = |z_2| = |z_3| = R.` :math:`\therefore` origin is the
     circumcenter of triangle. Since triangle is also equilateral circumcenter
     and origin coincide. Therefore, origin is also centroid. Thus

     .. math::
        \frac{z_1 + z_2 + z_3}{3} = 0 \Rightarrow z_1 + z_2 + z_3 = 0

134. Similar to 133 it can be proven that it is an equilateral triangle. Now
     since :math:`|z_1| = |z_2| = |z_3| = 1` therefore it is an equilateral
     triangle inscribed in an unit circle.

135. Circumcenter of an equilateral triangle is given by :math:`z_0 = \frac{z_1 + z_2
     + z_3}{3}` which is same as centroid. Now since this triangle is
     equilateral

     .. math::
        \sum z_1^2 = \sum z_1z_2

        (\sum z_1)^2 = \sum z_1^2 + 2\sum z_1z_2 = 3\sum z_1^2

     Also,

     .. math::
        z_0 = \frac{\sum z_1}{3} \Rightarrow \sum z_1 = 3z_0

        \Rightarrow 3\sum z_1^2 = 9z_0^2 \Rightarrow \sum z_1^2 = 3z_0^2

136. Since :math:`z_1, z_2` and origin form an equilateral triangle we have

     .. math::
        z_1^2 + z_2^2 + 0^2 - z_1z_2 - z_2*0 - z_1*0 = 0

     Hence, proven.

137. From 136 :math:`z_1, z_2` and origin will form a triangle if
     :math:`z_1^2 + z_2^2 - z_1z_2 = 0.` Therefore,

     .. math::
        (z_1 + z_2)^2 = 3z_1z_2 \Rightarrow a^2 = 3b.

138. Centroid of the triangle is given by :math:`\frac{z_1 + z_2 + z_3}{3}`
     i.e. :math:`\frac{-3\alpha}{3}` i.e. :math:`-\alpha.` Triangle will be
     equilateral if

     .. math::
        z_1^2 + z_2^2 + z_3^2 = z_1z_2 + z_2z_3 + z_3z_1

        \Rightarrow (z_1 + z_2 + z_3)^2 = 3(z_1z_2 + z_2z_3 + z_3z_1)

        \Rightarrow 9\alpha^2 = 9\beta \Rightarrow \alpha^2 = \beta

139. Given,

     .. math::
        z_2 = \frac{z_1 + z_3}{2}

     Clearly, from section formula we can deduce that :math:`z_2` divides line
     segment joining :math:`z_1` and :math:`z_3` in two equal segments hence
     the complex numbers are collinear.

140. :math:`z_3` will divide line segment joining :math:`z_1` and :math:`z_2`
     either externally or internally. Now section formula can be used to prove
     remaining.

141. We have,

     .. math::
        \frac{z - i}{ z + i}

     as a purely imaginary quantity. Let :math:`z = x + iy.`

     .. math::
        \frac{[x + i(y - 1)][x - i(y + 1)])}{x^2 + (y + 1)^2}

     Equating real part to 0 we have

     .. math::
        \Rightarrow x^2 + y^2 - 1 = 0

     Therefore locus of z represents the circle :math:`x^2 + y^2 = 1.`

142. :math:`z` represents the ring between the concentric circles whose center
     is at (3, 4i) having radii 1 and 2.

143. Let :math:`z = x+ iy.` Now we have

     .. math::
        \sqrt{(x - 1)^2 + y^2} + \sqrt{(x + 1)^2 + y^2} \le 4

     Let :math:`L + M = 4`

     .. math::
        L^2 - M^2 = -4x \therefore L^2 - M^2 = -x \therefore 4L^2 = (4 - x)^2

        4(x^2 + y^2 - 2x + 1) = 16 + x^2 - 8x

        3x^2 + 4y^2 = 12

        \frac{x^2}{4} + \frac{y^2}{3} = 1

     Hence it represent the above ellipse.

144. Let :math:`z = x + iy` then we have

     .. math::
        x = t + 5 \text{ and } y = \sqrt{4 -t^2}

        \Rightarrow (x - 5)^2 = t^2 \text{ and } y^2 = 4 -t^2

     Adding we get, :math:`(x - 5)^2 + y^2 = 4` which represents a circle with
     radius at (5, 0) with radius 2.

145. Given :math:`\frac{z^2}{z - 1}` is real i.e. its imaginary part is zero.

     .. math::
        \frac{(x^2 - y^2 + i2xy)((x - 1) - iy)}{(x - 1)^2 + y^2}

     Equating imaginary part to 0 we have

     .. math::
        x^2 + y^2 - 2x = 0 \therefore (x - 1)^2 + y^ = 1

     which represents a circle having center at (1, 0) and radius unity.

146. Given, :math:`|z^2 + (-1)| = |z|^2 + |(-1)| \Rightarrow \frac{z^2}{-1}` is
     non-negative real number. Thus :math:`z` is purely imaginary number. Thus
     locus of z is a straight line.

Question 147 to 149 are left as exercises.

150. Given,

     .. math::
        \log_{\sqrt{3}}\frac{|z|^2 - |z| + 1}{2 + |z|} < 2

        \Rightarrow \frac{|z|^2 - |z| + 1}{2 + |z|} < (\sqrt{3})^2

        \Rightarrow |z|^2 - 4|z| - 5 < 0

        \Rightarrow |z| < 5

151. Clearly A is (1, 0) or (-1, 0). Let A is (1, 0). Then :math:`z = cos0 +
     isin0.` Clearly, B and C would be :math:`cos150 + isin150` and
     :math:`cos210 + isin210.`

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

154. Clearly, :math:`z_2 = z_1(cos150 + isin150)` \Rightarrow :math:`z_2 =
     -\sqrt{3} - i.` Similarly, :math:`z_3 = z_2(cos150 + isin150)` which can
     be computed.

Rest of the problems are left as exercises.
