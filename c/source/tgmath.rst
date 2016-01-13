.. index:: tgmath.h

Type-generic math ``<tgmath.h>``
********************************
.. index:: type-generic math

The header ``<tgmath.h>`` includes the headers ``<math.h>`` and ``<complex.h>`` and
defines several type-generic macros.

Of the ``<math.h``> and ``<complex.h>`` functions without an ``f`` (``float``) or ``l`` (``long
double``) suffix, several have one or more parameters whose corresponding real type is
``double``. For each such function, except ``modf``, there is a corresponding type-generic
macro. [#]_ The parameters whose corresponding real type is ``double`` in the function
synopsis are generic parameters. Use of the macro invokes a function whose
corresponding real type and type domain are determined by the arguments for the generic
parameters. [#]_

.. [#] Like other function-like macros in Standard libraries, each type-generic macro can be suppressed to
	make available the corresponding ordinary function.

.. [#] If the type of the argument is not compatible with the type of the parameter for the selected function,
	the behavior is undefined.

Use of the macro invokes a function whose generic parameters have the corresponding
real type determined as follows:

- First, if any argument for generic parameters has type ``long double``, the type
  determined is ``long double``.
- Otherwise, if any argument for generic parameters has type ``double`` or is of integer
  type, the type determined is ``double``.
- Otherwise, the type determined is ``float``.

For each unsuffixed function in ``<math.h>`` for which there is a function in
``<complex.h>`` with the same name except for a c prefix, the corresponding type-generic
macro (for both functions) has the same name as the function in ``<math.h>``. The
corresponding type-generic macro for ``fabs`` and ``cabs`` is ``fabs``.

+----------------+-----------------+----------------+
| ``<math.h>``   | ``<complex.h>`` | type-generic   |
| functions      | functions       | funcions       |
+================+=================+================+
| acos           | cacos           | acos           |
+----------------+-----------------+----------------+
| asin           | casin           | asin           |
+----------------+-----------------+----------------+
| atan           | catan           | atan           |
+----------------+-----------------+----------------+
| acosh          | cacosh          | acosh          |
+----------------+-----------------+----------------+
| asinh          | casinh          | asinh          |
+----------------+-----------------+----------------+
| atanh          | catanh          | atanh          |
+----------------+-----------------+----------------+
| cos            | ccos            | cos            |
+----------------+-----------------+----------------+
| sin            | csin            | sin            |
+----------------+-----------------+----------------+
| tan            | ctan            | tan            |
+----------------+-----------------+----------------+
| cosh           | ccosh           | cosh           |
+----------------+-----------------+----------------+
| sinh           | csinh           | sinh           |
+----------------+-----------------+----------------+
| tanh           | ctanh           | tanh           |
+----------------+-----------------+----------------+
| exp            | cexp            | exp            |
+----------------+-----------------+----------------+
| log            | clog            | log            |
+----------------+-----------------+----------------+
| pow            | cpow            | pow            |
+----------------+-----------------+----------------+
| sqrt           | csqrt           | sqrt           |
+----------------+-----------------+----------------+
| fabs           | cabs            | fabs           |
+----------------+-----------------+----------------+

If at least one argument for a generic parameter is ``complex``, then use of the macro invokes
a complex function; otherwise, use of the macro invokes a real function.

For each unsuffixed function in ``<math.h>`` without a c-prefixed counterpart in
``<complex.h>``, the corresponding type-generic macro has the same name as the
function. These type-generic macros are:

 | ``atan2     fma     llround     remainder``
 | ``cbrt       fmax    log10       remquo``
 | ``ceil       fmin    log1p       rint``
 | ``copysign   fmod    log2        round``
 | ``erf        frwxp   logb        scalbn``
 | ``erfc       hypot   lrint       scalbln``
 | ``exp2       ilogb   lround      tgamma``
 | ``expm1      ldexp   nearbyint   trunc``
 | ``fdim       lgamma  nextafter``
 | ``floor      llrint  nexttoward``

If all arguments for generic parameters are ``real``, then use of the macro invokes a real
function; otherwise, use of the macro results in undefined behavior.

For each unsuffixed function in ``<complex.h>`` that is not a c-prefixed counterpart to a
function in ``<math.h>``, the corresponding type-generic macro has the same name as the
function. These type-generic macros are:

 | ``carg cimag conj cproj creal``

Use of the macro with any ``real`` or ``complex`` argument invokes a complex function.

EXAMPLE With the declarations

.. code-block:: c

   #include <tgmath.h>
   int n;
   float f;
   double d;
   long double ld;
   float complex fc;
   double complex dc;
   long double complex ldc;

functions invoked by use of type-generic macros are shown in the following table:

+--------------------------+------------------------------------+
| macro use                | invokes                            |
+==========================+====================================+
| ``exp(n)``               | ``exp(n)``, the function           |
+--------------------------+------------------------------------+
| ``acosh(f)``             | ``acoshf(f)``                      |
+--------------------------+------------------------------------+
| ``sin(d)``               | ``sin(d)``, the function           |
+--------------------------+------------------------------------+
| ``atan(ld)``             | ``atanl(ld)``                      |
+--------------------------+------------------------------------+
| ``log(fc)``              | ``clogf(fc)``                      |
+--------------------------+------------------------------------+
| ``sqrt(dc)``             | ``csqrt(dc)``                      |
+--------------------------+------------------------------------+
| ``pow(ldc, f)``          | ``cpowl(ldc, f)``                  |
+--------------------------+------------------------------------+
| ``remainder(n, n)``      | ``remainder(n, n)``, the function  |
+--------------------------+------------------------------------+
| ``nextafter(d, f)``      | ``nextafter(d, f)``, the function  |
+--------------------------+------------------------------------+
| ``nexttoward(f, ld)``    | ``nexttowardf(f, ld)``             |
+--------------------------+------------------------------------+
| ``copysign(n, ld)``      | ``copysignl(n, ld)``               |
+--------------------------+------------------------------------+
| ``ceil(fc)``             | ``undefined behavior``             |
+--------------------------+------------------------------------+
| ``rint(dc)``             | ``undefined behavior``             |
+--------------------------+------------------------------------+
| ``fmax(ldc, ld)``        | ``undefined behavior``             |
+--------------------------+------------------------------------+
| ``carg(n)``              | ``carg(n)``, the function          |
+--------------------------+------------------------------------+
| ``cproj(f)``             | ``cprojf(f)``                      |
+--------------------------+------------------------------------+
| ``creal(d)``             | ``creal(d)``, the function         |
+--------------------------+------------------------------------+
| ``cimag(ld)``            | ``cimagl(ld)``                     |
+--------------------------+------------------------------------+
| ``fabs(fc)``             | ``cabsf(fc)``                      |
+--------------------------+------------------------------------+
| ``carg(dc)``             | ``carg(dc)``, the function         |
+--------------------------+------------------------------------+
| ``cproj(ldc)``           | ``cprojl(ldc)``                    |
+--------------------------+------------------------------------+
