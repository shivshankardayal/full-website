Arithmetic Progressions
***********************
Consider sequences like 1, 2, 3, 4, ... or -1, -2, -3, -4, ... or 1, 3, 5, 
7, ... or :math:`a, a + d, a + 2d, a + 3d, ...`

These sequences increase or decrease with a common difference. When quantities
increase or decrease with a **common difference** they are said to be in
**Arithmetic Progression**. The common difference can be found by subtracting any
term of the series that follows it. For example for the first series it is 1
and for the last it is :math:`d`.

Consider the series :math:`a, a + d, a + 2d, a + 3d, ...`

Simple observation tells us the 1st term is :math:`a,` the 2nd term is
:math:`a + d,` the third term is :math:`a + 2d` and hence the nth term will be
:math:`a + (n - 1)d.` These terms are typically written as :math:`t_1, t_2,
t_3, ..., t_n.`

nth Term of Arithmetic Progression
==================================
Following above discussion we can clearly say that nth term of an arithmetic
progression is given by :math:`t_n = a + (n - 1)d` where :math:`a` is called
the first term and :math:`d` the common difference.

Sum of An Arithmetic Progression
================================
Let :math:`S_n` represents the sum of first :math:`n` terms of an arithmetic
progression. Then we can write

.. math::
   S_n = a + (a + d) + (a + 2d) + ... + (a + (n - 2)d) + (a + (n - 1)d)

Writing the terms in reverse order we have

.. math::
   S_n = (a + (n - 1)d) + (a + (n - 2)d) + ... + (a + d) + a

Adding these we get

.. math::
   2S_n = [2a + (n - 1)d] + [2a + (n - 1)d] + ... \text{ to n terms}

   2S_n = n[2a + (n - 1)d]

   S_n = \frac{n}{2}[2a + (n - 1)d]

   S_n = \frac{n}{2}(a + t_n)

Arithmetic Mean
===============
When three quantities are in arithmetic progression the quantity in the middle
is known to be arithmetic mean of the other two. For example, if :math:`a, b,
c` are in A. P. then :math:`b` is said to be arithmetic mean of :math:`a` and
:math:`c.` In general it is written as :math:`b = \frac{a + c}{2}.` This can be
examined further. Let :math:`b = a + d` then :math:`c = a + 2d.` Clearly,
:math:`b = \frac{a + c}{2}.`

It is also possible to insert :math:`n` numbers between any two numbers such
that all of them are in A. P. Consider two number :math:`a` and :math:`b` in
between which we want to insert :math:`n` numbers such that they are in
A. P. Clearly,:math:`b` will become n + 2th term of A. P. Let common difference
be :math:`d` then we can write :math:`b = a + (n + 1)d` or :math:`d = \frac{b -
a}{n + 1}.` Now all the :math:`n` arithmetic means can be deduced. Let those
are :math:`m_1, m_2, ..., m_n` then :math:`m_1 = a + \frac{b - a}{n + 1}, m_2 =
a + \frac{2(b - a)}{n + 1}, ..., m_n = a + \frac{n(b - a)}{n + 1}.`

Suppose there are :math:`n` terms of an A. P. then the arithmetic mean is given
by

.. math::
   \frac{t_1 + t_2 + ... + t_n}{n}.

:math:`n` arithmetic means between two quantities
-------------------------------------------------
Let the two quantities be :math:`a` and :math:`b`. Let :math:`x_1, x_2, ...,
x_n` be those :math:`n` means. Then, :math:`b` becomes :math:`(n+2)nd`
term. Thus,

.. math::
   b = t_{n + 2} = a + (n + 1)d

.. math::
   d = \frac{b - a}{n + 1}

.. math::
   \therefore x_1 = a + d, x_2 = a + 2d, ..., x_n = a + nd

Substituting for :math:`d`

.. math::
   x_1 = \frac{na + b}{n + 1}, ..., x_n = \frac{nb + a}{n + 1}


Deducing Number of Terms
========================
Now we know that :math:`S_n = \frac{n}{2}[2a + (n - 1)d]` say :math:`S_n, a`
and :math:`d` are known and we have to evaluate :math:`n.` This being a
quadratic equation in :math:`n` we will have two roots for :math:`n.` If the
results are positive and integral then there is no difficulty in interpreting
the results for them. In some cases for a negative root a suitable
interpretation can be given.

**Example** How many terms of the series -8, -6, -4, ... must be added that the
sum be 36?

Here :math:`\frac{n}{2}[-16 + (n - 1)2] = 36 \Rightarrow 2n^2 - 18n - 72 = 0
\Rightarrow n^2 - 9n - 36 = 0 \Rightarrow n = 12 or -3.`

If we take 12 terms of the series, we have -8, -6, -4, -2, 0, 2, 4, 6, 8, 10,
12, 14 the sum of which is 36. The sum of last 3 elements is also 36. Thus the
negative solution even though does not directly answer the question, we can
give it a meaning.

Some Observations on an A. P.
=============================
1. If a fixed number is added to or subtracted from each term of a given
   A. P., then the resulting sequence is also an A. P., and it has the same
   common difference as that of the given A. P.
2. If each term of an A. P. is multiplied or divided by a non-zero fixed
   constant then the resulting sequence is also an A. P.
3. If :math:`a_1, a_2, a_3, ...` and :math:`b_1, b_2, b_3, ...` are two
   arithmetic progressions then :math:`a_1 + b_1, a_2 + b_2, a_3 + b_3, ...`
   are also in A. P.
4. If we have to choose three unknown terms in an A. P. then it is best to
   choose them as :math:`a -d, a, a + d`.
5. If we have to choose four unknown terms in an A. P. then it is best to choose
   them as :math:`a - 3d, a - d, a + d, a + 3d`.
6. In an A. P. the sum of terms equidistant from the beginning and end is
   constant and equal to the sum of first and last term.
7. Any term of an A. P., except the first, is equal to half the sum of terms
   which are equidistant from it:

   .. math::
      a_n = \frac{1}{2}(a_{n - k} + a_{n + k}),~~~~~k<n, \text{and for } k = 1,

   .. math::
      a_n = \frac{1}{2}(a_{n - 1} + a_{n + 1})
8. :math:`t_n = S_n - S_{n - 1}, ~~(n \ge 2)`
9. If :math:`t_n = pn + q` i.e. a linear expression in :math:`n` then it will
   form an A. P. of common difference :math:`p = t_n - t_{n - 1}` and first
   term :math:`p + q~(n =1)` i.e. if :math:`t_n = 3n + 4`, then it is
   an A. P. of common difference 3 and first term as 7.
10. If :math:`S_n = an^2 + bn + c` i.e. quadratic function in :math:`n` then
    the series is A. P. where  :math:`d = 2a`, twice the coefficient of
    :math:`n^2`. 

Sum of Squares and Cubes and More
=================================
We observe that

.. math::
   i^3 - (i - 1)^3 = 3i^2 - 3i + 1

   \sum_{i=1}^n i^3 - (i - 1)^3 = 3\sum_{i=1}^n i^2 - \frac{3n(n + 1)}{2} + n

   n^3 = 3\sum_{i=1}^n i^2 - \frac{3n(n + 1)}{2} + n

   3\sum_{i=1}^n i^2 = n^3 + \frac{3n(n + 1)}{2} - n

   \sum_{i=1}^n i^2 = \frac{n(n + 1)(2n + 1)}{6}

Following in a similar fashion we can show that

.. math::
   \sum_{i=1}^n i^3 = \left\{\frac{n(n + 1)}{2}\right\}^2

More powers can be evaluated in a similar fashion.
