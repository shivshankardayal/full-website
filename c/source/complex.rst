.. index:: complex.h

.. _complex:

Complex arithmetic ``<complex.h>``
**********************************
Introduction
============
.. index :: complex, _Complex, _Complex_I, I, _Complex_I

The header ``<complex.h>`` defines macros and declares functions that support
complex arithmetic. Each synopsis specifies a family of functions consisting of
a principal function with one or more double ``complex`` parameters and a
``double complex`` or ``double`` return value; and other functions with the
same name but with f and l suffixes which are corresponding functions with
``float`` and ``long double`` parameters and return values.

The macro ``complex`` expands to ``_Complex``; the macro ``_Complex_I`` expands
to a constant expression of type ``const float _Complex``, with the value of
the imaginary unit. [#]_

The macro ``I`` expands to ``_Complex_I``.

Notwithstanding the provisions of reserved identifiers, a program may undefine
and perhaps then redefine the macros ``complex`` and ``I``.

**Forward references:** IEC 60559-compatible complex arithmetic (annex G).

Conventions
===========
Values are interpreted as radians, not degrees. An implementation may set
``errno`` but is not required to.

.. [#] The imaginary unit is a number :math:`i` such that :math:`i^2 = -1`.

.. index:: branch cuts

Branch Cuts
===========
Some of the functions below have branch cuts, across which the function is
discontinuous. For implementations with a signed zero (including all IEC 60559
implementations) that follow the specifications of annex G, the sign of zero
distinguishes one side of a cut from another so the function is continuous
(except for format limitations) as the cut is approached from either side. For
example, for the square root function, which has a branch cut along the
negative real axis, the top of the cut, with imaginary part +0, maps to the
positive imaginary axis, and the bottom of the cut, with imaginary part -0,
maps to the negative imaginary axis. 

Implementations that do not support a signed zero (see annex F) cannot
distinguish the sides of branch cuts. These implementations shall map a cut so
the function is continuous as the cut is approached coming around the finite
endpoint of the cut in a counter clockwise direction. (Branch cuts for the
functions specified here have just one finite endpoint.) For example, for the
square root function, coming counter clockwise around the finite endpoint of
the cut along the negative real axis approaches the cut from above, so the cut
maps to the positive imaginary axis.

.. index:: CX_LIMITED_RANGE pragma

The ``CX_LIMITED_RANGE`` Pragma
===============================
**Synopsis**

.. code-block:: c

  #include <complex.h>
  #pragma STDC CX_LIMITED_RANGE on-off-switch

**Description**

The usual mathematical formulas for complex multiply, divide, and absolute
value are problematic because of their treatment of infinities and because of
undue overflow and underflow. The ``CX_LIMITED_RANGE`` pragma can be used to
inform the implementation that (where the state is "on") the usual
mathematical formulas are acceptable. [#]_ The pragma can occur either outside
external declarations or preceding all explicit declarations and statements
inside a compound statement. When outside external declarations, the pragma
takes effect from its occurrence until another ``CX_LIMITED_RANGE`` pragma is
encountered, or until the end of the translation unit. When inside a compound
statement, the pragma takes effect from its occurrence until another
``CX_LIMITED_RANGE`` pragma is encountered (including within a nested compound
statement), or until the end of the compound statement; at the end of a
compound statement the state for the pragma is restored to its condition just
before the compound statement. If this pragma is used in any other context, the
behavior is undefined. The default state for the pragma is "off".

.. [#] The purpose of the pragma is to allow the implementation to use the
  formulas

.. index:: trigonometric functions

Trigonometric Functions
=======================
.. index:: cacos function, cacosf function, cacosl function

The ``cacos`` Functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cacos(double complex z);
  float complex cacosf(float complex z);
  long double complex cacosl(long double complex z);

**Description**

The ``cacos`` functions compute the complex arc cosine of ``z``, with branch
cuts outside the interval [-1, +1] along the real axis.

**Returns**

The ``cacos`` functions return the complex arc cosine value, in the range of a
strip mathematically unbounded along the imaginary axis and in the interval
[0, :math:`\pi`] along the real axis.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cacos(double complex z);
  float complex cacosf(float complex z);
  long double complex cacosl(long double complex z);

Link with ``-lm``.

**Description**

The  ``cacos()``  function  calculates  the  complex  arc  cosine of ``z``.  If
``y = cacos(z)``, then ``z = ccos(y)``.  The real part of ``y`` is  chosen  in
the interval [0, :math:`\pi`].

One has::

  cacos(z) = -i * clog(z + i * csqrt(1 - z * z))

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cacos(z)]=%lf and Im[cacos(z)]=%lf\n", creal(cacos(z)), cimag(cacos(z))); 

    return 0;
  }

Compile like ``gcc filename.c -lm``. Execution gives following output::

  Re[cacos(z)]=0.936812 and Im[cacos(z)]=-2.305509

.. index:: casin function, casinf function, casinl function

The ``casin`` Functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex casin(double complex z);
  float complex casinf(float complex z);
  long double complex casinl(long double complex z);

**Description**

The ``casin`` functions compute the complex arc sine of ``z``, with branch cuts
outside the interval [-1, +1] along the real axis.

**Returns**

The ``casin`` functions return the complex arc sine value, in the range of a
strip mathematically unbounded along the imaginary axis and in the interval
[:math:`-\pi/2, +\pi/2`] along the real axis.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex casin(double complex z);
  float complex casinf(float complex z);
  long double complex casinl(long double complex z);

**Description**

The complex sine function is defined as::

  csin(z) = (exp(i * z) - exp(-i * z)) / (2 * i)

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cacsin(z)]=%lf and Im[cacsin(z)]=%lf\n", creal(casin(z)), cimag(casin(z))); 

    return 0;
  }

Compile like ``gcc filename.c -lm``. Execution gives following output::

  Re[cacsin(z)]=0.633984 and Im[cacsin(z)]=2.305509

.. index:: catan function, catanf function, catanl function

The ``catan`` Functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex catan(double complex z);
  float complex catanf(float complex z);
  long double complex catanl(long double complex z);

**Description**

The ``catan`` functions compute the complex arc tangent of z, with branch cuts
outside the interval [-i, +i] along the imaginary axis.

**Returns**

The ``catan`` functions return the complex arc tangent value, in the range of a
strip mathematically unbounded along the imaginary axis and in the interval
[:math:`-\pi/2, +\pi/2`] along the real axis.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex catan(double complex z);
  float complex catanf(float complex z);
  long double complex catanl(long double complex z);

Link with ``-lm``.

**Description**

The  ``catan()``  function  calculates  the  complex  arc tangent of ``z``.  If
``y = catan(z)``, then ``z = ctan(y)``.  The real part of ``y`` is chosen in
the interval [:math:`-\pi/2, \pi/2`].

One has::

  catan(z) = (clog(1 + i * z) - clog(1 - i * z)) / (2 * i)

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cactan(z)]=%lf and Im[cactan(z)]=%lf\n", creal(catan(z)), cimag(catan(z))); 

    return 0;
  }

Compile like ``gcc filename.c -lm``. Execution gives following output::

  Re[cactan(z)]=1.448307 and Im[cactan(z)]=0.158997

.. index:: ccos function, ccsof function, ccosl function 

The ``ccos`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex ccos(double complex z);
  float complex ccosf(float complex z);
  long double complex ccosl(long double complex z);

**Description**

The ``ccos`` functions compute the complex cosine of ``z``.

**Returns**

The ``ccos`` functions return the complex cosine value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex ccos(double complex z);
  float complex ccosf(float complex z);
  long double complex ccosl(long double complex z);

Link with ``-lm``.

**Description**

The complex cosine function is defined as::

  ccos(z) = (exp(i * z) + exp(-i * z)) / 2

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[ccos(z)]=%lf and Im[ccos(z)]=%lf\n", creal(ccos(z)), cimag(ccos(z))); 

    return 0;
  }

and the output is::

  Re[ccos(z)]=-27.034946 and Im[ccos(z)]=-3.851153

.. index:: csin function, csinf function, csinl function

The ``csin`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex csin(double complex z);
  float complex csinf(float complex z);
  long double complex csinl(long double complex z);

**Description**

The ``csin`` functions compute the complex sine of ``z``.

**Returns**

The ``csin`` functions return the complex sine value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex csin(double complex z);
  float complex csinf(float complex z);
  long double complex csinl(long double complex z);

Link with ``-lm``.

**Description**

The complex sine function is defined as::

  csin(z) = (exp(i * z) - exp(-i * z)) / (2 * i)

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[csin(z)]=%lf and Im[csin(z)]=%lf\n", creal(csin(z)), cimag(csin(z))); 

    return 0;
  }

and the output is::

  Re[csin(z)]=3.853738 and Im[csin(z)]=-27.01681

.. index:: ctan function, ctanf function, ctanl function

The ``ctan`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex ctan(double complex z);
  float complex ctanf(float complex z);
  long double complex ctanl(long double complex z);

**Description**

The ``ctan`` functions compute the complex tangent of ``z``.

**Returns**

The ``ctan`` functions return the complex tangent value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex ctan(double complex z);
  float complex ctanf(float complex z);
  long double complex ctanl(long double complex z);

Link with ``-lm``.

**Description**

The complex tangent function is defined as::

  ctan(z) = csin(z) / ccos(z)

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[ctann(z)]=%lf and Im[ctan(z)]=%lf\n", creal(ctan(z)), cimag(ctan(z))); 

    return 0;
  }

and the output is::

  Re[ctann(z)]=-0.000187 and Im[ctan(z)]=0.999356

.. index:: hyperbolic functions

Hyperbolic functions
====================
.. index:: cacosh funciton, cacoshf function, cacoshl function

The ``cacosh`` functions
------------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cacosh(double complex z);
  float complex cacoshf(float complex z);
  long double complex cacoshl(long double complex z);

**Description**

The ``cacosh`` functions compute the complex arc hyperbolic cosine of ``z``,
with a branch cut at values less than 1 along the real axis.

**Returns**

The ``cacosh`` functions return the complex arc hyperbolic cosine value, in
the range of a half-strip of non-negative values along the real axis and in the
interval [:math:`-i\pi , +i\pi`] along the imaginary axis.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cacosh(double complex z);
  float complex cacoshf(float complex z);
  long double complex cacoshl(long double complex z);

**Description**

The  ``cacosh()``  function  calculates  the  complex  arc  hyperpolic  cosine
of ``z``.  If ``y = cacosh(z)``, then ``z = ccosh(y)``.  The imaginary part of
``y`` is chosen in the interval [:math:`-\pi, \pi`].  The real part of ``y`` is
chosen nonnegative.

One has::

  cacosh(z) = 2 * clog(csqrt((z + 1) / 2) + csqrt((z - 1) / 2))

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cacosh(z)]=%lf and Im[cacosh(z)]=%lf\n", creal(cacosh(z)), cimag(cacosh(z))); 

    return 0;
  }

and the output is::

  Re[cacosh(z)]=2.305509 and Im[cacosh(z)]=0.93681

.. index:: casinh funciton, casinhf function, casinhl function
  
The ``casinh`` functions
------------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex casinh(double complex z);
  float complex casinhf(float complex z);
  long double complex casinhl(long double complex z);

**Description**

The ``casinh`` functions compute the complex arc hyperbolic sine of ``z``, with
branch cuts outside the interval [-i, +i] along the imaginary axis.

**Returns**

The ``casinh`` functions return the complex arc hyperbolic sine value, in the
range of a strip mathematically unbounded along the real axis and in the
interval [:math:`-i\pi/2, +i\pi/2`] along the imaginary axis.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex casinh(double complex z);
  float complex casinhf(float complex z);
  long double complex casinhl(long double complex z);

Link with ``-lm``.
  
**Description**

The  ``casinh()`` function calculates the complex arc hyperbolic sine of ``z``.
If ``y = casinh(z)``, then ``z = csinh(y)``.  The imaginary part of ``y`` is
chosen in the interval [:math:`-pi/2, pi/2`].

One has::

    casinh(z) = clog(z + csqrt(z * z + 1))
    
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[casinh(z)]=%lf and Im[casinh(z)]=%lf\n", creal(casinh(z)), cimag(casinh(z))); 

    return 0;
  }
  
and the output is::

  Re[casinh(z)]=2.299914 and Im[casinh(z)]=0.917617

.. index:: catanh function, catanhf function, catanhl function

The ``catanh`` functions
------------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex catanh(double complex z);
  float complex catanhf(float complex z);
  long double complex catanhl(long double complex z);

**Description**

The ``catanh`` functions compute the complex arc hyperbolic tangent of ``z``,
with branch cuts outside the interval [-1, +1] along the real axis.

**Returns**

The ``catanh`` functions return the complex arc hyperbolic tangent value, in
the range of a strip mathematically unbounded along the real axis and in the
interval [:math:`-i\pi/2, +i\pi/2`] along the imaginary axis.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex catanh(double complex z);
  float complex catanhf(float complex z);
  long double complex catanhl(long double complex z);

Link with ``-lm``.  

**Description**

The  ``catanh()`` function calculates the complex arc hyperbolic tangent of
``z``.  If ``y = catanh(z)``, then ``z = ctanh(y)``.  The imaginary part  of 
``y``  is chosen in the interval [:math:`-pi/2, pi/2`].

One has::

    catanh(z) = 0.5 * (clog(1 + z) - clog(1 - z))
    
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[catanh(z)]=%lf and Im[catanh(z)]=%lf\n", creal(catanh(z)), cimag(catanh(z))); 

    return 0;
  }
  
and the output is::

  Re[catanh(z)]=0.117501 and Im[catanh(z)]=1.409921

.. index:: ccosh function, ccoshf function, ccoshl function
  
The ``ccosh`` functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex ccosh(double complex z);
  float complex ccoshf(float complex z);
  long double complex ccoshl(long double complex z);

**Description**

The ``ccosh`` functions compute the complex hyperbolic cosine of ``z``.

**Returns**

The ``ccosh`` functions return the complex hyperbolic cosine value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex ccosh(double complex z);
  float complex ccoshf(float complex z);
  long double complex ccoshl(long double complex z);

Link with ``-lm``. 
  
**Description**

The complex hyperbolic cosine function is defined as::

    ccosh(z) = (exp(z)+exp(-z))/2
    
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[ccosh(z)]=%lf and Im[ccosh(z)]=%lf\n", creal(ccosh(z)), cimag(ccosh(z))); 

    return 0;
  }
  
and the output is::

  Re[ccosh(z)]=-6.580663 and Im[ccosh(z)]=-7.581553

.. index:: csinh function, csinhf function, csinhl function
  
The ``csinh`` functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex csinh(double complex z);
  float complex csinhf(float complex z);
  long double complex csinhl(long double complex z);

**Description**

The ``csinh`` functions compute the complex hyperbolic sine of ``z``.

**Returns**

The ``csinh`` functions return the complex hyperbolic sine value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex csinh(double complex z);
  float complex csinhf(float complex z);
  long double complex csinhl(long double complex z);

Link with ``-lm``.  
  
**Description**

The complex hyperbolic sine function is defined as::

  csinh(z) = (exp(z)-exp(-z))/2
  
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[csinh(z)]=%lf and Im[csinh(z)]=%lf\n", creal(csinh(z)), cimag(csinh(z))); 

    return 0;
  }
  
and the output is ::

  Re[csinh(z)]=-6.548120 and Im[csinh(z)]=-7.619232

.. index:: ctanh function, ctanhf cuntion, ctanhl function
  
The ``ctanh`` functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex ctanh(double complex z);
  float complex ctanhf(float complex z);
  long double complex ctanhl(long double complex z);

**Description**

The ``ctanh`` functions compute the complex hyperbolic tangent of ``z``.

**Returns**

The ``ctanh`` functions return the complex hyperbolic tangent value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex ctanh(double complex z);
  float complex ctanhf(float complex z);
  long double complex ctanhl(long double complex z);

Link with ``-lm``.
  
**Description**

The complex hyperbolic tangent function is defined mathematically as::

  ctanh(z) = csinh(z) / ccosh(z)
  
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[ctanh(z)]=%lf and Im[ctanh(z)]=%lf\n", creal(ctanh(z)), cimag(ctanh(z))); 

    return 0;
  }
  
and the output is::

  Re[ctanh(z)]=1.000710 and Im[ctanh(z)]=0.004908

.. index::
   single: exponential funcitons
   single: logarithmic functions

Exponential and logarithmic functions
=====================================
.. index:: cexp funciton, cexpf function, cexpl function

The ``cexp`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cexp(double complex z);
  float complex cexpf(float complex z);
  long double complex cexpl(long double complex z);

**Description**

The ``cexp`` functions compute the complex base-e exponential of ``z``.

**Returns**

The ``cexp`` functions return the complex base-e exponential value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cexp(double complex z);
  float complex cexpf(float complex z);
  long double complex cexpl(long double complex z);

Link with ``-lm``.  
  
**Description**

The  function calculates e (2.71828..., the base of natural logarithms)
raised to the power of z.

One has::

  cexp(I * z) = ccos(z) + I * csin(z)
  
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cexp(z)]=%lf and Im[cexp(z)]=%lf\n", creal(cexp(z)), cimag(cexp(z))); 

    return 0;
  }
  
and the output is::

  Re[cexp(z)]=-13.128783 and Im[cexp(z)]=-15.200784

.. index:: clog function, clogf cunction, clogl function

The ``clog`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex clog(double complex z);
  float complex clogf(float complex z);
  long double complex clogl(long double complex z);

**Description**

The ``clog`` functions compute the complex natural (base-e) logarithm of ``z``,
with a branch cut along the negative real axis.

**Returns**
The ``clog`` functions return the complex natural logarithm value, in the range
of a strip mathematically unbounded along the real axis and in the interval
[:math:`-i\pi, +i\pi` ] along the imaginary axis.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex clog(double complex z);
  float complex clogf(float complex z);
  long double complex clogl(long double complex z);

Link with ``-lm``.  
  
**Description**

The  logarithm  ``clog()``  is  the  inverse  function  of  the exponential
cexp()``.  Thus, if ``y = clog(z)``, then ``z = cexp(y)``.  The  imaginary  part
of ``y`` is chosen in the interval [:math:`-pi, pi`].

One has::

  clog(z) = log(cabs(z)) + I * carg(z)
  
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[clog(z)]=%lf and Im[clog(z)]=%lf\n", creal(clog(z)), cimag(clog(z))); 

    return 0;
  }
  
and the output is::

  Re[clog(z)]=1.609438 and Im[clog(z)]=0.927295

.. index::
   single: power functions
   single: absolute-value functions
  
Power and absolute-value functions
==================================
.. index:: cabs function, cabsf function, cabsl function

The ``cabs`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double cabs(double complex z);
  float cabsf(float complex z);
  long double cabsl(long double complex z);

**Description**

The ``cabs`` functions compute the complex absolute value (also called norm,
modulus, or magnitude) of ``z``.

**Returns**

The ``cabs`` functions return the complex absolute value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double cabs(double complex z);
  float cabsf(float complex z);
  long double cabsl(long double complex z);

Link with ``-lm``.  
  
**Description**

The ``cabs()`` function returns the absolute value of the complex number ``z``.
The result is a real number.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cabs(z)]=%lf and Im[cabs(z)]=%lf\n", creal(cabs(z)), cimag(cabs(z))); 

    return 0;
  }
  
and the output is::

  Re[cabs(z)]=5.000000 and Im[cabs(z)]=0.000000

.. index::  cpow function, cpowf function, cpowl function
  
The ``cpow`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cpow(double complex x, double complex y);
  float complex cpowf(float complex x, float complex y);
  long double complex cpowl(long double complex x, long double complex y);

**Description**

The ``cpow`` functions compute the complex power function :math:`x^y`, with a
branch cut for the first parameter along the negative real axis.

**Returns**

The ``cpow`` functions return the complex power function value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cpow(double complex x, double complex y);
  float complex cpowf(float complex x, float complex y);
  long double complex cpowl(long double complex x, long double complex y);

Link with ``-lm``.
  
**Description**

The  function  calculates  x raised to the power z. (With a branch cut
for x along the negative real axis.)

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cpow(z, z)]=%lf and Im[cpow(z, z)]=%lf\n", creal(cpow(z, z)), cimag(cpow(z, z))); 

    return 0;
  }

and the output is::

  Re[cpow(z, z)]=-2.997991 and Im[cpow(z, z)]=0.623785

.. index:: csqrt function, csqrtf funciton, csqrtl function
  
The ``csqrt`` functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex csqrt(double complex z);
  float complex csqrtf(float complex z);
  long double complex csqrtl(long double complex z);

**Description**

The ``csqrt`` functions compute the complex square root of ``z``, with a branch
cut along the negative real axis.

**Returns**

The ``csqrt`` functions return the complex square root value, in the range of
the right halfplane (including the imaginary axis).

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex csqrt(double complex z);
  float complex csqrtf(float complex z);
  long double complex csqrtl(long double complex z);

Link with ``-lm``.  
  
**Description**

Calculate  the  square root of a given complex number, with nonnegative
real part, and with a branch cut along the negative real  axis. (That
means  that  ``csqrt(-1+eps*I)``  will  be close to I while ``csqrt(-1-eps*I)``
will be close to ``-I``, if eps is a small positive real number.)

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[csqrt(z)]=%lf and Im[csqrt(z)]=%lf\n", creal(csqrt(z)), cimag(csqrt(z))); 

    return 0;
  }
  
and the output is::

  Re[csqrt(z)]=2.000000 and Im[csqrt(z)]=1.000000

.. index:: carg function, cargf function, cargl function
  
Manipulation functions
======================
The ``carg`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double carg(double complex z);
  float cargf(float complex z);
  long double cargl(long double complex z);

**Description**

The ``carg`` functions compute the argument (also called phase angle) of ``z``,
with a branch cut along the negative real axis.

**Returns**

The ``carg`` functions return the value of the argument in the interval
[:math:`-\pi, +\pi`].

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double carg(double complex z);
  float cargf(float complex z);
  long double cargl(long double complex z);

Link with ``-lm``.  
  
**Description**

A complex number can be described by two real coordinates.  One may use
rectangular coordinates and gets ::

  z = x + I * y

where ``x = creal(z)`` and ``y = cimag(z)``.

Or one may use polar coordinates and gets::

  z = r * cexp(I * a)

where ``r = cabs(z)`` is the "radius", the "modulus", the absolute value of
``z``, and ``a = carg(z)`` is the "phase angle", the argument of ``z``.

One has::

  tan(carg(z)) = cimag(z) / creal(z)
  
**Return Value**

The return value is the range of [:math:`-pi, pi`].

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[carg(z)]=%lf and Im[carg(z)]=%lf\n", creal(carg(z)), cimag(carg(z))); 

    return 0;
  }
  
and the output is::

  Re[carg(z)]=0.927295 and Im[carg(z)]=0.000000

.. index:: cimag function, cimagf function, cimagl function
  
The ``cimag`` functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double cimag(double complex z);
  float cimagf(float complex z);
  long double cimagl(long double complex z);

**Description**

The ``cimag`` functions compute the imaginary part of ``z``.

**Returns**

The ``cimag`` functions return the imaginary part value (as a real).

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double cimag(double complex z);
  float cimagf(float complex z);
  long double cimagl(long double complex z);

Link with ``-lm``.  
  
**Description**

The ``cimag()`` function returns the imaginary part of the complex number ``z``.

One has::

  z = creal(z) + I * cimag(z)
  
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cimag(z)]=%lf and Im[cimag(z)]=%lf\n", creal(cimag(z)), cimag(cimag(z))); 

    return 0;
  }
  
and the output is::

  Re[cimag(z)]=4.000000 and Im[cimag(z)]=0.000000

.. index:: conj function, conjf cuntion, conjl function
  
The ``conj`` functions
----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex conj(double complex z);
  float complex conjf(float complex z);
  long double complex conjl(long double complex z);

**Description**

The ``conj`` functions compute the complex conjugate of ``z``, by reversing
the sign of its imaginary part.

**Returns**

The ``conj`` functions return the complex conjugate value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex conj(double complex z);
  float complex conjf(float complex z);
  long double complex conjl(long double complex z);

Link with ``-lm``.  
  
**Description**

The ``conj()`` function returns the complex conjugate value of ``z``. That is
the value obtained by changing the sign of the imaginary part.

One has::

  cabs(z) = csqrt(z * conj(z))
  
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[conj(z)]=%lf and Im[conj(z)]=%lf\n", creal(conj(z)), cimag(conj(z))); 

    return 0;
  }
  
and the output is::

  Re[conj(z)]=3.000000 and Im[conj(z)]=-4.000000

.. index:: cproj function, cprojf function, cprojl function
  
The ``cproj`` functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cproj(double complex z);
  float complex cprojf(float complex z);
  long double complex cprojl(long double complex z);

**Description**

The ``cproj`` functions compute a projection of ``z`` onto the Riemann sphere:
``z`` projects to ``z`` except that all complex infinities (even those with
one infinite part and one NaN part) project to positive infinity on the real
axis. If ``z`` has an infinite part, then ``cproj(z)`` is equivalent to::

  INFINITY + I * copysign(0.0, cimag(z))

**Returns**

The ``cproj`` functions return the value of the projection onto the Riemann
sphere.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double complex cproj(double complex z);
  float complex cprojf(float complex z);
  long double complex cprojl(long double complex z);

Link with ``-lm``.  
  
**Description**

This  function projects a point in the plane onto the surface of a Riemann
Sphere, the one-point compactification of the complex plane.  Each
finite  point  ``z`` projects to ``z`` itself.  Every complex infinite value is
projected to a single infinite value, namely to  positive  infinity  on
the real axis.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[cproj(z)]=%lf and Im[cproj(z)]=%lf\n", creal(cproj(z)), cimag	(cproj(z))); 

    return 0;
  }
  
and the output is::

  Re[cproj(z)]=3.000000 and Im[cproj(z)]=4.000000

.. index:: creal function, crealf function, creall function
  
The ``creal`` functions
-----------------------
**Synopsis**

.. code-block:: c

  #include <complex.h>
  double creal(double complex z);
  float crealf(float complex z);
  long double creall(long double complex z);

**Description**

The ``creal`` functions compute the real part of ``z``.

**Returns**

The ``creal`` functions return the real part value.

**Synopsis**

.. code-block:: c

  #include <complex.h>
  double creal(double complex z);
  float crealf(float complex z);
  long double creall(long double complex z);

Link with ``-lm``.  
  
**Description**

The ``creal()`` function returns the real part of the complex number ``z``.

One has::

  z = creal(z) + I * cimag(z)
  
**Example**

.. code-block:: c

  #include <stdio.h>
  #include <complex.h>

  int main()
  {
    double complex z = 3.0 + 4.0i;

    printf("Re[creal(z)]=%lf and Im[creal(z)]=%lf\n", creal(creal(z)), cimag	(creal(z))); 

    return 0;
  }
  
and the output is::

  Re[creal(z)]=3.000000 and Im[creal(z)]=0.000000

