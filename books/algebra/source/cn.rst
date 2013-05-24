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
    (b) :math:`i^{67}`
    (c) :math:`i^{-49}`

2.  Prove that :math:`i^n+i^{n+1}+i^{n+2}+i^{n+3}=0`.

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
7.  

.. math::
  \left|\frac{z_1}{z_2}\right|=\frac{|z_1|}{z_2}`, \text{ if } z_2\neq 0.

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
