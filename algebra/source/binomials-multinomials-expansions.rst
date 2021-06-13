.. meta::
   :author: Shiv Shankar Dayal
   :title: Binomial Theorem
   :description: Algebra
   :keywords: Algebra, ratio, proportions, variations, complex numbers,
              arithmetic progressions, geometric progressions, harmonic
              progressions, series, sequence, quadratic equations,
              permutations, combinations, lograithms, binomial theorem,
              determinant, matrices

Binomials, Multinomials and Expansions
**************************************
An algebraic expression containing one term is called a monomial, two terms is
called binomial and more than two is called multinomial. Examples of a monimial
expressions are :math:`2x, 4y,` examples of binomial expressions are
:math:`a + b, x^2 + y^2, x^3 + y^3, x + \frac{1}{y}` and examples of
multinomial expressions are :math:`1 + x + x^2, a^2 + 2ab + b^2, a^3 + 3a^2b +
3ab^2 + b^3.`

Binomial Theorem
================
Newton gave this binomial theorem by which we can expand any power of a
binomial expression as a series.

First we consider only positive integral values. For these the formula has
following form:

:math:`(a + x)^n = {}^nC_0a^nx^0 + {}^nC_1a^{n - 1}x^1 + {}^nC_2a^{n - 2}x^2 +
\ldots + {}^nC_na^0x^n`

Proof by Mathematical Induction
-------------------------------
Let :math:`P(n) = (a + x)^n = {}^nC_0a^nx^0 + {}^nC_1a^{n - 1}x^1 +
{}^nC_2a^{n - 2}x^2 + \ldots + {}^nC_na^0x^n`

When :math:`n = 1, P(1) = a + x = {}^1C_0a + {}^1C_1x`

When :math:`n = 2, P(2) = a^2 + 2ax + x^2 = {}^2C_0a^2 + {}^2C_1ax + {}^2C_2x^2`

Thus, we see that :math:`P(n)` holds good for :math:`n = 1` and :math:`n = 2`

Let :math:`P(n)` is true for :math:`n = k` i.e.

:math:`P(k) = (a + x)^k = {}^kC_0a^kx^0 + {}^kC_1a^{k - 1}x^1 +
{}^kC_2a^{k - 2}x^2 + \ldots + {}^kC_ka^0x^k`

Multiplying both sides with :math:`(a + x)`

:math:`P(k + 1) = (a + x)^{k + 1} = {}^kC_0a^{k + 1}x^0 + {}^kC_1a^kx +
{}^kC_2a^{k - 1}x^2 + \ldots + {}^kC_ka^1x^k + \\{}^kC_0a^kx +{}^kC_1a^{k -
1}x^2 + {}^kC_2a^{k - 2}x^3 + \ldots + {}^kC_kx^{k + 1}`

Combining terms with equal powers for :math:`a` and :math:`x,` using the
formula :math:`{}^nC_r + {}^nC_{r + 1} = {}^{n + 1}C_{r + 1}` and rewriting
:math:`{}^kC_0` and :math:`{}^kC_k` as :math:`{}^{k + 1}C_0` and :math:`{}^{k +
1}C_{k + 1},` we get

:math:`P(k + 1) = (a + x)^{k + 1} = {}^{k + 1}C_0a^{k + 1}x^0 + {}^{k + 1}C_1a^kx^1 +
{}^{k + 1}C_2a^{k - 1}x^2 + \ldots + {}^{k + 1}C_{k + 1}a^0x^{k + 1}`

Thus, we see that :math:`P(n)` holds good for :math:`n = k + 1` and we have
proven binomial theorem by mathematical induction.

Proof by Combination
--------------------
We know that :math:`(a + x)^2 = (a + x)(a + x)\ldots` [:math:`n` factors]

If we see only :math:`a` then we see that :math:`a^n` exists and hence
:math:`a^n` is a term in the final product. This is the term :math:`a^n` which
can be written as :math:`{}^nC_0a^nx^0`

If we take the letter :math:`a, n - 1` times and :math:`x` once then we observe
that :math:`x` can be taken ub :math:`{}^nC_1` ways. Thus, we can say that the
term in final product is :math:`{}^nC_1a^{n - 1}x`

Similarly, if we choose :math:`a, n - 2` times and :math:`x` twice then the
term will be :math:`{}^nC_2a^{n - 2}x^2`

Finally, like :math:`a^n, x^n` will exist and can be written as
:math:`{}^nC_nx^n` for consistency.

Thus, we have proven binomial theorem by binomial induction.

Special Forms of Binomial Expansion
===================================
We have :math:`(a + x)^n = {}^nC_0a^nx^0 + {}^nC_1a^{n - 1}x^1 + {}^nC_2a^{n - 2}x^2 +
\ldots + {}^nC_na^0x^n`

I. Putting :math:`-x` instead of :math:`x`

   :math:`(a - x)^n = {}^nC_0a^nx^0 - {}^nC_1a^{n - 1}x^1 + {}^nC_2a^{n - 2}x^2 -
   \ldots + (-1)^n{}^nC_na^0x^n`

II. Putting :math:`a = 1` in original equation

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

III. Puttin :math:`x = -x` in above case

     :math:`(1 - x)^n = {}^nC_0 - {}^nC_1x + {}^nC_2x^2 - \ldots +
     (-1)^n{}^nC_nx^n`

General Term of a Binomial Expansion
====================================
We see that first terms is :math:`t_1 = {}^nC_0a^nx^0`

Second term is :math:`t_2 = {}^nC_1a^{n - 1}x^1`

So general term will be :math:`t_r = {}^nC_{r - 1}a^{n + 1 - r}x^{r - 1}`

Middle Term of a Binomial Expansion
===================================
**Case I:** When :math:`n` is an even number.

Let :math:`n = 2m`

Middle term will be :math:`m + 1` th term i.e. :math:`{}^nC_ma^mx^m`

**Case II:** When :math:`n` is an odd number.

Let :math:`n = 2m + 1` and in this case there will be two middle terms
i.e. :math:`m + 1` th and :math:`m + 2` th terms will be middle terms.

So, :math:`{}^nC_{m}a{m + 1}x^m` and :math:`{}^nC_{m + 1}a^{m + 1}x^m` will be
middle terms.

Largest Coefficient in a Binomial Expansion
===========================================
In any binomial expansion middle term(s) have the largest coefficient. If there
are two middle terms then their coefficients are equal.

Coefficients Equidistant from Start and End
===========================================
Coefficints equidistant from start and end are equal.

**Proof:**

Coefficient of first term from start is :math:`{}^nC_0`

Coefficient of second term from start is :math:`{}^nC_1`

:math:`\ldots`

Coefficient of rth term from start is :math:`{}^nC_{r - 1}`

Coefficient of first term end is :math:`{}^nC_n`

Coefficient of second term end is :math:`{}^nC_{n - 1}`

:math:`\ldots`

Coefficient of rth term from end is :math:`{}^nC_{n - r + 1}`

We know that :math:`{}^nC_{r - 1} = {}^nC_{n - r + 1}`

Thus, coefficints equidistant from start and end are equal.


Properties of Binomial Coefficients
===================================
We know that :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots +
{}^nC_nx^n`

Putting :math:`x = 1,` we get

:math:`2^n = {}^nC_0 + {}^nC_1 + \ldots + {}^nC_n`

Putting :math:`x = -1,` we get

:math:`0 = {}^nC_0 - {}^nC_1 + \ldots + (-1)^n{}^nC_n`

Adding these two, we have

:math:`2^n = 2[{}^nC_0 + {}^nC_2 + {}^nC_4 + \ldots]`

:math:`2^{n - 1} = {}^nC_0 + {}^nC_2 + {}^nC_4 + \ldots`

Subtracting, we get

:math:`2^{n - 1} = {}^nC_1 + {}^nC_3 + {}^nC_5 + \ldots`

Multinomial Theorem
===================
Consider the multinomial :math:`(x_1 + x_2 + \ldots + x_n)^p` where :math:`n`
and :math:`p` are positive integers then if we can find the general term we can
form the expansion.

The general term of such a multinomial is given by
:math:`\frac{p!}{p_1!p_2!\ldots p_n!}x_1^{p1}x_2^{p2}x_3^{p3}\ldots x_n^{p_n}`
such that :math:`p_1, p_2, \ldots p_n` are non-negative integers and :math:`p_1
+ p_2 + p_n = p`

**Proof:** We can find the general term using binomial theorem itself.

General term in the expansion :math:`[x_1 + (x_2 + x_3 + \ldots + x_n)]^n` is

:math:`\frac{n!}{p_1!(n - p_1)!}x_1^{p_1}(x_2 + x_3 + \ldots + x_n)^{n - p_1}`

General term in expansion of :math:`(x_2 + x_3 + \ldots + x_n)^{n - p_1}` is

:math:`\frac{(n - p_1)!}{p_2!(n - p_1 - p_2)!}x_2^{p_2}(x_3 + x_4 + \ldots +
x_n)^{n - p_1 - p_2}`

Procedding thus, we obtain general term as

:math:`\frac{n!}{p_1!(n - p_1)!}\frac{(n - p_1)!}{p_2!(n - p_1 - p_2)!}\ldots
x_1^{p_1}x_2^{p_2} \ldots x_n^{p_n}` where :math:`p_1 + p_2 + p_n = p` and
:math:`p_1, p_2, \ldots p_n` are non-negative integers.

Some Results on Multinomial Expansions
======================================
1. No. of terms in the multinomial :math:`(x_1 + x_2 + \ldots + x_n)^p` is
   number of non-negative integral solution of the equation :math:`p_1 + p_2 +
   \ldots + p_n = p = {}^{n + p - 1}C_p` or :math:`{}^{n + p - 1}C_{n - 1}`

2. Largest coefficient in math:`(x_1 + x_2 + \ldots + x_n)^p` is
   :math:`\frac{n!}{(q!)^{n - r}[(q + 1)!]^r}` where :math:`q` is the quotient
   and :math:`r` is the remainder of :math:`p/n`

3. COefficient of :math:`x^r` in :math:`(a_0 + a_1x + a_2x^2 + \ldots +
   a_nx^n)^p` is :math:`\sum \frac{n!}{p_0!p_1!p_2!\ldots p_n!}a_0^{p_1}
   a_1^{p_2} a_n^{p_m}` where :math:`p_0, p_1, p_2, \ldots, p_n` are
   non-negative integers satisfying the equations :math:`p_0 + p_1 + \ldots +
   p_n = n` and :math:`p_1 + 2p_2 + \ldots + np_n = r`

Binomial Theorem for any Index
==============================
To prove when index is a fractional quantity
--------------------------------------------
Let :math:`f(m) = (1 + x)^m = 1 + mx + \frac{m(m - 1)}{1.2}x^2 + \frac{m(m -
1)(m - 2)}{1.2.3}x^3 + \ldots` where :math:`m \in R`

then, :math:`f(n) = = (1 + x)^n = 1 + nx + \frac{n(n - 1)}{1.2}x^2 +
\frac{n(n - 1)(n - 2)}{1.2.3}x^3 + \ldots`

:math:`f(m)f(n) = (1 + x)^{m + n} = f(m + n)`

:math:`f(m)f(n)\ldots` to :math:`k` factors :math:`= f(m + n + \ldots )` to
:math:`k` terms

Letm :math:`m, n, \ldots` each equal to :math:`\frac{j}{k}`

:math:`\left[f\left(\frac{j}{k}\right)\right]^k = f(j)`

but :math:`j` is a postive integer, :math:`f(j) = (1 + x)^j`

:math:`\therefore (1 + x)^{\frac{j}{k}} = f\left(\frac{j}{k}\right)`

:math:`\therefore (1 + x)^{\frac{j}{k}} = 1 + \frac{j}{k}x +
\frac{\frac{h}{k}\left(\frac{j}{k} - 1\right)}{1.2}x^2 + \ldots`

And thus we have proven binomial theorem for any index.

To prove when index is a negative quantity
------------------------------------------
:math:`f(-n)f(n) = f(0) = 1`

:math:`f(-n) = \frac{1}{f(n)} = (1 + x)^{-n} = 1 -nx + \frac{n(n +
1)}{1.2}x^2 + \ldots`

General Term in Binomial Theorem of Any Index
=============================================
General term is given by :math:`\frac{n(n - 1)\ldots(n - r + 1)}{r!}x^r`

**Note:** The above exapansions do not hold true when :math:`x > 1` which can
be quickly proven by making :math:`r` arbitrarily large.

For example, :math:`(1 - x)^{-1} = 1 + x + x^2 + x^3 + \ldots`

However, if we put :math:`x = 2,` then we have

:math:`(-1)^{-1} = 1 + 2 + 2^2 + 2^3 + \ldots` which shows that when :math:`x >
1` the above formula does not hold true.

From the chapter of G.P., we know that :math:`1 + x + x^2 + \dots` for
:math:`r` terms is :math:`\frac{1}{1 - x} - \frac{x^r}{1 - x}`

Thus, if :math:`r` is very large and :math:`x < 1` then we can ignore the
second fraction but not when :math:`x > 1.`

General Term of :math:`(1 - x)^{-n}`
====================================
The :math:`(r + 1)^{th}` term is given by :math:`\frac{-n(-n - 1)\ldots (-n - r
+ 1)}{r!}(-x)^r`

:math:`= \frac{n(n + 1)\ldots(n+ r - 1)}{r!}x^r`

Exponential and Logarithmic Series
==================================
1. :math:`e^x = 1 + \frac{x}{1!} + \frac{x^2}{2!} + \frac{x^3}{3!} +
   \ldots~\text{to}~\infty` where :math:`x` is any number. :math:`e` lies
   between :math:`2` and :math:`3`. It also base for log natural which is
   written as :math:`\ln`

2. :math:`e^{-x} = 1 - \frac{x}{1!} + \frac{x^2}{2!} - \frac{x^3}{3!} +
   \ldots~\text{to}~\infty` where :math:`x` is any number

3. If :math:`a > 0, a^x = e^{x\log_e a} = 1 + \frac{x\log_ea}{1!} +
   \frac{(x\log_ea)^2}{2!} + \ldots~\text{to}~\infty`

4. :math:`\log_e(1 + x) = x - \frac{x^2}{2} + \frac{x^3}{3} - \frac{x^4}{4} +
   \ldots~\text{to}~\infty` whre :math:`-1 < x \leq 1`
