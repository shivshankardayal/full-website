***************
Complex Numbers
***************
Certain portions of these chapter require facts from other parts like
determinants, equations tec. Student is encouraged to look ahead into these
chapters for referenced results/equations used.

Imaginary Numbers
=================
By definition a complex number has two components. A real part and an imaginary
part. Now since we have not studied anything about imaginary numbers let us
study them first. An imaginary number is a number which is imaginary. Err! What
I mean is in practice you cannot have physical representation of those
quantities. Square root of negative numbers are called imaginary numbers. For
example,

.. math::
  \sqrt{-1}, \sqrt{-2}, \sqrt{-3}, ... \text{and so on}

We denote :math:`\sqrt{-1}` with the Greek symbol :math:`i`, which stands for
*iota*.

Clearly, we have the following:

.. math::

  i^2 = -1, i^3=-i, i^4=1

If you examine carefully you will find that following holds true:

.. math::

  i^{4m}=1,i^{4m+1} = i, i^{4m+2}=-1, \text{ and }i^{4m+3}=-i, \text{ where
  }m\in P

:math:`P` is the set of positive numbers inclduing zero. Proof of the above one
is simple and therefore left as an exercise to reader.

**Gotcha**

Consider the following:

.. math::

  1 = \sqrt{1}=\sqrt{(-1)*(-1)}=\sqrt{-1}*\sqrt{-1}=i*i=-1

However, the above result is wrong. The reason being is that for any two real
numbers :math:`a` and :math:`b` :math:`\sqrt{a}*\sqrt{b}=\sqrt{ab}` holds good
if and only if the two numbers are either zero or positive.

Problems
========
1.  Evaluate:

    (a) :math:`i^5`

        :math:`i^5=i^2*i^2*i=-1*-1*i=i`
    (b) :math:`i^{67}`

        :math:`i^{64}*i^2*i=-i`
    (c) :math:`i^{-49}`

        :math:`\frac{1}{i^{48}i}=\frac{1}{i}=i^3`

2.  Prove that :math:`i^n+i^{n+1}+i^{n+2}+i^{n+3}=0`.

    :math:`i^n(1+i+i^2+i^3)=i^n(1+i-1-i)=0`

Definitions Related to Complex Numbers
======================================
A typical complex number has two parts as stated above. It is commonly written
as :math:`a+ib` or :math:`x+iy`. Here, :math:`a, b, x` or :math:`y` all are
real numbers. The complex number itself is denoted by :math:`z`. Therefore, we
have :math:`z=x+iy`. Here, :math:`x` is called the real part and is also
denoted by :math:`Re(z)` and :math:`y` is called the imaginary part and is also
denoted by :math:`Im(z)`.

A complex number is purely real if its imaginary part or :math:`y` or
:math:`Im(z)` is zero. Similarly, a complex number is purely imaginary if its
real part or :math:`x` or :math:`Re(z)` is zero. Clearly, as you can fathom
that there can exist only one number which has both the parts as zero and
certainly that is 0. That is, :math:`0=0+i0`.

The set of all complex number is typically denoted by :math:`C`. Two complex
numbers :math:`z_1` and :math:`z_2` are said to be true if there real parts are
equal and imaginary parts are equal. That is if :math:`z_1=x_1+iy_1` and
:math:`z_2=x_2+iy_2` then :math:`x_1` must be equal to :math:`x_2` and
similarly for imaginary part for two complex numbers to be equal.

Simple Operations
=================

Addition
--------
:math:`(a+ib)+(c+id)=(a+c)+i(b+d)`


Subtraction
-----------
:math:`(a+ib)-(c+id)=(a-c)+i(b-d)`

Multiplication
--------------
:math:`(a+ib)*(c+id)=ac+ibc+iad+bdi^2=(ac-bd)+i(bc+ad)`

Division
--------
The complex number in denominator must not have both parts as zero. At least
one part must be non-zero.

.. math::

  \frac{a+ib}{c+id}=\frac{(a+ib)(c-id)}{(c+id)(c-id)}=\frac{(ac+bd)+i(bc-ad)}{c^2+d^2}

Conjugate of a Complex Number
=============================
Let :math:`z=x+iy` be a complex number then its complex conjugate is a number
with imaginary part made negative and it is written as
:math:`\bar{z}=x-iy`. :math:`\bar{z}` is the typical representation for a
conjugate of a complex number :math:`z`.

Properties of Conjugates
------------------------
1.  :math:`z_1=z_2\Leftrightarrow \bar{z_1}=\bar{z_2}`.

    Clearly as we know for two complex numbers toi be equal both parts must be
    equal so this is very easy to understand that if :math:`x_1=x_2` and
    :math:`y_1=y_2` then this bidirection consition is always satisfied.
2.  :math:`\overline{(\bar{z})}=z`.

    :math:`z=x+iy`, hence, :math:`\bar{z}=x-iy`, hence,
    :math:`\overline{(\bar{z})}=x-(-iy)=x+iy=z`. 
3.  :math:`z+\bar{z}=2Re(z)`.

    Clearly, :math:`z+\bar{z}=x+iy+x-iy=2x=2Re(z)`.
4.  :math:`z-\bar{z}=2iIm(z)`.

    Clearly, :math:`z-\bar{z}=x+iy-(x-iy)=2iy=2iIm(z)`.
5.  :math:`z=\bar{z}\Leftrightarrow z` is purely real.

    Clearly, :math:`x+iy=x-iy \implies 2iy=0 \implies y=0`. Therefore,
    :math:`z` is purely real. Conversely if :math:`z` is purely real then
    :math:`z=x` therefore :math:`z=\bar{z}`.
6.  :math:`z+\bar{z}=0\Leftrightarrow z` is purely imaginary.

    It can be proven like previous point.
7.  :math:`z\bar{z}=[Re(z)]^2+[Im(z)]^2`.

    Clearly, :math:`z\bar{z}=(x+iy)(x-iy)=(x^2+y^2)=[Re(z)]^2+[Im(z)]^2`.
8.  :math:`\overline{z_1+z_2}=\overline{z_1}+\overline{z_2}`.

    Clearly, :math:`\overline{z_1+z_2}=\overline{(x_1+iy_1)+(x_2+iy_2)}` i.e.
    :math:`\overline{(x_1+x_2)+i(y_1+y_2)}=(x_1+x_2)-i(y-1+y_2)` i.e.
    :math:`(x_1-iy_1)+(x_2-iy_2)=\overline{z_1}+\overline{z_2}`.
9.  :math:`\overline{z_1-z_2}=\overline{z_1}-\overline{z_2}`.

    It can be proven in the same fashion as 8 and left to the student.
10. :math:`\overline{z_1 z_2}=\overline{z_1}~\overline{z_2}`.

    It can be proven in the same fashion as 8 and left to the student.
11. 

.. math::
  \overline{\left(\frac{z_1}{z_2}\right)}=\frac{\overline{z_1}}{\overline{z_2}}
  \text{ if } z_2 \neq 0.

If you rationalize the base by multiplying it from its conjugate and apply
division formula give above it can be easily proven hence left as an
exercise.

12. If :math:`P(z)=a_0+a_1z+a_1z^2+...+a_nz^n` where :math:`a_0, a_1,...,a_n`
    and :math:`z` are complex number, then

.. math::

  \overline{P(z)}=\overline{a_0}+\overline{a_1}~(\overline{z})+\overline{a_2}~(\overline{z})^2+ ... + \overline{a_n}~(\overline{z})^n=\overline{P}(\overline{z})

where

.. math::
  \bar{P}z=\overline{a_0}+\overline{a_1}~z+\overline{a_2}z^2+ ... + \overline{a_n}z^n

13. If :math:`R(z)=\frac{P(z)}{Q(z)}` where P(a) and Q(z) are polynomials in z,
and :math:`Q(z)\neq 0,` then

.. math::
   \overline{R(z)}=\frac{\overline{P}(\overline{z})}{\overline{Q}(\overline{z})} 

14. If

.. math::
   z = \begin{vmatrix}
   a_1 & a_2 & a_3 \\
   b_1 & b_2 & b_3 \\
   c_1 & c_2 & c_3 \\
   \end{vmatrix},
   \text{ then } \overline{z} = \begin{vmatrix}
   \overline{a_1} & \overline{a_2} & \overline{a_3} \\
   \overline{b_1} & \overline{b_2} & \overline{b_3} \\
   \overline{c_1} & \overline{c_2} & \overline{c_3} \\
   \end{vmatrix}

where :math:`a_i, b_i, c_i (i=1, 2, 3)` are complex numbers. To prove this you
need to understand determinants.


Modulus of a Complex Number
===========================
Modulus of a complex number :math:`z` is denoted by :math:`|z|` and is equal to
the real number :math:`\sqrt{x^2+y^2}`. Note that
:math:`|z|\geq~0~\forall~z\in C`.

Properties of Modulus
---------------------
1.  :math:`|z|=0 \Leftrightarrow z=0`.

    Clearly, this means
    :math:`x^2+y^2=0 \implies x=0 \text{ and } y=0 \implies z=0`.
2.  :math:`|z|=|\bar{z}|=|-z|=|-\bar{z}|`.

    Clearly, all result in to :math:`x^2+y^2`.
3.  :math:`-|z|\leq Re(z)\leq |z|`.

    Clearly, :math:`-(x^2+y^2)\leq x^2\leq (x^2+y^2)`.
4.  :math:`-|z|\leq Im(z)\leq |z|`.

    Clearly, :math:`-(x^2+y^2)\leq y^2\leq (x^2+y^2)`.
5.  :math:`z\bar{z}=|z|^2`.

    Clearly, :math:`(x+iy)(x-iy)=x^2+y^2=|z|^2`.

Following relations are very easy and can be proved by the student. If
:math:`z_1` and :math:`z_2` are two complex numbers then,

6.  :math:`|z_1 z_2|=|z_1||z_2|`.

    Clearly, :math:`|z_1 z_2|=|x_1x_2-y_1y_2+i(x_1y_2+x_2y_1)|` i.e.
    :math:`\sqrt{(x_1x_2-y_1y_2)^2+(x_1y_2+x_2y_2)^2}` i.e.
    :math:`\sqrt{(x_1+y_1)^2(x_2+y_2)^2}=|z_1||z_2|`.
7.  .. math::
      \left|\frac{z_1}{z_2}\right|=\frac{|z_1|}{z_2}, \text{ if } z_2\neq 0.

8.  :math:`|z_1+z_2|^2=|z_1|^2+|z_2|^2+\overline{z_1}z_2+z_1\overline{z_2}` i.e.
    :math:`|z_1|^2+|z_2|^2+2Re(z_1\overline{z_2})`.
9.  :math:`|z_1-z_2|^2=|z_1|^2+|z_2|^2-\overline{z_1}z_2-z_1\overline{z_2}`
    i.e. :math:`|z_1|^2+|z_2|^2-2Re(z_1\overline{z_2})`.
10. :math:`|z_1+z_2|^2+|z_1-z_2|^2=2(|z_1|^2+|z_2|^2)`.
11. If :math:`a` and :math:`b` are real numbers and :math:`z_1` and :math:`z_2`
    are complex numbers, then

    :math:`|az_1+bz_2|^2+|bz_1-az_2|^2=(a^2+b^2)(|z_1|^2+|z_2|^2)`
12. If :math:`z_1, z_2 \neq 0`, then
    :math:`|z1+z2|^2=|z_1|^2+|z_2|^2\Leftrightarrow \frac{z_1}{z_1}` is purely
    imaginary.
13. If :math:`z_1` and  :math:`z_2` are complex numbers then
    :math:`|z_1+z_2|\leq|z_1|+|z_2|.` This inequality can be generalized also.

14. Similarly, these can also be proven that :math:`|z_1-z_2|\leq|z_1|+|z_2|,`
    :math:`||z_1|-|z_2||\leq|z_1|+|z_2|` and
    :math:`|z_1-z_2|\geq||z_1|-|z_2||.`

Geometrical Representation
==========================
A complex number z which we have considered to be equal to x+iy in our previous
representations can be represented by a point P whose Cartesian co-ordinates
are (x,y) referred to rectangular axes Ox and Oy where O is origin i.e. (0, 0)
and are called *real* and *imaginary* axes respectively. The xy two-dimensional
plane is also called *Argand plane, complex plane* or *Gaussian plane*. The
point P is also called the *image* of the complex number and z is also called
the *affix* or *complex co-ordinate* of point P.

Now as you can easily figure out that all real numbers will lie on real axis
and all imaginary numbers will lie onimaginary axis as their counterparts will
be zero.

The modulus is given by the length of segment OP which is equal to
:math:`OP=\sqrt{x^2+y^2} = |z|.` This, :math:`|z|` is the length of the
OP. Given below is the graphical representation of the complex number.


.. tikz:: Complex number in argand plane or complex plane

   \draw[->] (-.5,0) -- (3,0);
   \draw[->] (0,-.5) -- (0,3);
   \draw (0, 3.5) node {$Y$};
   \draw (3.5, 0) node {$X$};
   \draw (2.5,0) -- (2.5,2.5);
   \draw (0,0) -- (2.5, 2.5);
   \draw (.5,0) arc(0:45:.5);
   \draw (.7,.3) node{$\theta$};
   \draw (1.5, 0.2) node {$x$};
   \draw (2.7, 1.5) node {$y$};
   \draw (3.4, 1.1) node {$OP=|z|$};
   \draw (3.5, 0.7) node {$arg(z)=\theta$};
   \draw (2.5, 2.7) node{$P=x+iy$};

In the above diagram :math:`\theta` is known as the argument of z. This is
nothing but angle made with positive direction (i.e. counter-clockwise) of real
axis. Now thie argument is not unique. If :math:`\theta` is an argument of a
complex number z then :math:`2n\pi+\theta` where :math:`n\in I` where I is the
set of integerts. The value of argument for which :math:`-\pi<\theta\leq\pi` is
called the *principal value* of argument or *principal argument*.

Different Arguments of a Complex Number
---------------------------------------
In the diagram given above the argument is given as

.. math::
   arg(z) = tan^{-1}\left(\frac{y}{x}\right)

this value is for when z is in first quadrant.

When z will lie in second, third and fourth quadrants then arguments will be

.. math::
   arg(z) = \pi -tan^{-1}\left(\frac{y}{|x|}\right)

   arg(z) = \pi -tan^{-1}\left(\frac{|y|}{|x|}\right)

   arg(z) = \pi -tan^{-1}\left(\frac{|y|}{x}\right)

repectively.

Polar Form of a Complex Number
------------------------------
If z is a non-zero complex number, then we can write :math:`z=r(cos\theta +
isin\theta)` where :math:`r=|z|\text{ and }\theta=arg(z).`

In this case z is also given by
:math:`z=r(cos(2n\pi+\theta)+i~sin(2n\pi+\theta))` where :math:`n\in I.`

Euler's Formula
^^^^^^^^^^^^^^^
The complex number :math:`cos\theta+i~sin\theta` is denoted by
:math:`e^{i\theta}` or :math:`cis~\theta.`

Important Results Involving Arguments
-------------------------------------
If :math:`z, z_1 \text{ and } z_2` are complex numbers then

1. :math:`arg(\overline{(z)}) = arg(z)`. This can be easily proven as if
:math:`z=x+iy` then :math:`\overline{z}=x-iy` i.e. sign of argument will get a
-ve sign as y gets one.

2. :math:`arg(z_1z_2)=arg(z-1)+arg(z_1)+2n\pi` where

.. math::
   k = 
   \begin{cases}
   0 \text{ if } & -\pi<arg(z_1)+arg(z_2)\leq-\pi\\
   1 \text{ if } & -2\pi<arg(z_1)+arg(z_2)\leq-\pi\\
   -1 \text{if } & -\pi<arg(z_1)+arg(z_2)\leq2\pi\end{cases}

3. Similarly, :math:`arg(z_1, \overline{z_2})=arg(z_1)-arg(z_2)`

4. :math:`arg\left(\frac{z_1}{z_2}\right)=arg(z_1)+arg(z_2)+2n\pi`

5. :math:`|z_1+z_2|=|z_1-z_2|\Leftrightarrow arg(z_1)-arg(z_2)=\pi/2`

6. :math:`|z_1+z_2|=|z_1|+|z_2|\Leftrightarrow arg(z_1)=arg(z_2)`

7. :math:`|z_1+z_2|^2 = r_1^2+r_2^2+2r_1r_2cos(\theta_1-\theta_2)`

8. :math:`|z_1-z_2|^2 = r_1^2+r_2^2+2r_1r_2cos(\theta_1+\theta_2)`

Vector Representation
=====================
Complex numbers can also be represented as vectors. Length of the vector is
nothing bu modulus of complex number and argument is the angle which the vector
makes with read axis. It is denoted as :math:`\overrightarrow{OP}` where
:math:`OP` represents the vector of the complex number z.

Algebraic Operation's Representation
====================================
Let :math:`z_1=x_1+iy_1` and :math:`x_2+iy_2` be two complex numbers which are
represented by two points :math:`P1` and :math:`P2` in the following diagrams.

Addition
--------
Now as we know that :math:`z_1+z_2 = (x_1+x_2)+i(y_1+y-2).` Let us try to
achive this through geometrical means.

.. tikz:: Complex number addition

   \draw[->, >=stealth] (-.5,0) -- (5.5,0);
   \draw[->, >=stealth] (0,-.5) -- (0,5.5);
   \draw (5.7, 0) node {$X$};
   \draw (0,5.7) node {$Y$};
   \draw (0,0) -- (4,1);
   \draw (0,0) -- (1,4);
   \draw (1,4) -- (5,5);
   \draw (4,1) -- (5,5);
   \draw[dashed] (4,1) -- (4,0);
   \draw[dashed] (1,4) -- (1,0);
   \draw[dashed] (5,5) -- (5,0);
   \draw[dashed] (4,1) -- (5,1);
   \draw (-.5,-.5) node {$O$};
   \draw (1,-.5) node {$L$};
   \draw (4,-.5) node {$M$};
   \draw (5,-.5) node {$N$};
   \draw (5.2,1) node {$K$};
   \draw (3, 1.2) node {$P1(x_1+iy_1)$};
   \draw (1.3, 4.3) node {$P2(x_2+iy_2)$};
   \draw (5, 5.2) node {$P(x+iy)$};

Let us have :math:`P_2L, P_1M \text{ and } P_N` perpendiculars from :math:`P_2,
P_1 \text{ and } P` respectively on x axis. Draw :math:`P_1K` perpendicular to
:math:`PN`. Note that triangles :math:`OP_2L` and :math:`P_1P_2K` are
congruent. Very simple analysis will result in the fact that

.. math::
   OP=OP_1+OP_2

Subtraction
-----------
TO subtract we will have to make :math:`P_2` rotate by :math:`180^\circ .` Now
this means that in prebious diagram it will fall in third quadrant and then
again it can be proven that

.. math::
   z_1-z_2 = P_2P_1

Similarly diagrams for multiplication and division can also be obtained and is
left as an exercise.

For multiplication length or modulus of product is product of two modulii and
argument is sum of arguments. For division modulus is division and argument is
subtraction of two arguments. This implies

.. math::
   z_1z_2=r_1r_2(cos(\theta_1+\theta_2)+isin(\theta_1+\theta_2))

and

.. math::
   \frac{z_1}{z_2}=\frac{r_1}{r_2}(cos(\theta_1+\theta_2)-isin(\theta_1-\theta_2))

Three Important Results
-----------------------
.. tikz::

   \draw[->, >=stealth] (-.5,0) -- (5.5,0);
   \draw[->, >=stealth] (0,-.5) -- (0,5.5);
   \draw (5.7, 0) node {$X$};
   \draw (0,5.7) node {$Y$};
   \draw (0,0) -- (2,4);
   \draw (0,0) -- (3.5,1);
   \draw (2,4) -- (4,0);
   \draw (-.5,-.5) node {$O$};
   \draw (4.4,0) arc(0:120:4mm);
   \draw (2, 4.2) node {$Q(z_2)$};
   \draw (4.1, 1) node {$P(z_1)$};
   \draw (4.3, 0.6) node {$\theta$};

:math:`z_1-z_2=\overrightarrow{OP}-\overrightarrow{OQ}=\overrightarrow{QP}`

:math:`\therefore |z_1-z_2|=|\overrightarrow{QP}|=QP,` which is nothing but distance
between points P and Q which are nothing but representation of complex numbers
:math:`z_1` and :math:`z_2.`

:math:`arg(z_1-z_2)` is the angle which :math:`\overrightarrow{QP}` makes with
positive direction of x-axis being denoted by :math:`\theta.`

.. tikz::

   \draw[->, >=stealth] (-1.5,0) -- (5.5,0);
   \draw[->, >=stealth] (0,-.5) -- (0,5.5);
   \draw (5.7, 0) node {$X$};
   \draw (0,5.7) node {$Y$};
   \draw (-.5,-.5) node {$O$};
   \draw[dashed] (1,0) -- (2,2);
   \draw[dashed] (-1,0) -- (2,2);
   \draw[->, >=stealth] (2,2) -- (3,4);
   \draw[->, >=stealth] (2,2) -- (3.5,3);
   \draw (-0.6,0) arc(0:33.69:4mm);
   \draw (1.4,0) arc(0:63.43:4mm);
   \draw (2.4,2.7) arc(63.43:13.69:4mm);
   \draw (-.2, 0.2) node{$\beta$};
   \draw (1.8, 0.2) node{$\alpha$};
   \draw (2.8,2.8) node{$\theta$};
   \draw (2.6,1.8) node{$P(z_1)$};
   \draw (3.2, 4.2) node{$Q(z_2)$};
   \draw (3.7,3.2) node{$R(z_3)$};

:math:`\theta=\alpha-\beta=arg(z_3-z_1)-arg(z_2-z_1)`

.. math::
   \Rightarrow~\theta=arg\frac{z_3-z_1}{z_2-z_1}

Similarly if three complex numbers are vertices of a triangle then angles of
those vertices can also be computed using previous results.

Similarly, for four points to be concyclic where those points are represented
by :math:`z_1, z_2, z_3 \text{ and } z_4` if 

.. math::
   arg\left(\frac{z_2-z_4}{z_1-z_4}\frac{z_1-z_3}{z_2-z_3}\right)=0

Note that these complex numbers are in either clockwise or counter-clockwise
order as vertices of the quadrilateral.

More Roots
==========

Any Root of an Imaginary Number is an Imaginary Number
------------------------------------------------------
Let :math:`x+iy` be an imaginary number, where :math:`y\neq 0`

Let :math:`(x+iy)^n=a, \therefore x+iy = a^n`

Now if :math:`a` is real :math:`a^n` will also be real but from above an
imaginary number :math:`x+iy` is equal to a real number :math:`a^n` which is
not posiible. Hence, a must be imaginary.

Square Root of a Complex Number
-------------------------------
Consider a complex number :math:`z=x+iy` then let us say

.. math::
   \sqrt{x+iy}=a+ib

   x+iy = (a^2-b^2)+2abi

Equating real and imaginary parts

.. math::
   x=a^2-b^2 \text{ and } y=2ab

then we can write

.. math::
   a^2+b^2 = (a^2-b^2)^2 + (2ab)^2

From two equations written above we have

.. math::
   a=\pm\sqrt{\left(\frac{\sqrt{x^2+y^2}+x}{2}\right)} \text{ and }

   b=\pm\sqrt{\left(\frac{\sqrt{x^2+y^2}-x}{2}\right)} \text{ and }

Thus, we can deduce our complex number.

Cube Roots of Unity
-------------------
Let :math:`x=x^{\frac{1}{3}}`, then :math:`x^3-1=0.`

:math:`\Rightarrow~(x-1)+(x^2+x+1)=0`

So the three roots are :math:`x=1, x=\frac{-1\pm \sqrt{-3}}{2}` i.e. :math:`1,
\frac{-1+i\sqrt{3}}{2} \text{ and } \frac{-1-i\sqrt{3}}{2}.`

It can be easily verified that if :math:`\omega=\frac{-1-i\sqrt{3}}{2}` then
:math:`\omega^2=\frac{-1+i\sqrt{3}}{2}` thus three cube roots are represented
as :math:`1, \omega \text{ and } \omega^2.`

Similarly one of the properties is that :math:`1+\omega+\omega^2=0` which can
be verified also and product of all three is 1 i.e. :math:`\omega^3=1.`

nth Root of Unity
-----------------
.. math::
   1=cos0+isin0

.. math::
   =1^\frac{1}{n}=(cos0+isin0)^\frac{1}{n}

.. math::

   =cos\frac{2k\pi+0}{n}+isin\frac{2k\pi+0}{n}, \text{ where } k=0,1,2,3,4,....(n-1)

.. math::
   =e^{\frac{i2k\pi}{n}}

.. math::
   = 1, e^\frac{i2\pi}{n}, e^\frac{i4\pi}{n}, ..., e^\frac{i2(n-1)\pi}{n}

.. math::
   = 1,\alpha , \alpha^2, ..., \alpha^n, \text{ where }
   \alpha=e^\frac{i2\pi}{n}

Similarly as cube roots of unity it can be proven that

.. math::
   1+\alpha+\alpha^2 + \alpha^{n-1}= 0

and

.. math::
   1.\alpha.\alpha^2. ... .\alpha^{n-1}=(-1)^{n-1}

De Movire's Therorem
====================
**Statement:** If :math:`n` is any integer then :math:`(cos\theta +
isin\theta)^n=cosn\theta + isinn\theta`.

If :math:`n` is any rational number then one of the values of :math:`(cos\theta
+ isin\theta)^n=cosn\theta + isinn\theta`

**Proof:**

**Case I:** When n is 0.

Clearly, :math:`(cos\theta+isin\theta)^0=1`

**Case II:**  When n is a positive integer.

Clearly,
:math:`(cos\theta+isin\theta)^2=(cos^2\theta-sin^2\theta+i2cos\theta sin\theta)`

= :math:`cos2\theta+isin2\theta`

Similarly, :math:`(cos\theta+isin\theta)^3=cos3\theta+isin3\theta`

Similalrly, if for :math:`n-1` we have

:math:`(cos\theta+isin\theta)^{(n-1)} = cos(n-1)\theta+isin(n-1)\theta` then it
can be easily proven that

:math:`(cos\theta+isin\theta)^n = cosn\theta+isinn\theta`

It is left as an exercise to the reader to prove it for negative and fractional
powers.

Some Important Geometrical Results and Equations
================================================

Section Formula
---------------
Let :math:`z_1=x_1+iy_1, z_2=x_2+iy_2` then if :math:`z=z+iy` which divides the
previous two points in the ration :math:`m;n` can be given by using the results
from co-ordinate geometry as below:

.. math::
   x=\frac{mx_2+nx_1}{m+n}, \text{ and } y=\frac{my_2+ny-1}{m+n}

   \therefore~z=\frac{mz_2+nz_1}{m+n}

Extending this section formula we can say that if there is a point which divides this
line in two equal parts i.e. the point is mid-point then :math:`m = 1` and :math:`n
= 1` then :math:`z` is given by :math:`\frac{1}{2}(z_1 + z_2)`

Distance Formula
----------------
Distance betwenn :math:`A(z_1)` and :math:`B(z_2)` is given by :math:`AB = |z_1 + z_2|`

Equation of a Line Passing Through Two Points
---------------------------------------------
The equation between two point :math:`z_1` and :math:`z_2` is given by the
determinant

.. math::
   \begin{vmatrix}
   z & \overline{z}&1\\
   z_1 & \overline{z_1}&1\\
   z_2 & \overline{z_2}&1
   \end{vmatrix}=0

or,

.. math::
   \frac{z-z_1}{\overline{z}-\overline{z_1}}=\frac{z_1-z_2}{\overline{z_1}-\overline{z_2}}

Please refer to determinants section and co-ordinate geomtry books on how to
establish this result.

The proof is left as an exercise to the reader.

The parametric form is given by :math:`z = iz_1 + (1 - t)z_2`

Collinear Points
----------------
Three points :math:`z_1, z_2 \text{ and } z_3` are collinear if and only if

.. math::
   \begin{vmatrix}
   z_1 & \overline{z_1}&1\\
   z_2 & \overline{z_2}&1\\
   z_3 & \overline{z_3}&1
   \end{vmatrix}=0

This follows from the formula for a line passing through two points. Just
substitute :math:`z_3` as a point in the equation to satisfy the equality.

Parrallelogram
--------------
Four complex numbers :math:`A(z_1), B(z_2), C(z_3)` and :math:`D(z_4)`
represent the vertices of a parallelogram if :math:`z_1 + z_3 = z_2 + z_4.`

.. tikz::
    \draw (0, 0) -- (3, 0) -- (4, 2) -- (1, 2) -- cycle;
    \draw (0, 0) -- (4, 2);
    \draw (3, 0) -- (1, 2);
    \draw (0, 0) node[anchor=north east] {$A(z_1)$};
    \draw (3, 0) node[anchor=north west] {$B(z_2)$};
    \draw (4, 2) node[anchor=south west] {$C(z_3)$};
    \draw (1, 2) node[anchor=south east] {$D(z_4)$};
    
The diagonals :math:`AC` and :math:`BD` must bisect each other. Therefore,

.. math::
    \frac{1}{2}(z_1 + z_3) = \frac{1}{2}(z_2 + z_4)

    \Leftrightarrow z_1 + z_3 = z_2 + z_4

Rhombus
-------
Four complex numbers :math:`A(z_1), B(z_2), C(z_3)` and :math:`D(z_4)`
represent the vertices of a rhombus if :math:`z_1 + z_3 = z_2 + z_4` and
:math:`|z_4 - z_1| = |z_2 - z_1|.`

.. tikz::
    \draw (0, 0) -- (3, 0) -- (4, 3) -- (1, 3) -- cycle;
    \draw (0, 0) -- (4, 3);
    \draw (3, 0) -- (1, 3);
    \draw (0, 0) node[anchor=north east] {$A(z_1)$};
    \draw (3, 0) node[anchor=north west] {$B(z_2)$};
    \draw (4, 3) node[anchor=south west] {$C(z_3)$};
    \draw (1, 3) node[anchor=south east] {$D(z_4)$};

The diagonals :math:`AC` and :math:`BD` must bisect each other. Therefore,

.. math::
    \frac{1}{2}(z_1 + z_3) = \frac{1}{2}(z_2 + z_4)

    \Leftrightarrow z_1 + z_3 = z_2 + z_4

Also, a pair of two adjacent sides are equal for example :math:`AD = AB` thus
second condition is also met i.e. :math:`|z_4 - z_1| = |z_2 - z_1`.

Square
------
Four complex numbers :math:`A(z_1), B(z_2), C(z_3)` and :math:`D(z_4)`
represent the vertices of a square if :math:`z_1 + z_3 = z_2 + z_4, |z_4 - z_1|
= |z_2 - z_1|` and :math:`|z_3 - z_1| = |z_4 - z_2|.`

.. tikz::
    \draw (0, 0) -- (3, 0) -- (3, 3) -- (0, 3) -- cycle;
    \draw (0, 0) -- (3, 3);
    \draw (3, 0) -- (0, 3);
    \draw (0, 0) node[anchor=north east] {$A(z_1)$};
    \draw (3, 0) node[anchor=north west] {$B(z_2)$};
    \draw (3, 3) node[anchor=south west] {$C(z_3)$};
    \draw (0, 3) node[anchor=south east] {$D(z_4)$};

The diagonals :math:`AC` and :math:`BD` must bisect each other. Therefore,

.. math::
    \frac{1}{2}(z_1 + z_3) = \frac{1}{2}(z_2 + z_4)
    \Leftrightarrow z_1 + z_3 = z_2 + z_4

Also, a pair of two adjacent sides are equal for example :math:`AD = AB` thus
second condition is also met i.e. :math:`|z_4 - z_1| = |z_2 - z_1`.

And the two diagonals are equal i.e. :math:`AC = BD` i.e. :math:`|z_3 - z_1| =
|z_4 - z_2|.`

Rectangle
---------
Four complex numbers :math:`A(z_1), B(z_2), C(z_3)` and :math:`D(z_4)`
represent the vertices of a rectangle if :math:`z_1 + z_3 = z_2 + z_4, |z_4 -
z_1|` and :math:`|z_3 - z_1| = |z_4 - z_2|.`

.. tikz::
    \draw (0, 0) -- (3, 0) -- (3, 2) -- (0, 2) -- cycle;
    \draw (0, 0) -- (3, 2);
    \draw (3, 0) -- (0, 2);
    \draw (0, 0) node[anchor=north east] {$A(z_1)$};
    \draw (3, 0) node[anchor=north west] {$B(z_2)$};
    \draw (3, 2) node[anchor=south west] {$C(z_3)$};
    \draw (0, 2) node[anchor=south east] {$D(z_4)$};

Similar to above examples the diagonals bisect each other. Also, the diagonals
:math:`AC` and :math:`BD` should be equal.

Centroid of a Triangle
----------------------
Let :math:`A(z_1), B(z_2)` and :math:`C(z_3)` be the vertices of a
:math:`\triangle ABC.`

Centroid :math:`G(z)` of the :math:`\triangle ABC` is the point of concurrence
of the medians of all three sides and is given by

.. math::
    z = \frac{1}{3}(z_1 + z_2 + z_3)

.. tikz::
    :libs: intersections

    \draw (-2, 0) -- (2, 0) (-2, 0) node[anchor = north east] {$A$};
    \draw (2, 0) -- (0, 4) (2, 0) node[anchor = north west] {$B$};
    \draw (-2, 0) -- (0, 4) (0, 4) node[anchor = south] {$C$};
    \draw (2, 0) -- (-1, 2) (-1, 2) node[anchor = east] {$E$};
    \draw (0, 4) -- (0, 0) (0, 0) node[anchor = north] {$F$};
    \draw (-2, 0) -- (1, 2) (1, 2) node[anchor = west] {$D$};
    \draw (0, 1.33) node[anchor= south west] {$z$};

Incenter of a Triangle
----------------------
Let :math:`A(z_1), B(z_2)` and :math:`C(z_3)` be the vertices of a
:math:`\triangle ABC.`

Incenter :math:`I(z)` of the :math:`triangle ABC` is the point of concurrence
of internal bisectors of all the angles and is given by

.. math::
   z = \frac{az_1 + bz_2 + cz_3}{a + b + c}

where :math:`a, b` and :math:`c` are the lengths of the sides.

.. tikz::
    :libs: intersections

    \draw (-2, 0) -- (2, 0) (-2, 0) node[anchor = north east] {$A$};
    \draw (2, 0) -- (0, 4) (2, 0) node[anchor = north west] {$B$};
    \draw (-2, 0) -- (0, 4) (0, 4) node[anchor = south] {$C$};
    \draw (2, 0) -- (-1, 2) (-1, 2) node[anchor = east] {$E$};
    \draw (0, 4) -- (0, 0) (0, 0) node[anchor = north] {$F$};
    \draw (-2, 0) -- (1, 2) (1, 2) node[anchor = west] {$D$};
    \draw (0, 1.33) node[anchor= south west] {$z$};
    \draw (-1.7, 0) arc(0:30:3mm);
    \draw (-1.5, 0) arc(0:30:5mm);
    \draw (-1.6, .3) arc(30:60:4mm);
    \draw (-1.45, .4) arc(30:60:6mm);
    \draw (1.85, .26) arc(120:150:3mm);
    \draw (1.8, .433) arc(120:150:5mm);
    \draw (1.65, .2) arc(150:180:4mm);
    \draw (1.48, .3) arc(150:180:6mm);
    \draw (-.15, 3.7) arc(240:270:3mm);
    \draw (-.25, 3.5) arc(240:270:5mm);
    \draw (0, 3.6) arc(270:300:4mm);
    \draw (0, 3.35) arc(270:300:6mm);

Circumcenter of a Triangle
--------------------------
The circumcenter :math:`S(z)` of the :math:`\triangle ABC` is the concurrence
of perpendicular bisectors of sides of :math:`\triangle ABC` and is given by

.. math::
    z = \frac{(z_2 - z_3)|z_1|^2 + (z_3 - z_1)|z_2|^2 + (z_1 -
    z_2)|z_3|^2}{\overline{z_1}(z_2 - z_3) + \overline{z_2}(z_3 - z_1) +
    \overline{z_3}(z_1 - z_2)}

    z = \frac{\begin{vmatrix}|z_1|^2 & z_1 & 1\\|z_2|^2 & z_2 & 1\\|z_3|^2 &
    z_3 & 1\end{vmatrix}}{\begin{vmatrix}\overline{z_1} & z_1 &
    1\\\overline{z_2} & z_2 & 1\\\overline{z_3} & z_3 & 1\end{vmatrix}}

Also,

.. math::
   z = \frac{z_1 sin 2A + z_2 sin 2B + z_3 sin 2C}{sin 2A + sin 2B + sin 2C}

Orthocenter of a Triangle
-------------------------
The orthocenter :math:`H(z)`  of the :math:`\triangle ABC` is the concurrence
of altitudes of :math:`\triangle ABC` and is given by

.. math::
   z = \frac{\begin{vmatrix}z_1^2 & \overline{z_1} & 1\\z_2^2 & \overline{z_2}
   & 1\\z_3^2 & \overline{z_3} & 1\end{vmatrix} + \begin{vmatrix}|z_1|^2 & z_1
   & 1\\|z_2|^2 & z_2 & 1\\|z_3|^2 & z_3 &
   1\end{vmatrix}}{\begin{vmatrix}\overline{z_1} & z_1 & 1\\\overline{z_2} &
   z_2 & 1\\\overline{z_3} & z_3 & 1\end{vmatrix}}

   \text{or}

   z = \frac{tanA z_1 + tanB z_2 + tanC z_3}{tanA + tanB + tanC}

   \text{or}

   z = \frac{a secA z_1 + b secB z_2 + c secC z_3}{a secA + b secB + c secC}

Euler's Line
------------
The centroid :math:`G` of a triangle lies on the segment joining the
orthocenter :math:`H` and the circumcenter :math:`S` of the triangle. :math:`G`
divides the line :math:`H` and :math:`S` in the ratio :math:`2:1.`

Length of Perpendicular from a Point to a Line
----------------------------------------------
Length of a perpendicular of point :math:`A(\omega)` from the line
:math:`\overline{a}z + a\overline{z} + b = 0 (a \in \mathbf{C}, b \in
\mathbf{R})` is given by

.. math::
   p = \frac{|\overline{a}\omega + a\overline{\omega} + b|}{2|a|}

Equation of a Circle
--------------------
.. tikz::

   \draw (0, 0) circle(2);
   \draw (0, 0) -- (1.414, 1.414);
   \draw (0, 0) node[anchor=north] {$z_0$};
   \draw (0.5, 0.5) node[anchor=north west] {$r$};
   \draw (1.414, 1.414) node[anchor=west] {$z$};
   \filldraw (0, 0) circle(1pt);

The equation of a circle with center at :math:`z_0` and radius :math:`r` is
:math:`|z - z_0| = r` or :math:`z = z_0 + re^{i\theta}, 0 \le \theta \le 2\pi`
(parametric form) or :math:`z\overline{z} - z_0\overline{z} - \overline{z_0}z +
z_0\overline{z_0} - r^2 = 0`

General equation of a circle is :math:`z\overline{z} - a\overline{z} +
\overline{a}z + b = 0` where :math:`a` is a complex number and :math:`b` is a
real number such that :math:`\sqrt{a\overline{a} - b} \ge 0.` Center of this
circle is :math:`-a` and its radius is :math:`a\overline{a} - b.`

An equation of the circle one of whose diameter is the line segment joining
:math:`z_1` and :math:`z_2` is :math:`(z - z_1)(\overline{z} -
\overline{z_2}) + (\overline{z} - \overline{z_1})(z - z_2) = 0`

An equation of the circle passing through two points :math:`z_1` and
:math:`z_2` is given by

.. math::
   (z - z_1)(\overline{z} - \overline{z_2}) + (\overline{z} -
   \overline{z_1})(z - z_2) + k \begin{vmatrix}z & \overline{z} & 1\\z_1 &
   \overline{z_1} & 1\\z_2 & \overline{z_2} & 1\end{vmatrix} = 0

where :math:`k` is a parameter.

Let us find out equation of a circle passing through three non-collinear
points. Let :math:`A(z_1), B(z_1)` and :math:`C(z_3)` be such three points.

.. tikz::
   \draw (0,0) circle(2);
   \draw (1.414, -1.414) -- (1.414, 1.414);
   \draw (1.414, -1.414) -- (-1.414, 1.414);
   \draw[dashed] (1.414, -1.414) -- (0, -2);
   \draw (-1.414, -1.414) -- (1.414, 1.414);
   \draw (-1.414, -1.414) -- (-1.414, 1.414);
   \draw[dashed] (-1.414, -1.414) -- (0, -2);
   \draw (1.414, 1.414) node[anchor=south west] {$C(z_3)$};
   \draw (-1.414, 1.414) node[anchor=south east] {$P(z)$};
   \draw (-1.414, -1.414) node[anchor=north east] {$A(z_1)$};
   \draw (0, -2) node[anchor=north] {$P(z)$};
   \draw (1.414, -1.414) node[anchor=north west] {$B(z_2)$};

We choose :math:`P(z)` any point on the circle. Two such points are shown in
the figure one when it is in the same segment and other when it is in different
segment.

So we have,

.. math::
   \angle ACB = \angle APB \text{ or } \angle ACB + \angle APB = \pi

as when :math:`P` is in same segment of different.

.. math::
   arg\left(\frac{z_3 - z_2}{z_3 - z_1}\right) - arg\left(\frac{z - z_2}{z -
   z_1}\right) = 0

   arg\left(\frac{z_3 - z_2}{z_3 - z_1}\right) + arg\left(\frac{z - z_2}{z -
   z_1}\right) = \pi

   \Rightarrow arg\left[\frac{(z_3 - z_2)(z - z_1)}{(z_3 - z_1)(z -
   z_2)}\right] = 0

   arg\left[\frac{(z - z_1)(z_3 - z_2)}{(z - z_2)(z_3 - z_1)}\right] = \pi

So in both the cases the fraction must be purely real. This menas

.. math::
   \frac{(z - z_1)(z_3 - z_2)}{(z - z_2)(z_3 - z_1)} = \frac{\overline{(z -
   z_1)(z_3 - z_2)}}{\overline{(z - z_2)(z_3 - z_1)}}

which can be further simplified.

From this we can also deduce the condition for four points to be
concyclic. Treating :math:`P(z)` as just a another point :math:`D(z_4)` we can
rewrite the above result as

.. math::
   \frac{(z_4 - z_1)(z_3 - z_2)}{(z_4 - z_2)(z_3 - z_1)}

must be purely real.

Finding Loci by Examination
---------------------------
i. :math:`arg(z - z_0) = \alpha`

   If :math:`\alpha` is a real number and :math:`z_0` is a fixed point, then
   :math:`arg(z - z_0) = \alpha` represents a verctor starting at :math:`z_0`
   (exclusing the point :math:`z_0`) and making an angle :math:`\alpha` with
   the real :math:`x`-axis.

   .. tikz::

      \draw[<->, >=stealth] (-3, 0) -- (3, 0);
      \draw[<->, >=stealth] (0, -3) -- (0, 3);
      \draw[->, >=stealth] (-2, -1) --(1.8, 2.8);
      \filldraw (-2, -1) circle(1pt) (1, 2) circle(1pt);
      \draw (-2, -1) node[anchor=north] {$z_0$};
      \draw (0, 0) node[anchor=north east] {$O$};
      \draw (3, 0) node[anchor=north] {$X$};
      \draw (0, 3) node[anchor=east] {$Y$};
      \draw (1, 2) node[anchor=north west] {$z$};
      \draw (-0.7, 0) arc(0:45:3mm);
      \draw (-0.5, .2) node {$\alpha$};

   Now suppose :math:`z_0` is origin :math:`O` then the above equation becomes
   :math:`arg(z) = \alpha` which is a vector starting at origin and making an
   angle :math:`\alpha` with the :math:`x`-axis.

ii. If :math:`z_1` and :math:`z_2` are two fixed points such that :math:`|z -
    z_1| = |z - z_2|` then :math:`z` represents perpendicular bisector of the
    segment joining :math:`A(z_1)` and :math:`B(z_2).` And, :math:`z, z_1` and
    :math:`z_2` will form an isosceles triangle.

    .. tikz::

       \draw (-1, 0) -- (1, 0) -- (0, 2.5) -- cycle;
       \draw (0, -0.2) -- (0, 2.7);
       \draw (-1, 0) node[anchor=north] {$A(z_1)$} (1, 0) node[anchor=north]
       {$B(z_2)$} (0, 2.5) node[anchor=south west] {$z$};
       \draw (-1, 0) .. controls (-1,0) and (0, 2.5) .. node[sloped, above]
       {$|z - z_1|$} (0, 2.5);
       \draw (1, 0) .. controls (1,0) and (0, 2.5) .. node[sloped, above]
       {$|z - z_2|$} (0, 2.5);

iii. If :math:`z_1` and :math:`z_2` are two fixed points and :math:`k > 0, k
     \ne 1` is a real number, then

     .. math::
        \frac{|z - z_1|}{|z - z_2|} = k

     represents a circle.

iv. :math:`|z - z_1| + |z - z_2| = k.` Let :math:`z_1` and :math:`z_2` be two
    fixed points and :math:`k` be a positive real number.

    (a) If :math:`k > |z - z_2|,` then :math:`|z - z_1| + |z - z_2| = k`
        represents an ellipse with foci at :math:`A(z_1)` and :math:`B(z_2)`
        and length of major axis = :math:`k.`

        .. tikz::

           \draw (0, 0) ellipse (2 and 1.5);
           \draw (-2, 0) node[anchor=east] {$C$} (2, 0) node[anchor=west]
           {$D$};
           \draw (-2, 0) -- (2, 0);
           \draw (-1, 0) node[anchor=north] {$A(z_1)$} (1, 0)
           node[anchor=north] {$B(z_2)$};
           \draw (-1, 0) circle(1pt) (1, 0) circle(1pt) (2, -.4)
           node[anchor=west] {$CD = k$};

    (b) If :math:`k = |z - z_2|` then it represents the line segment joining
        :math:`z_1` and :math:`z_2.`

    (c) If :math:`k < |z - z_2|` then it does not represent any curve in Argand
        plane.

v. If :math:`|z - z_1| - |z - z_2| = k.` Let :math:`z_1` and :math:`z_2` be two
   fixed points and :math:`k` be a positive real number.

   (a) If :math:`k \ne |z - z_2|` then it represents a parabola with foci at
       :math:`A(z_1)` and :math:`B(z_2).`

       .. tikz::

          \draw plot[variable=\t,samples=100,domain=-50:50]
          ({2*sec(\t)},{.7*tan(\t)});
          \draw plot[variable=\t,samples=100,domain=-50:50]
          ({-2*sec(\t)},{.7*tan(\t)});
          \draw (-2.7,0) -- (2.7, 0);
          \draw (-2.7, 0) circle(1pt) (2.7, 0) circle(1pt);
          \draw (-2.7, 0) node[anchor=east] {$A(z_1)$} (2.7, 0)
          node[anchor=west] {$B(z_2)$};

   (b) If :math:`k = |z_1 - z_2|,` then it represents the straight line joining
       :math:`A(z_1)` and :math:`B(z_2)` but excluding the the segment
       :math:`AB.`

       .. tikz::

          \draw[dashed] (-1, 0) -- (1, 0);
          \draw[->, >= stealth] (-1, 0) -- (-2, 0);
          \draw[->, >= stealth] (1, 0) -- (2, 0);
          \draw (-1, 0) node[anchor=north] {$A(z_1)$} (1, 0) node[anchor=north]
          {$B(z_2)$};

vi. :math:`|z - z_1|^2 + |z - z_2|^2 = |z_1 - z_2|^2`. If :math:`z_1` and
    :math:`z_2` are two fixed points then it represents a circle with
    :math:`z_1` and :math:`z_2` as the end-points of one of the diameters.

    .. tikz::

       \draw (0, 0) circle(2);
       \draw (-2, 0) -- (2, 0) (-2, 0) node[anchor=east] {$A(z_1)$}
       (2, 0) node[anchor=west] {$B(z_2)$};
       \draw (0, 0) circle(1pt) (0,0) node[anchor=north] {$O$};

vii. :math:`arg\left(\frac{z - z_1}{z - z_2} = \alpha\right)`. Let :math:`z_1`
     and :math:`z_1` be any two fixed points and :math:`\alpha` be a real
     number such that :math:`0 \ge \alpha \le \pi.`

     (a) If :math:`0 < \alpha < \pi` and :math:`\alpha \ne \pi/2,` then it
         represents a segment of a circle passing through :math:`A(z_1)` and
         :math:`B(z_2).`

         .. tikz::

            \draw (0, 0) circle(2);
            \draw (-1.414, -1.414) -- (1.414, -1.414);
            \draw (-1.414, -1.414) -- (1.414, 1.414) (1.414, -1.414) -- (1.414,
            1.414);
            \draw (1.414, 1.114) arc(270:225:.3);
            \draw (-1.414, -1.414) node[anchor=north east] {$A(z_1)$} (1.414,
            -1.414) node[anchor=north west] {$B(z_2)$};
            \draw (1.214, 1.114) node[anchor=north] {$\alpha$};
     
     (b) If :math:`\alpha = \pi/2` then it represents a circle with diameter as
         the line segment joining :math:`A(z_1)` and :math:`B(z_2).`

         .. tikz::

            \draw (0, 0) circle(2);
            \draw (-2, 0) -- (2, 0);
            \draw (-2, 0) -- (1.414, 1.414) (2, 0) -- (1.414, 1.414) (-2, 0) --
            (0, -2) (2, 0) -- (0, -2);
            \draw (-2, 0) node[anchor=east] {$A(z_1)$} (2,
            0) node[anchor=west] {$B(z_2)$};
            \draw (1.53, 1.15) arc(300:210:.3);
            \draw(.2121, -1.7979) arc(45:135:.3);
            \draw (1.2, 1.15) node[anchor=north] {$\pi/2$} (0, -1.7)
            node[anchor=south] {$\pi/2$};

     (c) If :math:`\alpha = \pi` then it represents the straight line joining
         :math:`A(z_1)` and :math:`B(z_2)` but excluding the segment :math:`AB.`

         .. tikz::

            \draw[dashed] (-1, 0) -- (1, 0);
            \draw[->, >= stealth] (-1, 0) -- (-2, 0);
            \draw[->, >= stealth] (1, 0) -- (2, 0);
            \draw (-1, 0) node[anchor=north] {$A(z_1)$} (1, 0) node[anchor=north]
            {$B(z_2)$};

     (d) If :math:`\alpha = 0` then it represents the line segment joining
         :math:`A(z_1)` and :math:`B(z_2).`

         .. tikz::

            \draw (-1, 0) -- (1, 0);
            \draw (-1, 0) node[anchor=north] {$A(z_1)$} (1, 0) node[anchor=north]
            {$B(z_2)$};
            \draw (-1, 0) circle(1pt) (1, 0) circle(1pt);

Problems are given as a separate chapter as MathJax may end up taking long time
if too much math is present on same page.
