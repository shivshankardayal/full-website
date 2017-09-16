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
    whether :math:`b` is zero or not as discriminant is imaginary. These roots are conjugate of each other which you can
    verify easily.
(ii) When :math:`D = 0`

     In this case both roots will be equal.

(iii) When :math:`D > 0`

      In this case both the roots will be equal and unequal. If :math:`D` is not a perfect square(square of a rational
      number) then roots are irrational and come as a pair of conjugate irrational numbers which you can
      verify easily.

(iv) When :math:`D` i.e. :math:`b^2 - 4ac` is a perfect square(square of a rational number) and :math:`a, b, c` are rationals.

     In this case :math:`b^2 - 4ac` = square of a rational number

     :math:`\therefore \sqrt{b^2 - 4ac}` = a rational number, let :math:`\sqrt{b^2 - 4ac} = k`

     Thus, :math:`\alpha = \frac{-b - k}{2a}` and :math:`\beta = \frac{-b + k}{2a}` where :math:`a, b, k` are rationals.

Conjugate Roots
---------------
Imaginary roots of a quadratic equation with real coefficients always occur in conjugate pair.

Let :math:`\alpha + i\beta` be a root of the quadratic equation :math:`ax^2 + bx + c = 0` where :math:`a, b, c` are real numbers.
Thus,

:math:`a(\alpha + i\beta)^2 + b(\alpha + i\beta) + c = 0`

:math:`\Rightarrow (a\alpha^2 - a\beta^2 + b\alpha + c) + (2a\alpha\beta + b\beta)i = 0`

Equating real and imaginary parts

:math:`a\alpha^2 - a\beta^2 + b\alpha + c = 0` and :math:`2a\alpha\beta + b\beta = 0`

Using :math:`\alpha - i\beta` as the second root of the equation

:math:`a(\alpha - i\beta)^2 + b(\alpha - i\beta) + c`

:math:`= (a\alpha^2 - a\beta^2 + b\alpha + c) + (2a\alpha\beta + b\beta)i`

:math:`= 0 + i.0`

Thus, we can see that :math:`\alpha -i\beta` also satisfies the equation and is second root of the equation.

Irrational Roots
----------------
Like imaginary roots, irrational roots also appear in pair as conjugate roots of a quadratic equation.
Proof has been left as an exercise to the reader.

Symmetric functions of roots
============================
If a function of :math:`\alpha` and :math:`\beta` remain unchanged when they are interchanged then the function is
called symmetric function of :math:`\alpha` and :math:`\beta`. For example, :math:`\alpha^2 + \beta^2 + \alpha\beta` is
a symmetric function while :math:`\alpha^2 + \beta^2 + \alpha` is not a symmetric function.

Representing the equation in terms of roots
===========================================
Let :math:`ax^2 + bx + c = 0` be a quadratic equation whose roots are :math:`\alpha` and :math:`\beta`.

:math:`ax^2 + bx + c = x^2 + \left(\frac{b}{a}\right) + \left(\frac{c}{a}\right)`

:math:`x^2 - \left(-\frac{b}{a}\right) + \frac{c}{a} = x^2 -(\alpha + \beta)x + \alpha\beta = 0`

Condition for common roots
==========================
Let :math:`ax^2 + bx + c = 0` and :math:`a_1x^2 + b_1x + c_1 = 0` have a common root.

Let :math:`c, c_1 \ne 0` and :math:`ab_1 - a_1b \ne = 0`. Let the common root be :math:`\alpha` then.

:math:`a\alpha^2 + b\alpha + c = 0` and :math:`a_1\alpha^2 + b_1\alpha + c_1 = 0`

By cross-multiplication

:math:`\frac{\alpha^2}{bc_1 - b_1c} = \frac{\alpha}{ca_1 - c_1a} = \frac{1}{ab_1 - a_1b}`

:math:`\Rightarrow (bc_1 - b_1c)(ab_1 - a_1b) = (ca_1 - c_1a)^2`

This is the required condition.

**Note.** If :math:`c = c_1 = 0,` then equations :math:`ax^2 + bx + c = 0` and :math:`a_1x^2 + b_1x + c_1 = 0` will
reduce to :math:`ax^2 + bx = 0` and :math:`a_1x^2 + bx_1 = 0` and have :math:`0` as a common root. The other roots would
be :math:`-\frac{b}{a}` and :math:`-\frac{b_1}{a_1}`. Thus, if :math:`a_1b = ab_1` then both the roots would be common.

For having both the roots common the equations must be identical i.e.  :math:`\frac{a}{a_1} = \frac{b}{b_1} =
\frac{c}{c_1}`

Sign of quadratic expression :math:`ax^2 + bx + c`
==================================================
Let :math:`y = ax^2 + bx + c` and let :math:`\alpha` and :math:`\beta` be the root of the quadratic expression. Then,
:math:`\alpha + \beta = -\frac{b}{a}, \alpha\beta = \frac{c}{a}` and :math:`ax^2 + bx + c = a(x - \alpha)(x - \beta)`

:math:`\therefore y = ax^2 + bx + c`

Case I: When :math:`\alpha` and :math:`\beta` are complex numbers.

Let :math:`\alpha = p + iq`, then :math:`\beta = p - iq` where :math:`q \ne 0`

:math:`ax^2 + bx + c = a[x - (p + iq)][x - (p - iq)]`

:math:`= a[(x - p)^2 + q^2] = a~\times` a positive quantity

:math:`ax^2 + bx + c` will have same sign as that of :math:`a` for all real :math:`x`.

Case II: When :math:`\alpha` and :math:`\beta` are real and equal.

Given :math:`\alpha = \beta`

:math:`ax^2 + bx + c = a[x - \alpha][x - \beta] = a[x - \alpha]^2`

Thus, the expression will have same sign as :math:`a` except when :math:`x = \alpha` in which case it will be 0.

Case III: When :math:`\alpha` and :math:`\beta` are real and unequal.

Sub case (i) When :math:`x < \alpha < \beta`

:math:`\because x < \alpha \Rightarrow x - \alpha < 0` and :math:`x < \beta \Rightarrow x - \beta < 0`

:math:`\therefore a(x - \alpha)(x - \beta) > 0` thus the expression :math:`ax^2 + bx + c` will have same sign as that of
:math:`a`.

Sub case (ii) When :math:`x > \alpha > \beta`

:math:`\because x > \alpha \Rightarrow x - \alpha > 0` and :math:`x > \beta \Rightarrow x - \beta > 0`

:math:`\therefore a(x - \alpha)(x - \beta) > 0` thus the expression :math:`ax^2 + bx + c` will have same sign as that of
:math:`a`.

Sub case (iii) When :math:`\alpha < x < \beta`

:math:`\because x > \alpha \Rightarrow x - \alpha > 0` and :math:`x < \beta \Rightarrow x - \beta < 0`

:math:`\therefore a(x - \alpha)(x - \beta) < 0` thus the expression :math:`ax^2 + bx + c` will have opposite sign as
that of :math:`a`.

Maximum and minimum values of :math:`ax^2 + bx + c`
===================================================
Let :math:`y = ax^2 + bx + c \Rightarrow ax^2 + bx + c - y = 0`

Since :math:`x` is real, therefore, discriminant has to be greater than 0.

:math:`\therefore b^2 - 4a(c - y) \geq 0 \Rightarrow b^2 - 4ac + 4ay \geq 0`

:math:`\Rightarrow y \geq \frac{4ac - b^2}{4a}`

**Case I:** When :math:`a > 0`

Clearly, minimum value of :math:`y` is :math:`\frac{4ac - b^2}{4a}`.

Substituting this for :math:`ax^2 + bx + c = y` and solving we see that it occurs for :math:`x = -\frac{b}{2a}`

Thus, minimum value of :math:`y = \frac{4ac - b^2}{4a}` and it has no maximum value.

**Case II:** When :math:`a < 0`

Clearly, when :math:`a < 0, y` has  no minimum value and maximum value will again occur at :math:`x = -\frac{b}{2a}`.

To find the condition that the general quadratic equation :math:`ax^2 + 2hxy + by^2 + 2gx + 2fy + c` in :math:`x` and :math:`y` may be resolved into two linear rational factors.
=========================================================================================================================================================================================
Corresponding equation is :math:`ax^2 + 2hxy + by^2 + rgx + 2fy + c = 0`

:math:`x = \frac{-2(hy + g)\pm\sqrt{4(hy + g)^2 - 4a(by^2 + 2fy + c)}}{2a}`

:math:`ax + hy + g = \pm\sqrt{(h^2 - ab)y^2 + 2(gh - af)y + g^2 - ac}`

It can be resolved into two linear factors if :math:`(h^2 - ab)y^2 + 2(gh - af)y + g^2 - ac` is a perfect square
and :math:`h^2 - ab > 0`

:math:`(h^2 - ab)y^2 + 2(gh - af)y + g^2 - ac` will be prefect square if discriminant of the corresponding equation is :math:`0`.

:math:`\Rightarrow 4(gh - af)^2 - 4(h^2 - ab)(g^2 - ac) = 0`

:math:`\Rightarrow abc + 2fgh - af^2 - bg^2 - ch^2 = 0`
