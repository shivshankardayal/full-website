.. index:: stdlib.h

.. _stdlib:

General utilities ``<stdlib.h>``
********************************
The header ``<stdlib.h>`` declares five types and several functions of general utility, and
defines several macros.

.. index:: div_t type, ldiv_t type, lldiv_t type, EXIT_FAILURE macro, NULL macro, EXIT_SUCCESS macro, RND_MAX macro, MB_CUR_MAX macro

The types declared are ``size_t`` and ``wchar_t`` (both described in :ref:`stddef`),

  | ``div_t``

which is a structure type that is the type of the value returned by the ``div`` function,

  | ``ldiv_t``

which is a structure type that is the type of the value returned by the ``ldiv`` function, and

  | ``lldiv_t``

which is a structure type that is the type of the value returned by the ``lldiv`` function.

The macros defined are ``NULL`` (described in :ref:`stddef`);

  | ``EXIT_FAILURE``

and

  | ``EXIT_SUCCESS``

which expand to integer constant expressions that can be used as the argument to the
exit function to return unsuccessful or successful termination status, respectively, to the
host environment;

  | ``RAND_MAX``

which expands to an integer constant expression that is the maximum value returned by
the ``rand`` function; and

  | ``MB_CUR_MAX``

which expands to a positive integer expression with type size_t that is the maximum
number of bytes in a multibyte character for the extended character set specified by the
current locale (category ``LC_CTYPE``), which is never greater than ``MB_LEN_MAX``.

.. index:: numeric conversion functions

.. _32.1:

Numeric conversion functions
============================
The functions ``atof, atoi, atol`` and ``atoll`` need not affect the value of the integer
expression errno on an error. If the value of the result cannot be represented, the
behavior is undefined.

.. index:: atof function

The ``atof`` function
---------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   double atof(const char *nptr);

**Description**

The ``atof`` function converts the initial portion of the string pointed to by ``nptr`` to
``double`` representation. Except for the behavior on error, it is equivalent to

.. code-block:: c

   strtod(nptr, (char **)NULL)

**Returns**

The ``atof`` function returns the converted value.

**Forward references:** the ``strtod, strtof`` and ``strtold`` functions (:ref:`32.1.3`).

.. index:: atoi function, atol function, atoll function

The ``atoi, atol`` and ``atoll`` functions
------------------------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   int atoi(const char *nptr);
   long int atol(const char *nptr);
   long long int atoll(const char *nptr);

**Description**

The ``atoi, atol`` and ``atoll`` functions convert the initial portion of the string pointed
to by ``nptr`` to ``int, long int`` and ``long long int`` representation, respectively.

Except for the behavior on error, they are equivalent to

.. code-block:: c

   atoi: (int)strtol(nptr, (char **)NULL, 10)
   atol: strtol(nptr, (char **)NULL, 10)
   atoll: strtoll(nptr, (char **)NULL, 10)

**Returns**

The ``atoi, atol`` and ``atoll`` functions return the converted value.

**Forward references:** the ``strtol, strtoll, strtoul`` and ``strtoull`` functions
(:ref:`32.1.4`).

.. index:: strtod function, strtof function, strtold function

.. _32.1.3:

The ``strtod, strtof`` and ``strtold`` functions
------------------------------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   double strtod(const char * restrict nptr, char ** restrict endptr);
   float strtof(const char * restrict nptr,  char ** restrict endptr);
   long double strtold(const char * restrict nptr, char ** restrict endptr);

**Description**

The ``strtod, strtof`` and ``strtold`` functions convert the initial portion of the string
pointed to by ``nptr`` to ``double, float`` and ``long double`` representation,
respectively. First, they decompose the input string into three parts: an initial, possibly
empty, sequence of white-space characters (as specified by the ``isspace`` function), a
subject sequence resembling a floating-point constant or representing an infinity or NaN;
and a final string of one or more unrecognized characters, including the terminating null
character of the input string. Then, they attempt to convert the subject sequence to a
floating-point number, and return the result.

The expected form of the subject sequence is an optional plus or minus sign, then one of
the following:

- a nonempty sequence of decimal digits optionally containing a decimal-point
  character, then an optional exponent part as defined in :ref:`4.4.4.2`;
- a ``0x`` or ``0X``, then a nonempty sequence of hexadecimal digits optionally containing a
  decimal-point character, then an optional binary exponent part as defined in :ref:`4.4.4.2`;
- **INF** or **INFINITY**, ignoring case
- **NAN** or **NAN** (:math:`n-char-sequence_opt`), ignoring case in the NAN part,

The subject sequence is defined as the longest initial subsequence of the input string,
starting with the first non-white-space character, that is of the expected form. The subject
sequence contains no characters if the input string is not of the expected form.

If the subject sequence has the expected form for a floating-point number, the sequence of
characters starting with the first digit or the decimal-point character (whichever occurs
first) is interpreted as a floating constant according to the rules of :ref:`4.4.4.2`, except that the
decimal-point character is used in place of a period, and that if neither an exponent part
nor a decimal-point character appears in a decimal floating point number, or if a binary
exponent part does not appear in a hexadecimal floating point number, an exponent part
of the appropriate type with value zero is assumed to follow the last digit in the string. If
the subject sequence begins with a minus sign, the sequence is interpreted as negated. [#]_
A character sequence **INF** or **INFINITY** is interpreted as an infinity, if representable in
the return type, else like a floating constant that is too large for the range of the return
type. A character sequence **NAN** or **NAN** (:math:`n-char-sequence_opt`), is interpreted as a quiet
NaN, if supported in the return type, else like a subject sequence part that does not have
the expected form; the meaning of the n-char sequences is implementation-defined. [#]_ A
pointer to the final string is stored in the object pointed to by ``endptr``, provided that
``endptr`` is not a null pointer.

If the subject sequence has the hexadecimal form and ``FLT_RADIX`` is a power of 2, the
value resulting from the conversion is correctly rounded.

In other than the "C" locale, additional locale-specific subject sequence forms may be
accepted.

If the subject sequence is empty or does not have the expected form, no conversion is
performed; the value of ``nptr`` is stored in the object pointed to by endptr, provided
that ``endptr`` is not a null pointer.

**Recommended practice**

If the subject sequence has the hexadecimal form, ``FLT_RADIX`` is not a power of 2, and
the result is not exactly representable, the result should be one of the two numbers in the
appropriate internal format that are adjacent to the hexadecimal floating source value,
with the extra stipulation that the error should have a correct sign for the current rounding
direction.

If the subject sequence has the decimal form and at most ``DECIMAL_DIG`` (defined in
``<float.h>``) significant digits, the result should be correctly rounded. If the subject
sequence :math:`D` has the decimal form and more than ``DECIMAL_DIG`` significant digits,
consider the two bounding, adjacent decimal strings :math:`L` and :math:`U`, both having
``DECIMAL_DIG`` significant digits, such that the values of :math:`L, D` and :math:`U` satisfy :math:`L \leq D \leq U`.
The result should be one of the (equal or adjacent) values that would be obtained by
correctly rounding :math:`L` and :math:`U` according to the current rounding direction, with the extra
stipulation that the error with respect to :math:`D` should have a correct sign for the current
rounding direction. [#]_

**Returns**

The functions return the converted value, if any. If no conversion could be performed,
zero is returned. If the correct value is outside the range of representable values, plus or
minus ``HUGE_VAL, HUGE_VALF`` or ``HUGE_VALL`` is returned (according to the return
type and sign of the value), and the value of the macro ``ERANGE`` is stored in ``errno``. If
the result underflows (:ref:`24.1`), the functions return a value whose magnitude is no greater
than the smallest normalized positive number in the return type; whether errno acquires
the value ``ERANGE`` is implementation-defined.

.. [#] It is unspecified whether a minus-signed sequence is converted to a negative number directly or by
       negating the value resulting from converting the corresponding unsigned sequence (see F.5); the two
       methods may yield different results if rounding is toward positive or negative infinity. In either case,
       the functions honor the sign of zero if floating-point arithmetic supports signed zeros.
.. [#] Implementation may use the n-char sequence to determine extra information to be represented in
       the NaN's significand.
.. [#] ``DECIMAL_DIG``, defined in ``<float.h>``, should be sufficiently large that :math:`L` and :math:`U` will usually round
       to the same internal floating value, but if not will round to adjacent values.

.. index:: strtol function, strtoll function, strtoul function, strtoull function

.. _32.1.4:

The ``strtol, strtoll, strtoul`` and ``strtoull`` functions
-----------------------------------------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   long int strtol(const char * restrict nptr, char ** restrict endptr, int base);
   long long int strtoll(const char * restrict nptr, char ** restrict endptr, int base);
   unsigned long int strtoul(const char * restrict nptr, char ** restrict endptr, int base);
   unsigned long long int strtoull(const char * restrict nptr, char ** restrict endptr, int base);

**Description**

The ``strtol, strtoll, strtoul`` and ``strtoull`` functions convert the initial
portion of the string pointed to by ``nptr`` to ``long int, long long int, unsigned
long int`` and ``unsigned long long int`` representation, respectively. First,
they decompose the input string into three parts: an initial, possibly empty, sequence of
white-space characters (as specified by the isspace function), a subject sequence
resembling an integer represented in some radix determined by the value of base, and a
final string of one or more unrecognized characters, including the terminating null
character of the input string. Then, they attempt to convert the subject sequence to an
integer, and return the result.

If the value of ``base`` is zero, the expected form of the subject sequence is that of an
integer constant as described in :ref:`4.4.4.1`, optionally preceded by a plus or minus sign, but
not including an integer suffix. If the value of ``base`` is between 2 and 36 (inclusive), the
expected form of the subject sequence is a sequence of letters and digits representing an
integer with the radix specified by ``base``, optionally preceded by a plus or minus sign,
but not including an integer suffix. The letters from ``a`` (or ``A``) through ``z`` (or ``Z``) are
ascribed the values 10 through 35; only letters and digits whose ascribed values are less
than that of ``base`` are permitted. If the value of base is 16, the characters ``0x`` or ``0X`` may
optionally precede the sequence of letters and digits, following the sign if present.

The subject sequence is defined as the longest initial subsequence of the input string,
starting with the first non-white-space character, that is of the expected form. The subject
sequence contains no characters if the input string is empty or consists entirely of white
space, or if the first non-white-space character is other than a sign or a permissible letter
or digit.

If the subject sequence has the expected form and the value of ``base`` is zero, the sequence
of characters starting with the first digit is interpreted as an integer constant according to
the rules of :ref:`4.4.4.1`. If the subject sequence has the expected form and the value of ``base``
is between 2 and 36, it is used as the base for conversion, ascribing to each letter its value
as given above. If the subject sequence begins with a minus sign, the value resulting from
the conversion is negated (in the return type). A pointer to the final string is stored in the
object pointed to by ``endptr``, provided that ``endptr`` is not a null pointer.

In other than the "C" locale, additional locale-specific subject sequence forms may be
accepted.

If the subject sequence is empty or does not have the expected form, no conversion is
performed; the value of ``nptr`` is stored in the object pointed to by ``endptr``, provided
that ``endptr`` is not a null pointer.

**Returns**

The ``strtol, strtoll, strtoul`` and ``strtoull`` functions return the converted
value, if any. If no conversion could be performed, zero is returned. If the correct value
is outside the range of representable values, ``LONG_MIN, LONG_MAX, LLONG_MIN,
LLONG_MAX, ULONG_MAX`` or ``ULLONG_MAX`` is returned (according to the return type
and sign of the value, if any), and the value of the macro ``ERANGE`` is stored in ``errno``.

.. index:: pseudo-random number generation function

Pseudo-random sequence generation functions
===========================================
.. index:: rand function

The ``rand`` function
---------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   int rand(void);

**Description**

The ``rand`` function computes a sequence of pseudo-random integers in the range 0 to
``RAND_MAX``.

The implementation shall behave as if no library function calls the ``rand`` function.

**Returns**

The ``rand`` function returns a pseudo-random integer.

**Environmental limits**

The value of the ``RAND_MAX`` macro shall be at least 32767.

.. index:: srand function

The ``srand`` function
----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void srand(unsigned int seed);

**Description**

The ``srand`` function uses the argument as a seed for a new sequence of pseudo-random
numbers to be returned by subsequent calls to ``rand``. If ``srand`` is then called with the
same seed value, the sequence of pseudo-random numbers shall be repeated. If ``rand`` is
called before any calls to ``srand`` have been made, the same sequence shall be generated
as when ``srand`` is first called with a seed value of 1.

The implementation shall behave as if no library function calls the ``srand`` function.

**Returns**

The ``srand`` function returns no value.

EXAMPLE The following functions define a portable implementation of ``rand`` and ``srand``.

.. code-block:: c

   static unsigned long int next = 1;
   int rand(void)
   // RAND_MAX assumed to be 32767
   {
     next = next * 1103515245 + 12345;
     return (unsigned int)(next/65536) % 32768;
   }
   void srand(unsigned int seed)
   {
     next = seed;
   }

.. index:: memory management functions

.. _32.3:

Memory management functions
===========================
The order and contiguity of storage allocated by successive calls to the ``calloc,
malloc`` and ``realloc`` functions is unspecified. The pointer returned if the allocation
succeeds is suitably aligned so that it may be assigned to a pointer to any type of object
and then used to access such an object or an array of such objects in the space allocated
(until the space is explicitly deallocated). The lifetime of an allocated object extends
from the allocation until the deallocation. Each such allocation shall yield a pointer to an
object disjoint from any other object. The pointer returned points to the start (lowest byte
address) of the allocated space. If the space cannot be allocated, a null pointer is
returned. If the size of the space requested is zero, the behavior is implementation-
defined: either a null pointer is returned, or the behavior is as if the size were some
nonzero value, except that the returned pointer shall not be used to access an object.

.. index:: calloc function

The ``calloc`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void *calloc(size_t nmemb, size_t size);

**Description**

The ``calloc`` function allocates space for an array of ``nmemb`` objects, each of whose size
is ``size``. The space is initialized to all bits zero. [#]_

**Returns**

The ``calloc`` function returns either a null pointer or a pointer to the allocated space.

.. [#] Note that this need not be the same as the representation of floating-point zero or a null pointer
       constant.

.. index:: free function

The ``free`` function
---------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void free(void *ptr);

**Description**

The ``free`` function causes the space pointed to by ``ptr`` to be deallocated, that is, made
available for further allocation. If ptr is a null pointer, no action occurs. Otherwise, if
the argument does not match a pointer earlier returned by the ``calloc, malloc`` or
``realloc`` function, or if the space has been deallocated by a call to ``free`` or ``realloc``,
the behavior is undefined.

**Returns**

The ``free`` function returns no value.

.. index:: malloc function

The ``malloc`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void *malloc(size_t size);

**Description**

The ``malloc`` function allocates space for an object whose size is specified by ``size`` and
whose value is indeterminate.

**Returns**

The ``malloc`` function returns either a null pointer or a pointer to the allocated space.

.. index:: realloc function

The ``realloc`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void *realloc(void *ptr, size_t size);

**Description**

The ``realloc`` function deallocates the old object pointed to by ``ptr`` and returns a
pointer to a new object that has the size specified by ``size``. The contents of the new
object shall be the same as that of the old object prior to deallocation, up to the lesser of
the new and old sizes. Any bytes in the new object beyond the size of the old object have
indeterminate values.

If ``ptr`` is a null pointer, the realloc function behaves like the ``malloc`` function for the
specified size. Otherwise, if ptr does not match a pointer earlier returned by the
``calloc, malloc`` or ``realloc`` function, or if the space has been deallocated by a call
to the ``free`` or ``realloc`` function, the behavior is undefined. If memory for the new
object cannot be allocated, the old object is not deallocated and its value is unchanged.

**Returns**

The ``realloc`` function returns a pointer to the new object (which may have the same
value as a pointer to the old object), or a null pointer if the new object could not be
allocated.

Communication with the environment
==================================
.. index:: abort function
.. _32.4.1:

The ``abort`` function
----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void abort(void);

**Description**

The ``abort`` function causes abnormal program termination to occur, unless the signal
``SIGABRT`` is being caught and the signal handler does not return. Whether open streams
with unwritten buffered data are flushed, open streams are closed, or temporary files are
removed is implementation-defined. An implementation-defined form of the status
*unsuccessful termination* is returned to the host environment by means of the function
call ``raise(SIGABRT)``.

**Returns**

The ``abort`` function does not return to its caller.

.. index:: atexit function

The ``atexit`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   int atexit(void (*func)(void));

**Description**

The ``atexit`` function registers the function pointed to by ``func``, to be called without
arguments at normal program termination.

**Environmental limits**

The implementation shall support the registration of at least 32 functions.

**Returns**

The ``atexit`` function returns zero if the registration succeeds, nonzero if it fails.

**Forward references:** the exit function (:ref:`32.4.3`).

.. index:: exit function

.. _32.4.3:

The ``exit`` function
---------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void exit(int status);

**Description**

The ``exit`` function causes normal program termination to occur. If more than one call to
the ``exit`` function is executed by a program, the behavior is undefined.

First, all functions registered by the ``atexit`` function are called, in the reverse order of
their registration, [#]_ except that a function is called after any previously registered
functions that had already been called at the time it was registered. If, during the call to
any such function, a call to the ``longjmp`` function is made that would terminate the call
to the registered function, the behavior is undefined.

Next, all open streams with unwritten buffered data are flushed, all open streams are
closed, and all files created by the ``tmpfile`` function are removed.

Finally, control is returned to the host environment. If the value of ``status`` is zero or
``EXIT_SUCCESS``, an implementation-defined form of the status (successful termination* is
returned. If the value of status is ``EXIT_FAILURE``, an implementation-defined form
of the status *unsuccessful termination* is returned. Otherwise the status returned is
implementation-defined.

**Returns**

The ``exit`` function cannot return to its caller.

.. [#] Each function is called as many times as it was registered, and in the correct order with respect to
       other registered functions.

.. index:: _Exit function

.. _32.4.4:

The ``_Exit`` function
----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void _Exit(int status);

**Description**

The ``_Exit`` function causes normal program termination to occur and control to be
returned to the host environment. No functions registered by the ``atexit`` function or
signal handlers registered by the ``signal`` function are called. The status returned to the
host environment is determined in the same way as for the ``exit`` function (:ref:`32.4.3`).
Whether open streams with unwritten buffered data are flushed, open streams are closed,
or temporary files are removed is implementation-defined.

**Returns**

The ``_Exit`` function cannot return to its caller.

.. index:: getenv function

The ``getenv`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   char *getenv(const char *name);

**Description**

The ``getenv`` function searches an *environment list*, provided by the host environment,
for a string that matches the string pointed to by ``name``. The set of environment names
and the method for altering the environment list are implementation-defined.

The implementation shall behave as if no library function calls the ``getenv`` function.

**Returns**

The ``getenv`` function returns a pointer to a string associated with the matched list
member. The string pointed to shall not be modified by the program, but may be
overwritten by a subsequent call to the ``getenv`` function. If the specified ``name`` cannot
be found, a null pointer is returned.

.. index:: system function

The ``system`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   int system(const char *string);

**Description**

If ``string`` is a null pointer, the ``system`` function determines whether the host
environment has a *command processor*. If ``string`` is not a null pointer, the ``system``
function passes the string pointed to by ``string`` to that command processor to be
executed in a manner which the implementation shall document; this might then cause the
program calling ``system`` to behave in a non-conforming manner or to terminate.

**Returns**

If the argument is a null pointer, the ``system`` function returns nonzero only if a
command processor is available. If the argument is not a null pointer, and the ``system``
function does return, it returns an implementation-defined value.

.. index::
   pair: searching; utilities
   pair: sorting; utilities

Searching and sorting utilities
===============================
These utilities make use of a comparison function to search or sort arrays of unspecified
type. Where an argument declared as ``size_t nmemb`` specifies the length of the array
for a function, ``nmemb`` can have the value zero on a call to that function; the comparison
function is not called, a search finds no matching element, and sorting performs no
rearrangement. Pointer arguments on such a call shall still have valid values, as described
in :ref:`13.1.4`.

The implementation shall ensure that the second argument of the comparison function
(when called from ``bsearch``), or both arguments (when called from ``qsort``), are
pointers to elements of the array. [#]_ The first argument when called from ``bsearch``
shall equal key.

The comparison function shall not alter the contents of the array. The implementation
may reorder elements of the array between calls to the comparison function, but shall not
alter the contents of any individual element.

When the same objects (consisting of ``size`` bytes, irrespective of their current positions
in the array) are passed more than once to the comparison function, the results shall be
consistent with one another. That is, for`` qsort`` they shall define a total ordering on the
array, and for ``bsearch`` the same object shall always compare the same way with the
key.

A sequence point occurs immediately before and immediately after each call to the
comparison function, and also between any call to the comparison function and any
movement of the objects passed as arguments to that call.

.. [#] That is, if the value passed is p, then the following expressions are always nonzero:

       ``((char *)p - (char *)base) % size == 0``

       ``(char *)p >= (char *)base``

       ``(char *)p < (char *)base + nmemb * size``

.. index:: bsearch function

The ``bsearch`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void *bsearch(const void *key, const void *base,
                 size_t nmemb, size_t size,
		 int (*compar)(const void *, const void *));

**Description**

The ``bsearch`` function searches an array of ``nmemb`` objects, the initial element of which
is pointed to by ``base``, for an element that matches the object pointed to by ``k``ey. The
size of each element of the array is specified by ``size``.

The comparison function pointed to by ``compar`` is called with two arguments that point
to the ``key`` object and to an array element, in that order. The function shall return an
integer less than, equal to, or greater than zero if the ``key`` object is considered,
respectively, to be less than, to match, or to be greater than the array element. The array
shall consist of: all the elements that compare less than, all the elements that compare
equal to, and all the elements that compare greater than the key object, in that order. [#]_

**Returns**

The ``bsearch`` function returns a pointer to a matching element of the array, or a null
pointer if no match is found. If two elements compare as equal, which element is
matched is unspecified.

.. [#] In practice, the entire array is sorted according to the comparison function.

.. index:: qsort function

The ``qsort`` function
----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   void qsort(void *base, size_t nmemb, size_t size,
              int (*compar)(const void *, const void *));

**Description**

The ``qsort`` function sorts an array of ``nmemb`` objects, the initial element of which is
pointed to by ``base``. The size of each object is specified by ``size``.

The contents of the array are sorted into ascending order according to a comparison
function pointed to by ``compar``, which is called with two arguments that point to the
objects being compared. The function shall return an integer less than, equal to, or
greater than zero if the first argument is considered to be respectively less than, equal to,
or greater than the second.

If two elements compare as equal, their order in the resulting sorted array is unspecified.

**Returns**

The ``qsort`` function returns no value.

.. index:: integer arithmetic functions

Integer arithmetic functions
============================
.. index:: abs function, labs function, llabs function

The ``abs, labs`` and ``llabs`` functions
-----------------------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   int abs(int j);
   long int labs(long int j);
   long long int llabs(long long int j);

**Description**

The ``abs, labs`` and ``llabs`` functions compute the absolute value of an integer ``j``. If the
result cannot be represented, the behavior is undefined. [#]_

**Returns**

The ``abs, labs`` and ``llabs`` functions return the absolute value.

.. index:: div funciton, ldiv function, lldiv function

The ``div, ldiv`` and ``lldiv`` functions
-----------------------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   div_t div(int numer, int denom);
   ldiv_t ldiv(long int numer, long int denom);
   lldiv_t lldiv(long long int numer, long long int denom);

**Description**

The ``div, ldiv`` and ``lldiv`` functions compute ``numer / denom`` and ``numer %
denom`` in a single operation.

**Returns**

The ``div, ldiv`` and ``lldiv`` functions return a structure of type ``div_t, ldiv_t`` and
``lldiv_t``, respectively, comprising both the quotient and the remainder. The structures
shall contain (in either order) the members ``quot`` (the quotient) and ``rem`` (the remainder),
each of which has the same type as the arguments ``numer`` and ``denom``. If either part of
the result cannot be represented, the behavior is undefined.

.. [#] The absolute value of the most negative number cannot be represented in two's complement.

.. index::
   pair: multibyte; character conversion functions
   pair: wide; character conversion functions

.. _32.7:

Multibyte/wide character conversion functions
=============================================

The behavior of the multibyte character functions is affected by the ``LC_CTYPE`` category
of the current locale. For a state-dependent encoding, each function is placed into its
initial conversion state by a call for which its character pointer argument, s, is a null
pointer. Subsequent calls with s as other than a null pointer cause the internal conversion
state of the function to be altered as necessary. A call with s as a null pointer causes
these functions to return a nonzero value if encodings have state dependency, and zero
otherwise. [#]_ Changing the ``LC_CTYPE`` category causes the conversion state of these
functions to be indeterminate.

.. [#] If the locale employs special bytes to change the shift state, these bytes do not produce separate wide
       character codes, but are grouped with an adjacent multibyte character.

.. index:: mblen funciton

The ``mblen`` function
----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   int mblen(const char *s, size_t n);

**Description**

If ``s`` is not a null pointer, the ``mblen`` function determines the number of bytes contained
in the multibyte character pointed to by ``s``. Except that the conversion state of the
``mbtowc`` function is not affected, it is equivalent to

.. code-block:: c

   mbtowc((wchar_t *)0, s, n);

The implementation shall behave as if no library function calls the ``mblen`` function.

**Returns**

If ``s`` is a null pointer, the ``mblen`` function returns a nonzero or zero value, if multibyte
character encodings, respectively, do or do not have state-dependent encodings. If ``s`` is
not a null pointer, the ``mblen`` function either returns 0 (if ``s`` points to the null character),
or returns the number of bytes that are contained in the multibyte character (if the next ``n``
or fewer bytes form a valid multibyte character), or returns -1 (if they do not form a valid
multibyte character).

**Forward references:** the ``mbtowc`` function (:ref:`32.7.2`).

.. index:: mbtowc function

.. _32.7.2:

The ``mbtowc`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   int mbtowc(wchar_t * restrict pwc, const char * restrict s, size_t n);

**Description**

If ``s`` is not a null pointer, the ``mbtowc`` function inspects at most ``n`` bytes beginning with
the byte pointed to by ``s`` to determine the number of bytes needed to complete the next
multibyte character (including any shift sequences). If the function determines that the
next multibyte character is complete and valid, it determines the value of the
corresponding wide character and then, if ``pwc`` is not a null pointer, stores that value in
the object pointed to by ``pwc``. If the corresponding wide character is the null wide
character, the function is left in the initial conversion state.

The implementation shall behave as if no library function calls the ``mbtowc`` function.

**Returns**

If ``s`` is a null pointer, the ``mbtowc`` function returns a nonzero or zero value, if multibyte
character encodings, respectively, do or do not have state-dependent encodings. If ``s`` is
not a null pointer, the ``mbtowc`` function either returns 0 (if ``s`` points to the null character),
or returns the number of bytes that are contained in the converted multibyte character (if
the next n or fewer bytes form a valid multibyte character), or returns -1 (if they do not
form a valid multibyte character).

In no case will the value returned be greater than ``n`` or the value of the ``MB_CUR_MAX``
macro.

.. index:: wctomb function

The ``wctomb`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   int wctomb(char *s, wchar_t wc);

**Description**

The ``wctomb`` function determines the number of bytes needed to represent the multibyte
character corresponding to the wide character given by ``wc`` (including any shift
sequences), and stores the multibyte character representation in the array whose first
element is pointed to by ``s`` (if s is not a null pointer). At most ``MB_CUR_MAX`` characters
are stored. If ``wc`` is a null wide character, a null byte is stored, preceded by any shift
sequence needed to restore the initial shift state, and the function is left in the initial
conversion state.

The implementation shall behave as if no library function calls the ``wctomb`` function.

**Returns**

If ``s`` is a null pointer, the wctomb function returns a nonzero or zero value, if multibyte
character encodings, respectively, do or do not have state-dependent encodings. If ``s`` is
not a null pointer, the ``wctomb`` function returns -1 if the value of wc does not correspond
to a valid multibyte character, or returns the number of bytes that are contained in the
multibyte character corresponding to the value of ``wc``.

In no case will the value returned be greater than the value of the ``MB_CUR_MAX`` macro.

.. index::
   pair: multibyte; string conversion functions
   pair: wide; string conversion functions

.. _32.8:

Multibyte/wide string conversion functions
==========================================
The behavior of the multibyte string functions is affected by the ``LC_CTYPE`` category of
the current locale.

.. index:: mbstowcs function

.. _32.8.11:

The ``mbstowcs`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   size_t mbstowcs(wchar_t * restrict pwcs, const char * restrict s, size_t n);

**Description**

The ``mbstowcs`` function converts a sequence of multibyte characters that begins in the
initial shift state from the array pointed to by ``s`` into a sequence of corresponding wide
characters and stores not more than ``n`` wide characters into the array pointed to by ``pwcs``.
No multibyte characters that follow a null character (which is converted into a null wide
character) will be examined or converted. Each multibyte character is converted as if by
a call to the mbtowc function, except that the conversion state of the mbtowc function is
not affected.

No more than ``n`` elements will be modified in the array pointed to by ``pwcs``. If copying
takes place between objects that overlap, the behavior is undefined.

**Returns**

If an invalid multibyte character is encountered, the ``mbstowcs`` function returns
``(size_t)(-1)``. Otherwise, the mbstowcs function returns the number of array
elements modified, not including a terminating null wide character, if any. [#]_

.. index:: wcstombs function

The ``wcstombs`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <stdlib.h>
   size_t wcstombs(char * restrict s, const wchar_t * restrict pwcs, size_t n);

**Description**

The ``wcstombs`` function converts a sequence of wide characters from the array pointed
to by ``pwcs`` into a sequence of corresponding multibyte characters that begins in the
initial shift state, and stores these multibyte characters into the array pointed to by ``s``,
stopping if a multibyte character would exceed the limit of ``n`` total bytes or if a null
character is stored. Each wide character is converted as if by a call to the ``wctomb``
function, except that the conversion state of the ``wctomb`` function is not affected.

No more than ``n`` bytes will be modified in the array pointed to by ``s``. If copying takes place
between objects that overlap, the behavior is undefined.

**Returns**

If a wide character is encountered that does not correspond to a valid multibyte character,
the ``wcstombs`` function returns ``(size_t)(-1)``. Otherwise, the ``wcstombs`` function
returns the number of bytes modified, not including a terminating null character, if
any. [10]_

.. [#] The array will not be null-terminated if the value returned is ``n``.
