Summation of Series Solutions
*****************************
1. We have studied the formula for A.P http://10hash.com/algebra/arithmetic_progressions/#sum-of-squares-and-cubes-and-more. So, we
   have, :math:`t_n = 12n^2 - 6n + 5`

   Thus,

   .. math::

      \sum_{i=1}^n t_n = 12\sum_{i=1}^n 12i^2 - 6 \sum_{i=1}^n i + \sum_{i=1}^n 5

   .. math::

      \sum_{i=1}^n t_n = 12 \frac{n(n + 1)}{2n + 1} - 6\frac{n()n +1}{2} + 5n

   Now, it is trivial to solve above expression.

2. Clearly, nth term = :math:`2n -1` for A. P. 1, 3, 5, 7 ...

   Thus, nth term of given series = :math:`t_n = (2n - 1)^2 = 4n^2 - 4n + 1`

   Thus, :math:`S_n = \sum t_n = \sum (4n^2 - 4n + 1) = \sum 4n^2 - \sum 4n + \sum 1`

   :math:`= \frac{4n(n + 1)(2n + 1)}{6} + \frac{4n(n + 1)}{2} + n`

   :math:`= \frac{n(4n^2)}{3}`

3. Clearly :math:`t_n = n(n + 1)(n + 2) = n^3 + 3n^3 + 2n`

   :math:`S_n = \sum t_n = \sum n^3 + 3n^2 + 2n`

   :math:`= \left\{\frac{n(n + 1)}{2}\right\}^2 + \frac{3n(n + 1)(2n + 1)}{6} + \frac{2n(n + 1)}{2}`

   Now, it is trivial to evaluate above expression.

4. Clearly, rth term is :math:`t_r = r*(r - r + 1) = nr - r^2 + r`

   :math:`S_n = \sum_{r=1}^n (nr - r^2 + r`

   = :math:`\frac{n(n + 1)(n + 2)}{6}`

5. nth term of the series :math:`t_n = (1 + 2 + 3 + ... + n) = \frac{n(n + 1)}{2}`

   :math:`S_n = \sum \frac{1}{2}(n^2 + n)`

   :math:`= \frac{n(n + 1)(n + 2)}{6}`

6. As we can see that nth term will have :math:`n` numbers. Thus,
   when brackets are removed, we have follwoing number of terms

   :math:`= 1 + 2 + 3 + ... + n = \frac{n(n + )}{1}`
   
   :math:`\therefore S_n = 1 + 2 + 3 + ... + \frac{n(n + 1)}{2}`

   :math:`= \frac{1}{2}\frac{2(n + 1)(n^2 + n + 2)}{8}`

7. nth term of the given series

   .. math::

      t_n = \frac{1^3 + 2^3 + 3^3 + ... + n^3}{1 + 3 + 5 + ... ~\text{to n terms}}

   .. math::

      = \frac{\left\{\frac{n(n + 1)}{2}\right\}^2}{\frac{n}{2}*[2*1 + (n - 1)2]}

   .. math::
      
      = \frac{\left\{\frac{n(n + 1)}{2}\right\}^2}{n^2} = \frac{n^2 + 2n + 1}{4}

   :math:`\therefore` Sum to :math:`n` terms, :math:`S_n = \sum_{n = 1}^n t_n`

   .. math::

      = \frac{1}{4}\sum_{n = 1}^n (n^2 + 2n + 1)

   .. math::

      = \frac{1}{4}\left\{\frac{n(n + 1)(2n + 1)}{6} + \frac{2n(n + 1)}{2} + n\right\}

   :math:`\therefore` sum to 16 terms

   :math:`S_{16} = 446`

8. nth term of the seuqence 3, 5, 7, ... is :math:`t_n = 3 + (n - 1)2 = 2n + 1`

   nth term of the seuquence 2, 4, 6, ... is :math:`t_n = 2 + (n - 1)2 = 2n`

   Thus, nth term of the given seuqnce is :math:`(2n + 1)^3 - (2n)^3 = 12n^2 + 6n + 1`

   Hence, :math:`S_n` can be easily found and is :math:`S_n = 4n^3 + 9n^2 + 6n` and
   calculation for this has been left to reader as an exercise. Substituting :math:`n = 10`
   will yield the required result.

9. As shown below:

   .. math::

      t_1 = \frac{1}{1*2} = \frac{1}{1} - \frac{1}{2}

   .. math::

      t_2 = \frac{1}{2*3} = \frac{1}{2} - \frac{1}{3}

   .. math::

      t_3 = \frac{1}{3*4} = \frac{1}{3} - \frac{1}{4}

   ...

   .. math::

      t_n = \frac{1}{n(n + 1)} = \frac{1}{n} - \frac{1}{n + 1}

   we get our sum by adding all the terms

   :math:`S_n = 1 - \frac{1}{n + 1} = \frac{n}{n + 1}`

10. Let :math:`t_n = \frac{A}{n} + \frac{B}{n + 1} + \frac{C}{n + 2}`.

    Then by partial fractions, :math:`A = \text{value of }\frac{1}{(n + 1)(n + 2)\text{when }n = 0}`

    :math:`\therefore A = \frac{1}{(0 + 1)() + 2)} = \frac{1}{2}`

    Similarly, :math:`B = -1` and :math:`C = \frac{1}{2}`.

    :math:`\therefore t_n = \frac{1}{2n} - \frac{1}{n + 1} =+ \frac{1}{2(n + 2)}`

    Now, it is trivial to add these and get our result.

11. :math:`S_n = 1 + 5 + 11 + 19 + 29 +~...~+ t_n~~~~~~~~~~~~~(i)`

    :math:`S_n = ~~~~~~1 + ~~5 + 11 + 19 + ~...~+ t_{n - 1}+ t_{n}~~~(ii)`

    Subtracting, we get

    :math:`t_n = 1 + [4 + 6 + 8 + ... \text{to (n - 1) terms}`

    :math:`t_n = 1 + \frac{n - 1}{2}[2*4 + (n - 1 - 1)2] = n^2 + n 1 - 1`

    Now it is trivial to find the sum of the series.

12. Given, first person gets 1 ruppee.

    Second person gets (1 + 1) = 2 rupees.

    Third person gets (2 + 2) = 4 rupees.

    Fourth person gets (4 + 3) = 7 rupees and so on.

    Let there be :math:`n` persons and nth person gets :math:`t_n` rupees

    Let :math:`S_n = 1 + 2 + 4 + 7 + ... + t_n`

    Proceeding like in previous exercise, we have

    :math:`t_n = 1 + (1 + 2 + 3 + ... \text{to (n - 1) terms})`

    :math:`t_n = \frac{n^2 - n + 2}{2}`

    Substituting :math:`t_n = 67` will yield the desired result which is 12.

13. Since 1st group contains 1 number, 2nd group contains 2 numbers,
    3rd group contains 3 numbers, and so on, therefore, nth group will
    contain :math:`n` numbers.

    Here, we observe that numbers in each group are in A. P. whose c. d. is 1.
    (n - 1)th group will have `(n - 1)` numbers. Total numbers of numbers
    till the end of (n - 1)th group is

    :math:`N = 1 + 2 + 3 + ... \text{for (n - 1) terms}`

    :math:`N = \frac{n - 1}{2}\left\{2 + (n - 2)1\right\}`

    :math:`N = \frac{n(n - 1)}{2}`

    Thus, first term of nth group will be :math:`N + 1` i.e. :math:`\frac{n^2 - n + 2}{2}`

    Sum of numbers in nth group is:

    :math:`S_n = \frac{n}{2}\left\{2.\frac{(n^2 - n + 2)}{2} + (n - 1)\right\}`

    :math:`S_n = \frac{n(n^2 + 1)}{2}`

14. Let :math:`S_n = 1 + 3 + 7 + 15 + ... + t_{n - 1} + t_n`

    Rearranging and rewriting like exercise 11 we have

    :math:`t_n = 1 + [2 + 4 + 8 + ... \text{to (n - 1) terms}]`

    :math:`t_n = 1 + \frac{2(2^{n - 1} - 1)}{2 - 1} = 2^n - 1`

    Now, :math:`S_n = t_1 + t_2 + t_3 + ... + t_n`

    :math:`S_n = (2^1 - 1) + (2^2 - 1) + (2^3 - 1) + ... + (2^n - 1)`

    :math:`= \frac{2(2^n - 1)}{2 - 1} - n = 2^{n + 1} - 2 - n`

15. Let :math:`S_n = 1 + 2x + 3x^2 + ... + t_n`
    
    :math:`\therefore~xS_n = ~~~~~~~x + 2x^2 + ... + xt_{n-1} + xt_n`

    Subtracting, we get

    :math:`(1 - x)S_n = 1 + [(2 - 1)x + (3 - 2)x^2 + ... \text{to (n - 1) terms}] - xt_n`

    :math:`= 1 + \frac{x(1 - x^{n - 1})}{1 - x} - xt_n`

    :math:`= 1 + \frac{x(1 - x^{n - 1})}{1 - x} - xnx^{n - 1}`

    :math:`S_n = \frac{1 - x^n}{(1 - x)^2} - \frac{nx^2}{1 - x}`

16. This problem is same as previous with :math:`x = 2` and :math:`n = 99`.

17. Proceeding as exercise 15, we have

    :math:`(1 - x)S = 1 + (2^2 - 1)x + (3^2 - 2^2)x^2 + ...~\text{to }\infty`

    :math:`(1 - x)S = 1 + 3x + 5x + 7x^2 + ...`

    Repeating the process again,

    :math:`(1 - x)^2S = 1 + 2x(1 + x + x^2 + ...~\text{to }\infty)`

    :math:`S = \frac{1 + x}{(1 - x)^3}`
