Geometric Progressions
**********************
A succession of numbers is said to be in geometric progression or geometric
sequence if the ratio of any term and the term preceding it is constant
throughout. This constant is called common ratio of the G. P.

Example: :math:`1, 2, 4, 8, 16, ...`

Here, :math:`\frac{\text{2nd term}}{\text{1st term}} = \frac{\text{3rd
term}}{\text{2nd term}} = ... = 2`.

Also, :math:`1, 3, 9, 27, ...` are in geometric progression whose first term is
:math:`1` and common ratio is :math:`3`.

Also, :math:`2, -4, 8, -16, ...` are in geometric progression whose first term
is :math:`2` and common ratio is :math:`-2`.

Properties of a G. P.
=====================
I. If the each term of a G. P. be multiplied by a non-zero number, then the
   sequence obtained is also a G. P.

   **Proof:** Let the given G. P. be :math:`a, ar, ar^2, ar^3, ...`

   Let :math:`k` be a non-zero number, the sequence obtained by multiplying
   each term of the given G. P. by :math:`k` is :math:`ak, ark, ar^2k, ar^3k,
   ...`

   Obviously, the series is in G. P. with the same constant ration as
   previous G. P. i.e. :math:`r`.

   Again, dividing each term of G. P. :math:`a, ar, ar^2, ar^3, ...` we obtain
   the sequence :math:`\frac{a}{k}, \frac{ar}{l^2}, \frac{ar^2}{k^3},
   \frac{ar^3}{k4}, ...`

   It is evident that this sequence is a G. P.  whose common ratio is
   :math:`r`.

II. The reciprocals of the terms of a G. P. are also in G. P.

    **Proof:** Let the G.P. be :math:`a, ar, ar^2, ar^3, ...` the sequence whose terms are
    reciprocal of this G. P. is :math:`\frac{1}{a}, \frac{1}{ar},
    \frac{1}{ar^2}, \frac{1}{ar^3}, ...`

    It is clear that this sequence is in G. P. whose first term is
    :math:`\frac{1}{a}` and common ratio is :math:`\frac{1}{r}`.

Sum of the First n Terms of a G. P.
===================================
Let :math:`a` be the first term and :math:`r` be the common ratio of
a G. P. and :math:`S_n` be the sum of its first :math:`n` terms.

**Case I:** When :math:`r\neq 1`

Now, :math:`Sn = ~a + ar + ar^2 + ... + ar^{n - 2} + ar^{n - 1}`
and :math:`4S_n = ~~~~ar + ar^2 + ... + ar^{n - 2} + ar^{n - 1} + ar^n`

Subtracting bottom one from top one we get

:math:`(1 - r)S_n = a - ar^n = a(1 - r^n)`

.. math::
   \therefore S_n = \frac{a(1 - r^n)}{1 - r} = \frac{a(r^n - 1)}{r - 1}

Case II. When :math:`r = 1`

:math:`S_n = a + a + ... + a = na` and G. P. is also an A. P. with common
difference of :math:`0`.

Sum of Infinite Terms of a G. P., when :math:`|r| < 1`
======================================================
Proceeding similarly as previous section

.. math::
   S_n = \frac{a(1 - r^n)}{1 - r}

However, when :math:`|r| < 1`, then :math:`r^n` approaches zero as :math:`n`
approaches :math:`\pm \infty`. Thus,

:math:`S_{\infty} = \frac{a}{1 - r}, ~~~ (|r| < 1)`

Recurring Decimals
==================
Recurring decimals are a very interesting and nice example to demonstrate the
infinite G. P. and the value can be obtained by the formula derived in previous
section. Consider a recurring decimal :math:`.\dot{7}`. Now,

.. math::
   .\dot{7} = .777777 ... \text{to }\infty

.. math::
   .\dot{7} = .7 + .07 + .007 + .0007 + ...

.. math::
   .\dot{7} = \frac{7}{10} + \frac{7}{100} + \frac{7}{1000} + ...

.. math::
   .\dot{7} = \frac{7}{10} + \frac{7}{10^2} + \frac{7}{10^3} + ...

.. math::
   .\dot{7} = 7\left(\frac{1}{10} + \frac{1}{10^2} + \frac{1}{10^3} +
   ...\right)

.. math::
   .\dot{7} = \frac{7}{9}

We can find this using an alternative method. Let :math:`S =
.\dot{7}`. Multiplying it with 10, we have :math:`10S = 7.\dot{7}`.

Subtracting we get :math:`9S = 7` and thus we obtain the same result.

Geometric Mean
==============
Like arithmetic means we also have geometric means. Say two numbers :math:`a`
and :math:`b` are in G. P. and :math:`x` is a geometric mean between them then
by definition

.. math::
   \frac{x}{a} = \frac{b}{x}

:math:`\Rightarrow x^2 = ab \Rightarrow x = \sqrt{ab}`

If :math:`G_1, G2, ..., G-n` are :math:`n` geometric means between two numbers
:math:`a` and :math:`b`, then

:math:`G1G_2...G_n = \sqrt{ab}^n = G^n`.

**Proof:** :math:`b` is :math:`(n + 2)nd` term. Thus, :math:`b = ar^{n + 1}`
where common ration is :math:`r`.

Thus, :math:`G_1 = ar, G_2 = ar^2, ..., Gn = ar^n`

.. math::
   G_1G_2...G_n = = ar^{1 + 2 + ... + n}

.. math::
   G_1G_2...G_n = = ar^\frac{n(n + 1)}{2} = \sqrt{ab}^n

If :math:`a_1, a_2, ..., a_n` are :math:`n` positive numbers in G. P. then
their geometric mean is given by

:math:`G = (a_1a_2 ... a_n)\frac{1}{n}`

Notes
=====
1. Odd number of terms in a G. P. must be taken as

   .. math::
      ..., \frac{a}{r^2}, \frac{a}{r}, a, ar, ar^2, ...

2. Even number of terms in a G. P. must be taken as

   .. math::
      ..., \frac{a}{r^5}, \frac{a}{r^3}, \frac{a}{r}, ar, ar^3, ar^5

3. If :math:`a_1, a_2, ..., a_n` and :math:`b_1, b_2, ..., b_n` be two G.P.'s
   of common ratios :math:`r_1` and :math:`r_2`, then

   .. math::
      a_1b_1, a_2b_2, a_3b_3, ... ~\text{and}~ \frac{a_1}{b_1},
      \frac{a_2}{b_2}, \frac{a_3}{b_3}, ...

   also form G. P. where common ratios will be :math:`r_1r_2` and
   :math:`\frac{r_1}{r_2}`.

4. If :math:`a_1, a_2, a_3, ...` be a G. P. of +ve terms, then :math:`\log a_1,
   \log a_2, \log a_3, ...` will be an A. P and vice-versa.

   Let :math:`a_1, a_2, a_3, ...` be in G. P. Let :math:`a_i = ar^{i - 1}`
   where :math:`a` is the first term and :math:`r` is the common ratio of
   the G. P. Then

   .. math::
      \log a_i = \log a + (i - 1)\log r

   This shows that :math:`\log a_1,\log a_2, \log a_3, ...` form an A. P. whose
   first term is :math:`\log a` and whose common difference is :math:`\log
   r`. Conversely, let us assume that :math:`\log a_1,\log a_2, \log a_3, ...`
   be in A. P. then

   .. math::
      a_i = x^{a + (i - 1)d} = x^ax^{(i - 1)d}

   where :math:`x` is the base of logarithm. This shows that :math:`a_1, a_2,
   a_3, ...` will be in G. P. whose first term is :math:`x^a` and common ratio
   is :math:`x^d`.

5. Increasing and decreasing G. P.

   Case I. Let the first term :math:`a` be +ve. Then if :math:`r > 1`, then it
   is an increasing G. P. but if :math:`r` is +ve but lies between :math:`0`
   and :math:`1` then it is a decreasing G. P.

   Case II. Let the first term be :math:`a` -ve. Thn if :math:`r > 1`, then it
   is a decreasing  G. P. but if :math:`r` lies between :math:`0` and :math:`1`
   then it is an increasing G. P.

Arithmetico Geometric Series
============================
If the terms of an A. P. are multiplied by the corresponding terms of a G. P.,
then the new series obtained is called an Arithmetico Geometric series.

**Example:** If the terms of the arithmetic series :math:`2 + 5 + 8 + 11 + ...`
are multiplied with the corresponding terms of the geometric series :math:`x +
x^2 + x^3 + ...` then the following arithmetico-geometric series is formed

:math:`2x + 5x^2 + 8x^3 + 11x^4 + ...`

Sum of :math:`n` terms of an Arithmetico-Geometric Series
=========================================================
Let :math:`a_1, a_2, ..., a_n` be an A. P. and :math:`b_1, b_2, ..., b_n` be
a G. P. Let :math:`d` be the common difference of the A. P. and :math:`r` be
the common ratio of the G. P.

Let

.. math::
   S_n = ab + (a + d)br + (a + 2d)br^2 + ... + [a + (n - 1)d]br^{n - 1}

We multiply each term by :math:`r` and write first term below second, second
term below the third and so on.

.. math::
   rS_n = abr + (a + d)br^2 + (a + 2d)br^3 + ... + [a + (n - 1)d]br^n

Subtracting we get

.. math::
   (1 - r)S_n = ab + dbr + dbr^2 + ... + dbr^{n - 1} - [a + (n - 1)d]br^n

.. math::
   = ab + \frac{dbr(1 - r^{n - 1})}{1 - r} - [a + (n - 1)d]br^n

.. math::
   S_n = \frac{ab}{1 - r} + \frac{dbr(1 - r^{n - 1})}{(1 - r)^2} - \frac{[a +
   (n - 1)d]br^n}{1 - r}~~~~(r \neq 1)

If :math:`-1<r<1` then

.. math::
   \lim_{n\rightarrow \infty}r^n = 0 \Rightarrow \lim_{n\rightarrow
   \infty}nr^n = 0

Therefore, sum of an infinite number of terms of an arithmetico-geometric
series is given by

.. math::
   S_{\infty} = \frac{ab}{1 - r} + \frac{dbr}{(1 - r)^2}
