Mathematical Induction
**********************
Mathematical induction is a mathematical proof technique. It is used to prove
that a statement :math:`P(n)` holds for every natural number :math:`n = 0, 1,
2, 3, \ldots ;` that is, the overall statement is a sequence of infinitely many
cases :math:`P(0), P(1), P(2), P(3), \ldots`

The earliest rigorous use of induction was by Gersonides (1288–1344).
The first explicit formulation of the principle of induction was given by
Pascal in his Traité du triangle arithmétique (1665).

In boolean algebra, a statement which is either true or false is called a
proposition. :math:`P(n)` will denote a proposition whose truth value depends
on natural numbers.

For example, we recall the sum of first :math:`n` natural numbers from
arithmetic progression as :math:`1 + 2 + \ldots + n = \frac{n(n + 1)}{2}` is
denoted by :math:`P(n),` then we can write

:math:`P(n) = 1 + 2 + \ldots + n = \frac{n(n + 1)}{2}`

Here :math:`P(2)` is true means that sum of first two natural numbers is equal
to :math:`1 + 2 = \frac{2*3}{2} = 3`

Mathematical induction is used to prove propositions in many branches of
algebra, geometry and analysis.

Principle of Finite Mathematical Induction
==========================================
The proposition :math:`P(n)` is assumed to be true for all natural numbers if
the following two conditions are satisfied:

1. The proposition :math:`P(n)` is true for :math:`n = 1` i.e. :math:`P(1)` is
   true
2. :math:`P(m)` is true :math:`\Rightarrow P(m + 1)` is true where :math:`m` is
   an arbitrary natural number

Extended Form of Mathematical Induction
=======================================
I. If :math:`P(n)` is a proposition such that

   a. :math:`P(1), P(2), \ldots, P(k)` are true

   b. :math:`P(m), P(m + 1), \ldots, P(m + k - 1)` are true implies :math:`P(m
      + k)` is true

2. If :math:`P(n)` is a proposition such that

   a. :math:`P(r)` is true

   b. :math:`P(r), P(r + 1), \ldots, P(m)` are true imlpies :math:`P(m + 1)`
      is true.
