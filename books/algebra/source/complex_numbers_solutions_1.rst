********************************
Complex Numbers Solutions Part 1
********************************
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
