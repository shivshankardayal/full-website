.. index:: inttypes.h

Format conversion of integer types ``<inttypes.h>``
***************************************************
The header ``<inttypes.h>`` includes the header ``<stdint.h>`` and extends it
with additional facilities provided by hosted implementations.

It declares functions for manipulating greatest-width integers and converting
numeric character strings to greatest-width integers, and it declares the type
``imaxdiv_t`` which is a structure type that is the type of the value returned
by the ``imaxdiv`` function.

For each type declared in ``<stdint.h>``, it defines corresponding macros for
conversion specifiers for use with the formatted input/output functions. 

**Forward references:** integer types ``<stdint.h>`` (:ref:`stdint`), formatted
input/output functions (:ref:`31.6`), formatted wide character input/output
functions (:ref:`36.2`).

.. index:: format specifier macros

Macros for format specifiers
============================
.. index:: PRIdN macro, PRIdLEASTN macro, PRIdFASTN macro, PRIdMAX macro, PRIdPTR macro,
.. index:: PRIiN macro, PRIiLEASTN macro, PRIiFASTN macro, PRIiMAX macro, PRIiPTR macro
.. index:: PRIoN macro, PRIoLEASTN macro, PRIoFASTN macro, PRIoMAX macro, PRIoPTR macro
.. index:: PRIuN macro, PRIuLEASTN macro, PRIuFASTN macro, PRIuMAX macro, PRIuPTR macro
.. index:: PRIxN macro, PRIxLEASTN macro, PRIxFASTN macro, PRIxMAX macro, PRIxPTR macro
.. index:: PRIXN macro, PRIXLEASTN macro, PRIXFASTN macro, PRIXMAX macro, PRIXPTR macro
.. index:: SCNdN macro, SCNdLEASTN macro, SCNdFASTN macro, SCNdMAX macro, SCNdPTR macro
.. index:: SCNiN macro, SCNiLEASTN macro, SCNiFASTN macro, SCNiMAX macro, SCNiPTR macro
.. index:: SCNoN macro, SCNoLEASTN macro, SCNoFASTN macro, SCNoMAX macro, SCNoPTR macro
.. index:: SCNuN macro, SCNuLEASTN macro, SCNuFASTN macro, SCNuMAX macro, SCNuPTR macro
.. index:: SCNxN macro, SCNxLEASTN macro, SCNxFASTN macro, SCNxMAX macro, SCNxPTR macro

Each of the following object-like macros [#]_ expands to a character string
literal containing a conversion specifier, possibly modified by a length
modifier, suitable for use within the format argument of a formatted
input/output function when converting the corresponding integer type. These
macro names have the general form of ``PRI`` (character string literals for the
``fprintf`` and ``fwprintf`` family) or SCN (character string literals for the
``fscanf`` and ``fwscanf`` family), [#]_ followed by the conversion specifier,
followed by a name corresponding to a similar type name in :ref:`30.1`. In these
names, ``N`` represents the width of the type as described in :ref:`30.1`. For
example, ``PRIdFAST32`` can be used in a format string to print the value of an
integer of type ``int_fast32_t``.

The ``fprintf`` macros for signed integers are:

  | `` PRIdN PRIdLEASTN PRIdFASTN PRIdMAX PRIdPTR``
  | `` PRIiN PRIiLEASTN PRIiFASTN PRIiMAX PRIiPTR``

The ``fprintf`` macros for unsigned integers are:

  | `` PRIoN PRIoLEASTN PRIoFASTN PRIoMAX PRIoPTR``
  | `` PRIuN PRIuLEASTN PRIuFASTN PRIuMAX PRIuPTR``
  | `` PRIxN PRIxLEASTN PRIxFASTN PRIxMAX PRIxPTR``
  | `` PRIXN PRIXLEASTN PRIXFASTN PRIXMAX PRIXPTR``

The ``fscanf`` macros for signed integers are:

  | `` SCNdN SCNdLEASTN SCNdFASTN SCNdMAX SCNdPTR``
  | `` SCNiN SCNiLEASTN SCNiFASTN SCNiMAX SCNiPTR``

The ``fscanf`` macros for unsigned integers are:

  | `` SCNoN SCNoLEASTN SCNoFASTN SCNoMAX SCNoPTR``
  | `` SCNuN SCNuLEASTN SCNuFASTN SCNuMAX SCNuPTR``
  | `` SCNxN SCNxLEASTN SCNxFASTN SCNxMAX SCNxPTR``

For each type that the implementation provides in ``<stdint.h>``, the
corresponding fprintf macros shall be defined and the corresponding ``fscanf``
macros shall be defined unless the implementation does not have a suitable
``fscanf`` length modifier for the type.

EXAMPLE

.. code-block:: c

  #include <inttypes.h>
  #include <wchar.h>

  int main(void)
  {
    uintmax_t i = UINTMAX_MAX; // this type always exists

    wprintf(L"The largest integer value is %020" PRIxMAX "\n", i);

    return 0;
  }

.. [#] C++ implementations should define these macros only when
  ``__STDC_FORMAT_MACROS`` is defined before ``<inttypes.h>`` is included.
.. [#] Separate macros are given for use with ``fprintf`` and ``fscanf``
  functions because, in the general case, different format specifiers may be
  required for ``fprintf`` and ``fscanf``, even when the type is the same.

Functions for greatest-width integer types
==========================================
.. index:: imaxabs function

The ``imaxabs`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <inttypes.h>
  intmax_t imaxabs(intmax_t j);

**Description**

The ``imaxabs`` function computes the absolute value of an integer ``j``. If the
result cannot be represented, the behavior is undefined. [#]_

**Returns**

The ``imaxabs`` function returns the absolute value.

.. [#] The absolute value of the most negative number cannot be represented in
  two's complement.

.. index:: imaxdiv function

The ``imaxdiv`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <inttypes.h>
  imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom);

**Description**

The ``imaxdiv`` function computes ``numer / denom`` and ``numer % denom`` in a
single operation.

**Returns**

The ``imaxdiv`` function returns a structure of type ``imaxdiv_t`` comprising
both the quotient and the remainder. The structure shall contain (in either
order) the members quot (the quotient) and rem (the remainder), each of
which has type ``intmax_t``. If either part of the result cannot be represented,
the behavior is undefined.

.. index:: strtoimax function; strtoumax function

The ``strtoimax`` and ``strtoumax`` functions
---------------------------------------------
**Synopsis**

.. code-block:: c

  #include <inttypes.h>
  intmax_t strtoimax(const char * restrict nptr,
  char ** restrict endptr, int base);
  uintmax_t strtoumax(const char * restrict nptr,
  char ** restrict endptr, int base);

**Description**

The ``strtoimax`` and ``strtoumax`` functions are equivalent to the ``strtol,
strtoll, strtoul`` and ``strtoull`` functions, except that the initial portion of
the string is converted to ``intmax_t`` and ``uintmax_t`` representation,
respectively.

**Returns**

The ``strtoimax`` and ``strtoumax`` functions return the converted value, if any.
If no conversion could be performed, zero is returned. If the correct value is
outside the range of representable values, ``INTMAX_MAX, INTMAX_MIN`` or
``UINTMAX_MAX`` is returned (according to the return type and sign of the value,
if any), and the value of the macro ``ERANGE`` is stored in ``errno``.

**Forward references:** the ``strtol, strtoll, strtoul`` and ``strtoull`` functions
(:ref:`32.1.4`).

.. index:: wcstoimax function, wcstoumax function

The ``wcstoimax`` and ``wcstoumax`` functions
---------------------------------------------
**Synopsis**

.. code-block:: c

  #include <stddef.h> // for wchar_t
  #include <inttypes.h>
  intmax_t wcstoimax(const wchar_t * restrict nptr,
  wchar_t ** restrict endptr, int base);
  uintmax_t wcstoumax(const wchar_t * restrict nptr,
  wchar_t ** restrict endptr, int base);

**Description**

The ``wcstoimax`` and ``wcstoumax`` functions are equivalent to the ``wcstol,
wcstoll, wcstoul`` and ``wcstoull`` functions except that the initial portion of
the wide string is converted to ``intmax_t`` and ``uintmax_t`` representation,
respectively.

**Returns**

The ``wcstoimax`` function returns the converted value, if any. If no conversion
could be performed, zero is returned. If the correct value is outside the range
of representable values, ``INTMAX_MAX, INTMAX_MIN`` or ``UINTMAX_MAX`` is
returned (according to the return type and sign of the value, if any), and the
value of the macro ``ERANGE`` is stored in ``errno``.

**Forward references:** the ``wcstol, wcstoll, wcstoul`` and ``wcstoull`` functions
(:ref:`36.4.1.2`).

