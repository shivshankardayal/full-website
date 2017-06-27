Quadratic Equations
*******************
An equation of the form :math:`ax^2 + bc + c = 0` where :math:`a, b, c` are real numbers, and :math:`a \ne 0` is called
a *quadratic equation*.

The numbers :math:`a, b, c` are called the coefficients of the quadratic equation and :math:`b^2 - 4ac` is called its
discriminant.

Discriminant of a quadratic equation is donated by :math:`D` or :math:`\Delta`.

**Examples:**

(i) :math:`4x^2 + 4x + 1 = 0, a = 4, b = 4, c = 1`
(ii) :math:`7x^3 + 10 = 0` is not a quadratic equation.
(iii) :math:`3x^2 -2x^{1/2} + 7 = 0` is not a quadratic equation.
(iv) :math:`2x^2 - 4 = 0, a = 2, b = 0, c= -4`

The quadratic equation is called incomplete if one of the coefficients :math:`b` or :math:`c` is zero. Thus, the last
example above represents an incomplete quadratic equation.

An expression of the form :math:`ax^2 + bx + c` is called a *quadratic expression* while other elements are same as a
quadratic equation.

If two expressions in :math:`x` are equal for all values of :math:`x` then this statement of equality between the two
expressions is called an identity.

:math:`f(x) = 0` is said to be an identity in :math:`x` if it is satisfied by all values of :math:`x` in the domain of
:math:`f(x)`.

Thus, an identity is satisfied by all values of :math:`x` while an equation is satisfied for particular values of
:math:`x`.

**Example:**

(i) :math:`(x + 1)^2 = x^2 + 2x + 1` is an identity in :math:`x`

Two equations are called *identical equations* if they have same roots.

**Example:** :math:`x^2 - 5x + 4 = 0` and :math:`2x^2 - 10x + 8 = 0` are identical equations because both have same
roots :math:`1` and :math:`4`.

**Note:**

(i) Two equations in :math:`x` are identical if and only if the coefficients of similar power of :math:`x` in the two
    equations are proportional. Thus, if :math:`ax^2 + bx + c = 0` and :math:`a_1x^2 + b_1x + c_1 = 0` are identical
    equations, then :math:`\frac{a}{a_1} = \frac{b}{b_1} = \frac{c}{c_1}`
(ii) An equation remains unchanged if it is multiplied or divided by a non-zero number.

An expression of the form :math:`a_0x^n + a_1x^{n - 1} + a_2x^{n - 2} + ... + a_{n - 1}x + a_0` where :math:`a_0, a_1,
a_2, ..., a_n` are constants (:math:`a_0 \ne 0`) and :math:`n` is a positive integer is called a polynomial in :math:`x`
of degree :math:`n`.

As a special case a constant is also called a polynomial of degree zero.

**Example:** :math:`8x^7 -6x^5 + 3x^2 + x + 9` is a polynomial of degree :math:`7` but :math:`x + \frac{1}{x}` is not a
polynomial in :math:`x`.

Rational expression or Rational function
========================================
An expression of the form :math:`\frac{P(x)}{Q(x)},` where :math:`P(x)` and :math:`Q(x)` are polynomials in :math:`x`,
is called a rational expression.

In the particular case when :math:`Q(x)` is a non-zero constant, :math:`\frac{P(x)}{Q(x)}` reduces to a polynomial. Thus
every polynomial is a rational expression but the converse is not true.

**Examples:**

(i) :math:`\frac{x^2 - 5x + 4}{x - 2}`
(ii) :math:`\frac{1}{x - 7}`

Roots of a quadratic equation
=============================
The values of :math:`x` for which the equation :math:`ax^2 + bx + c = 0` are satisfied are called roots of the
equation. They are also called roots of the quadratic expression :math:`ax^2 + bx + c`.

Every quadratic equation has at most two roots. Proof is given below:

Let :math:`ax^2 + bx + c = 0` where :math:`a \ne 0`

Multiplying both sides of the equation by :math:`a`

:math:`a^2x^2 + 2abx + ac = 0 \Rightarrow (ax)^2 + 2.ax.\frac{b}{2} + \left(\frac{b}{2}\right)^2 + ac -
\left(\frac{b}{2}\right)^2 = 0`

:math:`\left(ax + \frac{b}{2}\right)^2 = \frac{b^2 - 4ac}{4}`

:math:`ax + \frac{b}{2} = \pm\frac{\sqrt{b^2 - 4ac}}{2}`

:math:`\therefore a = \frac{-b \pm \sqrt{b^2 - 2ac}}{2a}`

These are two roots of a quadratic equation.

Let us suppose the above quadratic equation has three roots :math:`\alpha, \beta` and :math:`\gamma`. These roots will
satisfy the equation

:math:`a\alpha^2 + b\alpha + c = 0`

:math:`a\beta^2 + b\beta + c = 0`

:math:`a\gamma^2 + b\gamma + c = 0`

Subtracting first two we get

:math:`(\alpha - \beta)(a(\alpha + \beta) + b) = 0`

:math:`\because \alpha \ne \beta \therefore a(\alpha + \beta) + b = 0`

Similarly, :math:`a(\alpha + \gamma) + b = 0`

Subtracting these two we get :math:`a(\alpha - \gamma) = 0`

Since :math:`a\ne 0 \therefore \alpha = \gamma`

Thus a quadratic equation has at most two roots.

Sum and product of the roots
============================
If :math:`\alpha` and :math:`\beta` are two roots of the equation :math:`ax^2 + bx + c = 0` then

:math:`\alpha = \frac{-b + \sqrt{b^2 - 4ac}}{2a}` and :math:`\beta = \frac{-b - \sqrt{b^2 - 4ac}}{2a}`

:math:`\alpha + \beta = -\frac{b}{a} = - \frac{\text{coeff. of } x}{\text{coeff. of }x^2}`

:math:`\alpha\beta = \frac{c}{a} = \frac{\text{constant term}}{\text{coeff. of }x^2}`

Discriminant of the quadratic equation
======================================
:math:`b^2 - 4ac` is called the discriminant of the quadratic equation and is usually denoted by :math:`D` or
:math:`\Delta`.

Nature of roots
===============
For equation :math:`ax^2 + bx + c = 0` when :math:`a, b, c` are real.

(i) When :math:`D < 0`

    In this case both roots :math:`\alpha` and :math:`\beta` will be either complex numbers or imaginary depending on
    whether :math:`b` is zero or not as discriminant is imaginary. These roots are conjugate of each other.
(ii) When :math:`D = 0`

     In this case both roots will be equal.

(iii) When :math:`D > 0`

      In this case both the roots will be equal and unequal. If :math:`D` is not a perfect square(square of a rational
      number) then roots are irrational and come as a pair of conjugate irrational numbers.

Symmetric functions of roots
============================
