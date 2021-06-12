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

Problems
========
1. Expand :math:`\left(x + \frac{1}{x}\right)^5`

2. Use the binomial theorem to find the exact value of :math:`(10.1)^5`

3. Simplify :math:`(x + \sqrt{x - 1})^6 + (x - \sqrt{x - 1})^6`

4. If :math:`A` be the sum of odd terms and :math:`B` be the sum of even terms
   in the expansion of :math:`(x + a)^n,` prove that :math:`A^2 - B^2 = (x^2 -
   a^2)^n`

5. Solve following:

   i. If :math:`n` be a positive integer, then prove that the integral part of
      :math:`(7 + 4\sqrt{3})^n` is an odd number.

   ii. If :math:`(7 + 4\sqrt{3})^n = \alpha + \beta,` where :math:`\alpha` is a
       positive integer and :math:`\beta` a proper fraction, then prove that
       :math:`(1 - \beta)(\alpha + \beta) = 1`

6. Find the coefficient of :math:`\frac{1}{y^2}` in :math:`\left(y +
   \frac{c^3}{y^2}\right)^{10}`

7. Find the coefficient of :math:`x^9` in :math:`(1 + 3x + 3x^2 + x^3)^{15}`

8. Find the term independent of :math:`x` in :math:`\left(\frac{3}{2}x^2 -
   \frac{1}{3x}\right)^9`

9. Find the term independent of :math:`x` in :math:`(1 + x)^m\left(1 +
   \frac{1}{x}\right)^n`

10. Find the coefficient of :math:`x^{-1}` in :math:`(1 + 3x^2 + x^4)\left(1 +
    \frac{1}{x}\right)^n`

11. If :math:`a_r` denotes the coefficient of :math:`x^r` in the expansion
    :math:`(1 - x)^{2n - 1},` then prove that :math:`a_{r - 1} + a_{2n - r} =
    0`

12. Find the value of :math:`k` so that the term independent of :math:`x` in
    :math:`\left(\sqrt{x} + \frac{k}{x^2}\right)^{10}` is :math:`405.`

13. Show that there will be no term containing :math:`x^{2r}` in the expansion
    :math:`(x + x^{-2})^{n - 3}` if :math:`n - 2r` is positive but not a
    multiple of :math:`3.`

14. Show that there will be a term independent of :math:`x` in the expansion
    :math:`(x^a + x^{-b})^n` only if :math:`an` is a multiple of :math:`a + b.`

15. Expand :math:`\left(x + \frac{1}{x}\right)^7` by using binomial theorem.

16. Use binomial theorem to expans :math:`\left(\frac{2x}{3} -
    \frac{3}{2x}\right)^6`

17. If :math:`(1 + ax)^n = 1 + 8x + 24x^2 + \ldots,` find :math:`a` and
    :math:`n.`

18. Write :math:`(x + \sqrt{x^2 + 1})6 + (x - \sqrt{x^2 + 1})^6` as a
    polynomial of :math:`x.`

19. Find the :math:`7^{th}` term in the expansion of
    :math:`\left(\frac{4x}{5} - \frac{5}{2x}\right)^9`

20. Find the value of :math:`(\sqrt{2} + 1)^6 + (\sqrt{2} - 1)^6.`

21. Evaluate :math:`(0.99)^{15}` correct to four decimal places using binomial
    theorem.

22. Evaluate :math:`(999)^3` using binomial theorem.

23. Evaluiate :math:`(0.99)^{10}` correct to four decimal places using binomial
    theorem.

24. Find the value of :math:`(1.01)^{10} + (0.99)^{10}` correct to 7
    decimnal places.

25. If :math:`A` be the sum of odd terms and :math:`B` be the sum of even terms
    in the expansion of :math:`(x + a)^n,` show that :math:`4AB = (x +
    a)^{2n} - (x - a)^{2n}.`

26. If :math:`n` be a positive interger, prove that the integeral part of
    :math:`(5 + 2\sqrt{6})^n` is an odd interger.

27. If :math:`(3 + \sqrt{8})^n = \alpha + \beta,` where :math:`\alpha, n` are
    positive integers and :math:`\beta` is a proper fraction, then prove that
    :math:`(1 - \beta)(p + \beta) = 1`.

28. Find the coefficient of :math:`x` in the expansion of :math:`\left(2x -
    \frac{3}{x}\right)^9`

29. Find the coefficient of :math:`x^7` in the expansion of :math:`(3x^2 +
    5x^{-1})^{11}`

30. Find the coefficicent of :math:`x^9` in the expansion of :math:`(2x^2 -
    x^{-1})^{20}`

31. Find the coefficient of :math:`x^{24}` in the expansion of :math:`(x^2 +
    3ax^{-1})^{15}`

32. Find the coefficient of :math:`x^9` in the expansion of :math:`(x^2 -
    3x^-1)^9`

33. Find the coefficient of :math:`x^{-7}` in the expansion of :math:`\left(2x -
    \frac{1}{3x^2}\right)^{11}`

34. Find the coefficient of :math:`x^7` in the expansion of :math:`\left(ax^2 +
    \frac{1}{bx}\right)^{11}` and the coefficient of :math:`x^{-7}` in the
    expansion of :math:`\left(ax - \frac{1}{bx^2}\right)^{11}.` Also find the
    relation between :math:`a` and :math:`b` so that the coefficient are equal.

35. If :math:`x^p` occurs in the expansion of :math:`\left(x^2 +
    \frac{1}{x}\right)^{2n},` show that its coefficient is
    :math:`\frac{2n!}{\left(\frac{4n - p}{3}\right)!\left(\frac{2n +
    p}{3}\right)!}`

36. Find the term independent of :math:`x` in the following binomial
    expansions:

    i. :math:`\left(x + \frac{1}{x}\right)^{2n}`

    ii. :math:`\left(2x^2 + \frac{1}{x}\right)^{15}`

    iii. :math:`\left(\sqrt{\frac{x}{3}} + \frac{3}{2x^2}\right)^{10}`

    iv. :math:`\left(2x^2 - \frac{1}{x}\right)^{12}`

    v. :math:`\left(2x^2 - \frac{3}{x^3}\right)^{25}`

    vi. :math:`\left(x^3 - \frac{3}{x^2}\right)^{25}`

    vii. :math:`\left(x^2 - \frac{3}{x^3}\right)^{10}`

    viii. :math:`\left(\frac{1}{2}x^{\frac{1}{3}} + x^{-\frac{1}{3}}\right)^8`

37.  If there is a term independent of :math:`x` in :math:`\left(x +
     \frac{1}{x^2}\right)^n,` show that it is equal to
     :math:`\frac{n!}{\left(\frac{n}{3}\right)\left(\frac{2n}{3}\right)!}!`

38. Prove that in the expansion of :math:`(1 + x)^{m + n},` coefficients of
    :math:`x^m` and :math:`x^n` are equal. :math:`\forall~m, n > 0, m, n\in N`

39. Given that the :math:`4^{th}` term in the expansion of :math:`\left(px +
    \frac{1}{x}\right)^n` is :math:`\frac{5}{2}.` Find :math:`n` and :math:`p.`

40. Find the middle term in the expansion of :math:`\left(x -
    \frac{1}{2x}\right)^{12}`

41. Find the middle term in the expansion of :math:`\left(2x^2 -
    \frac{1}{x}\right)^7`

42. FInd the middle term in the expansion of :math:`(1 - 2x + x^2)^n`

43. Prove that the middle term in the expansion of :math:`\left(x +
    \frac{1}{x}\right)^{2n}` is :math:`\frac{1.3.5\ldots (2n - 1)}{n!}.2^n`

44. Show that the greatest coefficient in the expansion of :math:`\left(x +
    \frac{1}{x}\right)^{2n}` is :math:`\frac{1.3.5\ldots (2n - 1)}{n!}.2^n`

45. Show that the coefficent of the middle term in :math:`(1 + x)^{2n}` is
    equal to the sum of the coefficient of the two middle term in :math:`(1 +
    x)^{2n - 1}`

46. Find the middle term in the expansions of:

    i. :math:`\left(\frac{2x}{3} - \frac{3y}{2}\right)^{20}`

    ii. :math:`\left(\frac{2x}{3} - \frac{3}{2x}\right)^{6}`

    iii. :math:`\left(\frac{x}{y} - \frac{y}{x}\right)^7`

    iv. :math:`(1 + x)^{2n}`

    v. :math:`(1 - 2x + x^2)^n`

47. Find the general and middle term of the expansion
    :math:`\left(\frac{x}{y} + \frac{y}{x}\right)^{2n + 1}; n` being a positive
    integer show that there is no term free from :math:`x` and :math:`y.`

48. Show that the middle term in the expnsions of :math:`\left(x -
    \frac{1}{x}\right)^{2n}` is :math:`\frac{1.3.5\ldots (2n - 1)}{n!}.(-2)^n`

49. If in the expansion of :math:`(1 + x)^{43},` the coefficient of
    :math:`(2r + 1)^{th}` term is equl to the coefficient of :math:`(r +
    2)^{th}` term, find :math:`r.`

50. If the :math:`r^{th}` term in the expansion of :math:`(1 + x)^{2n}` has its
    coefficientt equal to that of the :math:`(r + 4)^{th}` term, find :math:`r`.

51. If the coefficient of :math:`(2r + 4)^{th}` term and :math:`(r - 2)^{th}`
    term in the expansion of :math:`(1 + x)^{18}` are equal, find :math:`r.`

52. If the coefficient of :math:`(2r + 5)^{th}` term and :math:`(r - 6)^{th}`
    term in the expnasion of :math:`(1 + x)^{39}` are equal, find
    :math:`{}^rC_{12}.`

53. Given positive intergers :math:`r>1, n>2, n` being even and the coefficient
    of :math:`3r^{th}` term and :math:`(r + 2)^{th}` term in the expansion of
    :math:`(1 + x)^{2n}` are equal, find r.

54. If the coefficient of :math:`(p + 1)^{th}` term in the expansion of
    :math:`(1 + x)^{2n}` be equal to that of the :math:`(p + 3)^{th}` term,
    show that :math:`p = n - 1`

55. Find the two consecutive coefficients in the expansion of :math:`(3x -
    2)^{75}` whose values are equal.

56. Show that the coefficient of :math:`(r + 1)^{th}` term in the expansion of
    :math:`(1 + x)^{n + 1}` is equal to the sum of the cofficients of the
    :math:`r^{th}` and :math:`(r + 1)^{th}` term in the expansion of
    :math:`(1 + x)^n.`

57. Find the greatest term in the expansion of :math:`\left(7 -
    \frac{10}{3}\right)^{11}`

58. Show that if the greatest term in the expansion of :math:`(1 + x)^{2n}` has
    also the greatest coefficient :math:`x` lies between :math:`\frac{n}{n +
    1}` and :math:`\frac{n + 1}{n}.`

59. Find the greatest term in the expansion of:

    i. :math:`\left(2 + \frac{9}{5}\right)^{10}`

    ii. :math:`(4 - 2)^7`

    iii. :math:`(5 + 2)^{13}`

60. Find the limits between which :math:`x` must lie in order that the greatest
    term in the expansion of :math:`(1 + x)^{30}` may have the greatest
    coefficient.

61. If :math:`n` is a positive integer, then prove that :math:`6^{2n} - 35n -
    1` is divisible by :math:`1225`

62. Show that :math:`2^{4n} - 2^n(7n + 1)` is some multiple of the square of
    :math:`14,` where :math:`n` is a positive integer.

63. Show that :math:`3^{4n + 1} + 16n - 3` is divisible by :math:`256` if
    :math:`n` is a positive integer.

64. If :math:`n` is a positive integer show that

    i. :math:`4^n - 3n - 1` is divisible by :math:`9`

    ii. :math:`2^{5n} - 31n - 1` is divisible by :math:`961`

    iii. :math:`3^{2n + 2} -8n -9` is divisible by :math:`64`

    iv. :math:`2^{5n + 5} - 31n - 32` is divisible by :math:`961` if :math:`n >
        1`

    v. :math:`3^{2n} - 1 + 24n - 32n^2` is divisible by :math:`512` if :math:`n
       > 2`

65. If three consecutive coefficient in the expansion of :math:`(1 + x)^n` be
    :math:`165, 330` and :math:`462,` find :math:`n` and position of the first
    coefficient.

66. If :math:`a_1, a_2, a_3` and :math:`a_4` be any four consecutive
    coefficients in the expansion of :math:`(1 + x)^n,` prove that
    :math:`\frac{a_1}{a_1 + a_2} + \frac{a_3}{a_3 + a_4} = \frac{2a_2}{a_2 +
    a_3}`

67. If :math:`2^{nd}, 3^{rd}` and :math:`4^{th}` terms in the expansion of
    :math:`(x + y)^n` be :math:`240, 720` and :math:`1080` respectively, find
    :math:`x, y` and :math:`n.`

68. If :math:`a, b, c` be the three consecutive terms in the expansion of some
    power of :math:`1 + x,` prove that the exponent is :math:`\frac{2ac + ab +
    bc}{b^2 - ac}`

69. If :math:`14^{th}, 15^{th}` and :math:`16^{th}` term in the expansion of
    :math:`(1 + x)^n` are in A.P., find :math:`n.`

70. If three consecutive terms in the expansion of :math:`(1 + x)^n` be
    :math:`56, 70` and :math:`56,` find :math:`n` and the position of the
    coefficients.

71. If three consecutive terms in the expansion of :math:`(1 + x)^n` be
    :math:`220, 495` and :math:`792,` find :math:`n.`

72. If :math:`3^{rd}, 4^{th}` and :math:`5^{th}` terms in the expansion of
    :math:`(a + x)^n` be :math:`84, 280` and :math:`560,` find :math:`a, x` and
    :math:`n.`

73. If :math:`6^{th}, 7^{th}` and :math:`8^{th}` terms in the expansion of
    :math:`(x + y)^n` be :math:`112, 7` and :math:`\frac{1}{4},` find :math:`x,
    y` and :math:`n.`

74. If :math:`a, b, c` and :math:`d` be the :math:`6^{th}, 7^{th}, 8^{th}` and
    :math:`9^{th}` terms respectively in any binomial expansion, prove that
    :math:`\frac{b^2 - ac}{c^2 - bd} = \frac{4a}{3c}`

75. If the four consecutive coefficients in any binomial expansion be :math:`a,
    b, c, d` then prove that

    i. :math:`\frac{a + b}{a}, \frac{b + c}{b}, \frac{c + d}{c}` are in H.P.

    ii. :math:`(bc + ad)(b - c) = 2(ac^2 - b^2d)`

76. The coefficient of the :math:`5^{th}, 6^{th}` and :math:`7^{th}` terms in
    the expansion of :math:`(1 + x)^n` are in A.P. Find the value of :math:`n.`

77. If the coefficients of :math:`2^{nd}, 3^{rd}` and :math:`4^{th}` terms in
    the expansion of :math:`(1 + x)^{2n}` are in A.P., show that :math:`2n^2 -
    9n + 7 = 0`

78. If the coefficients of :math:`r^{th}, (r + 1)^{th}` and :math:`(r +
    2)^{th}` terms in the expansion of :math:`(1 + x)^n` are in A.P., show that
    :math:`n^2 - n(4r + 1) + 4r^2 - 2 = 0`

79. If the coefficients of three consecutive terms in the expansion of
    :math:`(1 + x)^n` are in the ration :math:`182:84:30,` prove that :math:`n=
    18.`

If :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n,` prove that

80. :math:`C_1 + 2.C_2 + 3.C_3 + \ldots + n.C_n = n.2^{n - 1}`

81. :math:`C_0 + 2.C_1 + 3.C_2 + \ldots + (n + 1).C_n = (n + 2)2^{n - 1}`

82. :math:`C_0 + 3.C_1 + 5.C_2 + \ldots + (2n + 1).C_n = (n + 1)2^n`

83. :math:`C_1 - 2.C_2 + 3.C_3 - 4.C_4 + \ldots + (-1)^nn.C_n = 0`

84. :math:`C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots + \frac{C_n}{n + 1} =
    \frac{2^{n + 1} - 1}{n + 1}`

85. :math:`C_0 - \frac{C_1}{2} + \frac{C_2}{3} - \ldots + (-1)^n\frac{C_n}{n +
    1} = \frac{1}{n + 1}`

86. :math:`\frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} + \ldots = \frac{2^n -
    1}{n + 1}`

87. :math:`2.C_0 + 2^2\frac{C_1}{2} + 2^3\frac{C_2}{3} + \ldots + 2^{n +
    1}\frac{C_n}{n + 1} = \frac{3^{n + 1} - 1}{n + 1}`

88. :math:`C_0.C_r + C_1.C_{r + 1} + \ldots + C_{n - r}.C_n = \frac{(2n)!}{(n +
    r)!(n - r)!}`

89. :math:`C_0^2 + C_1^2 + C_2^2 + \ldots + C_n^2 = \frac{(2n)!}{n!n!}`

90. :math:`\frac{C_1}{C_0} + 2\frac{C_2}{C_1} + 3\frac{C_3}{C_2} + \ldots +
    n.\frac{C_n}{C_{n - 1}} = \frac{n(n + 1)}{2}`

91. :math:`(1 + {}^nC_1 + {}^nC_2 + \ldots + {}^nC_n)^2 = 1 + {}^{2n}C_1 +
    {}^{2n}C_2 + \ldots + {}^{2n}C_{2n}`

92. :math:`(1 + {}^nC_1 + {}^nC_2 + \ldots + {}^nC_n)^5 = 1 + {}^{5n}C_1 +
    {}^{5n}C_2 + \ldots + {}^{5n}C_{5n}`

93. :math:`C_0 + 5.C_1 + 9.C_2 + \ldots + (4n + 1).C_n = (2n + 1)2^n`

94. :math:`1 - (1 + x)C_1 + (1 + 2x)C_2 - (1 + 3x)C_3 + \ldots = 0`

95. :math:`3.C_1 + 7.C_2 + 11.C_3 + \ldots + (4n - 1)C_n = (2n - 1)2^{n + 1}`

96. :math:`C_0 + \frac{C_2}{3} + \frac{C_4}{5} + \ldots = \frac{2^n}{n + 1}`

97. :math:`{}^nC_0{}^{n + 1}C_1 + {}^nC_1{}^{n + 1}C_2 + \ldots +
    {}^nC_n{}^{n + 1}C_{n + 1} = \frac{(2n + 1)!}{(n + 1)!n!}`

98. Prove that the sum of coefficients in the expansion of :math:`(1 + x -
    3x^2)^{2163}` is :math:`-1`

99. If :math:`(1 + x - 2x^2)^6 = 1 + a_1x + a_2x^2 + \ldots + a_{12}x^{12},`
    show that :math:`a_2 + a_4 + a_6 + \ldots + a_{12} = 31`

100. Find the sum of rational terms in the expansion of :math:`(2 +
     \sqrt[5]{3})^{10}`

101. Find the fractional part of :math:`\frac{2^{4n}}{15}.`

102. Show that the integer just above :math:`(\sqrt{3} + 1)^{2n}` is divisible
     by :math:`2^{n + 1}, \forall n \in N.`

103. Let :math:`R = (5\sqrt{5} + 11)^{2n + 1}` and :math:`f = R - [R]` where
     :math:`[]` denotes the greatest integre function. Prove that :math:`Rf =
     4^{2n + 1}`

104. Show that :math:`(101)^{50} > (100)^{50} + (99)^{50}`

105. Find the sum of the series :math:`\sum_{r = 0}^n
     (-1)^r.{}^nC_r\left[\frac{1}{2^3} + \frac{3}{2^{2r}} + \frac{7^r}{2^{3r}} +
     \ldots~\text{to}m~\text{terms}\right]`

106. Find the last digit of the number :math:`(32)^{32}.`

107. Prove that :math:`\sum_{r = 0}^k (-3)^{r - 1}.{}^{3n}C_{2r - 1} = 0,` where
     :math:`k = \frac{3n}{2}` and :math:`n` is a positive even number.

108. If :math:`t_0, t_1, t_2, t_3, \ldots` be the terms of expansion :math:`(a +
     x)^n,` prove that :math:`(t_0 - t_2 + t_4 - \ldots)^2 + (t_1 - t_3 + t_5 -
     \ldots)^2 = (a^2 + x^2)^n`

If :math:`(1 + x + x^2)^n = a_0 + a_1x + a_2x^2 + \ldots + a_{2n}x^{2n},`
show that

109.  :math:`a_0 + a_ 1 + a_2 + a_3 + \ldots + a_{2n} = 3^n`

110. :math:`a_0 - a_1 + a_2 - a_3 + \ldots + a_{2n} = 1`

111. :math:`a_0 + a_3 + a_6 + \ldots = 3^{2n - 1}`

112. If :math:`S_n = 1 + q + q^2 + \ldots + q^n` and :math:`S_n^{'} = 1 +
     \left(\frac{q + 1}{2}\right) + \left(\frac{q + 1}{2}\right)^2 + \ldots +
     \left(\frac{q + 1}{2}\right)^n, q\neq 1,` prove that :math:`{}^{n +
     1}C_1 + {}^{n + 1}C_2.S_1 + {}^{n + 1}C_3.S_2 + \ldots + {}^{n + 1}C_{n +
     1}.S_n = 2^nS_n^{'}`

113. Find the number of rational terms in the expansion of
     :math:`(\sqrt[4]{9} + \sqrt[6]{8})^{1000}`

114. Find the sum of rational terms in the expansion of :math:`(\sqrt[3]{2} +
     \sqrt[5]{3})^{15}`

115. Determine the vlaue of :math:`x` in the expansion of :math:`(x +
     x\log_{10}x)^5` if the third term in that expansion is :math:`1,000,000.`

116. Expand :math:`\left(x + 1 - \frac{1}{x}\right)^3`

117. Find the value of :math:`x` for which the sixth term of
     :math:`\left(\sqrt{2^{\log(10 - 3^x)}} + \sqrt[5]{2^{(x -
     2)\log 3}}\right)^m` is equal to :math:`21` and coefficients of seconds,
     third and fourth terms are the first, third and fifth terms of an A.P.
     Base of :math:`\log` is :math:`10`.

118. Find the values of :math:`x` for which the sixth term of the expansion
     :math:`\left[2^{\log_2\sqrt{9^{x - 1} + 7}} +
     \frac{1}{2^{\frac{1}{5}\log_2(3^{x - 1} + 1)}}\right]^7` is equal to 84.

119. If :math:`n` is a positive integer, prove that :math:`\frac{1}{(81)^n} -
     \frac{10}{(81)^n}{}^{2n}C_1 + \frac{10^2}{(81)^n}{}^{2n}C_2 -
     \frac{10^3}{(81)^n}{}^{2n}C_3 + \ldots + \frac{10^{2n}}{(81)^n} = 1`

120. Find the value of :math:`\lim_{n \to \infty}S_n = C_n - \frac{2}{3}C_{n -
     1} + \left(\frac{2}{3}\right)^2C_{n - 2} - \ldots +
     (-1)^n\left(\frac{2}{3}\right)^nC_0`

121. If :math:`N = (6\sqrt{6} + 14)^{2n + 1}` and :math:`F` be the fractional
     part of :math:`N,` prove that :math:`NF = 20^{2n + 1}`

122. Show that :math:`\sum_{r = 0}^n(-1)^r.{}^nC_r\left[\frac{1}{2^r} +
     \frac{3^r}{2^{2r}} + \frac{7^r}{w^{3r}} + \ldots~\text{up
     to}~n~\text{terms}\right] = \frac{1}{2^n - 1} - \frac{1}{2^{n^2}(2^n - 1)}`

123. Find the digits at units, tens and hundereds place in the number
     :math:`(17)^256.`

124. Show that for :math:`n \geq 3, n^{n + 1} > (n + 1)^n, n` is a positive
     integer.

125. Show that :math:`2 < \left(1 + \frac{1}{n}\right)^n < 3` for :math:`n \in N`

126. Show that :math:`1992^{1998} - 1955^{1998} - 1938^{1998} + 1901^{1998}` is
     divisible by :math:`1998.`

127. Show that :math:`53^{53} - 33^{33}` is divisible by :math:`10.`

128. Let :math:`k` and :math:`n` be positive integers and :math:`S_K = 1^k +
     2^k + \ldots + n^k,` show that :math:`{}^{m + 1}C_1S_1 + {}^{m +
     1}C_2S_2 + \ldots + {}^{m + 1}C_mS_m = (n + 1)^{m + 1} - n - 1`

129. Find :math:`\sum_{i = 1}^k\sum_{k = 1}^n{}^nC_k{}^kC_i, i\leq k`

130. Prove that :math:`\sum_{r = 0}^n(-1)^r.{}^nC_r \frac{1 + r\log_e 10}{(1 +
     \log_e10^n)^r} = 0`

131. Find the remainder when :math:`32^{32^{32}}` is divided by :math:`7.`

132. If :math:`\sum_{r=0}^{2n}a_r(x - 2)^r = \sum_{r=0}^{2n}b_r(x - 3)^r` and
     :math:`a_r = 1 \forall r \geq n,` then show that :math:`b_n = {}^{2n +
     1}C_{n + 1}`

133. Find the coefficient of :math:`x^{50}` in :math:`(1 + x)^{1000} + 2x(1 +
     x)^{999} + 3x^2(1 + x)^{998} + 1001x^{1000}`

134. Show that :math:`{}^nC_n + {}^{n + 1}C_n + {}^{n + 2}C_n + \ldots + {}^{n
     + k}C_n = {}^{n + k + 1}C_{n + 1}`

135. Find the coefficient of :math:`x^n` in :math:`(1 + x + 2x^2 + 3x^3 +
     \ldots + nx^n)^2.`

136. Find the coefficient of :math:`x^k, 0\leq k\leq n` in tthe expansion of
     :math:`1 + (1 + x) + (1 + x)^2 + \ldots + (1 + x)^n`

137. Find the coefficient of :math:`x^3` in :math:`(x + 1)^n + (x + 1)^{n -
     1}(x + 2) + (x + 1)^{n - 2}(x + 2)^2 + \ldots + (x + 2)^n`

138. Simplify :math:`\left(\frac{a + 1}{a^{\frac{2}{3}} - a^{\frac{1}{3}} +
     1} - \frac{a - 1}{a - a^{\frac{1}{2}}}\right)^{10}` into a binomial and
     determine the term independent of :math:`a.`

139. Find the coefficient of :math:`x^2` in :math:`\left(x +
     \frac{1}{x}\right)^{10}(1 - x + 2x^2)`

140. Find the coefficient of :math:`x^4` in the expression of :math:`(1 + x -
     2x^2)^6`

141. Find the term indepndent of :math:`x` in :math:`(1 + x +
     2x^3)\left(\frac{3}{2}x^2 - \frac{1}{3x}\right)^9`

142. Find the term independent of :math:`x` in :math:`\left(x^2 +
     \frac{1}{x^3}\right)^7(2 - x)^{10}`

143. Find the term independent of :math:`x` in :math:`(1 + x + x^{-2} +
     x^{-3})^{10}`

144. Let :math:`(1 + x^2)^2(1 + x)^n = \sum_{k = 0}^{n + 4}a_kx^k`

     If :math:`a_1, a_2` and :math:`a_3` are in A.P., find :math:`n.`

145. Show that :math:`{}^mC_1 + {}^{m + 1}C_2 + {}^{m + 2}C_3 + \ldots +
     {}^{m + n - 1}C_n = {}^nC_1 + {}^{n + 1}C_2 + {}^{n + 2}C_3 + \ldots +
     {}^{n + m - 1}C_n`

146. If :math:`n\in N` and :math:`(1 + x + x^2)^n = \sum_{r = 0}^{2n}a_rx^r,`
     prove that

     i. :math:`a_r = a_{2n - r}`

     ii. :math:`a_0 + a_1 + a_2 + \ldots + a_{n - 1} = \frac{1}{2}(3^n - a_n)`

     iii. :math:`(r + 1)a_{r + 1} = (n - r)a_r + (2n - r + 1)a-{r - 1},` where
          :math:`0 < r < 2n`

147. If :math:`(1 - x^3)^n = \sum_{r = 0}^n a_rx^r.(1 - x)^{3n - 2r},` where
     :math:`n\ in N,` then find :math:`a_r.`

148. Show that the coefficient of middle term in the expansion of :math:`(1 +
     x)^2n` is double the coefficient of :math:`x^n` the expansion of :math:`(1
     + x)^{2n - 1}`

149. Find the value of :math:`r` for which :math:`{}^{200}C_r` is greatest.

150. Committees of how many persons should be made out of :math:`20` persons so
     that number of committees is maximum.

151. Show that the number of permutations which can be formed from :math:`2n`
     letters which are either 'a' or 'b' is greatest when the number of
     a's is equal to the number of b.

152. Find the consecutive terms in the binomial expansion of :math:`(3 +
     2xy)^7` whose coefficients are equal.

153. Find the sum of coefficients in the expansion of :math:`(1 + 5x^2 -
     7x^3)^{2000}`

154. If the sum of the coefficients in the expansion of
     :math:`\left(3^{-\frac{x}{4}} + 3^{\frac{5x}{4}}\right)^n` is :math:`64`
     and the term with greatest coefficient exceeds the third term by :math:`(n
     - 1)` and :math:`[\alpha] = x,` where :math:`[\alpha]` denotes the
     integral part of :math:`\alpha` find the value of :math:`\alpha.`

155. Find the sum of coefficients in the expansion of the binomial coefficients
     :math:`(5p - 4q)^n,` where :math:`n` is a positive integer.

156. Find the sum of the coefficients of the polynomial :math:`(1 - 3x +
     x^3)^{201} . (1 + 5x - 5x^2)^{503}`

157. If the sum of the coefficients in the expansion of :math:`(tx^2 - 2x +
     1)^n` is equal to the sum of coefficients in the expansion of :math:`(x -
     ty)^n,` where :math:`n\in N,` then find the value of :math:`t.`

158. If :math:`a_0, a_1, a_2, \ldots, a_n` be the successive coefficient of
     :math:`(1 + x)^n,` show that

     :math:`(a_0 - a_2 + a_4 - \ldots)^2 + (a_1 -a_3 + a_5 - \ldots)^2 = a_0 +
     a_1 + \ldots + a_n = 2^n`

159. Find the greatest term in the expansion of :math:`\sqrt{3}\left(1 +
     \frac{1}{\sqrt{3}}\right)^{20}`

160. In the expansion :math:`(x + a)^{15},` if the eleventh term is the G.M. of
     the eightth and twelfth terms, which term in the expression is the
     greatest?

161. If the greatest term in the expansion of :math:`(1 + x)^{2n}` has the
     greatest coefficient if and only if :math:`x \in \left(\frac{10}{11},
     \frac{11}{10}\right)` and the fourth term in the expansion of
     :math:`\left(kx + \frac{1}{x}\right)^m,` is :math:`\frac{m}{4},` then find
     the value of :math:`mk.`

162. Given that the :math:`4^{th}` term in the exxpansion of :math:`\left(2 +
     \frac{3}{8}x\right)^{10}` has the maximum numerical value, find the range
     of values of :math:`x` for which this would be true.

163. If :math:`n` is a positive integer, show that :math:`9^n + 7` is divisible
     by :math:`8.`

164. If :math:`n` is a positive integer, show that :math:`3^{2n + 1} + 2^{n +
     2}` is divisible by :math:`7.`

165. Show that the roots of the equation :math:`ax^2 + 2bx + c = 0` are real
     and unequal, where :math:`a, b, c` are three consecutive coefficients in
     any binomial expansion with positive integral index.

166. Show that no three consecutive binomial coefficients can be in G.P. or
     H.P.

167. If :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n,` show that
     :math:`C_n - 2.C_1 + 3.C_2 - \ldots +(-1)^n(n + 1)C_n = 0`

168. If :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n,` show that
     :math:`C_0 -3.C_1 + 5.C_2 - \ldots + (-1)^n(2n + 1)C_n = 0`

169. If :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n,` show that
     :math:`a - (a - 1)C_1 + (a - 2)C_2 - (a - 3)C_3 + \ldots + (-1)^n(a -
     n)C_n = 0`

170. Prove that :math:`\sum_{r = 0}^n r^2.{}^nC_r p^rq^{n - r} = npq + n^2p^2`
     if :math:`p + q = 1`

171. If :math:`C_r` stands for :math:`{}^nC_r,` show that :math:`2.C_0 +
     \frac{2^2}{2}C_1 + \frac{2^3}{3}C_2 + \ldots + \frac{2^{11}}{11}C_{11} =
     \frac{3^{11} - 1}{11}`

172. Prove that :math:`C_1 - \frac{1}{2}C_2 + \frac{1}{3}C_3 - \ldots +
     \frac{(1)^nC_n}{n} = 1 + \frac{1}{2} + \frac{1}{3} + \ldots + \frac{1}{n}`

173. Prove that :math:`\frac{C_0}{1} - \frac{C_1}{5} + \frac{C_2}{9} - \ldots +
     (-1)^n\frac{C_n}{4n + 1} = \frac{n.4^n}{1.5.9.\ldots (4n + 1)}`

174. Show that :math:`\frac{C_0}{n} - \frac{C_1}{n + 1} + \frac{C_2}{n + 2} -
     \ldots + (-1)^n\frac{C_n}{2n} = \frac{n!(n - 1)!}{(2n)!}`

175. Show that :math:`\frac{C_0}{n(n + 1)} - \frac{C_1}{(n + 1)(n + 2)} +
     \frac{C_2}{(n + 2)(n + 3)} - \ldots + (-1)^n\frac{C_{n}}{2n(2n + 1)} =
     \frac{1}{(2n + a)}.\frac{1}{{}^{2n}C_{n - 1}}`

176. Show that :math:`\frac{C_0}{x} - \frac{C_1}{x + 1} + \frac{C-2}{x + 2} -
     \ldots + (-1)^n\frac{C_n}{x + n} = \frac{n!}{x(x + 1)\ldots (x + n)}`

177. Show that :math:`C_0^2 - C_1^2 + C_2^2 - \ldots + (-1)^nC_n^2 = 0` or
     :math:`(-1)^{\frac{n}{2}}. \frac{n!}{\left(\frac{n}{2}\right)!}^2`
     according as :math:`n` is odd or even.

178. Show that :math:`{}^mC_r{}^nC_0 + {}^mC_{r - 1}{}^nC_1 + {}^mC_{r -
     2}{}^nC_2 + \ldots + {}^mC_0{}^nC_r = {}^{m + n}C_r,` where :math:`m, n,
     r` are positive integers and :math:`r < m, r < n.`

179. :math:`{}^{2n}C_0^2 - {}^{2n}C_1^2 + {}^{2n}C_2^2 - \ldots +
     (-1)^{2n}.{}^{2n}C_{2n}^2 = (-1)^n.{}^{2n}C_n.`

180. Show that :math:`C_1^2 + 2.C_2^2 + 3.C_3^2 + \ldots + n.C_n^2 =
     \frac{(2n - 1)!}{[(n - 1)!]^2}`

181. Show that :math:`C_0^2 + \frac{C_1^2}{2} + \frac{C_2^2}{3} + \ldots +
     \frac{C_n^2}{n + 1} = \frac{(2n + 1)!}{[(n + 1)!]^2}`

182. If :math:`n` is a positive integer in :math:`(1 + x)^n,` show that
     :math:`2.\frac{\left(\frac{n}{2}!\right)^2}{n!}[c_0^2 -2.C_1^2 + 3.C_2^2 -
     \ldots + (-1)^n.(n + 1)C_n^2] = (-1)^{\frac{n}{2}}(2 + n)`

183. Show that :math:`\sum_{0\leq i \leq n}\sum_{0\leq i \leq j\leq n}C_i
     C_j = 2^{2n - 1}- \frac{(2n)!}{2(n!)^2}`

184. Show that :math:`\sum_{r=0}^nC_r^3` is equal to the coefficient of
     :math:`x^ny^n` in the expansion of :math:`[(1 + x)(1 + y)(x + y)]^n.`

185. Let :math:`n` be a positive integer and :math:`(1 + x + x^2)^n = a_0 +
     a_1x + a_2x^2 + a_3x^3 + \ldots + a_{2n}x^{2n},` show that :math:`a_0^2 -
     a_1^2 + a_2^2 - \ldots + a_{2n}^2 = a_n`

186. Let :math:`n` be a positive integer and :math:`(1 + x + x^2)^n = a_0 +
     a_1x + a_2x^2 + a_3x^3 + \ldots + a_{2n}x^{2n},` show that :math:`a_0^2 -
     a_1^2 + a_2^2 - \ldots + (-1)^na_{n - 1}^2 = \frac{1}{2}a_n[1 -
     (-1)^na_n]`

187. Show that :math:`\sum_{0\leq i \leq n}\sum_{0\leq i \leq j\leq n} (C_i +
     C_j)^2 = (n - 1){}^{2n}C_n + 2^{2n}`

188. Show that :math:`\sum_{0\leq i \leq n}\sum_{0\leq i \leq j\leq n} (i +
     j)C_iC_j = n(2^{2n - 1} - \frac{1}{2}{}^{2n}C_n)`

189. Show that :math:`(C_0 + C_1)(C_1 + C_2)(C_2 + C_3)\ldots (C_{n - 1} + C_n)
     = \frac{(n + 1)^n}{n!}C_1.C_2.\ldots .C_n`

190. If :math:`n` be a positive integer prove that :math:`\frac{1}{1!(n -
     1)!} + \frac{1}{3!(n - 3)!} + \frac{1}{5!(n - 5)! + \ldots + \frac{1}{(n -
     1)!1!}} = \frac{2^{n - 1}}{n!}`

191. Prove that :math:`\frac{3!}{2(n + 3)} =
     \sum_{r=0}^n(-1)^r.\left(\frac{{}^nC_r}{{}^{r + 3}C_r}\right)`

192. Show that for :math:`m\geq 2, C_0 - C_1 + C_2 - \ldots + (-1)^{m -
     1}C_{m - 1} = (-1)^{m - 1}\frac{(n- 1)(n - 2) \ldots (n - m + 1)}{(m -
     1)!}`

193. Find the GCD of :math:`{}^2nC_1, {}^{2n}C_3,{}^{2n}C_5, \ldots,
     {}^{2n}C_{2n - 1}`

194. Show that :math:`\sum_{r = 0}^n{}^nC_r \sin rx\cos (n  - r)x = 2^{n -
     1}\sin nx`

195. Show that :math:`C_1 -2.C_2 + 3.C_3 - \ldots + (-1)^{n - 1}n.C_n= 0`

196. :math:`a.C_0 + (a - b).C_1 + (a - 2b)C_2 + \ldots + (a - nb).C_n = 2^{n -
     1}(2a - nb)`

197. :math:`a^2.C_0 - (a - 1)^2.C_1 + (a - 2)^2.C_2 - \ldots + (-1)^n(a -
     n)^2.C_n = 0; n > 3`

198. If :math:`a_0, a_1, a_2, \ldots, a_n` be in an A.P, prove that
     :math:`a_0 - a_1.C_1 + a_2.C_2 - \ldots + (-1)^n a_n. C_n = 0`

199. Show that for :math:`n > 3, \sum_{r = 0}^n(-1)^r(a - r)(b - r)C_r = 0`

200. Show that for :math:`n > 3, \sum_{r = 0}^n(-1)^r(a - r)(b - r)(c - r)C_r =
     0`

201. Find the value of :math:`n` for :math:`\frac{C_0}{2^n} + \frac{2.C_1}{2^n}
     + \frac{3.C_2}{2^n} + \ldots + \frac{(n + 1)C_n}{2^n} = 16` is true?

202. If :math:`a_0, a_1, a_2, \ldots, a_{n + 1}` be in an A.P, prove that
     :math:`\sum_{k = 0}^n a_{k + 1}C_k = 2^{n - 1}(a_1 + a_{n + 1})`

203. If :math:`s = \frac{n + 1}{2}[2a + nd]` and :math:`S = a + (a + d)C_1 +
     (a + 2d)C_2 + \ldots + (a + nd)C_n,` prove that :math:`(n + 1)S = 2^n.s`

204. If :math:`(1 + x + x^2 + \ldots + x^p)^n = a_0 + a_1x + a_2x^2 + \ldots +
     a_{np}x^{np},` show that :math:`a + 2a_2 + 3a_3 + \ldots + npa_{np} =
     \frac{1}{2}np(p + 1)^n`

205. Prove that :math:`C_0 - 2^2C_1 + 3^2 C_2 - \ldots + (-1)^n(n + 1)^2C_n =
     0, n > 2`

206. Show that :math:`\frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} + \ldots =
     \frac{2^n - 1}{n + 1}`

207. Show that :math:`\frac{C_0}{1.2} - \frac{C_1}{2.3} + \frac{C_2}{3.4} +
     \ldots + (-1)^n\frac{C_n}{(n + 1)(n + 2)} = \frac{1}{n + 2}`

208. Show that :math:`\frac{C_0}{2} - \frac{C_1}{3} + \frac{C-2}{4} - \ldots +
     (-1)^n\frac{C_n}{n + 2} = \frac{1}{(n + 1)(n + 2)}`

209. Show that :math:`\frac{C_0}{3} - \frac{C_1}{4} + \frac{C-2}{5} - \ldots +
     (-1)^n\frac{C_n}{n + 3} = \frac{2}{(n + 1)(n + 2)(n + 3)}`

210. Show that :math:`3.C_0 + 3^2\frac{C_1}{2} + 3^3\frac{C_2}{3} + \ldots +
     3^{n + 1}\frac{C_n}{n + 1} = \frac{4^{n + 1} - 1}{n + 1}`

211. Show that :math:`\sum_{k = 0}^{15}\frac{{}^{15}C_k}{(k + 1)(k + 2)} =
     \frac{26{17} - 18}{16.17}`

212. Show that :math:`\frac{C_0}{1} - \frac{C_1}{4} + \frac{C_2}{7} - \ldots +
     (-1)^n\frac{C_n}{3n + 1} = \frac{3^nn!}{1.4.7.\ldots + (3n + 1)}`

213. Show that :math:`\sum_{r = 0}^n \frac{(-1)^rC_r}{(r + 1)(r + 2)} =
     \frac{1}{n + 2}`

214. Prove that :math:`\sum_{r = 0}^n \frac{C_re^{r + 3}}{(r + 1)(r + 2)(r +
     3)} = \frac{4^{n + 3} - 1 - \frac{3}{2}(n + 3)(en + 8)}{(n + 1)(n + 2)(n +
     3)}`

215. Prove that :math:`\sum_{r = 0}^n \frac{r + 2}{r + 1}C_r = \frac{2^n(n + 3)
     - 1}{n + 1}`

216. Show that :math:`\sum_{r = 0}^n \frac{3^{r + 4}C_r}{(r + 1)(r + 2)(r +
     3)(r + 4)} = \frac{1}{(n + 1)(n + 2)(n + 3)(n + 4)}\left[4^{n + 4} -
     sum_{k = 0}^3 {}^{n + 4}C_k3^k\right]`

217. Show that :math:`\sum_{r=0}^{n - 3}C_rC_{r + 3} = \frac{(2n)!}{(n +
     3)!(n - 3)!}`

218. Show that sum of the product taken two at a time from :math:`C_0, C_1,
     C_2, \ldots` is :math:`2^{2n - 1}\frac{(2n - 1)!}{n!(n - 1)!}`

219. If :math:`S_n = C_0C_1 + C_1C_2 + \ldots + C_{n - 1}C_n` and
     :math:`\frac{S_{n + 1}}{S_n} = \frac{15}{4},` find n.

220. Show that :math:`C_0^2 + \frac{C_1^2}{2} + \frac{C_2^2}{3} + \ldots +
     \frac{C_n^2}{n + 1} = \frac{(n + 2)(2n - 1)!}{n!(n - 1)!}`

221. Show that :math:`C_1^2 -2.C_2^2 + 3.C_3^2 - \ldots - 2nC_{2n}^2 = (-1)^{n -
     1}.n.C_n` where :math:`C_r = {}^{2n}C_r`

222. Show that :math:`{}^{25}C_0^2 - {}^{25}C_1^2 + {}^{25}C_2^2 - \ldots -
     {}^{25}C_25^2 = 0`

223. Show that :math:`C_0.{}^{2n}C_n - C_1{}^{2n - 2}C_n + C_2{}^{2n -4}C_n -
     \ldots = 2^n`

224. Show that :math:`\sum_{0\leq i \leq n}\sum_{0\leq i \leq j\leq n}(i +
     j)(C_i + C_j + C_iC_j) = n^2.2^n + n\left(2^{2n - 1} -
     \frac{(2n)!}{2(n!)^2}\right)`

225. If :math:`(1 + x + x^2)^n = a_0 + a_1x + a_2x^2 + \ldots + a_{2n}x^{2n}`
     show that :math:`a_0a_{2r} - a_1a_{2r + 1} + a_2a_{2r + 2} - \ldots +
     a_{2n -2r}a_{2n} = a_{n + r}`

226. If :math:`a_r = \frac{1.3.5.\ldots (2r - 1)}{2.4.6.\ldots 2r}` then show
     that :math:`a_{2n + 1} + a_1a_{2n} + a_2a_{2n - 1} + \ldots +
     a_na_{n + 1} = \frac{1}{2}`

227. If :math:`P_n` denotes the product of all coefficients in the expansion of
     :math:`(1 + x)^n,` show that :math:`\frac{P_{n + 1}}{P_n} = \frac{(n +
     1)^n}{n!}`

228. Show that :math:`\sum_{r = 1}^nr^3\left(\frac{C_r}{C_{r - 1}}\right)^2 =
     \frac{1}{12}n(n + 1)^2(n + 2)`

229. Show that :math:`C_3 + C_7 + C_11 + \ldots = \frac{1}{3}\left[2^{n - 1}
     -2^{\frac{n}{2}}\sin \frac{n\pi}{4}\right]`

230. If :math:`(1 + x + x^2)^{20} = a_0 + a_1x + a_2x^2 + \ldots +
     a_{40}x^{40},` then find the value of :math:`a_0 + a_2 + a_4 + \ldots +
     a_{40}`

231. If :math:`(1 + x + x^2)^{20} = a_0 + a_1x + a_2x^2 + \ldots +
     a_{40}x^{40},` then find the value of :math:`a_1 + a_3 + a_5 + \ldots +
     a_{39}`

232. Show that :math:`C_1 - \frac{C_2}{2} + \frac{C_3}{3} - \ldots +
     (-1)^n\frac{C_n}{n} + \frac{1}{n(n - 1)} + \frac{2}{(n - 1)(n - 2)} +
     \ldots + \frac{n - 2}{2.3} = \frac{n + 1}{2}`

233. Show that :math:`\sum_{0\leq i \leq n}\sum_{0\leq i \leq j\leq n}
     \frac{i}{C_i + \frac{j}{C_j}} = \frac{n^2}{2}\sum_{r = 0}^n \frac{1}{C_r}`

234. Show that :math:`\sum_{0\leq i \leq n}\sum_{0\leq i \leq j\leq n}
     i.j.C_i.C_j = n^2\left[2^{2n - 3} - \frac{1}{2}{}^{2n - 2}C_{n -
     1}\right]`

235. Prove that :math:`C_1 - \left(1 + \frac{1}{2}\right)C_2 + \left(1 +
     \frac{1}{2} + \frac{1}{3}\right)C_3 - \ldots + (-1)^n\left(1 + \frac{1}{2}
     + \ldots + \frac{1}{n}\right)C)n = \frac{1}{n}`

236. Find the coefficient of :math:`x^5` in the expansion of :math:`(1 + 2x +
     3x^2)^4`

237. Find the coefficient of :math:`x^3y^4z^2` in the expansion of :math:`(2x -
     3y + 4z)^9`

238. Find the number of terms in :math:`(2x - 3y + 4z)^{100}`

239. Find the coefficient of :math:`x^4` in the expansion of :math:`(1 + x +
     x^2)^3`

240. Find the coefficient of :math:`x^{10}` in :math:`(1 + x + x^2 + x^3 +
     x^4 + x^5)^3`

241. Find the coefficient of :math:`x^7` in :math:`(1 + 3x - 2x^3)^{10}`

242. Find the coefficient of :math:`x^3y^4z^5` in :math:`(xy + yz + zx)^6`

243. Find the greatest coefficient in :math:`(w + x + y + z)^{15}`

244. Find the number of terms in :math:`(a + b + c + d + e)^{100}`

245. If :math:`|x| < 1,` show that :math:`(1 + x)^{-2} = 1 + 2x + 3x^2 + 4x^3 +
     \ldots ~\text{to}~\infty`

246. Find :math:`a, b` so that the coefficient of :math:`x^n` in the
     expansionof :math:`\frac{(a + bx)}{(1 - x)^2}` may be :math:`2n + 1` and
     hence find the sum of the series :math:`1 + 3\left(\frac{1}{2}\right) +
     5\left(\frac{1}{2}\right)^2 + \ldots`

247. Sum the series :math:`1 + \frac{1}{3} + \frac{1.3}{3.6} +
     \frac{1.3.5}{3.6.9} + \ldots~\text{to}~\infty`

248. If :math:`|x| <1,` show that :math:`(1 - x)^{-1} = 1 + x + x^2 + x^3 +
     \ldots~\text{to}~\infty`

249. If :math:`|x| <1,` show that :math:`(1 + x)^{-1} = 1 - x + x^2 - x^3 +
     \ldots~\text{to}~\infty`

250. If :math:`|x| <1,` show that :math:`(1 + x)^{-2} = 1 - 2x + 3x^2 - 4x^3 +
     \ldots~\text{to}~\infty`

251. If :math:`|x| <1,` show that :math:`(1 - x)^{-3} = 1 + 3x + 6x^2 + 10x^3 +
     \ldots~\text{to}~\infty`

252. If :math:`|x| <1,` show that :math:`(1 + x)^{-3} = 1 - 3x + 6x^2 - 10x^3 +
     \ldots~\text{to}~\infty`

254. If :math:`|x| <1,` show that :math:`(1 + x)^{\frac{1}{5}} = 1 -
     \frac{x}{5} + \frac{3x^2}{25} - \frac{11x^3}{125} +
     \ldots~\text{to}~\infty`

255. Find the first four terms of :math:`\left(\frac{2x}{3} -
     \frac{3}{2x}\right)^{-\frac{3}{2}}`

256. Find the first three terms of :math:`\left(1 - \frac{x}{2}\right)^{-2}`

257. Find the coefficient of :math:`x^6` in :math:`(1 - 2x)^{-\frac{5}{2}}`

258. Find the :math:`(r + 1)^{th}` term and its coefficient in :math:`(1 -
     2x)^{-\frac{1}{2}}`

259. Find the cube root of :math:`1001` correct to four places of decimal.

260. Show that :math:`(1 + 2x + 3x^2 + 4x^3 +
     \ldots~\text{to}~\infty)^\frac{3}{2} = 1 + 3x + 6x^2 + 10x^3 +
     \ldots~\text{to}~\infty,` where :math:`|x| < 1`

261. Sum the series :math:`1 + \frac{1}{4} + \frac{1.3}{4.8} +
     \frac{1.3.5}{4.8.12} + \ldots~\text{to}~\infty`

262. Sum the series :math:`1 + \frac{2}{6} + \frac{2.5}{6.12} +
     \frac{2.5.8}{6.12.18} + \ldots~\text{to}~\infty`

263. If :math:`y = x - x^2 + x^3 - x^4 + \ldots~\text{to}~\infty,` show that
     :math:`x = y + y^2 + y^3 + \ldots~\text{to}~\infty`

264. Show that the coefficient of :math:`x^n` in :math:`(1 + x + x^2)^{-1}` is
     :math:`1, 0, -1` as :math:`n` is of the form :math:`3m, 3m -1, 3m + 1`

265. Show that :math:`\frac{1}{e} = 2\left[\frac{1}{3!} + \frac{2}{5!} +
     \frac{3}{7!} + \ldots~\text{to}~\infty\right]`

266. Sum the series :math:`1 + \frac{2^2}{2!} + \frac{3^2}{3!} + \frac{4^2}{4!}
     + \ldots~\text{to}~\infty`

267. Show that :math:`\log 2 = \frac{1}{1.2} + \frac{1}{3.4} + \frac{1}{5.6} +
     \ldots~\text{to}~\infty`

268. If :math:`y = x - \frac{x^2}{2} + \frac{x^3}{3} - \frac{x^4}{4} +
     \ldots~\text{to}~\infty,` show that :math:`x = y + \frac{y^2}{2!} +
     \frac{y^3}{3!} + \ldots~\text{to}~\infty`

269. If :math:`\alpha, \beta` be the roots of the equation :math:`ax^2 + bx + c
     = 0,` show that :math:`\log(a - bx + cx^2) = =log a + (\alpha + \beta)x -
     \frac{(\alpha^2 + \beta^2)}{2}x^2 + \ldots~\text{to}~\infty`

270. Prove that :math:`\frac{e^x - 1}{x} = 1 + \frac{x}{2!} + \frac{x^2}{3!} +
     \ldots~\text{to}~\infty`

271. Prove that :math:`\frac{e^x - e^{-x}}{x} = 2\left[1 + \frac{x^2}{3!} +
     \frac{x^4}{5!} + \ldots~\text{to}~\infty\right]`

272. Prove that :math:`\frac{a^x - 1}{x} = \log a + \frac{x(\log a)^2}{2!} +
     \frac{x^2(\log a)^3}{3!} + \ldots~\text{to}~\infty`

273. Sum the series :math:`\frac{1}{3!} + \frac{2}{5!} + \frac{3}{7!} +
     \ldots~\text{to}~\infty`

274. Sum the series :math:`\frac{1}{2!} + \frac{3}{4!} + \frac{5}{6!}+
     \ldots~\text{to}~\infty`

275. Sum the seeries :math:`\frac{1}{2!} + \frac{1 + 2}{3!} + \frac{1 + 2 +
     3}{4!} + \ldots~\text{to}~\infty`

276. Sum the series :math:`\frac{1^3}{1!} + \frac{2^3}{2!} + \frac{3^3}{3!} +
     \ldots~\text{to}~\infty`

277. Prove that :math:`1 -\log 2 = \frac{1}{2.3} + \frac{1}{4.5} +
     \frac{1}{6.7} + \ldots~\text{to}~\infty`

278. Prove that :math:`\log (1 + x) - \log(x - 1) = 2\left[\frac{1}{x} +
     \frac{1}{3x^3} + \frac{1}{5x^5} + \ldots~\text{to}~\infty\right]`

279. Prove that :math:`2\log x - \log(x + 1) - \log(x -1) = \frac{1}{x^2} +
     \frac{1}{2x^4} + \frac{1}{3x^6} + \ldots~\text{to}~\infty`

280. Prove that :math:`\log(1 + x)^{1 + x}\log(1 - x)^{1 - x} =
     2.\left[\frac{x^2}{1.2} + \frac{x^4}{3.4} + \frac{x^6}{5.6} +
     \ldots~\text{to}~\infty\right]`

281. If :math:`\alpha, \beta` be the roots of the equation :math:`x^2 -px + q =
     0,` show that :math:`\log(1 + px + qx^2) = (\alpha +\beta)x -
     \frac{\alpha^2 + \beta^2}{2}x^2 + \frac{\alpha^3 + \beta^3}{3}x^3 +
     \ldots~\text{to}~\infty`

Solutions
=========
1. :math:`\left(x + \frac{1}{x}\right)^5`

   :math:`= {}^5C_0x^5 + {}^5C_1x^4\frac{1}{x} + {}^5C_2x^3\frac{1}{x^2} +
   {}^5C_3x^2\frac{1}{x^3} + {}^5C_4x\frac{1}{x^4} + {}^5C_5\frac{1}{x^5}`

   :math:`= x^5 + 5x^3 + 10x + \frac{10}{x} + \frac{5}{x^3} + \frac{1}{x^5}`

2. :math:`(10.1)^5 = (10 + 0.1)^5`

   :math:`= 10^5 + {}^5C_110^4(0.1) + {}^5C_210^3(0.1)^2 + {}^5C_310^2(0.1)^3 +
   {}^5C_410(0.1)^4 + (0.1)^5`

   :math:`= 100000 + 5000 + 100 + 1 + 0.0005 + 0.00001`

   :math:`= 105101.000501`

3. Let :math:`\sqrt{x - 1} = a`

   :math:`(x + \sqrt{x - 1})^6 = (x + a)^6`

   :math:`= x^6 + {}^6C_1x^5a + {}^6C_2x^4a^2 + {}^6C_3x^3a^3 + {}^6C_4x^2a^4 +
   {}^6C_5xa^5 + a^6`

   :math:`(x - \sqrt{x - 1})^6 = (x - a)^6`

   :math:`= x^6 - {}^6C_1x^5a + {}^6C_2x^4a^2 - {}^6C_3x^3a^3 + {}^6C_4x^2a^4 -
   {}^6C_5xa^5 + a^6`

   :math:`\therefore (x + \sqrt{x - 1})^6 + (x - \sqrt{x - 1})^6 = 2x^6 +
   2{}^6C_2x^4a^2 + 2{}^6C_4x^2a^4 + 2a^6`

   :math:`= 2[x^6 + 15x^5 - 29x^3 + 12x^2 + 3x - 1]`

4. Clearly :math:`(x + a)^n = A + B` and :math:`(x - a)^n = A - B`

   Thus, :math:`A^2 - B^2 = (x^2 - a^2)^n`

5. Let us solve these two parts one by one

   i. Given :math:`(7 + 4\sqrt{3})^n = \alpha + \beta`

      :math:`7 - 4\sqrt{3} = \frac{49 - 48}{7 + 4\sqrt{3}} = \frac{1}{7 +
      4\sqrt{3}} < 1`

      :math:`\therefore (7 - 4\sqrt{3})^n = \beta_1 < 1`

      :math:`\alpha + \beta + \beta_1 = 2[7^n + {}^nC_27^{n - 2}48 + \ldots]`

      :math:`=~\text{an even integer}`

      :math:`\beta + \beta_1 =~\text{an even integer - a positive integer = an
      integer}`

      :math:`\because 0 < \beta < 1` and :math:`0 < \beta_1 < 1`

      :math:`\therefore 0 < \beta + \beta_1 < 2`

      :math:`\therefore \beta + \beta_1 = 1`

      :math:`\alpha + 1 =~\text{an even number}~\therefore \alpha =~\text{an odd number}`

   ii. :math:`(\alpha + \beta)(1 - \beta) = (\alpha + \beta)\beta_1`

       :math:`= (7 + 4\sqrt{3})^n(7 - 4\sqrt{3})^n = 1`

6. Let :math:`r^{th}` term contain :math:`\frac{1}{y^2}`

   :math:`t_r = {}^{10}C_{r - 1}y^{10 - r + 1}\left(\frac{c^3}{y^2}\right)^{r -
   1}`

   :math:`={}^{10}C_{r - 1}y^{13 - 3r}c^{3r - 3}`

   :math:`\therefore 13 -3r - =2\Rightarrow r = 5`

   :math:`\therefore` Coefficient of :math:`y^-2 = {}^{210}c^{12}`

7. :math:`(1 + 3x + 3x^2 + x^3)^{15} = [(1 + x)^3]^{15} = (1 + x)^{45}`

   :math:`\therefore` Coefficient of :math:`x^9 = {}^{45}C_9 =
   \frac{45!}{9!36!}`

8. Let :math:`r^{th}` term be independent of :math:`x`

   :math:`t_r = {}^9C_{r -1}\left(\frac{3}{2}x^2\right){10 -
   r}\left(-\frac{1}{3x}\right)^{r - 1}`

   :math:`= (-1)^{r - 1}{}^9C_{r - 1}\left(\frac{3}{2}\right)^{10 -
   r}\frac{1}{3^{r - 1}}x^{21 - 3r}`

   :math:`\therefore 21 - 3r = 0 \Rightarrow r = 7`

   :math:`\therefore` Coefficient :math:`= \frac{7}{18}`

9. :math:`(1 + x)^m\left(x + \frac{1}{x}\right)n = x^{-n}(1 + x)^{m + n}`

   Thus, the term which will have :math:`x^n` in :math:`(1 + x)^{m + n}` will
   be independent of :math:`x.`

   :math:`\therefore` Coefficient of :math:`x^n` in :math:`(1 + x)^{m + n} =
   {}^{m + n}C_n = \frac{(m + n)!}{m!n!}`

10. Coefficient of :math:`x^{-1}` in :math:`(1 + 3x^2 + x^4)\left(1 +
    \frac{1}{x}\right)^8 =` coefficient of :math:`x^{-1}` in :math:`\left(1 +
    \frac{1}{x}\right)^8` + :math:`3 *` coefficient of :math:`x^{-3}` in
    :math:`\left(1 + \frac{1}{x}\right)^8` + coefficient of :math:`x^{-5}` in
    :math:`\left(1 + \frac{1}{x}\right)^8`

    :math:`r^{th}` term in the expansion of :math:`\left(1 +
    \frac{1}{x}\right)^8` is given by :math:`t_r = {}^8C_{r - 1}x^{1 - r}`

    When :math:`1 - r = 1, r = 2,` coefficient :math:`= {}^8C_1`

    When :math:`1 - r = -3, r = 4,` coefficient :math:`= {}^8C_3`

    When :math:`1 - r = -5, r = 6` coefficient :math:`= {}^8C_5`

    Required coefficient :math:`= {}^8C_1 + {}^8C_3 + {}^8C_5 = 222`

11. :math:`a_{r - 1} = {}^{2n - 1}C_{r - 1}(-1)^{r - 1}`

    :math:`a_{2n - r} = {}^{2n - 1}C_{r - 1}(-1)^{r}`

    :math:`a_{r - 1} + a_{2n - r} = 0`

12. :math:`t_r = {}^{10}C_{r - 1}x^{\frac{15 - 5r}{2}}k^{r - 1}`

    Since the term is independent of :math:`x, \therefore 15 - 5r = 0
    \Rightarrow r = 3`

    :math:`t_3 = {}^{10}C_2k^2 = 405 \therefore k = \pm 3`

13. :math:`t_k = {}^{n - 3}C_{k - 1}x^{n - 3k}`

    Since :math:`t_k` should contains :math:`x^{2r}, \therefore 2k = n - 3k`

    :math:`k = \frac{n - 2r}{3}`

    If :math:`n - 2r` is not divisible by :math:`3` then the expansion will
    have no term with :math:`x^{2r}`

14. :math:`t_r = {}^nC_{r - 1}x^{an - (a + b)(r - 1)}`

    Since the term has to be independent of :math:`x, \Rightarrow an - (a +
    b)(r - 1) = 0`

    :math:`r = 1 + \frac{an}{a + b}`

    Thus, for :math:`r` to be an integer :math:`an` must be a multiple of
    :math:`a + b`

15. :math:`\left(x + \frac{1}{x}\right)^7 = x^7 + {}^7C_1x^5 + {}^7C_2x^3 +
    {}^7C_3x + {}^7C_4x^{-1} + {}^7C_5x^{-3} + {}^7C_6x^{-5} + x^{-7}`

    :math:`= x^7 + 7x^5 + 21x^3 + 35x + 35x^{-1} + 21x^{-3} + 7x^{-5} + x^{-7}`

16. This problem is simple and has been left as an exercise.

17. :math:`(1 + ax)^n = 1 + 8x + 24x^2 + \ldots = 1 + {}^nC_1ax + {}^nC_2a^2x^2
    + \ldots`

    Comparing coefficients of :math:`x, an = 8`

    Comparing coefficients of :math:`x^2, \frac{n(n - 1)}{2}a^2 = 24`

    :math:`\Rightarrow \frac{64 - 8a}{2} = 24, \Rightarrow a = 2, n = 4`

18. This problem is simple and similar to 3 and has been left as an exercise.

19. :math:`t_7 =
    {}^9C_6\left(\frac{4x}{5}\right)^3\left(-\frac{5}{2x}\right)^6`

    :math:`= \frac{10500}{x^3}`

20. This problem is simple and similar to 3 and 18 and has been left as an
    exercise.

21. :math:`(0.99)^{15} = (1 - 0.01)^15`

    Since we have to evaluate only for :math:`4` decimal places considering
    first four terms will do.

    First three terms :math:`= {}^{15}C_0 - {}^15C_1(.01) + {}^{15}C_2(.01)^2 +
    {}^{15}C_3(.01)^3 =
    1 - .15 + .0105 - .000455 = 0.8600`

22. :math:`(999)^3 = (1000 - 1)^3 = 1000^3 - 3. \frac{1000^2}{2} +
    3.\frac{1000}{2} - 1`

    :math:`= 99700299`

23. :math:`(0.99)^{10} = (1 - 0.01)^{10}`

    Since we have to evaluate only for :math:`4` decimal places considering
    first four terms will do.

    First three terms :math:`= {}^{10}C_0 - {}^10C_1(.01) + {}^{10}C_2(.01)^2 -
    {}^{10}C_3(.01)^3 = 10 - .1 + 0.0045 - .000105 = .9044`

24. This problem is simple and similar to 21 and 23 and has been left as an
    exercise.

25. :math:`A = {}^nC_0x^n + {}^nC_2x^{n - 2}a^2 + {}^nC_4x^{n - 4}a^4 + \ldots`

    :math:`B = {}^nC_1x^{n - 1}a + {}^nC_3x^{n - 3}a^3 + {}^nC_5x^{n - 5}a^5 +
    \ldots`

    :math:`(x + a)^{2n} - (x - a)^{2n} = 2[{}^{2n}C_1x^{2n - 1}a +
    {}^2nC_3x^{2n - 3}a^3]`

    :math:`4AB = 4{}^nC_0{}^nC_1x^{2n - 1}a + 4x^{2n - 3}a^3[{}^nC_0{}^nC_3 +
    {}^nC_1{}^nC_2 + \ldots]`

    Thus, we see that :math:`4AM = (x + a)^n - (x - a)^n`

26. Let :math:`(5 + 2\sqrt{6})^n = \alpha + \beta` where :math:`\alpha` is a
    positive integer and :math:`beta` is a proper fracttion.

    Also let, :math:`\gamma = (5 - 2\sqrt{6})^n`

    Now, :math:`5 - 2\sqrt{6} = \frac{5^2 - 4*6}{5 + 2\sqrt{6}} = \frac{1}{5 +
    2\sqrt{6}} < 1`

    :math:`\therefore \gamma^n < 1`

    :math:`\alpha + \beta + \gamma = 2[5^n + {}^nC_25^{n - 2}6^2 + \ldots] =`
    An even number

    :math:`\beta + \gamma =` An even number :math:`-` An interger = An integer

    :math:`0 < \beta < 1` and :math:`0 < \gamma < 1`

    :math:`\therefore \beta + \gamma = 1`

    :math:`\therefore \alpha` is an off number.

27. This problem is simple and similar to 5. It has been left as an exercise.

28. :math:`t_r = {}^9C_{r - 1}(2x)^{9 - r + 1}\left(-\frac{3}{x}\right)^{r -
    1}`

    :math:`= {}^9C_{r - 1}2^{9 -r + 1}(-3)^{r - 1}x^{9 - r + 1 - r + 1}`

    Now the power of :math:`x` should be :math:`1, \therefore 11 - 2r = 1
    \Rightarrow r = 5`

    Coefficients  of :math:`x` is :math:`= {}^9C_42^{5}(-3)^{4} = 2592{}^9C_4`

29. :math:`t_r = {}^{11}C_{r - 1}(3x^2)^{11 - r + 1}(5x)^{1 - r}`

    :math:`= {}^{11}C_{r- 1}3^{12 - r}(5)^{r - 1}x^{24 - 2r + 1 - r}`

    :math:`7 = 25 - 3r \Rightarrow r = 6`

    :math:`\therefore` Coefficients of :math:`t_6 = {}^{11}C_53^65^5`

30. :math:`t_r = {}^{20}C_{r - 1}(2x^2)^{20 - r + 1}(-x)^{1 - r}`

    :math:`= {-1}^{r - 1}{}^{20}C_{r - 1}2^{21 - r}x^{42 - 2r + 1 - r}`

    Since we need coefficients of :math:`x^9, \therefore 9 = 43 - 3r,
    \Rightarrow r = \frac{34}{3}`

    Since :math:`r` is not an integer, there is no term containing :math:`x^9`
    leading coefficient to be :math:`0.`

31. :math:`t_r = {}^{15}C_{r - 1}(x^2)^{15 -r + 1}(3ax^{-1}){r - 1}`

    :math:`t-r = {}^{15}C_{r - 1}.(3a)^{r - 1}x^{32 - 2r + 1 - r}`

    Since we need coefficients of :math:`x^{24}, \therefore 24 = 33 - 3r`

    :math:`\Rightarrow r = 3`

    :math:`\therefore` Coefficient of :math:`x^{24} = 9a^2{}^{15}C_2`

32. :math:`t_r = {}^9C_{r - 1}(x^2)^{9 - r + 1}(-3x^{-1})^{r - 1}`

    :math:`= {}^9C_{r - 1}(-3)^{r - 1}x^{20 - 2r + 1 - r}`

    Since we need coefficients of :math:`x^{9}, \therefore 9 = 21 - 3r,
    \Rightarrow r = 4`

    :math:`\therefore` Coefficent of :math:`x^9, = 27.{}^9C_3`

33. :math:`t_r = {}^{11}C_{r - 1}(2x)^{11 -r + 1}\left(\frac{1}{3x^2}\right)^{r
    - 1}`

    :math:`= {}^{11}C_{r - 1}2^{12 - r}\frac{1}{3^{r - 1}}x^{12 - r + 2 - 2r}`

    Since we need coefficients of :math:`x^{-7}, \therefore -7 = 14 - 3r,
    \Rightarrow r = 7`

    :math:`\therefore` Coefficients of :math:`x^{-7}, =
    {}^{11}C_62^6\frac{1}{3^5}`

34. :math:`r^{th}` term in the expansion of :math:`\left(ax^2 +
    \frac{1}{bx}\right)^{11}` is given by :math:`t_r = {}^{11}C_{r -
    1}(ax^2)^{12 - r}\frac{1}{(bx)^{r - 1}}`

    :math:`t_r = {}^{11}C_{r - 1}a^{12 - r}b^{1 - r}x^{24 - 2r + 1 - r}`

    Since we need coefficient of :math:`x^7, 7 = 25 -3r, \Rightarrow r = 6`

    Coefficient of :math:`x^7, = {}^{11}C_5a^6b^{-5}`

    :math:`r^{th}` term in the expansion of :math:`\left(ax +
    \frac{1}{bx^2}\right)^{11}` is given by :math:`t_r = (-1)^{r - 1}.{}^{11}C_{r -
    1}(ax)^{12 - r}\frac{1}{(bx^2)^{r - 1}}`

    :math:`t_r = (-1)^{r- 1}.{}^{11}C_{r - 1}a^{12 -r}b^{1 - r}x^{12 - r + 2 - 2r}`

    Since we need coefficient of :math:`x^{-7}, -7 = 14 -3r, \Rightarrow r = 7`

    Cofficient of :math:`x^{-7} = {}^{11}C_6a^5b^{-6}`

    Equating the coefficients we get :math:`ab = 1 \because {}^{11}C_5 =
    {}^{11}C_6`

35. :math:`t_r = {}^{2n}C_{r - 1}x^{4n - 2r + 2}\frac{1}{x^{r - 1}}`

    :math:`t_r = {}^{2n}C_{r - 1}x^{4n - 3r + 3}`

    Since it is the term containing :math:`x^p, p = 4n - 3r + 3, \Rightarrow
    r = \frac{4n - p + 3}{3}`

    :math:`\therefore` Coefficients of :math:`x^p, = {}^{2n}C_{\frac{4n -
    p}{3}}`

    :math:`= \frac{2n!}{\left(\frac{4n -p}{3}\right)!\left(\frac{2n +
    p}{3}\right)}`

36. Let us solve these one by one:

    i. :math:`t_r = {}^{2n}C_{r - 1}x^{2n - r + 1}\frac{1}{x^{r - 1}}`

       Since the term has to be independent of :math:`x \Rightarrow 2n + 2 - 2r
       = 0 \Rightarrow r = n + 1`

       :math:`t_{n + 1} = {}^{2n}C_n = \frac{2n!}{n!n!}`

    ii. :math:`t_r = {}^{15}C_{r - 1}(2x^2){16 - r}\frac{1}{x^{r - 1}}`

        :math:`\Rightarrow 33 - 3r = 0 \Rightarrow r = 11`

        :math:`t_{11} = {}^{15}C_10.2^5`

    iii. :math:`t_r = {}^{10}C_{r - 1}\left(\sqrt{\frac{x}{3}}\right)^{10 - r +
         1}\left(\frac{3}{2x^2}\right)^{r - 1}`

         :math:`\Rightarrow \frac{11 - r}{2} + 2 - 2r = 0 \Rightarrow r = 3`

         :math:`t_3 = {}^{10}C_2\frac{1}{3^4}\frac{3^2}{2^2} =
         {}^{10}C_2\frac{1}{6^2}`

    iv. :math:`t_r = (-1)^{r - 1}.{}^{12}C_{r - 1}(2x^2)^{13 -
        r}\frac{1}{x^{r - 1}}`

        :math:`= (-1)^{r - 1}.{}^{12}C_{r - 1}2^{13 - r}x^{27 - 3r}`

        :math:`\Rightarrow 27 - 3r = 0 \Rightarrow r = 9`

        :math:`t_9 = {}^12C_82^4`

        5, 6, 7 and 8 are left as exercises.

37. :math:`t_r = {}^nC_{r - 1}x^{n - r + 1}\frac{1}{x^{2r - 21}}`

    :math:`= {}^nC_{r - 1}x^{n - 3r + 3}`

    For a term to be independent of :math:`x \Rightarrow r = \frac{n + 3}{3}`

    :math:`\therefore` Coefficient is :math:`{}^nC_{\frac{n}{3}}`

    :math:`= \frac{n!}{\left(\frac{n}{3}\right)!\left(\frac{2n}{3}\right)!}`

38. Coeff. of :math:`x^m` in :math:`(1 + x)^{m + n} = {}^{m + n}C_m`

    Coeff. of :math:`x^n` in :math:`(1 + x)^{m + n} = {}^{m + n}C_n`

    Clearly, both the coefficients are equal.

39. :math:`t_4 = {}^nC_3(px)^{n - 3}\frac{1}{x^3} = \frac{5}{2}`

    Since :math:`\frac{5}{2}` independent of :math:`x, n - 6 = 0 \Rightarrow n
    = 6`

    :math:`{}^6C_3p^3 = \frac{5}{2} \Rightarrow p = \frac{1}{2}`

40. Here :math:`n = 12,` which is even, therefore, :math:`\frac{12}{2} + 1`
    i.e. :math:`7{th}` term will be middle term.

    :math:`t_7 = {}^{12}C_6x^6\left(-\frac{1}{2x}\right)^6 = \frac{231}{16}`

41. Here :math:`n = 7,` which is odd, therefore, :math:`\frac{7 + 1}{2}` and
    :math:`\frac{7 + 3}{2}` i.e. :math:`4^{th}` and :math:`5^{th}` terms will
    be middle terms.

    :math:`t_4 = {}^7C_3(2x^2){7 - 3}\left(-\frac{1}{x}\right)^3 = -560x^3`

    :math:`t_5 = {}^7C_4(2x^2)^{7 - 4}\left(-\frac{1}{x}\right)^2 = 280x^2`

42. :math:`(1 - 2x + x^2)^n = (1 - x)^{2n}`

    Since :math:`2n` is even, therefore the middle term would be :math:`(n +
    1)^{th}` term.

    :math:`t_{n + 1} = {}^{2n}C_n1^{2n - n}(-x)^n = \frac{2n!}{n!n!}(-1)^nx^n`

43. :math:`\because 2n` is even, the middle term would be :math:`(n + 1)^{th}`
    term.

    :math:`t_{n + 1} = {}^{2n}C_nx^{2n - n}\frac{1}{x^n} = \frac{2n!}{n!n!}`

    :math:`= \frac{1.2.3.4\ldots 2n}{1.2.3\ldots n.(n!)}`

    :math:`= \frac{1.3.5\ ldots (2n - 1).2^{n}.1.2.3\ldots n}{1.2.3\ldots
    n.(n!)}`

    :math:`= \frac{1.3.5\ldots (2n - 1)}{n!}2^n`

45. Clearly, middle term will have greatest coefficient which has been found
    in 44.

45. We have already found coefficient of middle term of :math:`(1 + x)^{2n}`
    which is :math:`{}^{2n}C_n\frac{2n!}{n!n!}`

    Since :math:`2n - 1` is odd number we will have two middle terms for
    :math:`(1 + x)^{2n - 1},` which will be :math:`n^{th}` and :math:`(n +
    1)^{th}` terms of the expansion.

    Coefficient of :math:`t_n` in :math:`(1 + x)^{2n - 1} = {}^{2n - 1}C_{n -
    1}`

    Coefficient of :math:`t_{n + 1} = {}^{2n - 1}C_n`

    Clearly, :math:`{}^{2n - 1}C_n + {}^{2n - 1}C_{n - 1} = {}^{2n}C_n` by
    invoking properties of combinations.

46. Let us find these:

    i. Since :math:`n = 20,` which is an even number, the middle term would be
       :math:`11^{th}` term.

       :math:`t_{11} = {}^{20}C_{10}\left(\frac{2x}{3}\right)^{10}
       \left(-\frac{3}{2x}\right)^{10}`

       :math:`= {}^{20}C_{10}x^{10}y^{10}`

    ii. Since :math:`n = 6,` an even number, the middle term would be
        :math:`4^{th}` term.

        :math:`t_4 =
        {}^6C_3\left(\frac{2x}{3}\right)^3 \left(-\frac{3}{2x}\right)^3`

        :math:`= -20`

    iii. Since :math:`n = 7,` an odd number, the middle terms would be
         :math:`4^{th}` and :math:`5^{th}` terms.

         :math:`t_4 = {}^7C_3\frac{x^4}{y^4}.(-1)^3\frac{y^3}{x^3} =
         -35\frac{x}{y}`

         :math:`t_5 = {}^7C_4\frac{x^3}{y^3}.(-1)^4\frac{y^4}{x^3} =
         25\frac{y}{x}`

    iv. Since power of the expansion is :math:`2n,` which is an even number so
        :math:`(n + 1)^{th}` term would be middle term.

        :math:`t_{n + 1} = {}^{2n}C_nx^n`

    v. :math:`(1 - 2x + x^2)^n = (1 - x)^{2n}` and like previous exercise
       :math:`t_{n + 1} = (-1)^n{}^{2n}C_nx^n` would be middle term.

47. Let :math:`(r + 1)^{th}` term be middle term then :math:`t_{r + 1} = {}^{2n
    + 1}C_r\frac{x^{2n - r + 1}}{y^{2n - r + 1}}\frac{y^r}{x^r}`

    :math:`t_{r + 1} = {}^{2n + 1}C_r\frac{x^{2n - 2r + 1}}{y^{2n - 2r + 1}}`

    Since :math:`2n + 1` is an odd number, therefore there will be two middle
    terms, :math:`(n + 1)^{th}` and :math:`(n + 2)^{th}`

    :math:`t_{n + 1} = {}^{2n + 1}C_n\frac{x}{y}`

    :math:`t_{n + 2} = {}^{2n + 1}C_n\frac{y}{x}`

    :math:`2n - 2r + 1,` which is power of :math:`x` and :math:`y` in general
    term, cannot be zero as both :math:`n` and :math:`r` are
    positive integers. Thus, no term is independent of :math:`x` and
    :math:`y.`

48. Since exponent of expansion is :math:`2n` which is an even number, there
    will be one middle term and that term would be :math:`(n + 1)^{th}` term.

    :math:`t_{n + 1} = {}^{2n}C_n(-1)^{n}\frac{x^n}{x^n}`

    :math:`= \frac{2n!}{n!n!} = \frac{2^n(1.2.3\ldots n)(1.3.5\ldots (2n -
    1))}{n!n!}`

    :math:`= (-2^n)\frac{1.3.5\ldots (2n- 1)}{n!}`

49. Coefficient of :math:`t_{2n + 1} = {}^{43}C_{2r}`

    Coefficient of :math:`t_{r + 2} = {}^{43}C_{r + 1}`

    Given :math:`{}^{43}C_{2r} = {}^{43}C_{r + 1}`

    :math:`\therefore 2r + r + 1 = 43 \Rightarrow r = 14`

50. Coefficient of :math:`r^{th}` term :math:`t_r = {}^{2n}C_{r - 1}`

    Coefficient of :math:`(r + 4)^{th}` term :math:`t_r = {}^{2n}C_{r + 3}`

    :math:`\Rightarrow 2n = r - 1 + r + 3 \Rightarrow r = n - 1`

    **2nd Method** Equal coefficient will be equidistant from mid term. In this
    case there is only one which is :math:`(n + 1)^{th}` term. So
    :math:`\frac{r + r + 4}{2} = n + 1 \Rightarrow r = n - 1`

51. Following like previous exercise:

    :math:`\Rightarrow 18 = 2r + 3 + r - 3 \Rightarrow r = 6`

52. Following like previous exercise:

    :math:`\Rightarrow 2r + 4 + r - 7 = 39 \Rightarrow r = 14`

    :math:`{}^rC_{12} = \frac{14 * 13}{2} = 91`

53. Following like previous exercise:

    :math:`\Rightarrow 2n = 3r - 1 + r + 1 \Rightarrow r = \frac{n}{2}`

54. Following like previous exercise:

    :math:`\Rightarrow 2n = p + p + 2 \Rightarrow p = n - 1`

55. Let :math:`r^{th}` and :math:`(r + 1)^{th}` have equal values for
    coefficients. Let :math:`C_r` represent cofficient for :math:`r^{th}` term
    and :math:`C_{r + 1}` for :math:`(r + 1)^{th}` term.

    :math:`C_r = {}^{75}C_{r - 1}`

    :math:`C_{r + 1} = {}^{75}C_r3`

    Given :math:`C_r = C_{r + 1}`

    :math:`\frac{1}{75 - r + 1} = \frac{1}{r}`

    :math:`76 - r = r \Rightarrow r = 38`

    :math:`\therefore {}^{75}C_{37}` and :math:`{}^{75}C_{38}` are equal
    coefficients.

56. Coefficient of :math:`(r + 1)^{th}` term in :math:`(1 + x)^{n + 1} =
    {}^{n + 1}C_r`

    Coefficient of :math:`r^{th}` term in :math:`(1 + x)^n = {}^nC_{r - 1}`

    Coefficient of :math:`(r + 1)^{th}` term in :math:`(1 + x)^n = {}^nC_r`

    Now we know that :math:`{}^nC_{r - 1} + {}^nC_r = {}^{n + 1}C_{r + 1}`

57. We have to find greatest term numerically.

    :math:`therefore` greatest term in :math:`\left(7 -\frac{10}{3}\right)^{11}
    =` greatest term in :math:`\left(7 - \frac{10}{3}\right)^{11}`

    Let :math:`r^{th}` term be the greatest term in the expansion of
    :math:`\left(7 + \frac{10}{3}\right)^{11}`

    :math:`t_r = {}^{11}C_{r - 1}7^{11 -r + 1}\left(\frac{10}{3}\right)^{r -
    1}`

    :math:`t_{r + 1} = {}^{11}C_r7^{11 - r}\left(\frac{10}{3}\right)^r`

    :math:`\frac{t_r}{t_{r + 1}} = \frac{21r}{(12 - r)}10`

    Also, :math:`\frac{t_{r - 1}}{t_r} = \frac{21(r - 1)}{13 - r}10`

    :math:`\because t_r` is the greatest term :math:`\therefore t_r \geq t_{r +
    1}`

    :math:`\frac{21r}{(12 - r)10} \ geq 1 \Rightarrow r \geq \frac{120}{31}`

    Also, :math:`\frac{t_{r - 1}}{t_r} \leq 1`

    :math:`\Rightarrow r\leq \frac{151}{32}`

    Thus, :math:`r = 4`

    :math:`t_4 = \frac{440}{9}7^85^3`

58. In any binomial expansion middle term has the greatest coefficient. Middle
    term in the expansion of :math:`(1 + 2x)^{2n}` is :math:`(n + 1)^{th}`
    term.

    :math:`t_{n + 1} = {}^{2n}C_nx^n, t_{n + 1} = {}^{2n}C_{n + 1}x^{n + 1},
    t_{n} = {}^{2n}C_{n - 1}x^{n - 1}`

    :math:`\frac{t_{n + 1}}{t_{n + 2}} = \frac{n + 1}{n}.\frac{1}{x} > 1
    \Rightarrow x < \frac{n + 1}{n}`

    Similalrly :math:`\frac{t_{n + 1}}{t_n} = \frac{(n + 1)x}{n} > 1
    \Rightarrow x > \frac{n}{n + 1}`

    Thus :math:`\frac{n}{n + 1} < x < \frac{n + 1}{n}`

59. These are similar to problem 57 and have been left as an exercise.

60. This is similar to problem 58 and limit will be :math:`\frac{15}{16} < x <
    \frac{16}{15}`.

61. Given expression :math:`= 6^{2n} - 35n - 1 = (6^2)^n - 35n - 1 = 36^n - 35n
    - 1`

    Clearly, :math:`35^2 = 1225` so we rewrite :math:`36` as :math:`1 + 35`

    :math:`(36)^n - 35n - 1 = (1 + 35)^n - 35n - 1`

    :math:`= 1 + 35n + {}^{35}C_2.35^2 + {}^{35}C_3.35^3 + \ldots +
    {}^{35}C_{35}35^n - 35n - 1`

    :math:`= {}^{35}C_2.35^2 + {}^{35}C_3.35^3 + \ldots + {}^{35}C_{35}35^n`

    All the terms contain powers euqal or greater than :math:`2` with base
    :math:`35` therefore whole expression is divisible by :math:`35^2` or
    :math:`1225`

62. :math:`2^{4n} - 2^n(7n + 1) = (2^4)^n - 2^n.7n - 2^n`

    :math:`= 16^n - 2^n.7n - 2^n = (2 + 14)^n - 2^n.7n - 2^n`

    :math:`= {}^nC_02^n + {}^nC_12^{n - 1}14 + {}^nC_22^{n- 2}14^2 + {}^nC_32^{n
    - 3}14^3 + \ldots {}^nC_n14^n - 2^n.7n - 2^n`

    :math:`= 14^2[{}^nC_22^{n - 2} + {}^nC_32^{n - 3} + \ldots + {}^nC_n14^{n -
    2}]`

    Thus, :math:`2^{4n} - 2^n(7n + 1)` is divisible by :math:`14^2`

63. :math:`3^{4n + 1} + 16n - 3 = 3[3^{4n}] + 16n - 3 = 3[(1 + 80)^n - 1] +
    16n`

    :math:`=3[{}^nC_0 + {}^nC_180 + {}^nC_280^2 + {}^nC_380^3 + \ldots +
    {}^nC_n80^n - 1] + 16n`

    :math:`= 256n + {}^nC_280^2 + {}^nC_380^3 + \ldots + {}^nC_n80^n`

    :math:`80^2` is divisible by :math:`256,` therefore above expression is
    divisible by :math:`256.`

64. Let us solve these one by one:

    i. :math:`4^n - 3n - 1 = (1 + 3)^n - 3n - 1 = 1 + 3n + {}^nC_23^2 +
       {}^nC_33^3 + \ldots + {}^nC_n3^n - 3n -1`

       :math:`= {}^nC_23^2 + {}^nC_33^3 + \ldots + {}^nC_n3^n`

       :math:`= 3^2[{}^nC_2 + {}^nC_33 + \ldots + {}^nC_n3^{n - 2}]`

       The above expression is divisible by :math:`9.`

    ii. :math:`2^{5n} - 31n - 1 = (2^5)^n - 31n - 1 = 32^n - 31n - 1`

        :math:`= (1 + 31)^n - 31n - 1`

        :math:`= 1 + 31n + {}^nC_231^2 + {}^nC_331^3 + \ldots + {}^nC_n31^n -
        31 - 1`

        :math:`= 31^2[{}^nC_2 + {}^nC_331 + \ldots + {}^nC_n31^{n - 2}]`

        The above expression is divisible by :math:`961.`

    iii. :math:`3^{2n + 2} - 8n - 9 = 3^2.3^{2n} - 8n - 9 = 9(1 + 8)^n - 8n -
         9`

         :math:`= 9[1 + 8n + {}^nC_28^2 + {}^nC_38^3 + \ldots + {}^nC_n8^n] -
         8n - 9`

         :math:`= 64n + 9[{}^nC_28^2 + {}^nC_38^3 + \ldots + {}^nC_n8^n]`

         The above expression is divisible by :math:`64`

    iv. :math:`2^{5n + 5} - 31n - 32 = 2^5.(2^5)^n - 31n - 31 = 32(1 + 31)^n -
        31n - 32`

        :math:`= 32[1 + 31n + {}^nC_231^2 + {}^nC_331^3 + \ldots + {}^nC_n31^n]
        - 31n - 32`

        :math:`= 32[{}^nC_231^2 + {}^nC_331^3 + \ldots + {}^nC_n31^n]`

        The above expression is divisible by :math:`31^2` i.e. :math:`961`

    v. :math:`3^{2n} - 1 + 24n - 32n^2 = (1 + 8)^n - 1 + 24n - 32n^2`

       :math:`= 1 + 8n + {}nC_28^2 + {}nC_38^3 + \ldots + {}nC_n8^n - 1 + 24n -
       32n^2`

       :math:`= 32n + \frac{n(n - 1)}{2}8^2 + {}nC_38^3 + \ldots + {}nC_n8^n -
       32n^2`

       :math:`= 32n + 64n^2 - 32n + {}nC_38^3 + \ldots + {}nC_n8^n`

       :math:`= 64n^2 + {}nC_38^3 + \ldots + {}nC_n8^n`

       Above expression is divisible by :math:`256` for :math:`n > 2`

65. Let :math:`r^{th}, (r + 1)^{th}` and :math:`(r + 2)^{th}` terms are the
    three consecutive terms given in the problem.

    :math:`t_r = {}^nC_{r - 1} = \frac{n!}{(r - 1)!(n - r + 1)!} = 165`

    :math:`t_{r + 1} = {}^nC_r = \frac{n!}{r!(n - r)!} = 330`

    :math:`t_{r + 2} \ {}^nC_{r + 1} = \frac{n!}{(r + 1)!(n - r - 1)!} = 462`

    :math:`\frac{t_r}{t_{r + 1}} = \frac{r}{n - r + 1} = \frac{1}{2}
    \Rightarrow 3r = n + 1`

    :math:`\frac{t_{r + 1}}{t_{r + 2}} = \frac{r + 1}{n - r} = \frac{330}{462}`

    :math:`12r = 5n - 7`

    Solving the two equations in :math:`n` and :math:`r,` we get, :math:`n = 11,
    r = 4.`

66. Let :math:`a_1, a_2, a_3` and :math:`a_4` be coefficients of :math:`r^{th},
    (r + 1)^{th}, (r + 2)^{th}` and :math:`(r + 3)^{th}` terms of the expansion
    :math:`(1 + x)^n`

    :math:`a_1 = {}^nC_{r - 1}, a_2 = {}^nC_r, a_3 = {}^nC_{r + 1}, a_4 =
    {}^nC_{r + 2}`

    :math:`\frac{a_2}{a_1} = \frac{n - r + 1}{r}`

    :math:`\frac{a_1}{a_1 + a_2} = \frac{r}{n + 1}`

    Substituting :math:`r + 1` instead of :math:`r` in previous equation, we get

    :math:`\frac{a_2}{a_2 + a_3} = \frac{r + 1}{n + 1}`

    Similarly, :math:`\frac{a_3}{a_3 + a_4} = \frac{r + 2}{n + 1}`

    :math:`\frac{a_1}{a_1 + a_2} + \frac{a_3}{a_3 + a_4} = \frac{2(r + 1)}{n +
    1} = \frac{2a_2}{a_2 + a_3}`

67. :math:`\frac{t_2}{t_3} = \frac{{}^nC_1x^{n - 1}y}{{}^nC_2x^{n - 2}y^2} =
    \frac{240}{720}`

    :math:`\Rightarrow \frac{2x}{(n - 1)y} = \frac{1}{3}`

    :math:`\frac{t_3}{t_4} = \frac{{}^nC_2x^{n - 2}y^2}{{}^nC_3x^{n - 3}y^3} =
    \frac{720}{1080}`

    :math:`\Rightarrow \frac{3x}{(n - 2)y} = \frac{2}{3}`

    Dividing the two obtained equations

    :math:`\frac{2x}{(n - 1)y}\frac{3x}{(n - 2)y} = \frac{1}{2}\frac{2}{3}`

    :math:`\frac{2(n - 2)}{3(n - 1)} = \frac{1}{2}`

    :math:`4n - 8 = 3n - 3 \Rightarrow n = 5`

    Putting this value in :math:`\frac{t_r}{t_{r + 1}},` we get

    :math:`\frac{2}{5 -1}.\frac{x}{y} = \frac{1}{3}`

    :math:`y = \frac{3x}{2}`

    :math:`t_r = {}^nC_1x^{n - 1}y = \frac{3}{2}5x^5 = 240 \Rightarrow x = 2`

    :math:`\Rightarrow y = 3`

68. Let :math:`n` be the index of the expansion and :math:`a, b, c` be the
    :math:`r^{th}, (r + 1)^{th}, (r + 2)^{th}` term respectively.

    :math:`a = {}^nC_{r - 1}, b = {}^nC_r, c = {}^nC_{r + 1}`

    :math:`\frac{a}{b} = \frac{r}{n - r + 1}, \frac{b}{c} = \frac{r + 1}{n -
    r}`

    :math:`an + a = r(a + b), bn - c = r(b + c)`

    :math:`\Rightarrow (b + c)(an + a) = (a + b)(bn - c)`

    :math:`\Rightarrow n = \frac{2ac + b(a + c)}{b^2 - ac}`

69. Coefficients are :math:`C_{14} = {}^nC_{13}, C_{15} = {}^nC_{14}, C_{16} =
    {}^nC_{15}`

    These are in A.P., so we can write

    :math:`\frac{2.n!}{14!(n - 14)!} = \frac{n!}{13!(n - 13!)} +
    \frac{n!}{15!(n - 15)!}`

    Multiplying both sides by :math:`15!(n - 13)!,` we get

    :math:`2.15(n - 13) = 15.14 + (n - 13).(n - 14)`

    :math:`\Rightarrow n^2 - 57n + 782 = 0`

    :math:`n = 23, 34`

70. Let those three terms are :math:`r^{th}, (r + 1)^{th}` and :math:`(r +
    2)^{th}` terms of the expansion.

    :math:`\frac{t_{r- 1}}{t_r} = \frac{r}{n - r + 1} = \frac{56}{70} =
    \frac{4}{5}`

    :math:`9r - 4n = 4`

    :math:`\frac{t_{r}}{t_{r + 1}} = \frac{r + 1}{n - r} = \frac{70}{56}`

    :math:`9r - 5n = -4`

    :math:`\Rightarrow n = 8, r = 4`

71, 72 and 73 are similar problems like ones we have solved and has been left
as exercises.

74. Let the binomial expansion be :math:`(x + y)^n.`

    :math:`a = {}^nC_5x^{n - 5}y^5, b = {}^nC_6x^{n - 6}y^6, c = {}^nC_7x^{n -
    7}y^7, d = {}^nC_8x^{n - 8}y^8`

    :math:`b^2 - ac = \left({}^nC_6x^{n - 6}y^6\right)^2 - {}^nC_5x^{n -
    5}y^5{}^nC_7x^{n - 7}y^7`

    :math:`= \left(\frac{n!}{6!(n - 6)!}x^{n - 6}y^6\right)^2 -
    \frac{n!}{5!(n - 5)!}x^{n - 5}y^5 \frac{n!}{7!(n - 6)!}x^{n - 7}y^7`

    Similary :math:`c^2 - bd` can be computed and it can be shown that
    :math:`\frac{b^2 - ac}{c^2 - bd} = \frac{4a}{3c}`

75. Let us solve these one by one.

    i. We have to prove that :math:`\frac{a + b}{a}, \frac{b + c}{b}, \frac{c +
       d}{c}` are in H.P.

       i.e. :math:`\frac{a}{a + b}, \frac{b}{b + c}, \frac{c}{c + d}` are in
       A.P.

       Let :math:`a = {}^nC_r, b = {}^nC_{r + 1}, c = {}^nC_{r + 2}, d =
       {}^nC_{r + 3}`

       :math:`\frac{a}{a + b} = \frac{n!}{r!(n -
       r!)}\left(\frac{1}{\frac{n!}{r!(n - r!)}} + \frac{n!}{(r + 1)!(n - r -
       1)!}\right)`

       :math:`= \frac{r + 1}{n + 1}`

       Similarly :math:`\frac{b}{b + c} = \frac{r + 2}{n + 1}`

       and, :math:`\frac{c}{c + d} = \frac{r + 3}{n + 1}`

       Clearly, these are in A.P.

    ii. Since :math:`\frac{a}{a + b}, \frac{b}{b + c}, \frac{c}{c + d}` are in
        A.P. from the previous part.

        :math:`\frac{2b}{b + c} = \frac{a}{a + b} + \frac{c}{c + d}`

        Solving this further leads to the equality :math:`(bc + ad)(b - c) =
        2(ac^2 - b^2d)`

76. Since the coeficients of given terms are in A.P., we can write that

    :math:`\frac{n!}{n - 4!} - \frac{2.n!}{5!(n - 5)!} + \frac{n!}{6!(n - 6!)}
    = 0`

    :math:`\frac{n!}{4!(n - 6!)}\left[\frac{1}{(n - 5)(n - 6)}
    -\frac{2}{5(n - 5) + \frac{1}{6.5}}\right]`

    Clearly, :math:`\frac{n!}{(n - 6!)}\neq 0`

    :math:`\Rightarrow n^2 - 23n + 132 = 0\Rightarrow n = 11, 12`

77. Since the coeficients of given terms are in A.P., we can write that

    :math:`\frac{2n!}{(2n - 1)!} + \frac{2.2n!}{2!(2n - 2)!} + \frac{2n!}{3!(2n
    - 3)!} = 0`

    :math:`2n - 2n(2n - 1) + \frac{n(2n - 1)(2n - 2)}{3} = 0`

    :math:`4n^3 - 18^2 + 14n = 0`

    :math:`\because n \neq 0, \Rightarrow 4n^2 - 9n + 7 = 0`

78. Since the coeficients of given terms are in A.P., we can write that

    :math:`{}^nC_{r - 1} - 2{}^nC_r + {}^nC_{r + 1} = 0`

    :math:`\frac{n!}{(r - 1)!(n - r + 1)!} - 2\frac{n!}{r!(n - r)!} +
    \frac{n!}{(r + 1)!(n - r - 1)!} = 0`

    :math:`\frac{n!}{(r - 1)!(n - r - 1)!}\left[\frac{1}{(n - r)(n - r + 1)} -
    2\frac{1}{r(n - r)} + \frac{1}{r(r + 1)}\right] = 0`

    Solving this gives the desired equation.

79. This problem is easy and similar to other problems and has been left as
    exercise.

80. Given series is :math:`C_1 + 2.C_2 + 3.C_3 + \ldots + n.C_n`

    Its :math:`r^{th}` term :math:`t_r = r.{}^nC_r = n.{}^{n - 1}C_{r -1}`

    :math:`C_1 + 2.C_2 + 3.C_3 + \ldots + n.C_n = \sum_{r = 1}^nr.{}^nC_r`

    :math:`= n\sum_{r=1}^n{}^{n - 1}C_{r - 1} = n.2^{n - 1}`

    **Calculus Method:** This method requires knowledge of calculus.

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Differentiating both sides w.r.t. :math:`x`

    :math:`n.(1 + x)^{n - 1} = {}^nC_1 + 2{}^nC_2x^2 + \ldots + n{}^nCnx^{n -
    1}`

    Putting :math:`x = 1,` we get

    :math:`n.2^{n - 1} = {}^nC_1 + 2{}^nC_2 + \ldots + n.{}^nC_n`

81. Given series is :math:`C_0 + 2.C_1 + 3.C_2 + \ldots + (n + 1).C_n`

    Its :math:`r^{th}` term :math:`t_r = r{}^nC_{r - 1}`

    :math:`= (r - 1 + 1){}^nC_{r - 1} = (r - 1){}^nC_{r - 1} + {}^nC_{r - 1}`

    :math:`= n{}^{n - 1}C_{r - 2} + {}^nC_{r - 1}[\because (r - 1){}^nC_{r - 1}
    = n{}^{n - 1}C_{r - 2}]`

    Thus, :math:`\sum_{r = 1}^{n + 1}t_r = n.2^{n - 1} + 2^n = (n + 2)2^{n -
    1}`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Multiplying both sides by :math:`x,` we get

    :math:`x(1 + x)^n = {}^nC_0x + {}^nC_1x^2 + {}^nC_2x^3 + \ldots +
    {}^nC_nx^{n + 1}`

    Differentiating w.r.t. :math:`x,` we get

    :math:`[(1 + x)^n + nx(1 + x)^{n - 1}] = {}^nC_0 + 2{}^nC_1x +
    3{}^nC_2x^2 + \ldots + (n + 1){}^nC_nx^n`

    Substituting :math:`x = 1,` we get

    :math:`C_0 + 2.C_1 + 3.C_2 + \ldots + (n + 1).C_n = (n + 2).2^{n - 1}`

82. :math:`t_r = (2r - 1){}^nC_{r - 1} = 2(r - 1){}^nC_{r - 1} + {}^nC_{r - 1}`

    :math:`=2n {}^{n - 1}C_{r - 2} + {}^nC_{r - 1}`

    :math:`\sum_{r = 1}^{n + 1}t_r = \sum_{r = 1}^{n + 1}2n {}^{n - 1}C_{r - 2}
    + \sum_{r = 1}^{n + 1}{}^nC_{r - 1}`

    :math:`= 2n({}^{n - 1}C_0 + {}^{n - 1}C_1 + {}^{n - 1}C_2 + \ldots +
    {}^{n - 1}C_{n - 1}) + ({}^nC_0 + {}^nC_1 + {}^nC_2 + \ldots + {}^nC_n)`

    :math:`= 2n.2^{n - 1} + 2^n = 2^n(n + 1)`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Substituting :math:`x = x^2` and multiplying both sides with :math:`x`

    :math:`x(1 + x^2)^n = C_0x + C_1x^3 + C_2x^5 + \ldots + C_nx^{2n + 1}`

    Differentiating both sides w.r.t :math:`x` and substituting :math:`x = 1,`
    we get the desired equation as earlier.

83. Given series is :math:`C_1 - 2.C_2 + 3.C_3 - 4.C_4 + \ldots + (-1)^nn.C_n =
    0`

    :math:`t_r = (-1)^{r - 1}r.{}^nC_r = (-1)^{r - 1}n.{}^{n - 1}C_{r - 1}`

    :math:`\sum_{r = 1}^{n}t_r = \sum_{r = 1}^{n}(-1)^{r - 1}n.{}^{n - 1}C_{r -
    1}`

    :math:`n({}^{n - 1}C_0 - {}^{n - 1}C_1 + {}^{n - 1}C_2 + \ldots + (-1)^{n -
    1}){}^{n - 1}C_{r - 1} = n(1 - 1)^{n - 1} = 0`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Differentiating w.r.t. :math:`x` and substituting :math:`x = -1`

    :math:`n({}^{n - 1}C_0 - {}^{n - 1}C_1 + {}^{n - 1}C_2 + \ldots + (-1)^{n -
    1}){}^{n - 1}C_{r - 1} = n(1 - 1)^{n - 1} = 0`

84. Given series is :math:`C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots +
    \frac{C_n}{n + 1} = \frac{2^{n + 1} - 1}{n + 1}`

    :math:`t_r = \frac{{}^nC_{r - 1}}{r}`

    :math:`C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots + \frac{C_n}{n + 1} =
    \sum_{r = 1}^n \frac{{}^nC_{r - 1}}{r} = \sum_{r = 1}^n\frac{{}^{n +
    1}C_r}{n + 1}\left[\because \frac{{}^nC_{r - 1}}{r} = \frac{{}^{n +
    1}C_r}{n + 1}\right]`

    :math:`= \frac{1}{n + 1}({}^{n + 1}C_1 + {}^{n + 1}C_2 + {}^{n + 1}C_{n +
    1})`

    :math:`=\frac{2^{n + 1} - 1}{n + 1}`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Integrating w.r.t :math:`x` between limits :math:`0` and :math:`1,` we get

    :math:`\left[\frac{(1 + x)^{n + 1}}{n + 1}\right]_0^1 = \left[C_0x +
    C_1\frac{x^2}{2} + C_2\frac{x^3}{3} + \ldots + C_n\frac{x^{n + 1}}{n +
    1}\right]_0^1`

    :math:`\Rightarrow C_0 + \frac{C_1}{2} + \frac{C_2}{3} + \ldots +
    \frac{C_n}{n + 1} = \frac{2^{n + 1} - 1}{n + 1}`

85. Given series is :math:`C_0 - \frac{C_1}{2} + \frac{C_2}{3} - \ldots +
    (-1)^n\frac{C_n}{n + 1}`

    :math:`t_r = (-1)^{r - 1}\frac{{}^nC_{r - 1}}{r}`

    :math:`\therefore C_0 - \frac{C_1}{2} + \frac{C_2}{3} - \ldots +
    (-1)^n\frac{C_n}{n + 1} = \sum_{r = 1}^{n + 1}(-1)^{r - 1}\frac{{}^nC_{r -
    1}}{r} = \sum_{r = 1}^{n + 1}(-1)^{r - 1}\frac{{}^{n + 1}C_r}{n +
    1}\left[\because \frac{{}^nC_{r - 1}}{r} = \frac{{}^{n + 1}C_r}{n + 1}\right]`

    :math:`= \frac{1}{n + 1}[{}^{n + 1}C_1 - {}^{n + 1}C_2 + {}^{n + 1}C_3 -
    \ldots + (-1)^n.{}^{n + 1}C_{n + 1}]`

    :math:`= \frac{1}{n + 1}[-({}^{n + 1}C_0 + {}^{n + 1}C_1 - {}^{n + 1}C_2 + {}^{n + 1}C_3 -
    \ldots + (-1)^{n+1}.{}^{n + 1}C_{n + 1}) + {}^{n + 1}C_0]`

    :math:`= \frac{1}{n + 1}\left[-(1 - 1)^{n + 1} + {}^{n + 1}C_0\right] =
    \frac{1}{n + 1}`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Integrating w.r.t :math:`x` between limits :math:`0` and :math:`1,` we get

    :math:`\left[\frac{(1 + x)^{n + 1}}{n + 1}\right]_0^{-1} = \left[C_0x +
    C_1\frac{x^2}{2} + C_2\frac{x^3}{3} + \ldots + C_n\frac{x^{n + 1}}{n +
    1}\right]_0^{-1}`

    :math:`0 - \frac{1}{n + 1} = -C_0 + \frac{C_1}{2} - \frac{C_3}{3} +
    \ldots + (-1)^{n + 1}\frac{C_n}{n + 1}`

    :math:`\Rightarrow C_0 - \frac{C_1}{2} + \frac{C_2}{3} - \ldots + (-1)^n
    \frac{C_n}{n + 1} = \frac{1}{n + 1}`

86. Given series is :math:`\frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} +
    \ldots`

    :math:`t_r = \frac{{}^nC_{2r - 1}}{23} = \frac{{}^nC_{2r - 1}}{(2r - 1) +
    1} = \frac{{}^{n + 1}C_{2r}}{n + 1}`

    :math:`\frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} + \ldots = \sum_{r =
    1} = \frac{1}{n + 1}\sum_{r = 1}{n + 1}C_{2r} = \frac{2^n - 1}{n + 1}`

    **Calculus Method:**

    Adding the results of 84 and 85, we get

    :math:`2\left[\frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} + \ldots\right]
    = \frac{2^{n + 1} - 1 - 1}{n + 1} = \frac{2(2^n - 1)}{n + 1}`

    :math:`\Rightarrow \frac{C_1}{2} + \frac{C_3}{4} + \frac{C_5}{6} +
    \ldots = \frac{2^n - 1}{n + 1}`

87. Given series is :math:`2.C_0 + 2^2\frac{C_1}{2} + 2^3\frac{C_2}{3} +
    \ldots + 2^{n + 1}\frac{C_n}{n + 1}`

    :math:`t_r = 2^r\frac{{}^nC_{r - 1}}{r} = 2^r\frac{{}^{n + 1}C_r}{n + 1}`

    Now :math:`2.C_0 + 2^2\frac{C_1}{2} + 2^3\frac{C_2}{3} + \ldots + 2^{n +
    1}\frac{C_n}{n + 1} = \sum_{r = 1}^{n + 1} 2^r\frac{{}6{n + 1}C_r}{n + 1}`

    :math:`= \frac{1}{n + 1}[\{{}^{n + 1}C_0 + 2.{}^{n + 1}C_1 + 2^2.{}^{n +
    1}C_2 + \ldots + 2^{n + 1}{}^{n + 1}C_{n + 1}\} - {}^{n + 1}C_0]`

    :math:`= \frac{1}{n + 1}[(1 + 2)^{n + 1} - 1] = \frac{3^{n + 1} - 1}{n +
    1}`

    **Calculus Method:**

    :math:`(1 + x)^n = {}^nC_0 + {}^nC_1x + {}^nC_2x^2 + \ldots + {}^nC_nx^n`

    Integrating between limits :math:`0` and :math:`2,` we get the desired
    result.

88. :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

    :math:`(x + 1)^n = C_0x^n + C_1x^{n - 1} + C_2x^{n - 2} + \ldots + C_n`

    Multiplying these two, we get

    :math:`(1 + x)^{2n} = (C_0 + C_1x + C_2x^2 + \ldots + C_nx^n)(C_0x^n +
    C_1x^{n - 1} + C_2x^{n - 2} + \ldots + C_n)`

    Coefficient of :math:`x^{n + r}` on R.H.S :math:`= C_0C_r + C_1C_{r + 1} +
    \ldots + C_{n - r}C_n`

    Coefficient of :math:`x^{n + r}` on L.H.S. :math:`= {}^{2n}C_{n + r} =
    \frac{(2n)!}{(n + r)!(n - r)!}`

    Equating coefficients we get desired result.

89. From 88 recall that :math:`(1 + x)^{2n} = (C_0 + C_1x + C_2x^2 + \ldots +
    C_nx^n)(C_0x^n + C_1x^{n - 1} + C_2x^{n - 2} + \ldots + C_n)`

    Equating coefficients of :math:`x^n,` we get

    :math:`C_0^2 + C_1^2 + C_2^2 + \ldots + C_n^2 = \frac{(2n)!}{n!n!}`

90. :math:`t_r = r.\frac{{}^nC_r}{{}^nC_{r - 1}} = n - r + 1`

    :math:`\sum_{r=1}^n = \frac{n(n + 1)}{2}`

91. :math:`\{(1 + x)^n\}^2 = (1 + x)^{2n}`

    :math:`({}^nC_0x + {}^nC_1x + {}^nC_2 + \ldots + {}^nC_n)^2 = ({}^{2n}C_0 +
    {}^{2n}C_1x + {}^{2n}C_2x + \ldots + {}^{2n}C_{2n}x^{2n})`

    Substituting :math:`x = 1,` we get desired equation.

92. This problem is same as previous one, just that instead of :math:`2, 5` has
    been used.

93. :math:`t_r = (4r + 1){}^nC_{r - 1} = 4n{}^{n - 1}C_{r - 1} + {}^nC_{r - 1}`

    :math:`C_0 + 5.C_1 + 9.C_2 + \ldots + (4n + 1).C_n = \sum_{r = 0}^nt_r`

    :math:`=4n \sum_{r = 0}^n{}^{n - 1}C_{r - 1} + \sum_{r = 0}^n{}^nC_{r - 1}`

    :math:`= 4n.2^{n - 1} + 2^n = (2n + 1)2^n`

94. L.H.S. :math:`1 - (1 + x)C_1 + (1 + 2x)C_2 - (1 + 3x)C_3 + \ldots`

    :math:`= 1 - C_1 + C_2 - C_3 + \ldots -x(C_1 - 2C_2 + 3C_3 + \ldots)`

    We know that :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + C_3x^3 + \ldots`

    Substituting :math:`x = -1,` we get

    :math:`0 = = 1 - C_1 + C_2 - C_3 + \ldots`

    Thus our original expression becomes :math:`-x(C_1 - 2C_2 + 3C_3 + \ldots)
    = 0`

    :math:`C_1 - 2C_2 + 3C_3 + \ldots = 0`

    :math:`t_r = (-1)^{r - 1}r.C_r`

    :math:`C_1 - 2C_2 + 3C_3 + \ldots = \sum_{r = 1}(-1)^{r - 1}r.C_r = n\sum_{r =
    1}{}^{n- 1}C_{r - 1}`

    :math:`= n({}^{n - 1}C_0 - {}^{n - 1}C_1 + {}^{n - 1}C_2 + \ldots + (-1)^{n
    -1}{}^{n - 1}C_{n - 1})`

    :math:`= n(1 - 1)^{n - 1} = 0`

95. :math:`t_r = (4r - 1)C_{r - 1} = 4rC_{r - 1} - C_{r - 1} = 4n{}^{n - 1}C_{r
    - 1} - C_{r - 1}`

      :math:`3.C_1 + 7.C_2 + 11.C_3 + \ldots + (4n - 1)C_n = 4n \sum_{r =
      1}^{n}{}^{n - 1}C_{r - 1} - \sum_{r = 1}^n{}^nC_{r - 1}`

      :math:`= (2n - 1)2^n + 1`

Problem no. 96 and 97 are similar to what we have solved and have been left as
exercise.

98. Let :math:`(1 + x - 3x^2)^{2163} = a_0 + a_1x + a_2x^2 + \ldots
    +a_{6489}^{6489}`

    Substituting :math:`x = 1,` we get

    :math:`a_0 + a_1 + a_2 + \ldots + a_{6489} = (-1)^2163 = -1`

99. This problem can be solved by substituting :math:`1, \omega, \omega^2` for
    :math:`x` and adding. it has been left as an exercise.

100. :math:`t_{r + 1} = {}^{10}C_r2^{\frac{10 - r}{2}}3^{\frac{r}{5}},` where
     :math:`r = 0, 1, 2, \ldots, 10`

     For rational terms :math:`r =` a multiple of :math:`5 = 0, 5, 10`

     :math:`10 - r =` a multiple of :math:`2 = 0, 2, 4, 6, 8, 10`

     For both the only common values are :math:`r = 0, 10`

     :math:`\therefore` sum of rational terms :math:`= t_1 + t_{11}`

     :math:`= 41`

101. :math:`\frac{2^{4n}}{15} = \frac{16^n}{15} = \frac{(1 + 15)^n}{15}`

     :math:`= \frac{1 + {}^nC_1.15 + {}^nC_2.15^2 + \ldots + {}^nC_n.15^n}{15}`

     Except first term all others are mutliple of :math:`15` so clearly
     fractional part :math:`= \frac{1}{15}`

102. Let :math:`(\sqrt{3} + 1)^{2n} = p + f,` where :math:`p` is the integral
     part and :math:`f` is the fractional part i.e. :math:`0<f<1`

     Integer just above :math:`(\sqrt{3} + 1)^{2n} = p + 1`

     Now :math:`(\sqrt{3} + 1)^{2n} = [(\sqrt{3} + 1)^2]^n = 2^n(2 +
     \sqrt{3})^n`

     :math:`p + f = 2^n(2 + \sqrt{3})^n`

     Also, :math:`0 < \sqrt{3} - 1 < 1 \Rightarrow 0 < (\sqrt{3} - 1)^{2n} < 1`

     Let :math:`f_1 = \sqrt{3} - 1)^{2n} = 2^n(2 - \sqrt{3})^n, \Rightarrow 0 <
     f_1 < 0`

     :math:`p + f + f_1 = 2^n.2[2^n + {}^nC_22^{n - 2}.3 + \dots]`

     :math:`= 2^{n + 1}.` an integer = an even integer

     :math:`f + f_1 =` Even integer `- p =` an odd integer`

     Also, :math:`0 < f + f_1 < 2`

     Clearly, :math:`f + f_1 = 1`

     :math:`\Rightarrow p + 1 = 2^{n + 1}.` an integer

     Thus, integer next to :math:`(\sqrt{3} + 1)^{2n}` is divisible by
     :math:`2^{n + 1}`

103. Let :math:`p` be the integral part of :math:`R,` then :math:`[R] = p`

     Since :math:`f = R - [R] = R - p \therefore 0 < f < 1`

     and :math:`R = p  + f`

     :math:`p + f = (5\sqrt{5} + 11)^{2n + 1}`

     Let :math:`f_1 = (5\sqrt{5} - 11)^{2n + 1}`

     We observe that :math:`5\sqrt{5} - 11 = \frac{4}{5\sqrt{5} + 11}`

     :math:`\therefore 0 < f_1 < 1`

     :math:`p + f - f_1 = 2[{2n + 1}C_1.(5\sqrt{5})^{2n}.11 + {2n +
     1}C_3.(5\sqrt{5})^{2n - 2}.11^3 + \ldots]`

     :math:`=` an even number

     :math:`f - f_1 =` en even number :math:`- p =` an integer

     :math:`-1 < f - f_1 < 1`

     Thus, we can say that :math:`f - f_1 = 0 \Rightarrow f = f_1`

     :math:`\therefore Rf = Rf_1 = r^{2n + 1}`

104. Let :math:`x = 101^{50}` and :math:`y = 100^{50} + 99^{50}`

     :math:`101^{50} - 99^{50} = 100^{50} + 2[{}^{50}C_3.100^{47} + \ldots +
     {}^{50}C_{49}100]`

     :math:`= 100^{50} +` a positive number

     :math:`101^{50} - 99^{50} > 100^{50}`

     :math:`101^{50} > 100^{50} + 99^{50}`

105. :math:`t_1 = \sum_{r = 0}^n (-1)^r{}^nC_r\left(\frac{1}{2}\right) =
     \left(1 - \frac{1}{2}\right)^n = \frac{1}{2^n}`

     Similarly, :math:`t_2 = \frac{1}{2^{2n}}`

     and :math:`t_r = \frac{1}{2^{3n}}`

     :math:`\therefore` required sum :math:`= \frac{1 - \frac{1}{2^{mn}}}{2^n -
     1}`

106. :math:`32^{32} = (2 + 30)^{32} = 2^{32} + 30k,` where :math:`k \in N`

     Therefore last digits in :math:`32^{32} =` last digits in :math:`2^{32}`

     :math:`2^{32} = (2^5)^6.2^2 = 32^6.4 = (2^6 + 30r)4, r\in N`

     Last digit in :math:`2^6.4 =` last digit in :math:`64.4 = 6`

     :math:`\therefore` last digit in :math:`32^{32} = 6`

107. Let :math:`n = 2m,` where :math:`m` is a positive integer, then :math:`k =
     3m`

     L.H.S. :math:`= \sum_{r = 1}^{3m}(-3)^{r - 1}.{}^{6m}C_{2r - 1}`

     :math:`={}^{6m}C_1 - {}^{6m}C_3.3 + {}^{6m}C_5.3^2 + \ldots + (-1)^{3m -
     1}{}^{6m}C_{6m - 1}.3^{3m - 1}`

     :math:`= \frac{1}{\sqrt{3}}[{}^{6m}C_1.\sqrt{3} -
     {}^{6m}C_3.(\sqrt{3})^3 + {}^{6m}C_5(\sqrt{5})^5 - \ldots + (-1)^{3m
     - 1}.{}^{6m}C_{6m - 1}(\sqrt{3})^{6m - 1}]`

     Also, :math:`(-1)^{3m - 1} = -i(i)^{6m - 1}`

     :math:`(1 + \sqrt{3}i)^{6m} = [1 - {}^6mC_2(\sqrt{3})^2 +
     {}^{6m}C4(\sqrt{3})^4 + \ldots] + i[{}^{6m}C_1.\sqrt{3} -
     {}^{6m}C_3(\sqrt{3})^3 + \ldots + {}^{6m}C_{6m -1}(i)^{6m -
     2}(\sqrt{3})^{6m - 1}]`

     However, :math:`(1 + \sqrt{3}i)^6m = \left[2\left(\cos \frac{\pi}{3} +
     i\sin\frac{\pi}{3}\right)\right]^{6m} = 2^{6m}[\cos 2m\pi + \sin 2m\pi]`

     :math:`= 2^{6m}(1 + 0) = 2^{6m}`

     Thus, coefficient of imaginary part is :math:`0,` which proves the desired
     result.

108. :math:`t_0 = a^n, t_1 = {}^nC_1a^{n - 1}x, t_2 = {}^nC_2a^{n - 2}x^2, ...`

     Substituting :math:`x = ix,` we get

     :math:`(a + ix)^n = a^n + {}^nC1a^{n - 1}.(ix) + {}nC_2a^{n - 2}(ix)^2 +
     \ldots + {}^nC_n(ix)^n`

     :math:`=(t_0 - t_2 + t_4 - \ldots) + i(t_1 - t_3 + t_5 - \ldots)`

     Taking modulus and then squaring, we get

     :math:`(t_0 - t_2 + t_4 - \ldots)^2 + (t_1 - t_3 + t_5 - \ldots)^2 =
     (a^2 + x^2)^n`

109. Putting :math:`x = 1,` we get

     :math:`3^n = a_0 + a_1 + a_2 + a_3 + \ldots + a_{2n}`

110. Putting :math:`x = -1,` we get

     :math:`1^n = a_0 - a_1 + a_2 - a_3 + \ldots +(-1)^{2n}a_2n`

     :math:`1^n = a_0 - a_1 + a_2 - a_3 + \ldots +a_2n`

111. Substituting :math:`x = 1, \omega, \omega^2` and adding them we get the
     desired result.

112. :math:`S_n = \frac{1 - q^{n + 1}}{1 - q}`

     :math:`S_n^{'} = \frac{2^{n + 1} - (q + 1)^{n + 1}}{(1 - q).2^n}`

     Now, :math:`{}^{n + 1}C_1 + {}^{n + 1}C_2.S_1 + {}^{n + 1}C_3.S_2 +
     \ldots + {}^{n + 1}C_{n + 1}.S_n`

     :math:`= {}^{n + 1}C_1\frac{1 - q}{1 - q} + {}^{n + 1}C_2\left(\frac{1 -
     q^2}{1 - q}\right) + {}^{n + 1}C_3\left(\frac{1 - q^3}{1 - q}\right) +
     \ldots + {}^{n + 1}C_{n + 1}\left(\frac{1 - q^{n + 1}}{1 - q}\right)`

     :math:`= \frac{1}{1 - q}[({}^{n + 1}C_1 + {}^{n + 1}C_2 + \ldots + {}^{n +
     1}C_{n + 1}) -({}^{n + 1}C_1.q + {}^{n + 1}C_2.q^2 + \ldots + {}^{n +
     1}C_{n + 1}.q^{n + 1})]`

     :math:`= \frac{1}{1 - q}[2^{n + 1}- (1 + q)^{n + 1}] = 2^nS_n^{'}`

113. :math:`(\sqrt[4]{9} + \sqrt[6]{8})^{1000} = (\sqrt{3} + \sqrt{2})^{1000}`

     Clearly, terms :math:`0, 2, 4, \ldots, 1000` will be rational. Thus, total
     no. of rational terms is :math:`501.`

114. Clearly, terms which are divisible by L.C.M. of :math:`3` and :math:`5`
     i.e. :math:`15` will be rational numbers. Such terms are first and last
     term.

     Sum of rational terms :math:`= {}^{15}C_02^5 + {}^{15}C_03^3 = 59`

115. :math:`t_3 = {}^5C_2x^4(\log_{10}x)^2 = 1000,000`

     Clearly :math:`x = 10`

116. :math:`x^3 + 3x^2 - 5 + \frac{3}{x^2} - \frac{1}{x^3}`

117. Since coefficients of second, third and fourth terms are in A.P., we can write

     :math:`2{}^mC_2 = {}^mC_1 + {}^mC_3`

     :math:`m(m - 1) = m + \frac{m(m - 1)(m - 2)}{6}`

     :math:`\Rightarrow m^2 - 9m + 14 = 0 \Rightarrow m = 2, 7` but since we
     are dealing with sixth term :math:`m` will be 7 and we will need to
     discard :math:`2.`

     :math:`t_6 = {}7C_5(2^{\log(10 - 3^x)}).2^{(x - 2)\log 3} = 21`

     :math:`\Rightarrow 2^{\log(10 - 3^x) + (x - 2)\log 3} = 1`

     :math:`\log [10 - 3^x + (x - 2)\log 3] = 2`

     :math:`10 - 3^x + (x - 2)\log 3 = 100`

     Solving this yields

     :math:`\Rightarrow x = 0, 2`

118. This problem is similar to previous one and has been left as an exercise.

119. Given :math:`\frac{1}{(81)^n} - \frac{10}{(81)^n}{}^{2n}C_1 +
     \frac{10^2}{(81)^n}{}^{2n}C_2 - \frac{10^3}{(81)^n}{}^{2n}C_3 + \ldots +
     \frac{10^{2n}}{(81)^n} = 1`

     L.H.S. :math:`= \frac{1}{81^n}(1 - 10)^{2n}`

     :math:`= \frac{1}{81^n}(-9^2)^n = \frac{1}{81^n}81^n = 1`

120. :math:`\because {}^nC_r = {}^nC){n - r}`

     :math:`\therefore S_n = {}^nC_0 - {}^nC_1\frac{2}{3} +
     {}^nC_2\left(\frac{2}{3}\right)^2 - \ldots +
     (-1)^n\left(\frac{2}{3}\right){}^nC_n`

     :math:`= \left(1 - \frac{2}{3}\right)^n = \frac{1}{3^n}`

     :math:`\therefore \lim_{n \to \infty}S_n = 0`

121. This problem can be solved like 103 and has been left as an exercise.

122. :math:`\sum_{r = 0}^n(-1)^r.{}^nC_r\left[\frac{1}{2^r} +
     \frac{3^r}{2^{2r}} + \frac{7^r}{w^{3r}} + \ldots~\text{up
     to}~n~\text{terms}\right]`

     :math:`= \left(1 - \frac{1}{2}\right)^n + \left(1 - \frac{1}{4}\right)^n +
     \left(1 - \frac{1}{8}\right)^n + \ldots n` terms

     :math:`= \frac{1}{2^n} + \frac{1}{2^{2n}} + \frac{1}{2^{3n}} + \ldots n`
     terms

     Summing this G.P. yields

     :math:`= \frac{1}{2^n - 1} - \frac{1}{2^{n^2}(2^n - 1)}`

123. :math:`17^{256} = 289^{128} = (290)^{128}`

     :math:`= 1000m + {}^{128}C_{126}290^2 - {}^{128}C_{127}290 + 1 [m \in I]`

     :math:`= 1000(m + 683527) + 681`

     Thus the digits are :math:`6, 8` and :math:`1.`

124. :math:`(n + 1)^n = n^n\left(1 + \frac{1}{n}\right)^n`

     Upon expansion(as shown in following problem) you will find that
     :math:`\left(1 + \frac{1}{n}\right)^n < n`

     Thus, :math:`n^{n + 1} > (n + 1)^n`

125. :math:`\left(1 + \frac{1}{n}\right)^n = 1 + 1 + \frac{1}{2!}\left(1 -
     \frac{1}{n}\right) + \frac{1}{3!}\left(1 - \frac{1}{n}\right)\left(1 -
     \frac{2}{n}\right) + \ldots`

     :math:`< 1 + 1 + \frac{1}{2!} + \frac{1}{3!} + \ldots + \frac{1}{n!}`

     :math:`< 1 + 1 + \frac{1}{2} + \frac{1}{2^2} + \ldots + \frac{1}{2^{n -
     1}}`

     :math:`= 3 - \frac{1}{2^{n - 1}}`

     Thus, we have proven the desired inequality.

126. We will make
     use of the fact that :math:`x^n - y^n` is divisible by :math:`x - y`

     :math:`(1992^{1998} - 1955^{1998}) - (1938^{1998} - 1901^{1998})` is
     divisible by :math:`37`

     :math:`(1992^{1998} - 1938^{1998}) - (1955^{1998} - 1901^{1998})` is
     divisible by :math:`54`

     :math:`\therefore 1992^{1998} - 1955^{1998} - 1938^{1998} + 1901^{1998}`
     is divisible by :math:`37*54` i.e. :math:`1998`

127. Given expression is :math:`(50 + 3)^{53} - {30+ 3}^{33}`

     :math:`= 50p + {}^{53}C_{53}3^{53} - 30q - {}^{33}C_{33}3^{33}, p, q \in
     I`

     Thus, now we have to prove that :math:`3^{53} - 3^{33}` is divisible by
     :math:`10`

     :math:`3^{33}(3^{20} - 1)` now if you see carefully :math:`3^{20} =
     81^{5}` which will awlays have last digit as 1. Thus, :math:`3^{20} - 1`
     will be always divisible by :math:`10` making out original expression also
     divisible by 10.

128. :math:`(1 + x)^{m + 1} = {}^{m + 1}C_0 + {}^{m + 1}C_1x + {}^{m + 1}C_2x^2
     + \ldots + {}^{m + 1}C_mx^m + {}{m + 1}C_{m + 1}x^{m + 1}`

     :math:`(1 + x)^{m + 1} - 1 - x^{m + 1} = {}^{m + 1}C_1x + {}^{m + 1}C_2x^2
     + \ldots + {}^{m + 1}C_mx^m`

     Substituting :math:`x = 1, 2, 3, 4, \ldots, n` in the above expression and
     adding, we get

     :math:`= (n + 1)^{m + 1} - (n + 1)`

129. :math:`\sum_{i = 1}^k\sum_{k = 1}^n{}^nC_k{}^kC_i`

     :math:`= \sum_{k = 1}^n({}^nC_k).({}^kC_1) + \sum_{k =
     1}^n({}^nC_k).({}^kC_2) + \ldots + {}^nC_n.{}^nC_n`

     :math:`= {}^nC_1.{}^1C_1 + {}^nC_2({}^2C_1 + {}^2C_2) + \ldots +
     {}^nC_n({}^nC_1 + {}^nC_2 + \ldots + {}^nc_n)`

     :math:`= {}^nC_1(2 - 1) + {}^nC_2.(2^2 - 1) + \ldots + {}^nC_n(2^n - 1)`

     :math:`= {2 + 1}^n - 1 + {1 + 1}^n - 1 = 3^n - 2^n`

130. Though it may appear that this problem is dependent on logarithmic
     manipulation but sych is not the case. We will prove it for general value
     :math:`z` rather than :math:`10`

     :math:`\sum_{r=0}^n{(-1)^r\binom{n}{r}\frac{1+r\log
     z}{(1+\log z^n)^r}}`

     :math:`=\sum_{r=0}^n(-1)^r\binom{n}{r}\frac{1}{\left(1+\log z^n\right)^r}
     +\sum_{r=1}^n(-1)^r\binom{n-1}{r-1}\frac{n\log z}{\left(1+\log
     z^n\right)^r}`

     :math:`=1+\sum_{r=1}^{n-1}(-1)^r\left(\binom{n-1}{r}+\binom{n-1}{r-1}\right)\frac{1}{\left(1+\log
     z^n\right)^r} +(-1)^n\frac{1}{(1+\log
     z^n)^r}-\sum_{r=0}^{n-1}(-1)^r\binom{n-1}{r}\frac{\log z^n}{\left(1+\log
     z^n\right)^{r+1}}`

     :math:`=1+\sum_{r=1}^{n-1}(-1)^r\binom{n-1}{r}\frac{1}{\left(1+\log
     z^n\right)^r} -\sum_{r=0}^{n-2}(-1)^r\binom{n-1}{r}\frac{1}{\left(1+\log
     z^n\right)^{r+1}} +(-1)^n\frac{1}{(1+\log
     z^n)^r}-\sum_{r=0}^{n-1}(-1)^r\binom{n-1}{r}\frac{\log z^n}{\left(1+\log
     z^n\right)^{r+1}}`

     :math:`=1+\sum_{r=1}^{n-1}(-1)^r\binom{n-1}{r}\frac{1}{\left(1+\log
     z^n\right)^r}+(-1)^n\frac{1}{(1+\log z^n)^r}
     -\sum_{r=0}^{n-2}(-1)^r\binom{n-1}{r}\frac{1}{\left(1+\log
     z^n\right)^{r}}+(-1)^n\frac{\log z^n}{(1+\log z^n)^n}`

     :math:`=1+(-1)^{n-1}\frac{1}{(1+\log z^n)^{n-1}}+(-1)^n\frac{1}{(1+\log
     z^n)^{n-1}}-1+(-1)^n\frac{\log z}{(1+\log z^n)^n}`

     :math:`{=0}`

131. :math:`32^{32} = (2^5)^{32} = 2^{160} = {3 - 1}^{160} = 3m + 1, m \in N`

     :math:`{32}^{32^{32}} = 32^{3m + 1} = 2^{15m + 5} = 2^{3{5m + 1}}.2^2`

     :math:`=8^{5m + 1}.4 = 32.8^{5m} = 32(1 + 7)^{5m}`

     :math:`=32(1 + 7k), k \in N = 4 + 28 + 7(32k) = 4 + 7r, r \in N`

     Thus, remainder is :math:`4` when divided by :math:`7`

132. Let :math:`t = x - 3,` then :math:`x - 2 = 1 + t`

     :math:`\sum_{r=0}^{2n}a_r(x - 2)^r = \sum_{r=0}^{2n}b_r(x - r)^r`

     :math:`\Rightarrow \sum_{r=0}^{2n}a_r(1 + t)^r = \sum_{r=0}^{2n}b_rt^r`

     Equating coefficients of :math:`t^n` we obtain desired result.

133. Given expression is :math:`= (1 + x)^{1000}\left[1 + 2\frac{x}{1 + x} +
     3\left(\frac{x}{1 + x}\right)^2 + \ldots + 1001\left(\frac{x}{1 +
     x}\right)^{1000}\right]`

     The series is arithmetico-geometric series. Solving it yields

     :math:`= (1 + x)^1002 - x^{1001}(1 + x) - 1001.x^{1001}`

     Required coefficient of :math:`x^{50} = {}^{1000}C_50`

134. L.H.S. = coeff. of :math:`x^n` in :math:`(1 + x)^n + (1 + x)^{n + 1} +
     \ldots + (1 + x)^{n + k}`

     :math:`(1 + x)^n + (1 + x)^{n + 1} + \ldots + (1 + x)^{n + k}`

     :math:`= (1 + x)^n\left[\frac{1 + x}^{k + 1 - 1}{x}\right]`

     :math:`= \frac{1}{x}(1 + x)^{n + k + 1} - \frac{1}{x}(1 + x)^n`

     Coeff. of :math:`x^n = {}^{n + k + 1}C_{n + 1}`

     Hence, we have proved the desired equation.

135. Let :math:`S = (x + 2x^2 + 3x^3 + \ldots + nx^n)`

     :math:`xS = x^2 + 2x^3 + \ldots + (n - 1)x^n + nx^{n + 1}`

     :math:`S = x\frac{1 - x^n}{(1 - x)^2} - n\frac{x^{n + 1}}{1 - x}`

     :math:`(1 + x + 2x^2 + 3x^3 + \ldots + nx^n)^2 = \left[1 + \frac{x(1 -
     x^n)}{1 - x}^2 - \frac{nx^{n + 1}}{1 - x}\right]^2`

     Required coeff. of :math:`x^n` = coeff. of :math:`x^n` in :math:`\left(1 +
     \frac{x}{(1 - x)^2}\right)^2` [leaving terms containing powers of
     :math:`x` greater than :math:`n`]

     :math:`=` coeff. of :math:`x^n` in :math:`\left[1 + \frac{2x}{(1 - x)^2} +
     \frac{x^2}{(1 - x)^4}\right]`

     Solving this yields answer as :math:`\frac{n(n ^2 + 11)}{6}`

136. Let :math:`S = 1 + (1 + x) + (1 + x)^2 + \ldots + (1 + x)^n`

     :math:`(1 + x)S = (1 + x) + (1 + x)^2 + \ldots + (1 + x)^n + (1 + x)^{n +
     1}`

     Subtracting, we get

     :math:`xS = (1 + x)^{n + 1} - 1`

     :math:`\therefore ` coff. of :math:`x^k` in :math:`S = {}^{n + 1}C_{k + 1}`

137. Let the expression be :math:`E = (x + 1)^n + (x + 1)^{n - 1}(x + 2) + (x +
     1)^{n - 2}(x + 2)^2 + \ldots + (x + 2)^n`

     We know that :math:`(x - y)(x^{n - 1} + x^{n - 2}y + \ldots + y) = x^n -
     y^n`

     Thus, :math:`E(x + 2 - x - 1) = (x + 2)^{n + 1} - (x + 1)^{n + 1}`

     Coeff. of :math:`x^3` in :math:`(x + 2)^{n + 1} - (x + 1)^{n + 1}` is

     :math:`= {}^{n + 1}C_3.2^{n - 2} - {}^{n + 1}C_3`

138. :math:`\left(\frac{a + 1}{a^{\frac{2}{3}} - a^{\frac{1}{3}} + 1} - \frac{a -
     1}{a - a^{\frac{1}{2}}}\right)^{10}`

     :math:`= (\sqrt[3]{a} - \frac{1}{\sqrt{a}})^{10}`

     :math:`t_{r + 1} = {}^{10}C_r a^{\frac{10 - r}{3}}a^{-\frac{r}{2}}`

     Since the term has to be independent of :math:`a, \Rightarrow \frac{10 -
     r}{3} - \frac{r}{2} \Rightarrow r = 4`

     Thus :math:`t_5 = {}^{10}C_4 = 210`

139. Coeff. of :math:`x^2` in :math:`\left(x + \frac{1}{x}\right)^{10}(1 - x +
     2x^2) =` coeff. of :math:`x^2` in :math:`\left(x +
     \frac{1}{x}\right)^{10}` - coeff. of :math:`x` in :math:`\left(x +
     \frac{1}{x}\right)^{10}` - 2 * coeff. of term independent of :math:`x` in
     :math:`\left(x + \frac{1}{x}\right)^{10}`

     :math:`(r + 1)^{th}` term in :math:`\left(x + \frac{1}{x}\right)^{10} =
     {}^{10}C_rx^{10 - r}x^{-r} = {}^{10}C_rx^{10 - 2r}`

     Coeff. of :math:`x^2` means :math:`10 - 2r = 2 \Rightarrow r = 4.` Thus,
     coeff. :math:`= {}^10C_4 = 210`

     Coeff. of :math:`x` means :math:`10 - 2r = 1` which makes :math:`r` a
     fraction. Thus, coeff. :math:`= 0`

     Coeff. of term indepdent of :math:`x` means :math:`10 -2r = 0 \Rightarrow
     r = 5.` Thus, coeff. :math:`= 2.{}^10C_5 = 504`

     Thus, final coeff. :math:`= 210 + 504 = 714`

140. Coeff. of :math:`x^4` in :math:`(1 + x - 2x^2)^6 =` coeff. of :math:`x^r`
     in :math:`(1 + x(1 - 2x))^6`

     Thus coefficient of :math:`x^4` will occur in :math:`3^{rd}` terms onward.

     Adding coefficients we get :math:`-45` as our answer.

141. We have :math:`(1 + x + 2x^3)\left(\frac{3}{2}x^2 - \frac{1}{3x}\right)^9`

     :math:`= (1 + x + 2x^3)\left[\left(\frac{3}{2}x^2\right)^9 -
     {}^9C_1\left(\frac{2}{2}x^2\right)^8\frac{1}{3x} + \ldots +
     (-1)^9\left(\frac{1}{3x}\right)^9\right]`

     Thus, the term independent of :math:`x` in the expansion is :math:`1a_0 +
     1a_1 + 2a_3` where :math:`a_m` is the coefficient of :math:`x^m` in the
     second bracket :math:`[]` of previous equation. Now, :math:`(r + 1)^{th}`
     term in :math:`[]` of previous equation is

     :math:`{}^9C_r\left(\frac{3}{2}x^2\right)^{9 -
     r}\left(-\frac{1}{3x}\right)^r =
     (-1)^r{}^9C_r\left(\frac{3}{2}\right)^{9 -
     r}\left(\frac{1}{3^r}\right)x^{18 -r}`

     :math:`\therefore a_{18 - 3r} =` coeff. of :math:`x^{18 - 3r}`

     For :math:`a_0, 18 - 3r = 0 \Rightarrow r = 6 \Rightarrow a_0 = {}^9C_6
     \frac{3^3}{2^3}\frac{1}{3^6} = \frac{7}{18}`

     For :math:`a_1, 18 - 3s = 1, \Rightarrow r = \frac{19}{3}` which is
     fractional. :math:`\therefore a_1 = 0`

     For :math:`a_3, 18 - 3r = 3 \Rightarrow r - 7 \Rightarrow a_3 =
     -{}^9C_7\left(\frac{3}{2}\right)^2\frac{1}{3^7} = -\frac{1}{27}`

     Thus, required term :math:`= 1.\frac{7}{18} + .0 + 2.\frac{-1}{27} =
     \frac{17}{52}`

142. Given :math:`\left(x^2 + \frac{1}{x^3}\right)^7(2 - x)^{10}` and we have
     to find term independent of :math:`x` in this.

     Coeff of term independent of :math:`x` to be found in
     :math:`\frac{1}{x^{21}}(x^5 + 1)^7(2 - x)^{10}` i.e. coeff. of
     :math:`x^{21}` in :math:`(x^5 + 1)^7(2 - x)^{10}`

     :math:`(x^5 + 1)^7` will have coeff. of powers of :math:`x` where powers
     will be :math:`35, 30, 25, 20, \ldots, 0` while :math:`(2 - x)^{10}` will
     have powers of :math:`1, 2, 3, \ldots, 10`

     Clearly, combinations of :math:`20` and :math:`1` and :math:`15` and
     :math:`6` satisfy our needs.

     Thus, computing these terms leads to answer of :math:`-61600`

143. We have to find term independent of :math:`x` in :math:`(1 + x + x^{-2} +
     x^{-3})^{10}`

     Coeff. of term independent of :math:`x` in :math:`\frac{1}{x^30}(1 +
     x)^{10}(1 + x^3)^{10}`

     :math:`(1 + x)^{10}` will have powers of :math:`x` in :math:`0, 1, 2, 3,
     \ldots, 10` while :math:`(1 + x^3)^{10}` will have powers of :math:`x` in
     :math:`0, 3, 6, 9, \ldots, 30`

     Thus, combinaions of :math:`(0, 30), (3, 27), (6, 24), (9, 21)` are the
     combinations which will satisfy our needs, where first number is power of
     :math:`x` in :math:`(1 + x)^{10}` and second number is power of :math:`x`
     in :math:`(1 + x^3)^{10}`

     Thus coeff. is :math:`= {}^{10}C_1.{}^{30}C_{30} +
     {}^{10}C_3.{}^{30}C_{27} + {}^{10}C_6.{}^{30}C_{24} +
     {}^{10}C_9.{}^{30}C_{21}`

144. Given :math:`(1 + x^2)^2(1 + x)^n = \sum_{k = 0}^{n + 4}a_kx^k`

     :math:`a_1, a_2, a_3` are coefficients of :math:`x, x^2, x^3`
     respectively.

     Thus, we can find :math:`a_1, a_2, a_3` like we did in 143 and then apply
     arithmetic progression confition :math:`2a_2 = a_1 + a_3` to find
     :math:`n`

145. We have to prove that :math:`{}^mC_1 + {}^{m + 1}C_2 + {}^{m + 2}C_3 +
     \ldots + {}^{m + n - 1}C_n = {}^nC_1 + {}^{n + 1}C_2 + {}^{n + 2}C_3 +
     \ldots + {}^{n + m - 1}C_n`

     Keep in mind that :math:`{}^mC_0 = {}^nC_0`

     Adding :math:`{}^mC_0` to L.H.S., we get :math:`{}^mC_0 + {}^mC_1 +
     {}^{m + 1}C_2 + {}^{m + 2}C_3 + \ldots + {}^{m + n - 1}C_n`

     Now we know that :math:`{}^nC_r + {}^nC_{r - 1} = {}^{n + 1}C_r` applying
     the repeatedly we obtain L.H.S. as :math:`{}^{m + n}C_n`

     Similarly adding :math:`{}^nC_0` to R.H.S. and applying above formula
     repeatedly we obtain R.H.S. as :math:`{}^{m + n}C_m`

     Clearly, :math:`{}^{m + n}C_m = {}^{m + n}C_n`

146. Let us solve these one by one.

     1. We observe that :math:`1 + x + x^2 = (x + \omega)(x + \overline{\omega})`
        where :math:`\omega` and :math:`\overline{\omega}` are cube root of unity
        not equal to :math:`-1`

        :math:`\sum_{r=0}^{2n}c_rx^r=(x^2+x+1)^n=(x+w)^n(x+\overline{w})^n=\sum_{k=0}^n\binom{n}{k}x^kw^{n-k}\cdot
        \sum_{l=0}^n\binom{n}{\ell}x^l \overline{w}^{n-l}`

        Thus,
        :math:`a_r=\sum_{j=0}^r\binom{n}{j}\binom{n}{r-j}w^{n-j}\overline{w}^{\,n-(r-j)}=\sum_{j=0}^r\binom{n}{j}\binom{n}{r-j}w^{r-2j}`

        Thus, :math:`a_r = a_{2n - r}`

    2. :math:`a_r = a_{2n - r}` from previous part.

       Substituting :math:`x = 1`

       :math:`a_0 + a_1 + \ldots + a_2n = 2(a_0) + 2(a _1)  + \ldots +
       2a_{n - 1} + a_n = 3^n`

       :math:`\Rightarrow a_0 + a_1 + a_2 + \ldots + a_{n - 1} = \frac{1}{2}(3^n - a_n)`

    3. Differentiating and using result obtained in part 1 we can prove this.

147. Given :math:`\frac{(1 - x^3)^n}{(1 - x)^{3n}} = \sum_{r =
     0}^na_r\frac{x^r}{(1 - x)^{2r}}`

     :math:`\Rightarrow \left(\frac{1 + x + x^2}{(1 - x)^2}\right)^n = \sum_{r
     = 0}^na_r\alpha^r,` where :math:`\alpha = \frac{x}{(1 - x)^2}`

     :math:`(1 + 3\alpha)^n = \sum_{r = 0}^na_r\alpha^r`

     Coeff of :math:`\alpha^r = a_r = {}^nC_r3^r`

148. Coeff. of middle term of :math:`(1+ x)^{2n} = {}^{2n}C_n`

     Coeff. of :math:`x^n` in :math:`(1 + x)^{2n - 1} = {}^{2n - 1}C_n`

     Clearly, :math:`2.{}^{2n - 1}C_n = {}^{2n}C_n`

149. Coeff. of terms in the expansion of :math:`(x + y)^{200}` are
     :math:`{}^{200}C_1, {}^{200}C_2, {}^{200}C_3, \ldots, {}^{200}C_{200}`

     Since middle term has greatest coefficient, therefore :math:`r = 100`

150. Let committees of :math:`r` persons be made out of :math:`20`
     persons. Then number of committees :math:`= {}^20C_r`

     Since middle term has greatest coefficient therefore :math:`{}^{20}C_r`
     will be maximum when :math:`r = 10`

     Therefore, :math:`10` persons should be chosen for maximum no. of
     committees.

151. This problem is similar to 149 and 150 and has been left as an exercise.

152. :math:`(3 + 2x)^7` will have :math:`8` terms with :math:`4^{th}` and
     :math:`5^{th}` terms as middle terms. We know that when there are two
     middle terms coefficients are equal. Therefore, these two middle terms are
     consecutive terms which have equal coefficient.

153. Let :math:`(1 + 5x^2 - 7x^3)^{2000} = a_0 + a_1x + a_2x + \ldots +
     a_{6000}x^{6000}`

     Substituting :math:`x = 1,` we get

     :math:`(1 + 5 - 7)^{2000} =` sum of coefficients :math:`= 1`

154. Substitutin :math:`x^{-\frac{x}{4}} = 1` and :math:`x^{\frac{5x}{4}} = 1`

     :math:`(1 + 1)^n = 64 \Rightarrow n = 6`

     Hence greatest term = middle term = :math:`4^{th}` term

     According to question :math:`t_4 = (n - 1)+ t_3`

     Solving this gives us, :math:`[\alpha] = 0`

155. Let :math:`S` be the sum of coeff. in :math:`(5p - 4q)^n`. Substituting
     :math:`p =1, q = 1,` we get

     :math:`S = (5 - 4)^n = 1`

156. Let :math:`S` be the sum of coeff. in :math:`(5p - 4q)^n`. Substituting
     :math:`x = 1,` we get

     :math:`S = (1 - 3 + 1)^{201}(1 + 5 - 5)^{503} = -1`

157. Substituing :math:`x =1` reduces the two expansions as  :math:`(t - 1)^n`
     and :math:`(1 - t)^n`

     Clearly, if :math:`n` is odd then sign will differe except when :math:`t =
     1.` However, if :math:`n` is even both expansions will be positive and
     :math:`t` can assume any real value.

158. Substituting :math:`x = 1, i, -i` and then multiplying when :math:`x = i,
     -i` we obtain the desired result.

159. Let :math:`r^{th}` term be the greatest term.

     :math:`t_r = \sqrt{3}\left[{}^{20}C_{r -
     1}\left(\frac{1}{\sqrt{3}}\right)^{r - 1}\right]`

     :math:`t_{r + 1} =
     \sqrt{3}\left[{}^{20}C_r\left(\frac{1}{\sqrt{3}}\right)^r\right]`

     :math:`\frac{t_r}{t_{r + 1}} = \frac{{}^{20}C_{r -
     1}}{{}^{20}C_r}\sqrt{r}`

     :math:`= \frac{r}{21 - r}\sqrt{3} \geq 1 \Rightarrow r = 7.69`

     Also, :math:`\frac{t_{r -1}}{t_r} \leq 1` gives us :math:`r = 8.5`

     Hence, :math:`8^{th}` term will be greatest term and :math:`t_8 =
     \frac{25840}{9}`

160. Since :math:`t_{11}` is G.M. of :math:`t_8` and :math:`t_{12}`

     :math:`t_{11} = \sqrt{t_8.t_{12}}`

     :math:`\left(\frac{15!}{10!5!}x^5a^{10}\right)^2 =
     \frac{15!15!}{7!8!11!4!}x^{12}a^{18}`

     :math:`\Rightarrow \frac{x}{a} = \sqrt{\frac{77}{75}}`

     Let :math:`r^{th}` term be the greatest term. Now,

     :math:`t_r = {}^{15}C_{r - 1}x^{16 - r}a^{r - 1}`

     :math:`t_{r + 1} = {}^{15C_r}x^{15 - r}a^r`

     :math:`\frac{t_r}{t_{r + 1}} = \frac{r}{16 - r}\frac{x}{a} \geq 1`

     :math:`r \geq 7.947`

     Hence, :math:`8^{th}` term is the greatest term.

161. :math:`t_{n + 1} = {}^{2n}C_nx^n, t_{n + 2} = {}^{2n}C_{n + 1}x^{n + 1},
     t_n = {}^{2n}C_{n - 1}x^{n - 1}`

     :math:`\frac{t_{n + 1}}}{t_{n + 2}} = \frac{n + 1}{n}.\frac{1}{x} > 1
     \Rightarrow x < \frac{n + 1}{n}`

     Also, :math:`t_{n + 1} = \frac{n + 1}{n}x > 1 \Rightarrow x > \frac{n}{n +
     1}`

     Thus, greatest term will have greatest coefficient if and only if :math:`x
     \in \left(\frac{n}{n + 1}, \frac{n + 1}{n}\right)`

     Given :math:`x \in \left(\frac{10}{11}, \frac{11}{10}\right)`

     Thus, :math:`n = 10`

     :math:`t_4 = \frac{n}{4} = \frac{5}{2}`

     :math:`\Rightarrow {}^{m}C_3(kx)^{m - 3}\frac{1}{x^3} = \frac{5}{2}`

     R.H.S. is independent of :math:`x, \Rightarrow m - 6 = 0, m = 6`

     :math:`{}^{6}C_3k^3 = \frac{5}{2}\Rightarrow k = \frac{1}{2}`

     :math:`\Rightarrow mk = 3`

162. This problem is similar to last problem and has been left as an
     exercise. The range is :math:`2 < x < \frac{64}{21}`

163. :math:`9^n + 7 = (8 + 1)^n + 7 = {}^nC_0.8^n + {}^nC_18{n - 1} + \ldots +
     {}^nC_{n - 1}8 + {}^nC_n + 7`

     :math:`= 8k + 1 + 7, k \in N = 8(k + 1)`

     Thus, the number is divisible by :math:`8`

164. Given expression is :math:`3^{2n + 1} + 2^{n + 2}` which can be rewritten
     as :math:`3.(7 + 2)^n + 4.2^n,` which upon expansion yields

     :math:`3({}^nC_07^n + {}^nC_17^{n - 1}2 + \ldots + {}^nC_n2^n) + 4.2^n`

     :math:`= 7k + 2^n(3 + 4), k \in N`

     The above expression is divisible by :math:`7.`

165. Let the binomial expansion be :math:`(x + y)^n` and :math:`a, b, c` be the
     coefficients of :math:`r^{th}, (r + 1)^{th}, (r + 2)^{th}` terms
     respectively.

     Then, :math:`a = {}^nC_{r - 1}, b = {}^nC_r, c = {}^nC_{r + 1}`

     The descriminant of given quadratic equation is :math:`D = b^2 - 4ac`

     Substituting values of :math:`a, b, c` and simplifying we obtain

     :math:`D = 4({}^nC_r)^2 \frac{n + 1}{(n - r + 1)(r + 1)}` where :math:`r`
     is non-negative integer.

     Clearly :math:`D > 0,` hence roots of given equation are real and unequal.

166. This problem is similar to previous one and has been left as an exercise.

167. **Calculus Method:**

     :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     Multiplying with :math:`x` and differentiating w.r.t. :math:`x,` we get

     :math:`(1 + x)^n + nx(1 + x)^{n - 1} = C_0 + 2xC_1 + 3x^2C_2 + (n +
     1)x^nC_n`

     Substituting :math:`x = -1,` we obtain

     :math:`C_n - 2.C_1 + 3.C_2 - \ldots +(-1)^n(n + 1)C_n = 0`

     **Second Method:**

     :math:`t_r = (-1)^{r - 1}r.{}^nC_{r - 1} = (-1)^{r - 1}(r- 1 +
     ).{}^nC_{r - 1} = (-1)^{r - 1}n.{}^{n - 1}C_{r - 2} + (-1)^{r -
     1}.{}^nC_{r - 1}`

     :math:`\sum_{r = 1}^{n + 1} = -n({}^{n - 1}C_0 - {}^{n - 1}C_1 + {}^{n -
     1}C_2 - \ldots + {-1}^{n - 1}.{}^{n - 1}C_{n - 1}) + ({}^nC_0 - {}^nC_1 +
     \ldots + (-1)^n.{}^nC_n)`

     :math:`= -n(1 - 1)^{n - 1} + (1 - 1)^n = 0`

168. **Calculus Method:**

     We know that :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     Substituting :math:`x = x^2` and multiplying with :math:`x,` we get

     :math:`x(1 + x^2)^n = C_0x + C_1.x^3 + C_2.x^5 + \ldots + (2n +
     1)x^{2n}.C_n`

     Differentiating both sides w.r.t :math:`x,` and substituting :math:`x =
     i,` we get

     :math:`C_0 -3.C_1 + 5.C_2 - \ldots + (-1)^n(2n + 1)C_n = (1 - 1)^n +
     i.n.(1 - 1)^{n - 1}.2i = 0`

     **Second Method:**

     :math:`t_r = = (-1)^{r - 1}(2r - 1).C_{r - 1} = (-1)^r[2(r - 1) +
     1]{}^nC_{r - 1}`

     :math:`= 2(-1)^{r - 1}.n{}^{n - 1}C_{r - 1} + (-1)^{r - 1}{}^nC_{r - 1}`

     :math:`\sum_{r = 1}^{n + 1}t_r = -2n[{}^{n - 1}C_0 - {}^{n - 1}C_1 +
     \ldots + (-1)^{n - 1}{}^{n - 1}C_{n - 1}] + [{}^{n}C_0 - {}^nC_1 +
     \ldots + (-1)^n{}^nC_n]`

     :math:`= -2n(1 - 1)^{n - 1} + (1 - 1)^n = 0`

169. **Calculus Method:**

     L.H.S. = :math:`a[C_0 - C_1 + C_2 - \ldots + (-1)^n.C_n] + [1.C_1 - 2C_2 +
     3.C_3 - \ldots + (-1)^n(-n)C_n]`

     :math:`= a(1 - 1)^n + 1.C_1 - 2C_2 + 3.C_3 - \ldots + (-1)^n(-n)C_n`

     Given, :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     Differentiating w.r.t. :math:`x` and  substuting :math:`x = -1,` we get

     :math:`1.C_1 - 2C_2 + 3.C_3 - \ldots + (-1)^n(-n)C_n = (1 - 1)^n = 0`

     Hence, desired equality is proved.

     **Second Method:**

     :math:`t_r = (-1)^{r - 1}[a - (r - 1)]{}^nC_{r -1}`

     :math:`= a(-1)^{r - 1}.{}^nC_{r - 1} - (-1)^{r - 1}n.{}^{n - 1}C_{r -1}`

     This can be proven to be :math:`0` like previous problems.

170. :math:`t_{r + 1} = r^r.{}^nC_rp^rq^{n - r}`

     :math:`= r.n.{}^{n - 1}C_{r - 1}p^rq^{n - r}`

     :math:`= n(r - 1 + 1){}^{n - 1}C_{r - 1}p^rq^{n - r}`

     :math:`= n[(n - 1).{}^{n - 2}C_{r - 2} + {}^{n  - 1}C_{r - 1}]p^rq^{n -
     r}`

     L.H.S. :math:`= \sum_{r = 0}^n t_{r + 1}`

     :math:`= n(n - 1)p^2\sum_{r = 0}^n {}^{n - 2}C_{r - 2}q^{n -2 - (r - 2)} +
     np\sum_{r = 0}^{n}{}^{n - 1}C_{r - 1}p^{r - 1}q^{n - 1 - (r - 1)}`

     :math:`= n(n - 1)p^2(p + q)^{n - 2} + np(p + q)^{n - 1}`

     :math:`= n(n - 1)p^2 + np [\because p + q = 1]`

     :math:`= n^2p^2 + npq`

171. :math:`(1 + x)^{10} = C_0 + C_1x + C_2x^2 + \ldots + C_10x^{10}`

     Integrating between limits :math:`0` and :math:`2` gives the desired result.

172. **Calculus Method:**

     :math:`(1 - x)^n = 1 - {}^nC_1x + {}^nC_2x^2 - \ldots + (-1)^{n - 1}{}^nC_nx^n`

     :math:`\frac{1 - (1 - x)^n}{x} = {}^nC_1 - {}^nC_2x + \ldots + (-1)^{n -
     1}C_{n}x^{n - 1} = \frac{x - (1 - x)^n}{x}`

     Integrating between limits :math:`0` and :math:`1,` we get

     :math:`\left[{}^nC_1x - {}^nC_2\frac{x^2}{2} + \ldots + (-1)^{n -
     1}\frac{x^n}{n}\right]_0^1 = \int_{0}^1\frac{1 - (1 - x)^n}{x}dx`

     Let :math:`z = 1 - x` then R.H.S. becomes :math:`\int_1^0 -\frac{1 - z^n}{1
     - z}dz`

     :math:`= \int_0^1(1 + z + z^2 + \ldots + z^{n - 1})dz`

     :math:`= \left[z + \frac{z^2}{2} + \ldots + \frac{z^n}{n}\right]_0^1`

     :math:`= 1 + \frac{1}{2} +\frac{1}{3} + \ldots + \frac{1}{n}`

     **Seccond Method:**

     Let :math:`S_n = C_1 - \frac{1}{2}C_2 + \frac{1}{3}C_3 - \ldots +
     \frac{(1)^nC_n}{n}`

     :math:`S_n = n - \frac{1}{2}\frac{n(n - 1)}{2!} + \frac{1}{3}\frac{n(n -
     1)(n - 2)}{3!} + \ldots`

     :math:`= (n - 1 + 1) - \frac{1}{2}\frac{(n - 1)(n - 2 + 2)}{2!} + \frac{(n
     - 1)(n - 2)(n - 3 + 3)}{3!} + \ldots`

     :math:`= S_{n - 1} + \frac{1}{n}\left[n - \frac{n(n - 1)}{2!} +
     \frac{n(n - 1)(n - 2)}{3!} + \ldots\right]`

     :math:`= S_{n - 1} - \frac{1}{n}[C_0 - C1 + C_2 + \ldots -1] = S_{n - 1} -
     \frac{1}{n}[(1 - 1)^n - 1]`

     :math:`S_{n - 1} + \frac{1}{n} \therefore S_n - S_{n - 1} = 1`

     Similarly :math:`S_{n - 1} - S_{n - 2} = \frac{1}{n - 2}`

     :math:`S_{n - 2} - S_{n - 3} = \frac{1}{n - 3}`

     :math:`\ldots`

     :math:`S_2 - S_1 = \frac{1}{3}`

     :math:`S_1 = 1`

     Adding we get :math:`S_n = 1 + \frac{1}{2} + \frac{1}{4} + \ldots +
     \frac{1}{n}`

173. :math:`(1 - x)^n = 1 - {}^nC_1x + {}^nC_2x^2 - \ldots + (-1)^{n -
     1}{}^nC_nx^n`

     Putting :math:`x = x^4,` and integrating between limits :math:`0` and
     :math:`1,` we get

     :math:`C_0 - \frac{C_1}{5} + \frac{C_2}{9} - \ldots +
     (-1)^n\frac{C_n}{4n + 1} = \int_{0}^1(1 - x^4)^ndx`

     It can be proven that :math:`\int_0^1(1 - x^4)^ndx =
     \frac{4n.n!}{1.5.9\ldots (4n + 1)}` [Refer to any book on calculus]

174. :math:`(1 - x)^n = 1 - {}^nC_1x + {}^nC_2x^2 - \ldots + (-1)^{n -
     1}{}^nC_nx^n`

     Multiplying both sides with :math:`x^{n - 1},` and integrating with limit
     :math:`0` and :math:`1,` we get

     :math:`\frac{C_0}{n} - \frac{C_1}{n + 1} + \frac{C_2}{n + 2} -
     \ldots + (-1)^n\frac{C_n}{2n} = \int_0^1 x^{n - 1}(1 - x)^ndx`

     Integrating R.H.S. by parts we obtain the desired result.

175. L.H.S. :math:`= \left(\frac{C_0}{n} - \frac{C_0}{n + 1}\right) -
     \left(\frac{C_1}{n + 1} - \frac{C_1}{n + 2}\right) + \ldots + (-1)^{n -
     1}\left(\frac{C_n}{2n} - \frac{C_n}{2n + 1}\right)`

     :math:`= \left(\frac{C_0}{n} - \frac{C_1}{n + 1} + \frac{C_2}{n + 2} -
     \ldots + (-1)^n\frac{C_n}{2n}\right) - \left(\frac{C_0}{n + 1} -
     \frac{C_1}{n + 2} + \ldots + (-1)^n\frac{C_n}{2n + 1}\right)`

     Now this can be solved like 174.

176. This problem is similar to 174 and has been left as an exercise.

177. :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     :math:`(1 - x)^n = 1 - {}^nC_1x + {}^nC_2x^2 - \ldots + (-1)^{n -
     1}{}^nC_nx^n`

     Multiplying these two we get

     :math:`(C_0 + C_1x + C_2x^2 + \ldots + C_nx^n)(1 - {}^nC_1x + {}^nC_2x^2 -
     \ldots + (-1)^{n - 1}{}^nC_nx^n) = (1 - x^2)^n`

     Coeff. of :math:`x^n` on L.H.S. :math:`= C_0^2 - C_1^2 + C_2^2 - \ldots +
     (-1)^nC_n^2`

     R.H.S. :math:`= C_0 + (-1)^1C_1x^2 + C_2x^2 + \ldots`

     :math:`=` an expression having even powers of :math:`x`

     Thus, if :math:`n` is odd, coeff. of :math:`x^n` on R.H.S :math:`= 0`

     If :math:`n` is even, coeff. of :math:`x^n` on R.H.S. :math:`=
     (-1)^{\frac{n}{2}}{}^nC_{\frac{n}{2}}`

     :math:`= \frac{n!}{\left(\frac{n!}{2}\right)^2}`

178. :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     :math:`(1 + x)^m = C_0 + C_1x + C_2x^2 + \ldots + C_mx^m`

     Multiplying these two, we get

     :math:`(C_0 + C_1x + C_2x^2 + \ldots + C_nx^n)(C_0 + C_1x + C_2x^2 +
     \ldots + C_mx^m) = (1 + x)^{m + n} = {}^{m + n}C_0 + {}^{m + n}C_1x +
     \ldots + {}^{m + n}C_rx^r + \ldots + {}^{m + n}C_{m + n}x^{m + n}`

     Equating the coefficient of :math:`x^r` we get the desired result.

179. :math:`(1 + x)^{2n} = C_0 + C_1x + C_2x^2 + \ldots + C_{2n}x^{2n}`

     :math:`(x + 1)^{2n} = C_0x^{2n} + C_1x^{2n - 1} + C_2x^{2n - 2} + \ldots +
     C_2n`

     Multiplying we get

     :math:`(C_0 + C_1x + C_2x^2 + \ldots + C_{2n}x^{2n})(C_0x^{2n} + C_1x^{2n - 1} +
     C_2x^{2n - 2} + \ldots + C_{2n}) = (1 - x^2)^{n}`

     Equating the coefficients of :math:`x^{2n}` we get the desired result.

180. :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     Differentaiating w.r.t :math:`x,` we obtain

     :math:`n(1 + x)^{n - 1} = C_1 + 2C_2x + \ldots + nC_nx^{n -1}`

     Also, :math:`(x + 1)^n = C_0x^n + C_1x^{n - 1} + C_2x^{n - 2} + \ldots +
     C_n`

     Multiplying two previous equations, we obtain

     :math:`n(1 + x)^{2n - 1} = (C_1 + 2C_2x + \ldots + nC_nx^{n -1})(C_0x^n +
     C_1x^{n - 1} + C_2x^{n - 2} + \ldots + C_n)`

     Equating coefficients of :math:`x^{n - 1},` we obtain

     :math:`C_1^2 + 2.C_2^2 + 2.C_3^3 + \ldots + n.C_n^2 = n.{}^{2n - 1}C_{n -
     1} = \frac{(2n - 1)!}{[(n - 1)!]^2}`

181. :math:`(1 + x)^n = C_0 + C_1x + C_2x^2 + \ldots + C_nx^n`

     Integrating with limits :math:`0` and :math:`x,` we obtain

     :math:`\left[\frac{(1 + x)^{n + 1}}{n + 1}\right]_0^x = \left[C_0x +
     C_1\frac{x^2}{2} + C_2\frac{x^3}{3} + \ldots + C_n\frac{x^{n + 1}}{n +
     1}\right]_0^x`

     Also, :math:`(x + 1)^n = C_0x^n + C_1x^{n - 1} + C_2x^{n - 2} + \ldots +
     C_n`

     Multiplying and equating coefficients of :math:`x^{n + 1},` we obtain

     :math:`C_0^2 + \frac{C_1^2}{2} + \frac{C_2^2}{3} + \ldots + \frac{C_n^2}{n
     + 1} = \frac{{}^{2n + 1}C_{n + 1} - 0}{n + 1} = \frac{(2n + 1)!}{[(n + 1)!]^2}`

182.
