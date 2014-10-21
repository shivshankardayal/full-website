.. index:: math.h

.. _math:

Mathematics ``<math.h>``
************************
.. index:: float_t, double_t

The header ``<math.h>`` declares two types and many mathematical functions and defines
several macros. Most synopses specify a family of functions consisting of a principal
function with one or more ``double`` parameters, a ``double`` return value, or both; and
other functions with the same name but with ``f`` and ``l`` suffixes, which are corresponding
functions with ``float`` and ``long double`` parameters, return values, or both. [#]_
Integer arithmetic functions and conversion functions are discussed later.

The types

  | ``float_t``
  | ``double_t``

.. index:: FLT_EVAL_METHOD macro

are floating types at least as wide as ``float`` and ``double``, respectively, and such that
``double_t`` is at least as wide as ``float_t``. If ``FLT_EVAL_METHOD`` equals 0,
``float_t`` and ``double_t`` are ``float`` and ``double``, respectively; if
``FLT_EVAL_METHOD`` equals 1, they are both ``double`; if ``FLT_EVAL_METHOD`` equals
2, they are both ``long double``; and for other values of ``FLT_EVAL_METHOD``, they are
otherwise implementation-defined. [#]_

.. index:: HIGE_VAL macro, HUGE_VALF macro, HUGE_VALL macro

The macro

  |  ``HUGE_VAL``

expands to a positive double constant expression, not necessarily representable as a
``float``. The macros

  |  ``HUGE_VALF``
  |  ``HUGE_VALL``

are respectively ``float`` and ``long double`` analogs of ``HUGE_VAL``. [#]_

.. index:: INFINITY macro

The macro

  |  ``INFINITY``

expands to a constant expression of type ``float`` representing positive or unsigned
infinity, if available; else to a positive constant of type ``float`` that overflows at
translation time. [#]_

.. index:: NAN macro

The macro

  |  ``NAN``

is defined if and only if the implementation supports quiet NaNs for the ``float`` type. It
expands to a constant expression of type ``float`` representing a quiet NaN.

.. index:: FP_INFINITE macro, FP_NAN macro, FP_NORMAL macro, FP_SUBNORMAL macro, FP_ZERO macro

The *number classification macros*

  |  ``FP_INFINITE``
  |  ``FP_NAN``
  |  ``FP_NORMAL``
  |  ``FP_SUBNORMAL``
  |  ``FP_ZERO``

represent the mutually exclusive kinds of floating-point values. They expand to integer
constant expressions with distinct values. Additional implementation-defined floatingpoint
classifications, with macro definitions beginning with ``FP_1`` and an uppercase letter,
may also be specified by the implementation.

.. index:: FP_FAST_FMA macro, FP_FAST_FMAF macro, FP_FAST_FMAL macro

The macro

  |  ``FP_FAST_FMA``

is optionally defined. If defined, it indicates that the fma function generally executes
about as fast as, or faster than, a multiply and an add of double operands. [#]_ The
macros

  |  ``FP_FAST_FMAF``
  |  ``FP_FAST_FMAL``

are, respectively, ``float`` and ``long double`` analogs of ``FP_FAST_FMA``. If defined,
these macros expand to the integer constant 1.

.. index:: FP_ILOGB0 macro, FP_ILOGBNAN macro

The macros

  |  ``FP_ILOGB0``
  |  ``FP_ILOGBNAN``

expand to integer constant expressions whose values are returned by ``ilogb(x)`` if ``x`` is
zero or NaN, respectively. The value of ``FP_ILOGB0`` shall be either ``INT_MIN`` or
``-INT_MAX``. The value of ``FP_ILOGBNAN`` shall be either ``INT_MAX`` or ``INT_MIN``.

.. index:: MATH_ERRNO macro, MATH_ERREXCEPT macro, math_errhandling macro

The macros

  |  ``MATH_ERRNO``
  |  ``MATH_ERREXCEPT``

expand to the integer constants 1 and 2, respectively; the macro

  |  ``math_errhandling``

expands to an expression that has type int and the value ``MATH_ERRNO,
MATH_ERREXCEPT`` or the bitwise OR of both. The value of ``math_errhandling`` is
constant for the duration of the program. It is unspecified whether
``math_errhandling`` is a macro or an identifier with external linkage. If a macro
definition is suppressed or a program defines an identifier with the name
``math_errhandling``, the behavior is undefined. If the expression
``math_errhandling`` & ``MATH_ERREXCEPT`` can be nonzero, the implementation
shall define the macros ``FE_DIVBYZERO, FE_INVALID`` and ``FE_OVERFLOW`` in
``<fenv.h>``.

.. [#] Particularly on systems with wide expression evaluation, a ``<math.h>`` function might pass arguments
  and return values in wider format than the synopsis prototype indicates.
.. [#] The types ``float_t`` and ``double_t`` are intended to be the implementation's most efficient types at
  least as wide as ``float`` and ``double``, respectively. For ``FLT_EVAL_METHOD equal`` 0, 1 or 2, the
  type ``float_t`` is the narrowest type used by the implementation to evaluate floating expressions.
.. [#] ``HUGE_VAL, HUGE_VALF`` and ``HUGE_VALL`` can be positive infinities in an implementation that
  supports infinities.
.. [#] In this case, using ``INFINITY`` will violate the constraint in :ref:`4.4.4` and thus require a diagnostic.
.. [#] Typically, the ``FP_FAST_FMA`` macro is defined if and only if the ``fma`` function is implemented
  directly with a hardware multiply-add instruction. Software implementations are expected to be
  substantially slower.

.. index:: treatment of error conditions

.. _24.1:

Treatment of error conditions
=============================
The behavior of each of the functions in ``<math.h>`` is specified for all representable
values of its input arguments, except where stated otherwise. Each function shall execute
as if it were a single operation without generating any externally visible exceptional
conditions.

For all functions, a domain error occurs if an input argument is outside the domain over
which the mathematical function is defined. The description of each function lists any
required domain errors; an implementation may define additional domain errors, provided
that such errors are consistent with the mathematical definition of the function. [#]_ On a
domain error, the function returns an implementation-defined value; if the integer
expression ``math_errhandling`` & ``MATH_ERRNO`` is nonzero, the integer expression
errno acquires the value ``EDOM``; if the integer expression ``math_errhandling`` &
``MATH_ERREXCEPT`` is nonzero, the "invalid" floating-point exception is raised.

Similarly, a range error occurs if the mathematical result of the function cannot be
represented in an object of the specified type, due to extreme magnitude.

A floating result overflows if the magnitude of the mathematical result is finite but so
large that the mathematical result cannot be represented without extraordinary roundoff
error in an object of the specified type. If a floating result overflows and default rounding
is in effect, or if the mathematical result is an exact infinity (for example ``log(0.0)``),
then the function returns the value of the macro ``HUGE_VAL, HUGE_VALF`` or
``HUGE_VALL`` according to the return type, with the same sign as the correct value of the
function; if the integer expression math_errhandling & ``MATH_ERRNO`` is nonzero,
the integer expression errno acquires the value ``ERANGE``; if the integer expression
``math_errhandling`` & ``MATH_ERREXCEPT`` is nonzero, the "divide-by-zero"
floating-point exception is raised if the mathematical result is an exact infinity and the
"overflow" floating-point exception is raised otherwise.

The result underflows if the magnitude of the mathematical result is so small that the
mathematical result cannot be represented, without extraordinary roundoff error, in an
object of the specified type. [#]_ If the result underflows, the function returns an
implementation-defined value whose magnitude is no greater than the smallest
normalized positive number in the specified type; if the integer expression
``math_errhandling`` & ``MATH_ERRNO`` is nonzero, whether errno acquires the
value ``ERANGE`` is implementation-defined; if the integer expression
``math_errhandling`` & ``MATH_ERREXCEPT`` is nonzero, whether the "underflow"
floating-point exception is raised is implementation-defined.

.. [#] In an implementation that supports infinities, this allows an infinity as an argument to be a domain
  error if the mathematical domain of the function does not include the infinity.
.. [#] The term underflow here is intended to encompass both "gradual underflow" as in IEC 60559 and
  also "flush-to-zero" underflow.

.. index:: FP_CONTRACT pragma

.. _24.2:

The FP_CONTRACT pragma
======================
**Synopsis**

.. code-block:: c

   #include <math.h>
   #pragma STDC FP_CONTRACT on-off-switch

**Description**

The ``FP_CONTRACT`` pragma can be used to allow (if the state is "on") or disallow (if the
state is "off") the implementation to contract expressions (:ref:`4.5`). Each pragma can occur
either outside external declarations or preceding all explicit declarations and statements
inside a compound statement. When outside external declarations, the pragma takes
effect from its occurrence until another ``FP_CONTRACT`` pragma is encountered, or until
the end of the translation unit. When inside a compound statement, the pragma takes
effect from its occurrence until another ``FP_CONTRACT`` pragma is encountered
(including within a nested compound statement), or until the end of the compound
statement; at the end of a compound statement the state for the pragma is restored to its
condition just before the compound statement. If this pragma is used in any other
context, the behavior is undefined. The default state ("on" or "off") for the pragma is
implementation-defined.

Classification macros
=====================
In the synopses in this subclause, real-floating indicates that the argument shall be an
expression of real floating type.

.. index:: fpclassify macro

The ``fpclassify`` macro
------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int fpclassify(real-floating x);

**Description**

The ``fpclassify`` macro classifies its argument value as NaN, infinite, normal,
subnormal, zero, or into another implementation-defined category. First, an argument
represented in a format wider than its semantic type is converted to its semantic type.
Then classification is based on the type of the argument. [#]_

**Returns**

The ``fpclassify`` macro returns the value of the number classification macro
appropriate to the value of its argument.

EXAMPLE The ``fpclassify`` macro might be implemented in terms of ordinary functions as

.. code-block:: c

   #define fpclassify(x) \
           ((sizeof (x) == sizeof (float)) ? _ _fpclassifyf(x) : \
	   (sizeof (x) == sizeof (double)) ? _ _fpclassifyd(x) : \
	   _ _fpclassifyl(x))

.. [#] Since an expression can be evaluated with more range and precision than its type has, it is important to
  know the type that classification is based on. For example, a normal ``long double`` value might
  become subnormal when converted to ``double``, and zero when converted to ``float``.

.. index:: isfinite macro

The ``isfinite`` macro
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int isfinite(real-floating x);

**Description**

The ``isfinite`` macro determines whether its argument has a finite value (zero,
subnormal, or normal, and not infinite or NaN). First, an argument represented in a
format wider than its semantic type is converted to its semantic type. Then determination
is based on the type of the argument.

**Returns**

The ``isfinite`` macro returns a nonzero value if and only if its argument has a finite
value.

.. index:: isinf macro

The ``isinf`` macro
-------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int isinf(real-floating x);

**Description**

The ``isinf`` macro determines whether its argument value is an infinity (positive or
negative). First, an argument represented in a format wider than its semantic type is
converted to its semantic type. Then determination is based on the type of the argument.

**Returns**

The ``isinf`` macro returns a nonzero value if and only if its argument has an infinite
value.

.. index:: isnan macro

The ``isnan`` macro
-------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int isnan(real-floating x);

**Description**

The ``isnan`` macro determines whether its argument value is a NaN. First, an argument
represented in a format wider than its semantic type is converted to its semantic type.
Then determination is based on the type of the argument. [#]_

**Returns**

The ``isnan`` macro returns a nonzero value if and only if its argument has a NaN value.

.. [#] For the ``isnan`` macro, the type for determination does not matter unless the implementation supports
  NaNs in the evaluation type but not in the semantic type.

.. index:: isnormal macro

The ``isnormal`` macro
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int isnormal(real-floating x);

**Description**

The ``isnormal`` macro determines whether its argument value is normal (neither zero,
subnormal, infinite, nor NaN). First, an argument represented in a format wider than its
semantic type is converted to its semantic type. Then determination is based on the type
of the argument.

**Returns**

The ``isnormal`` macro returns a nonzero value if and only if its argument has a normal
value.

.. index:: signbit macro

The ``signbit`` macro
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int signbit(real-floating x);

**Description**

The ``signbit`` macro determines whether the sign of its argument value is negative. [#]_

**Returns**

The ``signbit`` macro returns a nonzero value if and only if the sign of its argument value
is negative.

.. [#] The ``signbit`` macro reports the sign of all values, including infinities, zeros, and NaNs. If zero is
  unsigned, it is treated as positive.

.. index:: trigonometric functions

Trigonometric functions
=======================
.. index:: acos function, acosf function, acosl function

The ``acos`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double acos(double x);
   float acosf(float x);
   long double acosl(long double x);

**Description**

The ``acos`` functions compute the principal value of the arc cosine of ``x``. A domain error
occurs for arguments not in the interval [-1, +1].

**Returns**

The ``acos`` functions return arccos x in the interval [:math:`0, \pi`] radians.

.. index:: asin function, asinf function, asinl function

The ``asin`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double asin(double x);
   float asinf(float x);
   long double asinl(long double x);

**Description**

The ``asin`` functions compute the principal value of the arc sine of ``x``. A domain error
occurs for arguments not in the interval [-1, +1].

**Returns**

The ``asin`` functions return arcsin x in the interval [:math:`-\pi/2, +\pi/2`] radians.

.. index:: atan function, atanf function, atanl function

The ``atan`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double atan(double x);
   float atanf(float x);
   long double atanl(long double x);

**Description**

The ``atan`` functions compute the principal value of the arc tangent of ``x``.

**Returns**

The ``atan`` functions return arctan ``x`` in the interval [:math:`-\pi/2, +\pi/2`] radians.

.. index:: atan2 function, atan2f function, atan2l function

The ``atan2`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double atan2(double y, double x);
   float atan2f(float y, float x);
   long double atan2l(long double y, long double x);

**Description**

The ``atan2`` functions compute the value of the arc tangent of ``y/x``, using the signs of both
arguments to determine the quadrant of the return value. A domain error may occur if
both arguments are zero.

**Returns**

The ``atan2`` functions return arctan ``y/x`` in the interval [:math:`-\pi, +\pi`] radians.

.. index:: cos function, cosf function, cosl function

The ``cos`` functions
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double cos(double x);
   float cosf(float x);
   long double cosl(long double x);

**Description**

The ``cos`` functions compute the cosine of ``x`` (measured in radians).

**Returns**

The ``cos`` functions return cos ``x``.

.. index:: sin function, sinf function, sinl function

The ``sin`` functions
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double sin(double x);
   float sinf(float x);
   long double sinl(long double x);

**Description**

The ``sin`` functions compute the sine of ``x`` (measured in radians).

**Returns**

The ``sin`` functions return sin ``x``.

.. index:: tan function, tanf function, tanl function

The ``tan`` functions
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double tan(double x);
   float tanf(float x);
   long double tanl(long double x);

**Description**

The ``tan`` functions return the tangent of ``x`` (measured in radians).

**Returns**

The ``tan`` functions return tan ``x``.

.. index:: hyperbolic functions

Hyperbolic functions
====================

.. index:: acosh function, acoshf function, acoshl function

The ``acosh`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double acosh(double x);
   float acoshf(float x);
   long double acoshl(long double x);

**Description**

The ``acosh`` functions compute the (nonnegative) arc hyperbolic cosine of ``x``. A domain
error occurs for arguments less than 1.

**Returns**

The ``acosh`` functions return arcosh ``x`` in the interval [:math:`0, +\infty`].

.. index:: asinh function, asinhf function, asinhl function

The ``asinh`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double asinh(double x);
   float asinhf(float x);
   long double asinhl(long double x);

**Description**

The ``asinh`` functions compute the arc hyperbolic sine of ``x``.

**Returns**

The ``asinh`` functions return arsinh ``x``.

.. index:: atanh function, atnhf function, atnhl function

The ``atanh`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double atanh(double x);
   float atanhf(float x);
   long double atanhl(long double x);

**Description**

The ``atanh`` functions compute the arc hyperbolic tangent of ``x``. A domain error occurs
for arguments not in the interval [-1, +1]. A range error may occur if the argument
equals -1 or +1.

**Returns**

The ``atanh`` functions return atanh ``x``.

.. index:: cosh function, coshf function, coshl function

The ``cosh`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double cosh(double x);
   float coshf(float x);
   long double coshl(long double x);

**Description**

The ``cosh`` functions compute the hyperbolic cosine of ``x``. A range error occurs if the
magnitude of ``x`` is too large.

**Returns**

The ``cosh`` functions return cosh ``x``.

.. index:: sinh function, sinhf function, sinhl function

The ``sinh`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double sinh(double x);
   float sinhf(float x);
   long double sinhl(long double x);

**Description**

The ``sinh`` functions compute the hyperbolic sine of ``x``. A range error occurs if the
magnitude of ``x`` is too large.

**Returns**

The ``sinh`` functions return sinh ``x``.

.. index:: tanh function, tanhf function, tanhl function

The ``tanh`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double tanh(double x);
   float tanhf(float x);
   long double tanhl(long double x);

**Description**

The ``tanh`` functions compute the hyperbolic tangent of ``x``.

**Returns**

The ``tanh`` functions return tanh ``x``.

.. index:: exponential functions, logarithmic functions

Exponential and logarithmic functions
=====================================
.. index:: exp function, expf function, expl function

The ``exp`` functions
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double exp(double x);
   float expf(float x);
   long double expl(long double x);

**Description**

The ``exp`` functions compute the base-e exponential of ``x``. A range error occurs if the
magnitude of ``x`` is too large.

**Returns**

The ``exp`` functions return :math:`e^x`.

.. index:: exp2 function, exp2f function, exp2l function

The ``exp2`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double exp2(double x);
   float exp2f(float x);
   long double exp2l(long double x);

**Description**
The ``exp2`` functions compute the base-2 exponential of ``x``. A range error occurs if the
magnitude of ``x`` is too large.

**Returns**

The ``exp2`` functions return :math:`2^x`.

.. index:: expm1 function, expm1f function, expm1l function

The ``expm1`` functions
-----------------------
**Synopsis**

.. code-block:: c 

   #include <math.h>
   double expm1(double x);
   float expm1f(float x);
   long double expm1l(long double x);

**Description**

The ``expm1`` functions compute the base-e exponential of the argument, minus 1. A range
error occurs if ``x`` is too large. [#]_

**Returns**

The ``expm1`` functions return :math:`e^x-1`.

.. [#] For small magnitude ``x, expm1(x)`` is expected to be more accurate than ``exp(x) - 1``.

.. index:: frexp function, frexpf function, frexpl function

The ``frexp`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double frexp(double value, int *exp);
   float frexpf(float value, int *exp);
   long double frexpl(long double value, int *exp);

**Description**

The ``frexp`` functions break a floating-point number into a normalized fraction and an
integral power of 2. They store the integer in the int object pointed to by ``exp``.

**Returns**

If ``value`` is not a floating-point number, the results are unspecified. Otherwise, the
``frexp`` functions return the value ``x``, such that ``x`` has a magnitude in the interval [1/2, 1) or
zero, and ``value`` equals :math:`x *2^{*exp}`. If value is zero, both parts of the result are zero.

.. index:: ilogb function, ilogbf function, ilogbl function

The ``ilogb`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int ilogb(double x);
   int ilogbf(float x);
   int ilogbl(long double x);

**Description**

The ``ilogb`` functions extract the exponent of ``x`` as a signed ``int`` value. If ``x`` is zero they
compute the value ``FP_ILOGB0``; if ``x`` is infinite they compute the value ``INT_MAX``; if ``x`` is
a NaN they compute the value ``FP_ILOGBNAN``; otherwise, they are equivalent to calling
the corresponding ``logb`` function and casting the returned value to type ``int``. A domain
error or range error may occur if ``x`` is zero, infinite, or NaN. If the correct value is outside
the range of the return type, the numeric result is unspecified.

**Returns**

The ``ilogb`` functions return the exponent of ``x`` as a signed ``int`` value.

**Forward references:** the logb functions (:ref:`24.6.11`).

.. index:: ldexp function, ldexpf function, ldexpl function

The ``ldexp`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double ldexp(double x, int exp);
   float ldexpf(float x, int exp);
   long double ldexpl(long double x, int exp);

**Description**

The ``ldexp`` functions multiply a floating-point number by an integral power of 2. A
range error may occur.

**Returns**

The ``ldexp`` functions return :math:`x * 2^{exp}`.

.. index:: log function, logf function, logl function

The ``log`` functions
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double log(double x);
   float logf(float x);
   long double logl(long double x);

**Description**

The ``log`` functions compute the base-e (natural) logarithm of ``x``. A domain error occurs if
the argument is negative. A range error may occur if the argument is zero.

**Returns**

The ``log`` functions return :math:`log_e x`.

.. index:: log10 function, log10f function, log10l function

The ``log10`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double log10(double x);
   float log10f(float x);
   long double log10l(long double x);

**Description**

The ``log10`` functions compute the base-10 (common) logarithm of ``x``. A domain error
occurs if the argument is negative. A range error may occur if the argument is zero.

**Returns**

The ``log10`` functions return :math:`log_{10} x`.

.. index:: log1p function, log1pf function, log1pl function

The ``log1p`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double log1p(double x);
   float log1pf(float x);
   long double log1pl(long double x);

**Description**

The ``log1p`` functions compute the base-e (natural) logarithm of 1 plus the argument. [#]_
A domain error occurs if the argument is less than -1. A range error may occur if the
argument equals 11.

**Returns**

The ``log1p`` functions return :math:`log_e (1 + x)`.

.. [#] For small magnitude ``x, log1p(x)`` is expected to be more accurate than ``log(1 + x)``.

.. index:: log function, logf function, logl function

The ``log2`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double log2(double x);
   float log2f(float x);
   long double log2l(long double x);

**Description**

The ``log2`` functions compute the base-2 logarithm of ``x``. A domain error occurs if the
argument is less than zero. A range error may occur if the argument is zero.

**Returns**

The ``log2`` functions return :math:`log_2 x`.

.. index:: logb function, logbf function, logbl function

.. _24.6.11:

The ``logb`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double logb(double x);
   float logbf(float x);
   long double logbl(long double x);

**Description**

The ``logb`` functions extract the exponent of ``x``, as a signed integer value in floating-point
format. If x is subnormal it is treated as though it were normalized; thus, for positive
finite ``x``,

.. math::

   1~\leq~x~*~FLT\_RADIX^{-logb(x)}~<~FLT\_RADIX

A domain error or range error may occur if the argument is zero.

**Returns**

The ``logb`` functions return the signed exponent of ``x``.

.. index:: modf function, modff function, modfl function

The ``modf`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double modf(double value, double *iptr);
   float modff(float value, float *iptr);
   long double modfl(long double value, long double *iptr);

**Description**

The ``modf`` functions break the argument value into integral and fractional parts, each of
which has the same type and sign as the argument. They store the integral part (in
floating-point format) in the object pointed to by ``iptr``.

**Returns**

The ``modf`` functions return the signed fractional part of value.

.. index:: scalbn function, scalbln function, scalbnf function, scalbnl function, scalblnf function, scalblnl function

The ``scalbn`` and ``scalbln`` functions
----------------------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double scalbn(double x, int n);
   float scalbnf(float x, int n);
   long double scalbnl(long double x, int n);
   double scalbln(double x, long int n);
   float scalblnf(float x, long int n);
   long double scalblnl(long double x, long int n);

**Description**

The ``scalbn`` and ``scalbln`` functions compute :math:`x*FLT\_RADIX^n` efficiently, not
normally by computing :math:`FLT\_RADIX^n` explicitly. A range error may occur.

**Returns**

The ``scalbn`` and ``scalbln`` functions return :math:`x*FLT\_RADIX^n`.

.. index:: power functions, absolute-value functions

Power and absolute-value functions
==================================
.. index:: cbrt function, cbrtf function, cbrtl function

The ``cbrt`` functions
----------------------
**Synopsis**

.. code-block:: c


   #include <math.h>
   double cbrt(double x);
   float cbrtf(float x);
   long double cbrtl(long double x);

**Description**

The ``cbrt`` functions compute the real cube root of ``x``.

**Returns**

The ``cbrt`` functions return :math:`x^{1/3}`.

.. index:: fabs function, fabsf function, fabsl function

The ``fabs`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double fabs(double x);
   float fabsf(float x);
   long double fabsl(long double x);

**Description**

The ``fabs`` functions compute the absolute value of a floating-point number ``x``.

**Returns**

The ``fabs`` functions return :math:`|x|`.

.. index:: hypot function, hypotf funciton, hypotl function

The ``hypot`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double hypot(double x, double y);
   float hypotf(float x, float y);
   long double hypotl(long double x, long double y);

**Description**

The ``hypot`` functions compute the square root of the sum of the squares of ``x`` and ``y``,
without undue overflow or underflow. A range error may occur.

**Returns**

The ``hypot`` functions return :math:`\sqrt{x^2+y^2}`.

.. index:: pow function, powf function, powl function

The ``pow`` functions
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double pow(double x, double y);
   float powf(float x, float y);
   long double powl(long double x, long double y);

**Description**

The ``pow`` functions compute ``x`` raised to the power ``y``. A domain error occurs if ``x`` is finite
and negative and ``y`` is finite and not an integer value. A range error may occur. A domain
error may occur if ``x`` is zero and ``y`` is zero. A domain error or range error may occur if ``x``
is zero and ``y`` is less than zero.

**Returns**

The ``pow`` functions return :math:`x^y`.

.. index:: sqrt function, sqrtf function, sqrtl function

The ``sqrt`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double sqrt(double x);
   float sqrtf(float x);
   long double sqrtl(long double x);

**Description**

The ``sqrt`` functions compute the nonnegative square root of ``x``. A domain error occurs if
the argument is less than zero.

**Returns**

The ``sqrt`` functions return :math:`\sqrt{x}`.

.. index:: error functions, gamma functions

Error and gamma functions
=========================
.. index:: erf funciton, erff funciton, erfl function

The ``erf`` functions
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double erf(double x);
   float erff(float x);
   long double erfl(long double x);

**Description**

The ``erf`` functions compute the error function of ``x``.

**Returns**

The ``erf`` functions return erf :math:`x = \frac{2}{\sqrt{\pi}}\int_0^x e^{-t^2} dt`

.. index:: erfc function, erfcf function, erfcl funciton

The ``erfc`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double erfc(double x);
   float erfcf(float x);
   long double erfcl(long double x);

**Description**

The ``erfc`` functions compute the complementary error function of ``x``. A range error
occurs if ``x`` is too large.

**Returns**

The ``erfc`` functions return erfc :math:`x = 1 - erf x = \frac{2}{\sqrt{\pi}}\int_0^{\infty} e^{-t^2} dt`

.. indeX:: lgamma function, lgammaf function, lgammal function

The ``lgamma`` functions
------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double lgamma(double x);
   float lgammaf(float x);
   long double lgammal(long double x);

**Description**

The ``lgamma`` functions compute the natural logarithm of the absolute value of gamma of
``x``. A range error occurs if ``x`` is too large. A range error may occur if ``x`` is a negative
integer or zero.

**Returns**

The ``lgamma`` functions return :math:`log_e |\Gamma (x)|`.

.. index:: tgamma function, tgammaf function, tgammal function

The ``tgamma`` functions
------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double tgamma(double x);
   float tgammaf(float x);
   long double tgammal(long double x);

**Description**

The ``tgamma`` functions compute the gamma function of ``x``. A domain error or range error
may occur if ``x`` is a negative integer or zero. A range error may occur if the magnitude of
``x`` is too large or too small.

**Returns**

The ``tgamma`` functions return :math:`\Gamma (x)`.

.. index:: nearest integer functions

Nearest integer functions
=========================
.. index:: ceil function, ceilf function, ceill function

The ``ceil`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double ceil(double x);
   float ceilf(float x);
   long double ceill(long double x);

**Description**

The ``ceil`` functions compute the smallest integer value not less than ``x``.

The ``ceil`` functions return :math:`\lceil x\rceil`, expressed as a floating-point number.

.. index:: floor function, floorf function, floorl function

The ``floor`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double floor(double x);
   float floorf(float x);
   long double floorl(long double x);

**Description**

The ``floor`` functions compute the largest integer value not greater than ``x``.

**Returns**

The ``floor`` functions return :math:`\lfloor x\rfloor`, expressed as a floating-point number.

.. index:: nearbyint function, nearbyintf function, nearbyintl function

.. _24.9.3:

The ``nearbyint`` functions
---------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double nearbyint(double x);
   float nearbyintf(float x);
   long double nearbyintl(long double x);

**Description**

The ``nearbyint`` functions round their argument to an integer value in floating-point
format, using the current rounding direction and without raising the "inexact" floatingpoint
exception.

**Returns**

The ``nearbyint`` functions return the rounded integer value.

.. index:: rint function, rintf function, rintl function

The ``rint`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double rint(double x);
   float rintf(float x);
   long double rintl(long double x);

**Description**

The ``rint`` functions differ from the ``nearbyint`` functions (:ref:`24.9.3`) only in that the
rint functions may raise the "inexact" floating-point exception if the result differs in
value from the argument.

**Returns**

The ``rint`` functions return the rounded integer value.

.. index:: function lrint function, lrinf function, lrintl function, llrint function, llrintf function, llrintl function

The ``lrint`` and ``llrint`` functions
--------------------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   long int lrint(double x);
   long int lrintf(float x);
   long int lrintl(long double x);
   long long int llrint(double x);
   long long int llrintf(float x);
   long long int llrintl(long double x);

**Description**

The ``lrint`` and ``llrint`` functions round their argument to the nearest integer value,
rounding according to the current rounding direction. If the rounded value is outside the
range of the return type, the numeric result is unspecified and a domain error or range
error may occur.

**Returns**

The ``lrint`` and ``llrint`` functions return the rounded integer value.

.. index:: round function, roundf function, roundl function

The ``round`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double round(double x);
   float roundf(float x);
   long double roundl(long double x);

**Description**

The round functions round their argument to the nearest integer value in floating-point
format, rounding halfway cases away from zero, regardless of the current rounding
direction.

**Returns**

The ``round`` functions return the rounded integer value.

.. index:: lround function, lrounf function, lroundl function, llround function, llroundf function, llroundl function

The ``lround`` and ``llround`` functions
----------------------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   long int lround(double x);
   long int lroundf(float x);
   long int lroundl(long double x);
   long long int llround(double x);
   long long int llroundf(float x);
   long long int llroundl(long double x);

**Description**

The ``lround`` and ``llround`` functions round their argument to the nearest integer value,
rounding halfway cases away from zero, regardless of the current rounding direction. If
the rounded value is outside the range of the return type, the numeric result is unspecified
and a domain error or range error may occur.

**Returns**

The ``lround`` and ``llround`` functions return the rounded integer value.

.. index:: trunc function, truncf function, truncl function

The ``trunc`` functions
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double trunc(double x);
   float truncf(float x);
   long double truncl(long double x);

**Description**

The ``trunc`` functions round their argument to the integer value, in floating format,
nearest to but no larger in magnitude than the argument.

**Returns**

The ``trunc`` functions return the truncated integer value.

.. index:: remainder functions

Remainder functions
===================
.. index:: fmod function, fmodf function, fmodl function

The ``fmod`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double fmod(double x, double y);
   float fmodf(float x, float y);
   long double fmodl(long double x, long double y);

**Description**

The ``fmod`` functions compute the floating-point remainder of :math:`x/y`.

**Returns**

The ``fmod`` functions return the value :math:`x - ny`, for some integer ``n`` such that, if ``y`` is nonzero,
the result has the same sign as ``x`` and magnitude less than the magnitude of ``y``. If ``y`` is zero,
whether a domain error occurs or the fmod functions return zero is implementationdefined.

.. index:: remainder function, remainderf function, remainderl function

The ``remainder`` functions
---------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double remainder(double x, double y);
   float remainderf(float x, float y);
   long double remainderl(long double x, long double y);

**Description**

The ``remainder`` functions compute the remainder :math:`x REM y` required by IEC 60559. [#]_

**Returns**

The ``remainder`` functions return :math:`x REM y`. If `y` is zero, whether a domain error occurs
or the functions return zero is implementation defined.

.. [#] "When :math:`y\neq 0`, the remainder :math:`r = x REM y` is defined regardless of the rounding mode by the
  mathematical relation :math:`r = x - ny`, where :math:`n` is the integer nearest the exact value of :math:`x/y`; whenever
  :math:`| n - x/y | = 1/2`, then :math:`n` is even. Thus, the remainder is always exact. If :math:`r = 0`, its sign shall be that of
  :math:`x`." This definition is applicable for all implementations.

.. index:: remquo function, remquof function, remquol function

The ``remquo`` functions
------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double remquo(double x, double y, int *quo);
   float remquof(float x, float y, int *quo);
   long double remquol(long double x, long double y, int *quo);

**Description**

The ``remquo`` functions compute the same remainder as the `remainder`` functions. In
the object pointed to by quo they store a value whose sign is the sign of ``x/y`` and whose
magnitude is congruent modulo :math:`2^n` to the magnitude of the integral quotient of ``x/y``, where
:math:`n` is an implementation-defined integer greater than or equal to 3.

**Returns**

The ``remquo`` functions return :math:`x REM y`. If y is zero, the value stored in the object
pointed to by ``quo`` is unspecified and whether a domain error occurs or the functions
return zero is implementation defined.

.. index:: manipulation functions

Manipulation functions
======================
.. index:: copysign function, copysignf function, copysignl function

The ``copysign`` functions
--------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double copysign(double x, double y);
   float copysignf(float x, float y);
   long double copysignl(long double x, long double y);

**Description**

The copysign functions produce a value with the magnitude of ``x`` and the sign of ``y``.
They produce a NaN (with the sign of ``y``) if ``x`` is a NaN. On implementations that
represent a signed zero but do not treat negative zero consistently in arithmetic
operations, the copysign functions regard the sign of zero as positive.

**Returns**

The ``copysign` functions return a value with the magnitude of ``x`` and the sign of ``y``.

.. index:: nan function, nanf function, nanl function

The nan functions
-----------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double nan(const char *tagp);
   float nanf(const char *tagp);
   long double nanl(const char *tagp);

**Description**

The call ``nan("*n-char-sequence*")`` is equivalent to ``strtod("NAN(*n-char-sequence*)",
(char**) NULL);`` the call ``nan("")`` is equivalent to
``strtod("NAN()", (char**) NULL)``. If tagp does not point to an n-char
sequence or an empty string, the call is equivalent to ``strtod("NAN", (char**)
NULL)``. Calls to ``nanf`` and ``nanl`` are equivalent to the corresponding calls to ``strtof``
and ``strtold``.

**Returns**

The nan functions return a quiet NaN, if available, with content indicated through tagp.
If the implementation does not support quiet NaNs, the functions return zero.

**Forward references:** the ``strtod, strtof`` and ``strtold`` functions (:ref:`32.1.3`).

.. indeX:: nextafter function, nextafterf function, nextafterl function

The ``nextafter`` functions
---------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double nextafter(double x, double y);
   float nextafterf(float x, float y);
   long double nextafterl(long double x, long double y);

**Description**

The ``nextafter`` functions determine the next representable value, in the type of the
function, after ``x`` in the direction of ``y``, where ``x`` and ``y`` are first converted to the type of the
function. [#]_ The nextafter functions return ``y`` if ``x`` equals ``y``. A range error may occur
if the magnitude of ``x`` is the largest finite value representable in the type and the result is
infinite or not representable in the type.

**Returns**

The ``nextafter`` functions return the next representable value in the specified format
after ``x`` in the direction of ``y``.

.. [#] The argument values are converted to the type of the function, even by a macro implementation of the
  function.

.. index:: nexttoward funciton, nexttowardf function, nexttowardl function

The ``nexttoward`` functions
----------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double nexttoward(double x, long double y);
   float nexttowardf(float x, long double y);
   long double nexttowardl(long double x, long double y);

**Description**

The ``nexttoward`` functions are equivalent to the nextafter functions except that the
second parameter has type ``long double`` and the functions return ``y`` converted to the
type of the function if ``x`` equals ``y``. [#]_

.. [#] The result of the ``nexttoward`` functions is determined in the type of the function, without loss of
  range or precision in a floating second argument.

.. index:: maximum functions, minimum functions, positive difference functions

Maximum, minimum and positive difference functions
==================================================
.. index:: fdim function, fdimf function, fdiml function

The ``fdim`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double fdim(double x, double y);
   float fdimf(float x, float y);
   long double fdiml(long double x, long double y);

**Description**

The ``fdim`` functions determine the positive difference between their arguments:

.. math::

  \left\{\begin{array}{ll}
  x-y & \quad\text{if $x\geq y$}\\
  +0  & \quad\text{if $x\leq y$}
  \end{array}\right.

A range error may occur.

**Returns**

The ``fdim`` functions return the positive difference value.

.. index:: fmax function, fmaxf function, fmaxl function

The ``fmax`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double fmax(double x, double y);
   float fmaxf(float x, float y);
   long double fmaxl(long double x, long double y);

**Description**

The ``fmax`` functions determine the maximum numeric value of their arguments. [#]_

**Returns**

The ``fmax`` functions return the maximum numeric value of their arguments.

.. [#] NaN arguments are treated as missing data: if one argument is a NaN and the other numeric, then the
  ``fmax`` functions choose the numeric value. See F.9.9.2.

.. index:: fmin function, fminf function, fminl function

The ``fmin`` functions
----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double fmin(double x, double y);
   float fminf(float x, float y);
   long double fminl(long double x, long double y);

**Description**

The ``fmin`` functions determine the minimum numeric value of their arguments. [#]_

**Returns**

The ``fmin`` functions return the minimum numeric value of their arguments.

.. [#] The ``fmin`` functions are analogous to the ``fmax`` functions in their treatment of NaNs.

Floating multiply-add
=====================
.. index:: fma function, fmaf function, fmal function

The ``fma`` functions
---------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   double fma(double x, double y, double z);
   float fmaf(float x, float y, float z);
   long double fmal(long double x, long double y, long double z);

**Description**

The ``fma`` functions compute ``(x * y) + z``, rounded as one ternary operation: they compute
the value (as if) to infinite precision and round once to the result format, according to the
rounding mode characterized by the value of ``FLT_ROUNDS``. A range error may occur.

**Returns**

The ``fma`` functions return ``(x * y) + z``, rounded as one ternary operation.

.. index:: comaprison macros

Comparison macros
=================
The relational and equality operators support the usual mathematical relationships
between numeric values. For any ordered pair of numeric values exactly one of the
relationships --- *less, greater* and *equal* --- is true. Relational operators may raise the
"invalid" floating-point exception when argument values are NaNs. For a NaN and a
numeric value, or for two NaNs, just the unordered relationship is true. [#]_ The following
subclauses provide macros that are quiet (non floating-point exception raising) versions
of the relational operators, and other comparison macros that facilitate writing efficient
code that accounts for NaNs without suffering the "invalid" floating-point exception. In
the synopses in this subclause, *real-floating* indicates that the argument shall be an
expression of real floating type.

.. [#] IEC 60559 requires that the built-in relational operators raise the "invalid" floating-point exception if
  the operands compare unordered, as an error indicator for programs written without consideration of
  NaNs; the result in these cases is false.

.. index:: isgreater macro

The ``isgreater`` macro
-----------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int isgreater(real-floating x, real-floating y);

**Description**

The ``isgreater`` macro determines whether its first argument is greater than its second
argument. The value of ``isgreater(x, y)`` is always equal to ``(x) > (y);`` however,
unlike ``(x) > (y)``, ``isgreater(x, y)`` does not raise the "invalid" floating-point
exception when ``x`` and ``y`` are unordered.

**Returns**

The ``isgreater`` macro returns the value of ``(x) > (y)``.

.. index:: isgreaterequal macro

The ``isgreaterequal`` macro
----------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int isgreaterequal(real-floating x, real-floating y);

**Description**

The ``isgreaterequal`` macro determines whether its first argument is greater than or
equal to its second argument. The value of ``isgreaterequal(x, y)`` is always equal
to ``(x) >= (y);`` howev er, unlike ``(x) >= (y)``, ``isgreaterequal(x, y)`` does
not raise the "invalid" floating-point exception when ``x`` and ``y`` are unordered.

**Returns**

The ``isgreaterequal`` macro returns the value of ``(x) >= (y)``.

.. index:: isless macro

The ``isless`` macro
--------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int isless(real-floating x, real-floating y);

**Description**

The ``isless`` macro determines whether its first argument is less than its second
argument. The value of ``isless(x, y)`` is always equal to ``(x) < (y);`` however,
unlike ``(x) < (y)``, ``isless(x, y)`` does not raise the "invalid" floating-point
exception when ``x`` and ``y`` are unordered.

**Returns**

The ``isless`` macro returns the value of ``(x) < (y)``.

.. index:: islessequal macro

The ``islessequal`` macro
-------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int islessequal(real-floating x, real-floating y);

**Description**

The ``islessequal`` macro determines whether its first argument is less than or equal to
its second argument. The value of ``islessequal(x, y)`` is always equal to
``(x) <= (y);`` however, unlike ``(x) <= (y)``, ``islessequal(x, y)`` does not raise
the "invalid" floating-point exception when ``x`` and ``y`` are unordered.

**Returns**

The ``islessequal`` macro returns the value of ``(x) <= (y)``.

.. index:: islessgreater macro

The ``islessgreater`` macro
---------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int islessgreater(real-floating x, real-floating y);

**Description**

The ``islessgreater`` macro determines whether its first argument is less than or
greater than its second argument. The ``islessgreater(x, y)`` macro is similar to
``(x) < (y) || (x) > (y);`` however, ``islessgreater(x, y)`` does not raise
the "invalid" floating-point exception when ``x`` and ``y`` are unordered (nor does it evaluate ``x``
and ``y`` twice).

**Returns**

The ``islessgreater`` macro returns the value of ``(x) < (y) || (x) > (y)``.

.. index:: isunordered macro

The ``isunordered`` macro
-------------------------
**Synopsis**

.. code-block:: c

   #include <math.h>
   int isunordered(real-floating x, real-floating y);

**Description**

The ``isunordered`` macro determines whether its arguments are unordered.

**Returns**

The ``isunordered`` macro returns 1 if its arguments are unordered and 0 otherwise.
