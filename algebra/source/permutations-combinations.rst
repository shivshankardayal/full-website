Permutations and Combinations
*****************************
In this chapter we will study basics of permutations and combinations. Together they are called combinatorics.

Let us say that there are three persons John, Mary and Kate. If there is one chair then in how many ways the chair
can be occupied? The chair can be occupied by anyone of them. Thus, there are three ways of occupying the chair.

Let us consider another problem. Say there are two persons :math:`A` and :math:`B` and they have to sit in a row.
One way is that :math:`A` sits first and then :math:`B` and the second and last obvious way is that :math:`B` sits
first and then :math:`A`. Thus, row formation in these two cases would be :math:`AB` and :math:`BA`. Here we see
that order of sitting matters.

**Permutation:** Permutation of objects means arrangement of objects. In permutation of objects order matter. If
order of objects change then their permutation also changes.

**Combination:** Combination of objects means selection of objects or grouping of objects in such a way that order
does not matter. Changing order does not have any effect on the final outcome as to which object is member of the
group or not.

Fundamental Principle of Counting
=================================
If a work :math:`A` can be done in :math:`m` ways and another work :math:`B` can be done in :math:`n` ways. If :math:`C`
is a work which can be done only if both :math:`A` and :math:`B` are done then total no. of ways of doing :math:`C` is
:math:`m \times n`.

Proof of the Multiplication Rule
--------------------------------
The first operation can be performed in any one of the :math:`m` ways and for each of these :math:`m` ways of performing
the first operation there are :math:`n` ways of performing the second operation. Thus, if the first operation could
have been performed only in this one ways, there would have been :math:`1\times n = n` ways of performing both the
operations. But it is given that first operation can be performed in :math:`m` ways and for each way second operation
can be performed in :math:`n` ways.

:math:`\therefore` Total no. of ways of performing both the operations = :math:`n + n + n \ldots + ~\text{to}~m~` terms
:math:`=n\times m`

Addition Rule
=============
If a work :math:`A` can be done in :math:`m` ways and another work :math:`B` can be done in :math:`n` ways and :math:`C` is a work
which can be done when either :math:`A` or :math:`B` are done then total no. of ways in which :math:`C` can be done is :math:`m + n`
ways.

Factorial of :math:`n`
======================
Factorial of :math:`n` is denoted by :math:`n!` or as the old symbol is given below:

.. image:: _static/images/factorial.png
   :alt: factorial

:math:`n!` is given by product of first :math:`n` natural numbers.

Thus, :math:`n! = 1.2.3.4 \ldots (n - 1).n`

*Now that we have definition of factorial we can know that for each combination of* :math:`r` *different objects number of
permutations* :math:`=r!`

Notations
=========
Number of permutations of :math:`n` different objects taken :math:`r` at a time is denoted by :math:`^nP_r` or :math:`_nP_r`.

Number of combinations of :math:`n` different objects taken :math:`r` at a time is denoted by :math:`^nC_r` or :math:`_nC_r` or
:math:`\begin{pmatrix}n\\r\\\end{pmatrix}`.

Establishing the Permutation Formula
====================================
Let us try to find out value of :math:`^nP_r`. Permutation of :math:`n` objects taken :math:`r` at a time is equivalent to filling
:math:`r` different vacant spots from :math:`n` different objects.

Ways to fill 1st spot = :math:`n`

Ways to fill 2nd spot = :math:`n - 1`

Ways to fill 3rd spot = :math:`n - 2`

...

Ways to fill rth spot = :math:`n - r + 1`

Total no. of ways = :math:`n.(n - 1).(n - 2)\ldots(n - r + 1)`

= :math:`\frac{n.(n - 1).(n - 2)\ldots(n - r + 1)(n - r)\ldots 3.2.1}{(n - r)\ldots 3.2.1}`

= :math:`\frac{n!}{(n - r)!}`

**Second Proof:**

As given in above proof, first place can be filled in :math:`n` different ways. Rest of the :math:`r - 1` places can be filled from
:math:`n - 1` objects in :math:`^{n - 1}P_{r - 1}` ways.

Hence, total no. of ways, :math:`^nP_r = n.^{n - 1}P_{r - 1}`

Similarly, :math:`^{n - 1}P_{r - 1} = (n - 1)^{n - 2}P_{r - 2}`

:math:`^{n - 2}P_{r - 2} = (n - 2).^{n - 3}P_{r - 3}`

:math:`\ldots`

:math:`^{n - r + 1}P_{1} = n - r + 1`

Multiplying and cancelling common factors, we get

:math:`^nP_r = n.(n - 1).(n - 2)\ldots(n - r + 1) = \frac{n!}{(n - r)!}`

:math:`^nP_n = n!` and :math:`0!`
=================================
:math:`^nP_n = n!` means permutation of :math:`n` different objects out of :math:`n`. Following the formula of :math:`^nP_r` we have
:math:`^nP_n = \frac{n!}{0!}`.

However, following first proof we can say that total no. of ways = :math:`n!`.

Thus, :math:`\frac{n!}{0!} = n! \Leftrightarrow 0!= 1`

Note that mathematically :math:`0!` has no meaning.

Meaning of :math:`\frac{1}{(-k)!},` where :math:`k` is a positive integer
=========================================================================
:math:`^nP_r = \frac{n!}{(n - r)!}`

Putting :math:`r = n + k`, we have

:math:`^nP_{n+k} = \frac{n!}{(-k)!}`

But number of ways of arranging :math:`(n + k)` different things out of :math:`n` different things :math:`= 0`

:math:`\therefore \frac{n!}{(-k)!} = 0 \Rightarrow \frac{1}{(-k)!} = 0`

**Note:** Although :math:`(-k)!` has no meaning by definition of factorial but if :math:`\frac{1}{(-k)!}` is
taken as :math:`0(zero)`, then the formula :math:`^nP_r = \frac{n!}{(n - r)!}` will become valid even for :math:`r>n.`

Permutation of Similar Objects
==============================
To find permutation of :math:`n` things taken all together when :math:`p` of them are similar and are of
one type, :math:`q` of them are similar and are of second type, :math:`r` of them are similar and are of third type
and rest all are different.

Let the required no. of permutations be :math:`x`. Since :math:`p` different things can be arranged among themselves
in :math:`p!` ways, therefore, if we replace :math:`p` identical things by :math:`p` different things then total
no. of permutations will become :math:`p!x`. Similarly, if we replace :math:`q` and :math:`r` identical things by
:math:`q` and :math:`r` different things then total no. of permutations become :math:`p!~q!~r!~x`.

Now all :math:`n` things are different and thus no. of permutations should be :math:`n!`.

Thus, :math:`p!~q!~r!~x = n! \therefore x = \frac{n!}{p!~q!~r!}`

Repititive Permutation
======================
To find number of permutations of :math:`n` different things taken :math:`r` at a time when each thing can be repeated
:math:`r` times.

Number of permutations of :math:`n` different things taken :math:`r` at a time when repitition is allowed = Number of ways
in which :math:`r` blank places can be filled by same no. of things when repitition is allowed

Now, first place can be filled by :math:`n` different ways.

Second place can be filled by :math:`n` different ways.

:math:`\ldots`

:math:`r` th  place can be filled by :math:`n` different ways.

Now ny multiplication rule of fundamental principle of counting number of ways in which :math:`r` different places can
be filled = :math:`n~\times~n\times\ldots r~\text{factors}`

:math:`= n^r`

Prove that :math:`^nP_r = r^{n - 1}P_{r - 1} + ^{n - 1}P_r`
===========================================================
:math:`r^{n - 1}P_{r - 1} + ^{n - 1}P_r = \frac{r(n - 1)!}{(n - r)!} + \frac{(n - 1)!}{n - r - 1}!`

:math:`= \frac{r(n - 1)! + (n - r)(n - 1)!}{(n - r)!}`

:math:`= \frac{(n - 1)![r + n - r]}{(n - r)!} = \frac{n(n - 1)!}{(n - r)!} = \frac{n!}{(n - r)!} = ^nP_r`

Circular Permutation
====================
Let us consider about arrnging things along a circle. Let us consider that persons :math:`A, B, C, D` are sitting around a
round table. We can have following arrangements:

.. tikz::

   \draw (0,0) circle (1cm);
   \draw (3cm,0) circle (1cm);
   \draw (6cm,0) circle (1cm);
   \draw (9,0) circle (1cm);
   \draw (1cm, 0) node[anchor=east] {$A$};
   \draw (0, 1cm) node[anchor=north] {$B$};
   \draw (-1cm, 0) node[anchor=west] {$C$};
   \draw (0, -1cm) node[anchor=south] {$D$};
   \draw (4cm, 0) node[anchor=east] {$D$};
   \draw (3cm, 1cm) node[anchor=north] {$A$};
   \draw (2cm, 0) node[anchor=west] {$B$};
   \draw (3cm, -1cm) node[anchor=south] {$C$};
   \draw (7cm, 0) node[anchor=east] {$C$};
   \draw (6cm, 1cm) node[anchor=north] {$D$};
   \draw (5cm, 0) node[anchor=west] {$A$};
   \draw (6cm, -1cm) node[anchor=south] {$B$};
   \draw (10cm, 0) node[anchor=east] {$B$};
   \draw (9cm, 1cm) node[anchor=north] {$C$};
   \draw (8cm, 0) node[anchor=west] {$D$};
   \draw (9cm, -1cm) node[anchor=south] {$A$};

As shown four persons are sitting around a round table and four anticlockwise rotations have lead to four arrangements.

But if :math:`A, B, C, D` are sitting in a row and then are shiftedd such that last occupies the place of first, then
the four arrangements will be different.

Thus, if there are :math:`n` things then for each circular arrangement there are :math:`n` linear arrangements.

But for :math:`n` different things total no. of linear arrengements are :math:`n!` so the total no. of circular arrangements
are :math:`\frac{n!}{n} = (n-1)!`

Clockwise and Anticlockwise Arrangements
========================================
When clockwise and anticlockwise arranegemnts are same then total no. of permutations will become half of what we computed
in previous case i.e. :math:`\frac{(n - 1)!}{2}`

Find the number of combinations of :math:`n` different things taken :math:`r` at a time(:math:`r\le n`)
=======================================================================================================
Number of combination of :math:`n` different things taken :math:`r` at a time is :math:`^nC_r`

Each combination consists of :math:`r` different things and these :math:`r` things can be arranged among themselves in :math:`r!` ways.

Thus for one combination of :math:`r` things number of arrangements = :math:`r!`

Therefore, number of arrangements for :math:`^nC_r` = :math:`r!.^nC_r`

But number of arrangements of :math:`n` different things taken :math:`r` at a time :math:`= ^nP_r`

Thus, :math:`r!^nC_r = ^nP_r \therefore ^nC_r = \frac{n!}{r!(n - r)!}`

**Second Proof:**

Let number of combinations of :math:`n` different things taken :math:`r` at a time be denoted by :math:`^nC_r`

Then no. of combinations of :math:`n-1` different things taken :math:`r - 1` at a time be denoted by :math:`^{n - 1}C_{r - 1}`

Number of combinations of :math:`r` things in which a particular thing(letter) is included :math:`= 1.^{n - 1}C_{r - 1}`

:math:`\therefore` Total number of particular things(letters) in :math:`r` combinations :math:`= n.^{n - 1}C_{r - 1}`

Also, in each combination of :math:`r` things number of letters :math:`= r`

:math:`\therefore` Total no. of letters in :math:`^nC_r` combinations :math:`= r.^nC_r`

Thus, we have

:math:`r.^nC_r = n.^{n - 1}C_{r -1} \therefore ^nC_r = \frac{n}{r}^{n - 1}C_{r - 1}`

:math:`= \frac{n}{r}\frac{n - 1}{r - 1}^{n - 2}C_{r - 2}`

:math:`= \frac{n}{r}.\frac{n - 1}{r - 1}. \ldots \frac{n - r + 1}{1}^{n - r}C_0`

:math:`= \frac{n!}{r!~(n - r)!}`

Properties of :math:`^nC_r`
===========================
Prove that :math:`^nC_r = ^nC_{n - r}`
--------------------------------------
:math:`^nC_r = \frac{n!}{r!~(n - r)!}`

:math:`^nC_{n - r} = \frac{n!}{(n - r)!~(n - n + r)!} = \frac{n!}{(n - r)!~r!}`

Hence proved.

Prove that if :math:`^nC_x = ^nC_y,` then either :math:`x = y` or :math:`x + y = n`
-----------------------------------------------------------------------------------
Let :math:`^nC_x = ^nC_y = ^nC_{n - y}`

From first two we have :math:`x = y`

From first and third :math:`x = n - y` i.e. :math:`x + y = n`

Prove that :math:`^nC_r + ^nC_{r - 1} = ^{n + 1}C_r`
----------------------------------------------------
L. H. S. :math:`= \frac{n!}{r!~(n - r)!} + \frac{n!}{(r - 1)!~(n - r + 1)!}`

:math:`= \frac{n!}{r(r - 1)!~(n - r)!} + \frac{n!}{(r - 1)!~(n - r + 1)(n - r)!}`

:math:`= \frac{n!}{(r - 1)!~(n - r)!}\left[\frac{1}{r} + \frac{1}{n - r + 1}\right]`

:math:`= \frac{(n + 1)!}{r!~(n + 1 - r)!} = ^{n + 1}C_r`

Prove that :math:`r.^nC_r = n.^{n - 1}C_{r - 1}`
------------------------------------------------
L. H. S. :math:`= r.^nC_r = \frac{r.n.(n - 1)!}{r.(r - 1)!~(n - r)!} = n.^{n - 1}C_{r - 1}`

Prove that :math:`\frac{^nC_r}{r + 1} = \frac{^{n + 1}C_{r + 1}}{n + 1}`
------------------------------------------------------------------------
L. H. S. :math:`= \frac{^nC_r}{r + 1} = \frac{n!}{(r + 1)r!~(n-r)!}`

:math:`= \frac{(n + 1)n!}{(n + 1)(r + 1)(n - r)!}`

:math:`= \frac{1}{n + 1}.\frac{(n + 1)!}{(r + 1)!~(n - r)!} = \frac{^{n + 1}C_{r + 1}}{n + 1}`

Restricted Combinations
=======================
Number of combinations of :math:`n` different things taken :math:`r` at a time when :math:`p` particular
things are always selected :math:`= ^{n - p}C_{r - p}`

Number of combinations of :math:`n` different things taken :math:`r` at a time when :math:`p` particular
things are excluded :math:`= ^{n - p}C_r`

Selection of things
===================
When minimum and maximum number of things to be selected are known:

i. Number of selections of zero or more things out of :math:`n` different things

   :math:`= ^nC_0 + ^nC_1 + ^nC_2 + \ldots + ^nC_n = 2^n`
ii. Number of selections of one or more things out of :math:`n` different things

    :math:`= ^nC_1 + ^nC_2 + \ldots + ^nC_n = 2^n - 1`
iii. Number of selections of zero or more things out of :math:`n` identical things
     :math:`= n + 1` (since selection of :math:`r` things out of :math:`n` identical things can
     be made in :math:`1` way)
iv. Number of selections of one or more things out of :math:`n` identical things
    :math:`= n`
v. Number of selection of one or more things from :math:`(p + q + r)` things, out of which
   :math:`p` things are identical and of one type, :math:`q` things are identical and of second
   type, :math:`r` things are identical and of third type :math:`= (p + 1)(q + 1)(r + 1) - 1`
vi. Number of selection of one of more things from :math:`(p + q + r + n)` things, out of which
    :math:`p` things are identical and of one type, :math:`q` things are identical and of second
    type, :math:`r` things are identical and of third type and rest :math:`n` are different

    :math:`= (p + 1)(q + 1)(r + 1)(^nC_0 + ^nC_1 + ^nC_2 + \ldots + ^nC_n) - 1`

    :math:`= (p + 1)(q + 1)(r + 1)2^n - 1`

Distribution of things among sets(groups) and persons
=====================================================
i. Number of ways of dividing :math:`n` different things in :math:`3` sets containing :math:`x,
   y, z` things, where :math:`x, y, z` are distinct(here :math:`x + y + z = n`)

   :math:`= ^nC_x.^{n - x}C_y.^{n - x - y}C_z = \frac{n!}{x!y!z!}`
ii. Number of ways of distributing :math:`n` different things among :math:`3` persons such that
    they get :math:`x, y, z` things

    :math:`= \frac{n!}{x!y!z!}3!`
iii. Number of ways of dividing :math:`n` different things in :math:`5` sets having :math:`a, b,
     c, d, e` things(here :math:`a + b + c + d + e = n`)

     :math:`= \frac{n!}{a!b!c!d!e!}`, when :math:`a, b, c, d, e` are distinct

     :math:`= \frac{n!}{a!b!c!d!e!2!3!}`, when two sets have equal no. of things and :math:`3`
     sets have equal no. of things

     :math:`= \frac{n!}{a!b!c!d!e!5!}`, when all the :math:`5` sets have equal number of things

     Number of ways of distributing above :math:`n` things among :math:`5` persons

     :math:`= \frac{n!}{a!b!c!d!e!}5!`, when :math:`a, b, c, d, e` are distinct

     :math:`= \frac{n!}{a!b!c!d!e!2!3!}5!`, when :math:`2` persons get equal number of things
     and :math:`3` persons get equal number of things

     :math:`= \frac{n!}{a!b!c!d!e!5!}5!`, when all the :math:`5` persons get equal number of
     things.

