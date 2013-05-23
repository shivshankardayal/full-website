Complex Numbers
***************

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
1. :math:`z_1=z_2\Leftrightarrow \bar{z_1}=\bar{z_2}`

   Clearly as we know for two complex numbers toi be equal both parts must be
   equal so this is very easy to understand that if :math:`x_1=x_2` and
   :math:`y_1=y_2` then this bidirection consition is always satisfied.
2. :math:`\overline{(\bar{z})}=z`.
