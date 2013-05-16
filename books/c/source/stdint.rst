.. index:: stdint.h

.. _stdint:

Integer types ``<stdint.h>``
****************************
The header ``<stdint.h>`` declares sets of integer types having specified widths, and
defines corresponding sets of macros. It also defines macros that specify limits of
integer types corresponding to types defined in other standard headers.

Types are defined in the following categories:

* integer types having certain exact widths;
* integer types having at least certain specified widths;
* fastest integer types having at least certain specified widths;
* integer types wide enough to hold pointers to objects;
* integer types having greatest width.

(Some of these types may denote the same type.)

Corresponding macros specify limits of the declared types and construct suitable
constants.

For each type described herein that the implementation provides, [#]_ ``<stdint.h>`` shall
declare that typedef name and define the associated macros. Conversely, for each type
described herein that the implementation does not provide, ``<stdint.h>`` shall not
declare that typedef name nor shall it define the associated macros. An implementation
shall provide those types described as "required", but need not provide any of the others
(described as "optional").

.. [#] Some of these types may denote implementation-defined extended integer types.

.. index:: integer types

.. _30.1:

Integer types
=============
When typedef names differing only in the absence or presence of the initial ``u`` are defined,
they shall denote corresponding signed and unsigned types as described in :ref:`4.2.5`; an
implementation providing one of these corresponding types shall also provide the other.

In the following descriptions, the symbol ``N`` represents an unsigned decimal integer with
no leading zeros (e.g., 8 or 24, but not 04 or 048).

.. index::
   pair: exact-width; integer types

Exact-width integer types
-------------------------
The typedef name ``intN_t`` designates a signed integer type with width ``N``, no padding
bits and a two's complement representation. Thus, ``int8_t`` denotes a signed integer
type with a width of exactly 8 bits.

The typedef name ``uintN_t`` designates an unsigned integer type with width ``N``. Thus,
``uint24_t`` denotes an unsigned integer type with a width of exactly 24 bits.

These types are optional. However, if an implementation provides integer types with
widths of 8, 16, 32 or 64 bits, no padding bits, and (for the signed types) that have a
two's complement representation, it shall define the corresponding typedef names.

.. index::
   pair: minimum-width; integer types

.. index:: int_least8_t, unint_least8_t, int_least16_t, uint_least16_t, int_least32_t, uint_least32_t, int_least32_t, uint_least32_t

.. _30.1.2:

Minimum-width integer types
---------------------------
The typedef name ``int_leastN_t`` designates a signed integer type with a width of at
least ``N``, such that no signed integer type with lesser size has at least the specified width.
Thus, ``int_least32_t`` denotes a signed integer type with a width of at least 32 bits.

The typedef name ``uint_leastN_t`` designates an unsigned integer type with a width
of at least ``N``, such that no unsigned integer type with lesser size has at least the specified
width. Thus, ``uint_least16_t`` denotes an unsigned integer type with a width of at
least 16 bits.

The following types are required:

  | ``int_least8_t   uint_least8_t``
  | ``int_least16_t  uint_least16_t``
  | ``int_least32_t  uint_least32_t``
  | ``int_least64_t  uint_least64_t``

All other types of this form are optional.

.. index::
   triple: fastest; minimum-width; integer types

.. index:: int_fast8_t, unint_fast8_t, int_fast16_t, uint_fast16_t, int_fast32_t, uint_fast32_t, int_fast32_t, uint_fast32_t

Fastest minimum-width integer types
-----------------------------------
Each of the following types designates an integer type that is usually fastest [#]_ to operate
with among all integer types that have at least the specified width.

The typedef name ``int_fastN_t`` designates the fastest signed integer type with a width
of at least ``N``. The typedef name ``uint_fastN_t`` designates the fastest unsigned integer
type with a width of at least ``N``.

The following types are required:

  | ``int_fast8_t  uint_fast8_t``
  | ``int_fast16_t uint_fast16_t``
  | ``int_fast32_t uint_fast32_t``
  | ``int_fast64_t uint_fast64_t``

All other types of this form are optional.

.. [#] The designated type is not guaranteed to be fastest for all purposes; if the implementation has no clear
       grounds for choosing one type over another, it will simply pick some integer type satisfying the
       signedness and width requirements.

.. _30.1.4:

Integer types capable of holding object pointers
------------------------------------------------
.. index:: intptr_t, uintptr_t

The following type designates a signed integer type with the property that any valid
pointer to void can be converted to this type, then converted back to pointer to void,
and the result will compare equal to the original pointer:

  | ``intptr_t``

The following type designates an unsigned integer type with the property that any valid
pointer to void can be converted to this type, then converted back to pointer to void,
and the result will compare equal to the original pointer:

  | ``uintptr_t``

These types are optional.

.. index::
   pair: greatest-width; integer types

.. _30.1.5:

Greatest-width integer types
----------------------------
.. index:: intmax_t, uintmax_t

The following type designates a signed integer type capable of representing any value of
any signed integer type:

  | ``intmax_t``

The following type designates an unsigned integer type capable of representing any value
of any unsigned integer type:

  | ``uintmax_t``

These types are required.

Limits of specified-width integer types
=======================================
The following object-like macros [#]_ specify the minimum and maximum limits of the
types declared in ``<stdint.h>``. Each macro name corresponds to a similar type name in
:ref:`30.1`.

Each instance of any defined macro shall be replaced by a constant expression suitable
for use in ``#if`` preprocessing directives, and this expression shall have the same type as
would an expression that is an object of the corresponding type converted according to
the integer promotions. Its implementation-defined value shall be equal to or greater in
magnitude (absolute value) than the corresponding value given below, with the same sign,
except where stated to be exactly the given value.

.. [#] C++ implementations should define these macros only when ``__STDC_LIMIT_MACROS`` is defined
       before ``<stdint.h>`` is included.

.. index::
   pair: limit of; exact-width integer types

Limits of exact-width integer types
-----------------------------------
- minimum values of exact-width signed integer types

  | ``INTN_MIN`` exactly :math:`-(2^{N-1})`

- maximum values of exact-width signed integer types

  | ``INTN_MAX`` exactly :math:`2^{N-1} - 1`

- maximum values of exact-width unsigned integer types

  | ``UINTN_MAX`` exactly :math:`2^N - 1`

.. index::
   pair: limit of; minimum-width integer types

Limits of minimum-width integer types
-------------------------------------
- minimum values of minimum-width signed integer types

  | ``INT_LEASTN_MIN`` :math:`-(2^{N-1} - 1)`

- maximum values of minimum-width signed integer types

  | ``INT_LEASTN_MAX`` :math:`2^{N-1} - 1`

- maximum values of minimum-width unsigned integer types

  | ``UINT_LEASTN_MAX`` :math:`2^N -- 1`

.. index::
   pair: limit of; fastets minimum-width integer types

Limits of fastest minimum-width integer types
---------------------------------------------
- minimum values of fastest minimum-width signed integer types

  | ``INT_FASTN_MIN`` :math:`-(2^{N-1} - 1)`

- maximum values of fastest minimum-width signed integer types

  | ``INT_FASTN_MAX`` :math:`2^{N-1} - 1`

- maximum values of fastest minimum-width unsigned integer types

  | ``UINT_FASTN_MAX`` :math:`2^N - 1`

Limits of integer types capable of holding object pointers
----------------------------------------------------------
- minimum value of pointer-holding signed integer type

  | ``INTPTR_MIN`` :math:`-(2^{15} - 1)`

- maximum value of pointer-holding signed integer type

  | ``INTPTR_MAX`` :math:`2^{15} - 1`

- maximum value of pointer-holding unsigned integer type

  | ``UINTPTR_MAX`` :math:`2^{16} - 1`

.. index::
   pair: limit of; greatest-width integer types

Limits of greatest-width integer types
--------------------------------------
- minimum value of greatest-width signed integer type

  | ``INTMAX_MIN`` :math:`-(2^{63} - 1)`

- maximum value of greatest-width signed integer type

  | ``INTMAX_MAX`` :math:`2^{63} - 1`

- maximum value of greatest-width unsigned integer type

  | ``UINTMAX_MAX`` :math:`2^{64} - 1`

.. index::
   pair: limit of; other integer types

.. _30.3:

Limits of other integer types
=============================
The following object-like macros [#]_ specify the minimum and maximum limits of
integer types corresponding to types defined in other standard headers.

Each instance of these macros shall be replaced by a constant expression suitable for use
in ``#if`` preprocessing directives, and this expression shall have the same type as would an
expression that is an object of the corresponding type converted according to the integer
promotions. Its implementation-defined value shall be equal to or greater in magnitude
(absolute value) than the corresponding value given below, with the same sign. An
implementation shall define only the macros corresponding to those typedef names it
actually provides. [#]_

- limits of ``ptrdiff_t``

  | ``PTRDIFF_MIN`` :math:`-65535`
  | ``PTRDIFF_MAX`` :math:`+65535`

- limits of ``sig_atomic_t``

  | ``SIG_ATOMIC_MIN`` see below
  | ``SIG_ATOMIC_MAX`` see below

- limit of ``size_t``

  | ``SIZE_MAX`` :math:`65535`

- limits of ``wchar_t``

  | ``WCHAR_MIN`` see below
  | ``WCHAR_MAX`` see below

- limits of ``wint_t``

  | ``WINT_MIN`` see below
  | ``WINT_MAX`` see below

If ``sig_atomic_t`` (see :ref:`signal`) is defined as a signed integer type, the value of
``SIG_ATOMIC_MIN`` shall be no greater than -127 and the value of ``SIG_ATOMIC_MAX``
shall be no less than 127; otherwise, ``sig_atomic_t`` is defined as an unsigned integer
type, and the value of ``SIG_ATOMIC_MIN`` shall be 0 and the value of
``SIG_ATOMIC_MAX`` shall be no less than 255.

If ``wchar_t`` (see :ref:`stddef`) is defined as a signed integer type, the value of ``WCHAR_MIN``
shall be no greater than -127 and the value of ``WCHAR_MAX`` shall be no less than 127;
otherwise, ``wchar_t`` is defined as an unsigned integer type, and the value of
``WCHAR_MIN`` shall be 0 and the value of ``WCHAR_MAX`` shall be no less than 255. [#]_

If ``wint_t`` (see :ref:`wchar`) is defined as a signed integer type, the value of ``WINT_MIN`` shall
be no greater than -32767 and the value of ``WINT_MAX`` shall be no less than 32767;
otherwise, ``wint_t`` is defined as an unsigned integer type, and the value of ``WINT_MIN``
shall be 0 and the value of ``WINT_MAX`` shall be no less than 65535.

.. index::
   pair: macros for; integer constants

Macros for integer constants
============================
The following function-like macros [#]_ expand to integer constants suitable for
initializing objects that have integer types corresponding to types defined in
``<stdint.h>``. Each macro name corresponds to a similar type name in :ref:`30.1.2` or
:ref:`30.1.5`.

The argument in any instance of these macros shall be a decimal, octal, or hexadecimal
constant (as defined in :ref:`4.4.4.1`) with a value that does not exceed the limits for the
corresponding type.

Each invocation of one of these macros shall expand to an integer constant expression
suitable for use in ``#if`` preprocessing directives. The type of the expression shall have
the same type as would an expression of the corresponding type converted according to
the integer promotions. The value of the expression shall be that of the argument.


.. [#] C++ implementations should define these macros only when ``__STDC_LIMIT_MACROS`` is defined
       before ``<stdint.h>`` is included.
.. [#] A freestanding implementation need not provide all of these types.
.. [#] The values ``WCHAR_MIN`` and ``WCHAR_MAX`` do not necessarily correspond to members of the extended
       character set.
.. [#] C++ implementations should define these macros only when  ``__STDC_CONSTANT_MACROS`` is
       defined before ``<stdint.h>`` is included.

.. index::
   pair: macros for; minimum-width integer constants

Macros for minimum-width integer constants
------------------------------------------
The macro ``INTN_C`` (value) shall expand to an integer constant expression
corresponding to the type ``int_leastN_t``. The macro ``UINTN_C`` (value) shall expand
to an integer constant expression corresponding to the type ``uint_leastN_t``. For
example, if ``uint_least64_t`` is a name for the type ``unsigned long long int``,
then ``UINT64_C(0x123)`` might expand to the integer constant ``0x123ULL``.

.. index::
   pair: macros for; greatest-width integer constants

Macros for greatest-width integer constants
-------------------------------------------
The following macro expands to an integer constant expression having the value specified
by its argument and the type ``intmax_t``:

  | ``INTMAX_C`` (value)

The following macro expands to an integer constant expression having the value specified
by its argument and the type ``uintmax_t``:

  | ``UINTMAX_C`` (value)
