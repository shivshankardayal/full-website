.. index:: wchar.h

.. _wchar:

Extended multibyte and wide character utilities ``<wchar.h>``
*************************************************************

.. _36.1:

Introduction
============
.. index:: wchat_t type, size_t type, mbstate_t type, wint_t type

The header ``<wchar.h>`` declares four data types, one tag, four macros, and many
functions.

The types declared are ``wchar_t`` and ``size_t`` (both described in :ref:`stddef`);

  mbstate_t

which is an object type other than an array type that can hold the conversion state
information necessary to convert between sequences of multibyte characters and wide
characters;

  wint_t

which is an integer type unchanged by default argument promotions that can hold any
value corresponding to members of the extended character set, as well as at least one
value that does not correspond to any member of the extended character set (see ``WEOF``
below); [#]_ and

  struct tm

which is declared as an incomplete structure type (the contents are described in :ref:`35.1`).

.. index:: WEOF macro

The macros defined are ``NULL`` (described in :ref:`stddef`); ``WCHAR_MIN`` and ``WCHAR_MAX``
(described in :ref:`30.3`); and

  WEOF

which expands to a constant expression of type ``wint_t`` whose value does not
correspond to any member of the extended character set. [#]_ It is accepted (and returned)
by several functions in this subclause to indicate *end-of-file*, that is, no more input from a
stream. It is also used as a wide character value that does not correspond to any member
of the extended character set.

The functions declared are grouped as follows:

- Functions that perform input and output of wide characters, or multibyte characters,
  or both;
- Functions that provide wide string numeric conversion;
- Functions that perform general wide string manipulation;
- Functions for wide string date and time conversion; and
- Functions that provide extended capabilities for conversion between multibyte and
  wide character sequences.

Unless explicitly stated otherwise, if the execution of a function described in this
subclause causes copying to take place between objects that overlap, the behavior is
undefined.

.. [#] ``wchar_t`` and ``wint_t`` can be the same integer type.
.. [#] The value of the macro ``WEOF`` may differ from that of ``EOF`` and need not be negative.

.. index::
   pair:formatted wide character; input/output function

.. _36.2:

Formatted wide character input/output functions
===============================================
The formatted wide character input/output functions shall behave as if there is a sequence
point after the actions associated with each specifier. [#]_

.. index:: fwprintf function

The ``fwprintf`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   int fwprintf(FILE * restrict stream, const wchar_t * restrict format, ...);

**Description**
The ``fwprintf`` function writes output to the stream pointed to by ``stream``, under
control of the wide string pointed to by ``format`` that specifies how subsequent arguments
are converted for output. If there are insufficient arguments for the format, the behavior
is undefined. If the format is exhausted while arguments remain, the excess arguments
are evaluated (as always) but are otherwise ignored. The ``fwprintf`` function returns
when the end of the format string is encountered.

The format is composed of zero or more directives: ordinary wide characters (not %),
which are copied unchanged to the output stream; and conversion specifications, each of
which results in fetching zero or more subsequent arguments, converting them, if
applicable, according to the corresponding conversion specifier, and then writing the
result to the output stream.

Each conversion specification is introduced by the wide character ``%``. After the ``%``, the
following appear in sequence:

- Zero or more *flags* (in any order) that modify the meaning of the conversion
  specification.
- An optional minimum *field width*. If the converted value has fewer wide characters
  than the field width, it is padded with spaces (by default) on the left (or right, if the
  left adjustment flag, described later, has been given) to the field width. The field
  width takes the form of an asterisk ``*`` (described later) or a nonnegative decimal
  integer. [#]_
- An optional *precision* that gives the minimum number of digits to appear for the ``d, i,
  o, u, x`` and ``X`` conversions, the number of digits to appear after the decimal-point
  wide character for ``a, A, e, E, f`` and ``F`` conversions, the maximum number of
  significant digits for the ``g`` and ``G`` conversions, or the maximum number of wide
  characters to be written for ``s`` conversions. The precision takes the form of a period
  (``.``) followed either by an asterisk ``*`` (described later) or by an optional decimal
  integer; if only the period is specified, the precision is taken as zero. If a precision
  appears with any other conversion specifier, the behavior is undefined.
- An optional *length modifier* that specifies the size of the argument.
- A *conversion specifier* wide character that specifies the type of conversion to be
  applied.

As noted above, a field width, or precision, or both, may be indicated by an asterisk. In
this case, an *int* argument supplies the field width or precision. The arguments
specifying field width, or precision, or both, shall appear (in that order) before the
argument (if any) to be converted. A negative field width argument is taken as a - flag
followed by a positive field width. A neg ative precision argument is taken as if the
precision were omitted.

The flag wide characters and their meanings are:

``-`` The result of the conversion is left-justified within the field. (It is right-justified if
this flag is not specified.)

``+`` The result of a signed conversion always begins with a plus or minus sign. (It
begins with a sign only when a negative value is converted if this flag is not
specified.) [#]_

*space* If the first wide character of a signed conversion is not a sign, or if a signed
conversion results in no wide characters, a space is prefixed to the result. If the
*space* and + flags both appear, the *space* flag is ignored.

``#`` The result is converted to an "alternative form". For o conversion, it increases
the precision, if and only if necessary, to force the first digit of the result to be a
zero (if the value and precision are both 0, a single 0 is printed). For ``x`` (or ``X``)
conversion, a nonzero result has ``0x`` (or ``0X``) prefixed to it. For ``a, A, e, E, f, F, g``
and ``G`` conversions, the result of converting a floating-point number always
contains a decimal-point wide character, even if no digits follow it. (Normally, a
decimal-point wide character appears in the result of these conversions only if a
digit follows it.) For ``g`` and ``G`` conversions, trailing zeros are *not* removed from the
result. For other conversions, the behavior is undefined.

``0`` For ``d, i, o, u, x, X, a, A, e, E, f, F, g`` and ``G`` conversions, leading zeros
(following any indication of sign or base) are used to pad to the field width rather
than performing space padding, except when converting an infinity or NaN. If the
``0`` and - flags both appear, the 0 flag is ignored. For ``d, i, o, u, x`` and ``X``
conversions, if a precision is specified, the 0 flag is ignored. For other
conversions, the behavior is undefined.

The length modifiers and their meanings are:

``hh`` Specifies that a following ``d, i, o, u, x`` or ``X`` conversion specifier applies to a
``signed char`` or ``unsigned char`` argument (the argument will have
been promoted according to the integer promotions, but its value shall be
converted to ``signed char`` or ``unsigned char`` before printing); or that
a following ``n`` conversion specifier applies to a pointer to a ``signed char``
argument.

``h`` Specifies that a following ``d, i, o, u, x`` or ``X`` conversion specifier applies to a
``short int`` or ``unsigned short int`` argument (the argument will
have been promoted according to the integer promotions, but its value shall
be converted to ``short int`` or ``unsigned short int`` before printing);
or that a following ``n`` conversion specifier applies to a pointer to a ``short
int`` argument.

``l (ell)`` Specifies that a following ``d, i, o, u, x`` or ``X`` conversion specifier applies to a
``long int`` or ``unsigned long int`` argument; that a following ``n``
conversion specifier applies to a pointer to a ``long int`` argument; that a
following ``c`` conversion specifier applies to a ``wint_t`` argument; that a
following ``s`` conversion specifier applies to a pointer to a ``wchar_t``
argument; or has no effect on a following ``a, A, e, E, f, F, g`` or ``G`` conversion
specifier.

``ll (ell-ell)`` Specifies that a following ``d, i, o, u, x`` or ``X`` conversion specifier applies to a
``long long int`` or ``unsigned long long int`` argument; or that a
following ``n`` conversion specifier applies to a pointer to a ``long long int``
argument.

``j`` Specifies that a following ``d, i, o, u, x`` or ``X`` conversion specifier applies to
an ``intmax_t`` or ``uintmax_t`` argument; or that a following ``n`` conversion
specifier applies to a pointer to an ``intmax_t`` argument.

``z`` Specifies that a following ``d, i, o, u, x`` or ``X`` conversion specifier applies to a
``size_t`` or the corresponding signed integer type argument; or that a
following ``n`` conversion specifier applies to a pointer to a signed integer type
corresponding to ``size_t`` argument.

``t`` Specifies that a following ``d, i, o, u, x`` or ``X`` conversion specifier applies to a
``ptrdiff_t`` or the corresponding unsigned integer type argument; or that a
following ``n`` conversion specifier applies to a pointer to a ``ptrdiff_t``
argument.

``L`` Specifies that a following ``a, A, e, E, f, F, g`` or ``G`` conversion specifier
applies to a ``long double`` argument.

If a length modifier appears with any conversion specifier other than as specified above,
the behavior is undefined.

The conversion specifiers and their meanings are:

``d,i`` The ``int`` argument is converted to signed decimal in the style *[-]dddd*. The
precision specifies the minimum number of digits to appear; if the value
being converted can be represented in fewer digits, it is expanded with
leading zeros. The default precision is 1. The result of converting a zero
value with a precision of zero is no wide characters.

``o,u,x,X`` The ``unsigned int`` argument is converted to unsigned octal (``o``), unsigned
decimal (``u``), or unsigned hexadecimal notation (``x`` or ``X``) in the style *dddd*; the
letters ``abcdef`` are used for ``x`` conversion and the letters ``ABCDEF`` for ``X``
conversion. The precision specifies the minimum number of digits to appear;
if the value being converted can be represented in fewer digits, it is expanded
with leading zeros. The default precision is 1. The result of converting a
zero value with a precision of zero is no wide characters.

``f,F`` A ``double`` argument representing a floating-point number is converted to
decimal notation in the style *[-]ddd.ddd*, where the number of digits after
the decimal-point wide character is equal to the precision specification. If the
precision is missing, it is taken as 6; if the precision is zero and the ``#`` flag is
not specified, no decimal-point wide character appears. If a decimal-point
wide character appears, at least one digit appears before it. The value is
rounded to the appropriate number of digits.

A ``double`` argument representing an infinity is converted in one of the styles
``[-]inf`` or ``[-]infinity`` - which style is implementation-defined. A
double argument representing a NaN is converted in one of the styles
``[-]nan`` or ``[-]nan(n-wchar-sequence)`` - which style, and the meaning of
any ``n-wchar-sequence``, is implementation-defined. The ``F`` conversion
specifier produces ``INF, INFINITY`` or ``NAN`` instead of ``inf, infinity`` or
``nan`` respectively. [#]_

``e,E`` A ``double`` argument representing a floating-point number is converted in the
style ``[-]d.ddd e``:math:`\pm` dd, where there is one digit (which is nonzero if the
argument is nonzero) before the decimal-point wide character and the number
of digits after it is equal to the precision; if the precision is missing, it is taken
as 6; if the precision is zero and the ``#`` flag is not specified, no decimal-point
wide character appears. The value is rounded to the appropriate number of
digits. The ``E`` conversion specifier produces a number with ``E`` instead of ``e``
introducing the exponent. The exponent always contains at least two digits,
and only as many more digits as necessary to represent the exponent. If the
value is zero, the exponent is zero.

A ``double`` argument representing an infinity or NaN is converted in the style
of an ``f`` or ``F`` conversion specifier.

``g,G`` A ``double`` argument representing a floating-point number is converted in
style ``f`` or ``e`` (or in style ``F`` or ``E`` in the case of a ``G`` conversion specifier),
depending on the value converted and the precision. Let :math:`P` equal the
precision if nonzero, 6 if the precision is omitted, or 1 if the precision is zero.
Then, if a conversion with style ``E`` would have an exponent of :math:`X`:

- if :math:`P > X \geq~-4`, the conversion is with style ``f`` (or ``F``) and precision
  :math:`P - (X + 1)`.
- otherwise, the conversion is with style ``e`` (or ``E``) and precision :math:`P - 1`.

Finally, unless the ``#`` flag is used, any trailing zeros are removed from the
fractional portion of the result and the decimal-point wide character is
removed if there is no fractional portion remaining.

A ``double`` argument representing an infinity or NaN is converted in the style
of an ``f`` or ``F`` conversion specifier.

``a,A`` A double argument representing a floating-point number is converted in the
style ``[-]0xh.hhhh p``:math:`\pm` d, where there is one hexadecimal digit (which is
nonzero if the argument is a normalized floating-point number and is
otherwise unspecified) before the decimal-point wide character [#]_ and the
number of hexadecimal digits after it is equal to the precision; if the precision
is missing and ``FLT_RADIX`` is a power of 2, then the precision is sufficient
for an exact representation of the value; if the precision is missing and
``FLT_RADIX`` is not a power of 2, then the precision is sufficient to
distinguish [#]_ values of type double, except that trailing zeros may be
omitted; if the precision is zero and the ``#`` flag is not specified, no decimal-point
wide character appears. The letters abcdef are used for a conversion
and the letters ``ABCDEF`` for ``A`` conversion. The ``A`` conversion specifier
produces a number with ``X`` and ``P`` instead of ``x`` and ``p``. The exponent always
contains at least one digit, and only as many more digits as necessary to
represent the decimal exponent of 2. If the value is zero, the exponent is
zero.

A ``double`` argument representing an infinity or NaN is converted in the style
of an ``f`` or ``F`` conversion specifier.

``c`` If no ``l`` length modifier is present, the ``int`` argument is converted to a wide
character as if by calling ``btowc`` and the resulting wide character is written.

If an ``l`` length modifier is present, the ``wint_t`` argument is converted to
``wchar_t`` and written.

``s`` If no ``l`` length modifier is present, the argument shall be a pointer to the initial
element of a character array containing a multibyte character sequence
beginning in the initial shift state. Characters from the array are converted as
if by repeated calls to the ``mbrtowc`` function, with the conversion state
described by an ``mbstate_t`` object initialized to zero before the first
multibyte character is converted, and written up to (but not including) the
terminating null wide character. If the precision is specified, no more than
that many wide characters are written. If the precision is not specified or is
greater than the size of the converted array, the converted array shall contain a
null wide character.

If an ``l`` length modifier is present, the argument shall be a pointer to the initial
element of an array of ``wchar_t`` type. Wide characters from the array are
written up to (but not including) a terminating null wide character. If the
precision is specified, no more than that many wide characters are written. If
the precision is not specified or is greater than the size of the array, the array
shall contain a null wide character.

``p`` The argument shall be a pointer to ``void``. The value of the pointer is
converted to a sequence of printing wide characters, in an implementation-defined manner.

``n`` The argument shall be a pointer to signed integer into which is written the
number of wide characters written to the output stream so far by this call to
fwprintf. No argument is converted, but one is consumed. If the
conversion specification includes any flags, a field width, or a precision, the
behavior is undefined.

``%`` A ``%`` wide character is written. No argument is converted. The complete
conversion specification shall be ``%%``.

If a conversion specification is invalid, the behavior is undefined. If any argument is
not the correct type for the corresponding conversion specification, the behavior is
undefined.

In no case does a nonexistent or small field width cause truncation of a field; if the result
of a conversion is wider than the field width, the field is expanded to contain the
conversion result.

For ``a`` and ``A`` conversions, if ``FLT_RADIX`` is a power of 2, the value is correctly rounded
to a hexadecimal floating number with the given precision.

**Recommended practice**

For ``a`` and ``A`` conversions, if ``FLT_RADIX`` is not a power of 2 and the result is not exactly
representable in the given precision, the result should be one of the two adjacent numbers
in hexadecimal floating style with the given precision, with the extra stipulation that the
error should have a correct sign for the current rounding direction.

For ``e, E, f, F, g`` and ``G`` conversions, if the number of significant decimal digits is at most
``DECIMAL_DIG``, then the result should be correctly rounded. [#]_ If the number of
significant decimal digits is more than ``DECIMAL_DIG`` but the source value is exactly
representable with ``DECIMAL_DIG`` digits, then the result should be an exact
representation with trailing zeros. Otherwise, the source value is bounded by two
adjacent decimal strings :math:`L < U`, both having ``DECIMAL_DIG`` significant digits; the value
of the resultant decimal string ``D`` should satisfy :math:`L \leq~D \leq~U`, with the extra stipulation that
the error should have a correct sign for the current rounding direction.

**Returns**

The ``fwprintf`` function returns the number of wide characters transmitted, or a negative
value if an output or encoding error occurred.

**Environmental limits**

The number of wide characters that can be produced by any single conversion shall be at
least 4095.

EXAMPLE To print a date and time in the form "Sunday, July 3, 10:02" followed by :math:`\pi` to five decimal
places:

.. code-block:: c

   #include <math.h>
   #include <stdio.h>
   #include <wchar.h>
   /* ... */
   wchar_t *weekday, *month; // pointers to wide strings
   int day, hour, min;
   fwprintf(stdout, L"%ls, %ls %d, %.2d:%.2d\n", weekday, month, day, hour, min);
   fwprintf(stdout, L"pi = %.5f\n", 4 * atan(1.0));

**Forward references:** the ``btowc`` function (:ref:`36.6.1.1`), the ``mbrtowc`` function
(:ref:`36.6.3.2`).

.. [#] The ``fwprintf`` functions perform writes to memory for the ``%n`` specifier.
.. [#] Note that 0 is taken as a flag, not as the beginning of a field width.
.. [#] The results of all floating conversions of a negative zero, and of negative values that round to zero,
       include a minus sign.
.. [#] When applied to infinite and NaN values, the -, +, and space flag wide characters have their usual
       meaning; the ``#`` and 0 flag wide characters have no effect.
.. [#] Binary implementations can choose the hexadecimal digit to the left of the decimal-point wide
       character so that subsequent digits align to nibble (4-bit) boundaries.
.. [#] The precision :math:`p` is sufficient to distinguish values of the source type if :math:`16^{p-1} > b^n` where :math:`b` is
       ``FLT_RADIX`` and n is the number of base-:math:`b` digits in the significand of the source type. A smaller :math:`p`
       might suffice depending on the implementation's scheme for determining the digit to the left of the
       decimal-point wide character.
.. [#] For binary-to-decimal conversion, the result format's values are the numbers representable with the
       given format specifier. The number of significant digits is determined by the format specifier, and in
       the case of fixed-point conversion by the source value as well.

.. index:: fwscanf function

The ``fwscanf`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   int fwscanf(FILE * restrict stream, const wchar_t * restrict format, ...);

**Description**

The ``fwscanf`` function reads input from the stream pointed to by ``stream``, under
control of the wide string pointed to by ``format`` that specifies the admissible input
sequences and how they are to be converted for assignment, using subsequent arguments
as pointers to the objects to receive the converted input. If there are insufficient
arguments for the format, the behavior is undefined. If the format is exhausted while
arguments remain, the excess arguments are evaluated (as always) but are otherwise
ignored.

The ``format`` is composed of zero or more directives: one or more white-space wide
characters, an ordinary wide character (neither ``%`` nor a white-space wide character), or a
conversion specification. Each conversion specification is introduced by the wide
character ``%``. After the ``%``, the following appear in sequence:

- An optional assignment-suppressing wide character \*.
- An optional decimal integer greater than zero that specifies the maximum field width
  (in wide characters).
- An optional *length modifier* that specifies the size of the receiving object.
- A *conversion specifier* wide character that specifies the type of conversion to be
  applied.

The ``fwscanf`` function executes each directive of the format in turn. If a directive fails,
as detailed below, the function returns. Failures are described as input failures (due to the
occurrence of an encoding error or the unavailability of input characters), or matching
failures (due to inappropriate input).

A directive composed of white-space wide character(s) is executed by reading input up to
the first non-white-space wide character (which remains unread), or until no more wide
characters can be read.

A directive that is an ordinary wide character is executed by reading the next wide
character of the stream. If that wide character differs from the directive, the directive
fails and the differing and subsequent wide characters remain unread. Similarly, if endof-
file, an encoding error, or a read error prevents a wide character from being read, the
directive fails.

A directive that is a conversion specification defines a set of matching input sequences, as
described below for each specifier. A conversion specification is executed in the
following steps:

Input white-space wide characters (as specified by the ``iswspace`` function) are skipped,
unless the specification includes a ``[, c`` or ``n`` specifier. [#]_

An input item is read from the stream, unless the specification includes an n specifier. An
input item is defined as the longest sequence of input wide characters which does not
exceed any specified field width and which is, or is a prefix of, a matching input
sequence. [#]_ The first wide character, if any, after the input item remains unread. If the
length of the input item is zero, the execution of the directive fails; this condition is a
matching failure unless end-of-file, an encoding error, or a read error prevented input
from the stream, in which case it is an input failure.

Except in the case of a ``%`` specifier, the input item (or, in the case of a ``%n`` directive, the
count of input wide characters) is converted to a type appropriate to the conversion
specifier. If the input item is not a matching sequence, the execution of the directive fails:
this condition is a matching failure. Unless assignment suppression was indicated by a \*,
the result of the conversion is placed in the object pointed to by the first argument
following the ``format`` argument that has not already received a conversion result. If this
object does not have an appropriate type, or if the result of the conversion cannot be
represented in the object, the behavior is undefined.

The length modifiers and their meanings are:

``hh`` Specifies that a following ``d, i, o, u, x, X`` or ``n`` conversion specifier applies
to an argument with type pointer to ``signed char`` or ``unsigned char``.

``h`` Specifies that a following ``d, i, o, u, x, X`` or ``n`` conversion specifier applies
to an argument with type pointer to ``short int`` or ``unsigned short
int``.

``l (ell)`` Specifies that a following ``d, i, o, u, x, X`` or ``n`` conversion specifier applies
to an argument with type pointer to ``long int`` or ``unsigned long
int``; that a following ``a, A, e, E, f, F, g`` or ``G`` conversion specifier applies to
an argument with type pointer to ``double``; or that a following ``c, s``or ``[``
conversion specifier applies to an argument with type pointer to ``wchar_t``.

``ll (ell-ell)`` Specifies that a following ``d, i, o, u, x, X`` or ``n`` conversion specifier applies
to an argument with type pointer to ``long long int`` or ``unsigned
long long int``.

``j`` Specifies that a following ``d, i, o, u, x, X`` or ``n`` conversion specifier applies
to an argument with type pointer to ``intmax_t`` or ``uintmax_t``.

``z`` Specifies that a following ``d, i, o, u, x, X`` or ``n`` conversion specifier applies
to an argument with type pointer to ``size_t`` or the corresponding signed
integer type.

``t`` Specifies that a following ``d, i, o, u, x, X`` or ``n`` conversion specifier applies
to an argument with type pointer to ``ptrdiff_t`` or the corresponding
unsigned integer type.

``L`` Specifies that a following ``a, A, e, E, f, F, g`` or ``G`` conversion specifier
applies to an argument with type pointer to ``long double``.

If a length modifier appears with any conversion specifier other than as specified above,
the behavior is undefined.

The conversion specifiers and their meanings are:

``d`` Matches an optionally signed decimal integer, whose format is the same as
expected for the subject sequence of the ``wcstol`` function with the value 10
for the base argument. The corresponding argument shall be a pointer to
signed integer.

``i`` Matches an optionally signed integer, whose format is the same as expected
for the subject sequence of the ``wcstol`` function with the value 0 for the
base argument. The corresponding argument shall be a pointer to signed
integer.

``o`` Matches an optionally signed octal integer, whose format is the same as
expected for the subject sequence of the ``wcstoul`` function with the value 8
for the ``base`` argument. The corresponding argument shall be a pointer to
unsigned integer.

``u`` Matches an optionally signed decimal integer, whose format is the same as
expected for the subject sequence of the ``wcstoul`` function with the value 10
for the ``base`` argument. The corresponding argument shall be a pointer to
unsigned integer.

``x`` Matches an optionally signed hexadecimal integer, whose format is the same
as expected for the subject sequence of the ``wcstoul`` function with the value
16 for the ``base`` argument. The corresponding argument shall be a pointer to
unsigned integer.

``a,e,f,g`` Matches an optionally signed floating-point number, infinity, or NaN, whose
format is the same as expected for the subject sequence of the ``wcstod``
function. The corresponding argument shall be a pointer to floating.

``c`` Matches a sequence of wide characters of exactly the number specified by the
field width (1 if no field width is present in the directive).

If no ``l`` length modifier is present, characters from the input field are
converted as if by repeated calls to the ``wcrtomb`` function, with the
conversion state described by an ``mbstate_t`` object initialized to zero
before the first wide character is converted. The corresponding argument
shall be a pointer to the initial element of a character array large enough to
accept the sequence. No null character is added.

If an ``l`` length modifier is present, the corresponding argument shall be a
pointer to the initial element of an array of ``wchar_t`` large enough to accept
the sequence. No null wide character is added.

``s`` Matches a sequence of non-white-space wide characters.

If no ``l`` length modifier is present, characters from the input field are
converted as if by repeated calls to the ``wcrtomb`` function, with the
conversion state described by an ``mbstate_t`` object initialized to zero
before the first wide character is converted. The corresponding argument
shall be a pointer to the initial element of a character array large enough to
accept the sequence and a terminating null character, which will be added
automatically.

If an ``l`` length modifier is present, the corresponding argument shall be a
pointer to the initial element of an array of ``wchar_t`` large enough to accept
the sequence and the terminating null wide character, which will be added
automatically.

``[`` Matches a nonempty sequence of wide characters from a set of expected
characters (the *scanset*).

If no ``l`` length modifier is present, characters from the input field are
converted as if by repeated calls to the ``wcrtomb`` function, with the
conversion state described by an ``mbstate_t`` object initialized to zero
before the first wide character is converted. The corresponding argument
shall be a pointer to the initial element of a character array large enough to
accept the sequence and a terminating null character, which will be added
automatically.

If an ``l`` length modifier is present, the corresponding argument shall be a
pointer to the initial element of an array of ``wchar_t`` large enough to accept
the sequence and the terminating null wide character, which will be added
automatically.

The conversion specifier includes all subsequent wide characters in the
``format`` string, up to and including the matching right bracket (``]``). The wide
characters between the brackets (the *scanlist*) compose the scanset, unless the
wide character after the left bracket is a circumflex (``^``), in which case the
scanset contains all wide characters that do not appear in the scanlist between
the circumflex and the right bracket. If the conversion specifier begins with
``[]`` or ``[^]``, the right bracket wide character is in the scanlist and the next
following right bracket wide character is the matching right bracket that ends
the specification; otherwise the first following right bracket wide character is
the one that ends the specification. If a - wide character is in the scanlist and
is not the first, nor the second where the first wide character is a ``^``, nor the
last character, the behavior is implementation-defined.

``p`` Matches an implementation-defined set of sequences, which should be the
same as the set of sequences that may be produced by the ``%p`` conversion of
the ``fwprintf`` function. The corresponding argument shall be a pointer to a
pointer to void. The input item is converted to a pointer value in an
implementation-defined manner. If the input item is a value converted earlier
during the same program execution, the pointer that results shall compare
equal to that value; otherwise the behavior of the ``%p`` conversion is undefined.

``n`` No input is consumed. The corresponding argument shall be a pointer to
signed integer into which is to be written the number of wide characters read
from the input stream so far by this call to the ``fwscanf`` function. Execution
of a ``%n`` directive does not increment the assignment count returned at the
completion of execution of the ``fwscanf`` function. No argument is
converted, but one is consumed. If the conversion specification includes an
assignment-suppressing wide character or a field width, the behavior is
undefined.

``%`` Matches a single ``%`` wide character; no conversion or assignment occurs. The
complete conversion specification shall be ``%%``.

If a conversion specification is invalid, the behavior is undefined.

The conversion specifiers ``A, E, F, G`` and ``X`` are also valid and behave the same as,
respectively, ``a, e, f, g`` and ``x``.

Trailing white space (including new-line wide characters) is left unread unless matched
by a directive. The success of literal matches and suppressed assignments is not directly
determinable other than via the ``%n`` directive.

**Returns**

The ``fwscanf`` function returns the value of the macro ``EOF`` if an input failure occurs
before any conversion. Otherwise, the function returns the number of input items
assigned, which can be fewer than provided for, or even zero, in the event of an early
matching failure.

17 EXAMPLE 1 The call:

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   /* ... */
   int n, i; float x; wchar_t name[50];
   n = fwscanf(stdin, L"%d%f%ls", &i, &x, name);

with the input line:

  25 54.32E-1 thompson

will assign to ``n`` the value 3, to ``i`` the value 25, to ``x`` the value 5.432, and to name the sequence
``thompson\0``.

EXAMPLE 2 The call:

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   /* ... */
   int i; float x; double y;
   fwscanf(stdin, L"%2d%f%*d %lf", &i, &x, &y);

with input:

  56789 0123 56a72

will assign to ``i`` the value 56 and to ``x`` the value 789.0, will skip past 0123, and will assign to ``y`` the value
56.0. The next wide character read from the input stream will be ``a``.

**Forward references:** the ``wcstod, wcstof`` and ``wcstold`` functions (:ref:`36.4.1.1`), the
``wcstol, wcstoll, wcstoul`` and ``wcstoull`` functions (:ref:`36.4.1.2`), the ``wcrtomb``
function (:ref:`36.6.3.3`).

.. [#] These white-space wide characters are not counted against a specified field width.
.. [#] ``fwscanf`` pushes back at most one input wide character onto the input stream. Therefore, some
       sequences that are acceptable to ``wcstod, wcstol`` etc., are unacceptable to ``fwscanf``.

.. index:: swprintf function

The ``swprintf`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int swprintf(wchar_t * restrict s, size_t n,
                const wchar_t * restrict format, ...);

**Description**

The ``swprintf`` function is equivalent to ``fwprintf``, except that the argument ``s``
specifies an array of wide characters into which the generated output is to be written,
rather than written to a stream. No more than ``n`` wide characters are written, including a
terminating null wide character, which is always added (unless ``n`` is zero).

**Returns**

The ``swprintf`` function returns the number of wide characters written in the array, not
counting the terminating null wide character, or a neg ative value if an encoding error
occurred or if ``n`` or more wide characters were requested to be written.

.. index:: swscanf function

The ``swscanf`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int swscanf(const wchar_t * restrict s,
               const wchar_t * restrict format, ...);

**Description**

The ``swscanf`` function is equivalent to fwscanf, except that the argument ``s`` specifies a
wide string from which the input is to be obtained, rather than from a stream. Reaching
the end of the wide string is equivalent to encountering end-of-file for the ``fwscanf``
function.

**Returns**

The ``swscanf`` function returns the value of the macro ``EOF`` if an input failure occurs
before any conversion. Otherwise, the swscanf function returns the number of input
items assigned, which can be fewer than provided for, or even zero, in the event of an
early matching failure.

.. index:: vfwprintf function

The ``vfwprintf`` function
--------------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   #include <stdio.h>
   #include <wchar.h>
   int vfwprintf(FILE * restrict stream,
                 const wchar_t * restrict format, va_list arg);

**Description**

The ``vfwprintf`` function is equivalent to ``fwprintf``, with the variable argument list
replaced by ``arg``, which shall have been initialized by the ``va_start`` macro (and
possibly subsequent ``va_arg`` calls). The vfwprintf function does not invoke the
``va_end`` macro. [#]_

**Returns**

The ``vfwprintf`` function returns the number of wide characters transmitted, or a
negative value if an output or encoding error occurred.

EXAMPLE The following shows the use of the vfwprintf function in a general error-reporting
routine.

.. code-block:: c

   #include <stdarg.h>
   #include <stdio.h>
   #include <wchar.h>

   void error(char *function_name, wchar_t *format, ...)
   {
     va_list args;
     va_start(args, format);
     // print out name of function causing error
     fwprintf(stderr, L"ERROR in %s: ", function_name);
     // print out remainder of message
     vfwprintf(stderr, format, args);
     va_end(args);
   }

.. [#] As the functions ``vfwprintf, vswprintf, vfwscanf, vwprintf, vwscanf`` and ``vswscanf``
       invoke the ``va_arg`` macro, the value of ``arg`` after the return is indeterminate.

.. index:: vfwscanf function

The ``vfwscanf`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   #include <stdio.h>
   #include <wchar.h>
   int vfwscanf(FILE * restrict stream,
                const wchar_t * restrict format, va_list arg);

**Description**

The ``vfwscanf`` function is equivalent to ``fwscanf``, with the variable argument list
replaced by ``arg``, which shall have been initialized by the ``va_start`` macro (and
possibly subsequent ``va_arg`` calls). The vfwscanf function does not invoke the
``va_end`` macro. [15]_

**Returns**

The ``vfwscanf`` function returns the value of the macro ``EOF`` if an input failure occurs
before any conversion. Otherwise, the ``vfwscanf`` function returns the number of input
items assigned, which can be fewer than provided for, or even zero, in the event of an
early matching failure.

.. index:: vswprintf function

The ``vswprintf`` function
--------------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   #include <wchar.h>
   int vswprintf(wchar_t * restrict s, size_t n,
		 const wchar_t * restrict format, va_list arg);

**Description**

The ``vswprintf`` function is equivalent to ``swprintf``, with the variable argument list
replaced by ``arg``, which shall have been initialized by the ``va_start`` macro (and
possibly subsequent ``va_arg`` calls). The ``vswprintf`` function does not invoke the
``va_end`` macro. [15]_

**Returns**

The ``vswprintf`` function returns the number of wide characters written in the array, not
counting the terminating null wide character, or a neg ative value if an encoding error
occurred or if ``n`` or more wide characters were requested to be generated.

.. index:: vswscanf function

The ``vswscanf`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   #include <wchar.h>
   int vswscanf(const wchar_t * restrict s,
                const wchar_t * restrict format, va_list arg);

**Description**

The ``vswscanf`` function is equivalent to ``swscanf``, with the variable argument list
replaced by ``arg``, which shall have been initialized by the ``va_start`` macro (and
possibly subsequent ``va_arg`` calls). The vswscanf function does not invoke the
``va_end`` macro. [15]_

**Returns**

The ``vswscanf`` function returns the value of the macro ``EOF`` if an input failure occurs
before any conversion. Otherwise, the ``vswscanf`` function returns the number of input
items assigned, which can be fewer than provided for, or even zero, in the event of an
early matching failure.

.. index:: vwprintf function

The ``vwprintf`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   #include <wchar.h>
   int vwprintf(const wchar_t * restrict format, va_list arg);

**Description**

The ``vwprintf`` function is equivalent to ``wprintf``, with the variable argument list
replaced by ``arg``, which shall have been initialized by the ``va_start`` macro (and
possibly subsequent ``va_arg`` calls). The vwprintf function does not invoke the
``va_end`` macro. [15]_

**Returns**

The ``vwprintf`` function returns the number of wide characters transmitted, or a negative
value if an output or encoding error occurred.

.. index:: vwscanf function

The ``vwscanf`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   #include <wchar.h>
   int vwscanf(const wchar_t * restrict format, va_list arg);

**Description**

The ``vwscanf`` function is equivalent to ``wscanf``, with the variable argument list
replaced by ``arg``, which shall have been initialized by the ``va_start`` macro (and
possibly subsequent ``va_arg`` calls). The ``vwscanf`` function does not invoke the
``va_end`` macro. [15]_

**Returns**

The ``vwscanf`` function returns the value of the macro ``EOF`` if an input failure occurs
before any conversion. Otherwise, the ``vwscanf`` function returns the number of input
items assigned, which can be fewer than provided for, or even zero, in the event of an
early matching failure.

.. index:: wprintf function

The ``wprintf`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int wprintf(const wchar_t * restrict format, ...);

**Description**

The ``wprintf`` function is equivalent to ``fwprintf`` with the argument ``stdout``
interposed before the arguments to ``wprintf``.

**Returns**

The ``wprintf`` function returns the number of wide characters transmitted, or a negative
value if an output or encoding error occurred.

.. index:: wscanf function

The ``wscanf`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int wscanf(const wchar_t * restrict format, ...);

**Description**

The ``wscanf`` function is equivalent to ``fwscanf`` with the argument ``stdin`` interposed
before the arguments to ``wscanf``.

**Returns**

The ``wscanf`` function returns the value of the macro ``EOF`` if an input failure occurs
before any conversion. Otherwise, the ``wscanf`` function returns the number of input
items assigned, which can be fewer than provided for, or even zero, in the event of an
early matching failure.

.. index::
   pair: wide character; input/output function

Wide character input/output functions
=====================================
.. index:: fgetwc function

.. _36.3.1:

The ``fgetwc`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   wint_t fgetwc(FILE *stream);

**Description**

If the end-of-file indicator for the input stream pointed to by ``stream`` is not set and a
next wide character is present, the ``fgetwc`` function obtains that wide character as a
``wchar_t`` converted to a ``wint_t`` and advances the associated file position indicator for
the ``stream`` (if defined).

**Returns**

If the end-of-file indicator for the ``stream`` is set, or if the ``stream`` is at end-of-file, the
end-of-file indicator for the ``stream`` is set and the ``fgetwc`` function returns ``WEOF``. Otherwise,
the ``fgetwc`` function returns the next wide character from the input stream pointed to by
stream. If a read error occurs, the error indicator for the stream is set and the ``fgetwc``
function returns ``WEOF``. If an encoding error occurs (including too few bytes), the value of
the macro ``EILSEQ`` is stored in errno and the fgetwc function returns ``WEOF``. [#]_

.. [#] An end-of-file and a read error can be distinguished by use of the ``feof`` and ``ferror`` functions.
       Also, ``errno`` will be set to ``EILSEQ`` by input/output functions only if an encoding error occurs.

.. index:: fgetws function

The ``fgetws`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   wchar_t *fgetws(wchar_t * restrict s,
		   int n, FILE * restrict stream);

**Description**

The ``fgetws`` function reads at most one less than the number of wide characters
specified by ``n`` from the stream pointed to by ``stream`` into the array pointed to by ``s``. No
additional wide characters are read after a new-line wide character (which is retained) or
after end-of-file. A null wide character is written immediately after the last wide
character read into the array.

**Returns**

The ``fgetws`` function returns s if successful. If end-of-file is encountered and no
characters have been read into the array, the contents of the array remain unchanged and a
null pointer is returned. If a read or encoding error occurs during the operation, the array
contents are indeterminate and a null pointer is returned.

.. index:: fputwc function

.. _36.3.3:

The ``fputwc`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   wint_t fputwc(wchar_t c, FILE *stream);

**Description**

The ``fputwc`` function writes the wide character specified by ``c`` to the output stream
pointed to by ``stream``, at the position indicated by the associated file position indicator
for the stream (if defined), and advances the indicator appropriately. If the file cannot
support positioning requests, or if the stream was opened with append mode, the
character is appended to the output stream.

**Returns**

The ``fputwc`` function returns the wide character written. If a write error occurs, the
error indicator for the stream is set and ``fputwc`` returns ``WEOF``. If an encoding error
occurs, the value of the macro ``EILSEQ`` is stored in errno and fputwc returns ``WEOF``.

.. index:: fputws function

The ``fputws`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   int fputws(const wchar_t * restrict s,
	      FILE * restrict stream);

**Description**

The ``fputws`` function writes the wide string pointed to by ``s`` to the stream pointed to by
``stream``. The terminating null wide character is not written.

**Returns**

The ``fputws`` function returns ``EOF`` if a write or encoding error occurs; otherwise, it
returns a nonnegative value.

.. index:: fwide function

.. _36.3.5:

The ``fwide`` function
----------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   int fwide(FILE *stream, int mode);

**Description**

The ``fwide`` function determines the orientation of the stream pointed to by ``stream``. If
``mode`` is greater than zero, the function first attempts to make the stream wide oriented. If
``mode`` is less than zero, the function first attempts to make the stream byte oriented. [#]_
Otherwise, ``mode`` is zero and the function does not alter the orientation of the stream.

**Returns**

The ``fwide`` function returns a value greater than zero if, after the call, the stream has
wide orientation, a value less than zero if the stream has byte orientation, or zero if the
stream has no orientation.

.. [#] If the orientation of the stream has already been determined, ``fwide`` does not change it.

.. index:: getwc function

The ``getwc`` function
----------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   wint_t getwc(FILE *stream);

**Description**

The ``getwc`` function is equivalent to ``fgetwc``, except that if it is implemented as a
macro, it may evaluate ``stream`` more than once, so the argument should never be an
expression with side effects.

**Returns**

The ``getwc`` function returns the next wide character from the input stream pointed to by
``stream``, or ``WEOF``.

.. index:: getwchar function

The ``getwchar`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wint_t getwchar(void);

**Description**

The ``getwchar`` function is equivalent to ``getwc`` with the argument ``stdin``.

**Returns**

The ``getwchar`` function returns the next wide character from the input stream pointed to
by ``stdin``, or ``WEOF``.

.. index:: putwc function

The ``putwc`` function
----------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   wint_t putwc(wchar_t c, FILE *stream);

**Description**

The ``putwc`` function is equivalent to ``fputwc``, except that if it is implemented as a
macro, it may evaluate ``stream`` more than once, so that argument should never be an
expression with side effects.

**Returns**

The ``putwc`` function returns the wide character written, or ``WEOF``.

.. index:: putwchar function

The ``putwchar`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wint_t putwchar(wchar_t c);

**Description**

The ``putwchar`` function is equivalent to ``putwc`` with the second argument ``stdout``.

**Returns**

The ``putwchar`` function returns the character written, or ``WEOF``.

.. index:: ungetwc function

The ``ungetwc`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   wint_t ungetwc(wint_t c, FILE *stream);

**Description**

The ``ungetwc`` function pushes the wide character specified by ``c`` back onto the input
stream pointed to by ``stream``. Pushed-back wide characters will be returned by
subsequent reads on that ``stream`` in the reverse order of their pushing. A successful
intervening call (with the stream pointed to by ``stream``) to a file positioning function
(``fseek, fsetpos``, or ``rewind``) discards any pushed-back wide characters for the
``stream``. The external storage corresponding to the ``stream`` is unchanged.

One wide character of pushback is guaranteed, even if the call to the ``ungetwc`` function
follows just after a call to a formatted wide character input function ``fwscanf,
vfwscanf, vwscanf``, or ``wscanf``. If the ``ungetwc`` function is called too many times
on the same stream without an intervening read or file positioning operation on that
stream, the operation may fail.

If the value of ``c`` equals that of the macro ``WEOF``, the operation fails and the input stream is
unchanged.

A successful call to the ``ungetwc`` function clears the end-of-file indicator for the stream.
The value of the file position indicator for the stream after reading or discarding all
pushed-back wide characters is the same as it was before the wide characters were pushed
back. For a text or binary stream, the value of its file position indicator after a successful
call to the ``ungetwc`` function is unspecified until all pushed-back wide characters are
read or discarded.

**Returns**

The ``ungetwc`` function returns the wide character pushed back, or ``WEOF`` if the operation
fails.

.. index:: wide string utilities

General wide string utilities
=============================
The header ``<wchar.h>`` declares a number of functions useful for wide string
manipulation. Various methods are used for determining the lengths of the arrays, but in
all cases a ``wchar_t *`` argument points to the initial (lowest addressed) element of the
array. If an array is accessed beyond the end of an object, the behavior is undefined.

Where an argument declared as ``size_t n`` determines the length of the array for a
function, ``n`` can have the value zero on a call to that function. Unless explicitly stated
otherwise in the description of a particular function in this subclause, pointer arguments
on such a call shall still have valid values, as described in :ref:`13.1.4`. On such a call, a
function that locates a wide character finds no occurrence, a function that compares two
wide character sequences returns zero, and a function that copies wide characters copies
zero wide characters.

.. index:: wide string numeric conversion functions

Wide string numeric conversion functions
----------------------------------------
.. index:: wcstod function, wcstof function, wcstold function

.. _36.4.1.1:

The ``wcstod, wcstof`` and ``wcstold`` functions
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   double wcstod(const wchar_t * restrict nptr,
		 wchar_t ** restrict endptr);
   float wcstof(const wchar_t * restrict nptr,
		wchar_t ** restrict endptr);
   long double wcstold(const wchar_t * restrict nptr,
		wchar_t ** restrict endptr);

**Description**

The ``wcstod, wcstof`` and ``wcstold`` functions convert the initial portion of the wide
string pointed to by ``nptr`` to ``double, float`` and ``long double`` representation,
respectively. First, they decompose the input string into three parts: an initial, possibly
empty, sequence of white-space wide characters (as specified by the ``iswspace``
function), a subject sequence resembling a floating-point constant or representing an
infinity or NaN; and a final wide string of one or more unrecognized wide characters,
including the terminating null wide character of the input wide string. Then, they attempt
to convert the subject sequence to a floating-point number, and return the result.

The expected form of the subject sequence is an optional plus or minus sign, then one of
the following:

* a nonempty sequence of decimal digits optionally containing a decimal-point wide
  character, then an optional exponent part as defined for the corresponding single-byte
  characters in :ref:`4.4.4.2`;
* a **0x** or **0X**, then a nonempty sequence of hexadecimal digits optionally containing a
  decimal-point wide character, then an optional binary exponent part as defined in
  :ref:`4.4.4.2`;
* **INF** or **INFINITY**, or any other wide string equivalent except for case
* **NAN** or **NAN** (:math:`n-wchar-sequence_{opt}`), or any other wide string equivalent except for
  case in the NAN part

The subject sequence is defined as the longest initial subsequence of the input wide
string, starting with the first non-white-space wide character, that is of the expected form.
The subject sequence contains no wide characters if the input wide string is not of the
expected form.

If the subject sequence has the expected form for a floating-point number, the sequence of
wide characters starting with the first digit or the decimal-point wide character
(whichever occurs first) is interpreted as a floating constant according to the rules of
:ref:`4.4.4.2`, except that the decimal-point wide character is used in place of a period, and that
if neither an exponent part nor a decimal-point wide character appears in a decimal
floating point number, or if a binary exponent part does not appear in a hexadecimal
floating point number, an exponent part of the appropriate type with value zero is
assumed to follow the last digit in the string. If the subject sequence begins with a minus
sign, the sequence is interpreted as negated. [#]_ A wide character sequence INF or
**INFINITY** is interpreted as an infinity, if representable in the return type, else like a
floating constant that is too large for the range of the return type. A wide character
sequence **NAN** or **NAN** (:math:`n-wchar-sequence_{opt}`) is interpreted as a quiet NaN, if supported
in the return type, else like a subject sequence part that does not have the expected form;
the meaning of the n-wchar sequences is implementation-defined. [#]_ A pointer to the
final wide string is stored in the object pointed to by ``endptr``, provided that ``endptr`` is
not a null pointer.

If the subject sequence has the hexadecimal form and ``FLT_RADIX`` is a power of 2, the
value resulting from the conversion is correctly rounded.

In other than the "C" locale, additional locale-specific subject sequence forms may be
accepted.

If the subject sequence is empty or does not have the expected form, no conversion is
performed; the value of ``nptr`` is stored in the object pointed to by ``endptr``, provided
that ``endptr`` is not a null pointer.

**Recommended practice**

If the subject sequence has the hexadecimal form, ``FLT_RADIX`` is not a power of 2, and
the result is not exactly representable, the result should be one of the two numbers in the
appropriate internal format that are adjacent to the hexadecimal floating source value,
with the extra stipulation that the error should have a correct sign for the current rounding
direction.

If the subject sequence has the decimal form and at most ``DECIMAL_DIG`` (defined in
``<float.h>``) significant digits, the result should be correctly rounded. If the subject
sequence ``D`` has the decimal form and more than ``DECIMAL_DIG`` significant digits,
consider the two bounding, adjacent decimal strings ``L`` and ``U``, both having
``DECIMAL_DIG`` significant digits, such that the values of ``L, D`` and ``U`` satisfy
:math:`L \le~D \le~U`.
The result should be one of the (equal or adjacent) values that would be obtained by
correctly rounding ``L`` and ``U`` according to the current rounding direction, with the extra
stipulation that the error with respect to D should have a correct sign for the current
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
       methods may yield different results if rounding is toward positive or neg ative infinity. In either case,
       the functions honor the sign of zero if floating-point arithmetic supports signed zeros.
.. [#] An implementation may use the n-wchar sequence to determine extra information to be represented in
       the NaN's significand.
.. [#] ``DECIMAL_DIG``, defined in ``<float.h>``, should be sufficiently large that ``L`` and ``U`` will usually round
       to the same internal floating value, but if not will round to adjacent values.

.. index:: wcstol function, wcstoll function, wcstoul function, wcstoull function

.. _36.4.1.2:

The ``wcstol, wcstoll, wcstoul`` and ``wcstoull`` functions
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   long int wcstol(const wchar_t * restrict nptr,
		wchar_t ** restrict endptr,
		int base);
   long long int wcstoll(const wchar_t * restrict nptr,
		wchar_t ** restrict endptr,
		int base);
   unsigned long int wcstoul(const wchar_t * restrict nptr,
		wchar_t ** restrict endptr,
		int base);
   unsigned long long int wcstoull(const wchar_t * restrict nptr,
		wchar_t ** restrict endptr,
		int base);

**Description**

The ``wcstol, wcstoll, wcstoul`` and ``wcstoull`` functions convert the initial
portion of the wide string pointed to by ``nptr`` to ``long int, long long int,
unsigned long int`` and ``unsigned long long int`` representation,
respectively. First, they decompose the input string into three parts: an initial, possibly
empty, sequence of white-space wide characters (as specified by the ``iswspace``
function), a subject sequence resembling an integer represented in some radix determined
by the value of ``base``, and a final wide string of one or more unrecognized wide
characters, including the terminating null wide character of the input wide string. Then,
they attempt to convert the subject sequence to an integer, and return the result.

If the value of base is zero, the expected form of the subject sequence is that of an
integer constant as described for the corresponding single-byte characters in :ref:`4.4.4.1`,
optionally preceded by a plus or minus sign, but not including an integer suffix. If the
value of ``base`` is between 2 and 36 (inclusive), the expected form of the subject sequence
is a sequence of letters and digits representing an integer with the radix specified by
``base``, optionally preceded by a plus or minus sign, but not including an integer suffix.
The letters from **a** (or **A**) through **z** (or **Z**) are ascribed the values 10 through 35; only
letters and digits whose ascribed values are less than that of ``base`` are permitted. If the
value of ``base`` is 16, the wide characters **0x** or **0X** may optionally precede the sequence
of letters and digits, following the sign if present.

The subject sequence is defined as the longest initial subsequence of the input wide
string, starting with the first non-white-space wide character, that is of the expected form.
The subject sequence contains no wide characters if the input wide string is empty or
consists entirely of white space, or if the first non-white-space wide character is other
than a sign or a permissible letter or digit.

If the subject sequence has the expected form and the value of ``base`` is zero, the sequence
of wide characters starting with the first digit is interpreted as an integer constant
according to the rules of :ref:`4.4.4.1`. If the subject sequence has the expected form and the
value of ``base`` is between 2 and 36, it is used as the base for conversion, ascribing to each
letter its value as given above. If the subject sequence begins with a minus sign, the value
resulting from the conversion is negated (in the return type). A pointer to the final wide
string is stored in the object pointed to by ``endptr``, provided that ``endptr`` is not a null
pointer.

In other than the "C" locale, additional locale-specific subject sequence forms may be
accepted.

If the subject sequence is empty or does not have the expected form, no conversion is
performed; the value of ``nptr`` is stored in the object pointed to by ``endptr``, provided
that ``endptr`` is not a null pointer.

**Returns**

The ``wcstol, wcstoll, wcstoul`` and ``wcstoull`` functions return the converted
value, if any. If no conversion could be performed, zero is returned. If the correct value
is outside the range of representable values, ``LONG_MIN, LONG_MAX, LLONG_MIN,
LLONG_MAX, ULONG_MAX`` or ``ULLONG_MAX`` is returned (according to the return type
sign of the value, if any), and the value of the macro ``ERANGE`` is stored in ``errno``.

.. index:: wide string copying function

Wide string copying functions
-----------------------------
.. index:: wcscpy function

The ``wcscpy`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcscpy(wchar_t * restrict s1,
		const wchar_t * restrict s2);

**Description**

The ``wcscpy`` function copies the wide string pointed to by ``s2`` (including the terminating
null wide character) into the array pointed to by ``s1``.

**Returns**

The ``wcscpy`` function returns the value of ``s1``.

.. index:: wcsncpy function

The ``wcsncpy`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcsncpy(wchar_t * restrict s1,
		const wchar_t * restrict s2,
		size_t n);

**Description**

The ``wcsncpy`` function copies not more than ``n`` wide characters (those that follow a null
wide character are not copied) from the array pointed to by ``s2`` to the array pointed to by
``s1``. [#]_

If the array pointed to by ``s2`` is a wide string that is shorter than ``n`` wide characters, null
wide characters are appended to the copy in the array pointed to by ``s1``, until ``n`` wide
characters in all have been written.

**Returns**

The ``wcsncpy`` function returns the value of ``s1``.

.. [#] Thus, if there is no null wide character in the first ``n`` wide characters of the array pointed to by ``s2``, the
       result will not be null-terminated.

.. index:: wmemcpy function

The ``wmemcpy`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wmemcpy(wchar_t * restrict s1,
		const wchar_t * restrict s2,
		size_t n);

**Description**

The ``wmemcpy`` function copies ``n`` wide characters from the object pointed to by ``s2`` to the
object pointed to by ``s1``.

**Returns**

The ``wmemcpy`` function returns the value of ``s1``.

.. index:: wmemmove function

The ``wmemmove`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wmemmove(wchar_t *s1, const wchar_t *s2,
		size_t n);

**Description**

The ``wmemmove`` function copies n wide characters from the object pointed to by ``s2`` to
the object pointed to by ``s1``. Copying takes place as if the ``n`` wide characters from the
object pointed to by ``s2`` are first copied into a temporary array of ``n`` wide characters that
does not overlap the objects pointed to by ``s1`` or ``s2``, and then the ``n`` wide characters from
the temporary array are copied into the object pointed to by ``s1``.

**Returns**

The ``wmemmove`` function returns the value of ``s1``.

.. index:: wide string conctatenation function

Wide string concatenation functions
-----------------------------------
.. index:: wcscat function

The ``wcscat`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcscat(wchar_t * restrict s1,
		const wchar_t * restrict s2);

**Description**

The ``wcscat`` function appends a copy of the wide string pointed to by ``s2`` (including the
terminating null wide character) to the end of the wide string pointed to by ``s1``. The initial
wide character of ``s2`` overwrites the null wide character at the end of ``s1``.

**Returns**

The ``wcscat`` function returns the value of ``s1``.

.. index:: wcsncat function

The ``wcsncat`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcsncat(wchar_t * restrict s1,
		const wchar_t * restrict s2,
		size_t n);

**Description**

The ``wcsncat`` function appends not more than ``n`` wide characters (a null wide character
and those that follow it are not appended) from the array pointed to by ``s2`` to the end of
the wide string pointed to by ``s1``. The initial wide character of ``s2`` overwrites the null
wide character at the end of ``s1``. A terminating null wide character is always appended to
the result. [#]_

**Returns**

The ``wcsncat`` function returns the value of ``s1``.

.. [#] Thus, the maximum number of wide characters that can end up in the array pointed to by ``s1`` is
       ``wcslen(s1)+n+1``.

.. index:: wide string comparison function

Wide string comparison functions
--------------------------------
Unless explicitly stated otherwise, the functions described in this subclause order two
wide characters the same way as two integers of the underlying integer type designated
by ``wchar_t``.

.. index:: wcscmp function

The ``wcscmp`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int wcscmp(const wchar_t *s1, const wchar_t *s2);

**Description**

The ``wcscmp`` function compares the wide string pointed to by ``s1`` to the wide string
pointed to by ``s2``.

**Returns**

The ``wcscmp`` function returns an integer greater than, equal to, or less than zero,
accordingly as the wide string pointed to by ``s1`` is greater than, equal to, or less than the
wide string pointed to by ``s2``.

.. index:: wcscoll function

The ``wcscoll`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int wcscoll(const wchar_t *s1, const wchar_t *s2);

**Description**

The ``wcscoll`` function compares the wide string pointed to by ``s1`` to the wide string
pointed to by ``s2``, both interpreted as appropriate to the ``LC_COLLATE`` category of the
current locale.

**Returns**

The ``wcscoll`` function returns an integer greater than, equal to, or less than zero,
accordingly as the wide string pointed to by ``s1`` is greater than, equal to, or less than the
wide string pointed to by ``s2`` when both are interpreted as appropriate to the current
locale.

.. index:: wcsncmp function

The ``wcsncmp`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int wcsncmp(const wchar_t *s1, const wchar_t *s2,
		size_t n);

**Description**

The ``wcsncmp`` function compares not more than ``n`` wide characters (those that follow a
null wide character are not compared) from the array pointed to by ``s1`` to the array
pointed to by ``s2``.

**Returns**

The ``wcsncmp`` function returns an integer greater than, equal to, or less than zero,
accordingly as the possibly null-terminated array pointed to by ``s1`` is greater than, equal
to, or less than the possibly null-terminated array pointed to by ``s2``.

.. index:: wcsxfrm function

The ``wcsxfrm`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t wcsxfrm(wchar_t * restrict s1,
		const wchar_t * restrict s2,
		size_t n);

**Description**

The ``wcsxfrm`` function transforms the wide string pointed to by ``s2`` and places the
resulting wide string into the array pointed to by ``s1``. The transformation is such that if
the ``wcscmp`` function is applied to two transformed wide strings, it returns a value greater
than, equal to, or less than zero, corresponding to the result of the ``wcscoll`` function
applied to the same two original wide strings. No more than ``n`` wide characters are placed
into the resulting array pointed to by ``s1``, including the terminating null wide character. If
``n`` is zero, ``s1`` is permitted to be a null pointer.

**Returns**

The ``wcsxfrm`` function returns the length of the transformed wide string (not including
the terminating null wide character). If the value returned is ``n`` or greater, the contents of
the array pointed to by ``s1`` are indeterminate.

EXAMPLE The value of the following expression is the length of the array needed to hold the
transformation of the wide string pointed to by ``s``::

  1 + wcsxfrm(NULL, s, 0)

.. index:: wmemcmp function

The ``wmemcmp`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int wmemcmp(const wchar_t *s1, const wchar_t *s2, size_t n);

**Description**

The ``wmemcmp`` function compares the first ``n`` wide characters of the object pointed to by
``s1`` to the first ``n`` wide characters of the object pointed to by ``s2``.

**Returns**

The ``wmemcmp`` function returns an integer greater than, equal to, or less than zero,
accordingly as the object pointed to by ``s1`` is greater than, equal to, or less than the object
pointed to by ``s2``.

.. index:: wide string search function

Wide string search functions
----------------------------
.. index:: wcschr function

The ``wcschr`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcschr(const wchar_t *s, wchar_t c);

**Description**

The ``wcschr`` function locates the first occurrence of ``c`` in the wide string pointed to by ``s``.
The terminating null wide character is considered to be part of the wide string.

**Returns**

The ``wcschr`` function returns a pointer to the located wide character, or a null pointer if
the wide character does not occur in the wide string.

.. index:: wcscspn function

The ``wcscspn`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t wcscspn(const wchar_t *s1, const wchar_t *s2);

**Description**

The ``wcscspn`` function computes the length of the maximum initial segment of the wide
string pointed to by ``s1`` which consists entirely of wide characters not from the wide
string pointed to by ``s2``.

**Returns**

The ``wcscspn`` function returns the length of the segment.

.. index:: wcspbrk function

The ``wcspbrk`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcspbrk(const wchar_t *s1, const wchar_t *s2);

**Description**

The ``wcspbrk`` function locates the first occurrence in the wide string pointed to by ``s1`` of
any wide character from the wide string pointed to by ``s2``.

**Returns**

The ``wcspbrk`` function returns a pointer to the wide character in ``s1``, or a null pointer if
no wide character from ``s2`` occurs in ``s1``.

.. index:: wcsrchr function

The ``wcsrchr`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcsrchr(const wchar_t *s, wchar_t c);

**Description**

The ``wcsrchr`` function locates the last occurrence of ``c`` in the wide string pointed to by
``s``. The terminating null wide character is considered to be part of the wide string.

**Returns**

The ``wcsrchr`` function returns a pointer to the wide character, or a null pointer if ``c`` does
not occur in the wide string.

.. index:: wcsspn function

The ``wcsspn`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t wcsspn(const wchar_t *s1, const wchar_t *s2);

**Description**

The ``wcsspn`` function computes the length of the maximum initial segment of the wide
string pointed to by ``s1`` which consists entirely of wide characters from the wide string
pointed to by ``s2``.

**Returns**

The ``wcsspn`` function returns the length of the segment.

.. index:: wcsstr function

The ``wcsstr`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcsstr(const wchar_t *s1, const wchar_t *s2);

**Description**

The ``wcsstr`` function locates the first occurrence in the wide string pointed to by ``s1`` of
the sequence of wide characters (excluding the terminating null wide character) in the
wide string pointed to by ``s2``.

**Returns**

The ``wcsstr`` function returns a pointer to the located wide string, or a null pointer if the
wide string is not found. If ``s2`` points to a wide string with zero length, the function
returns ``s1``.

.. index:: wcstok function

The ``wcstok`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wcstok(wchar_t * restrict s1, const wchar_t * restrict s2, wchar_t ** restrict ptr);

**Description**

A sequence of calls to the wcstok function breaks the wide string pointed to by ``s1`` into
a sequence of tokens, each of which is delimited by a wide character from the wide string
pointed to by ``s2``. The third argument points to a caller-provided ``wchar_t`` pointer into
which the ``wcstok`` function stores information necessary for it to continue scanning the
same wide string.

The first call in a sequence has a non-null first argument and stores an initial value in the
object pointed to by ``ptr``. Subsequent calls in the sequence have a null first argument and
the object pointed to by ptr is required to have the value stored by the previous call in
the sequence, which is then updated. The separator wide string pointed to by s2 may be
different from call to call.

The first call in the sequence searches the wide string pointed to by ``s1`` for the first wide
character that is not contained in the current separator wide string pointed to by ``s2``. If no
such wide character is found, then there are no tokens in the wide string pointed to by ``s1``
and the wcstok function returns a null pointer. If such a wide character is found, it is
the start of the first token.

The ``wcstok`` function then searches from there for a wide character that is contained in
the current separator wide string. If no such wide character is found, the current token
extends to the end of the wide string pointed to by ``s1``, and subsequent searches in the
same wide string for a token return a null pointer. If such a wide character is found, it is
overwritten by a null wide character, which terminates the current token.

In all cases, the wcstok function stores sufficient information in the pointer pointed to
by ``ptr`` so that subsequent calls, with a null pointer for ``s1`` and the unmodified pointer
value for ``ptr``, shall start searching just past the element overwritten by a null wide
character (if any).

**Returns**

The ``wcstok`` function returns a pointer to the first wide character of a token, or a null
pointer if there is no token.

EXAMPLE

.. code-block:: c

   #include <wchar.h>
   static wchar_t str1[] = L"?a???b,,,#c";
   static wchar_t str2[] = L"\t \t";
   wchar_t *t, *ptr1, *ptr2;

   t = wcstok(str1, L"?", &ptr1); // t points to the token L"a"
   t = wcstok(NULL, L",", &ptr1); // t points to the token L"??b"
   t = wcstok(str2, L" \t", &ptr2); // t is a null pointer
   t = wcstok(NULL, L"#,", &ptr1); // t points to the token L"c"
   t = wcstok(NULL, L"?", &ptr1); // t is a null pointer

.. index:: wmemchr function

The ``wmemchr`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wmemchr(const wchar_t *s, wchar_t c, size_t n);

**Description**

The ``wmemchr`` function locates the first occurrence of ``c`` in the initial ``n`` wide characters of
the object pointed to by ``s``.

**Returns**

The ``wmemchr`` function returns a pointer to the located wide character, or a null pointer if
the wide character does not occur in the object.

Miscellaneous functions
-----------------------
.. index:: wcslen function

The ``wcslen`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t wcslen(const wchar_t *s);

**Description**

The ``wcslen`` function computes the length of the wide string pointed to by ``s``.

**Returns**

The ``wcslen`` function returns the number of wide characters that precede the terminating
null wide character.

.. index:: wmemset function

The ``wmemset`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   wchar_t *wmemset(wchar_t *s, wchar_t c, size_t n);

**Description**

The ``wmemset`` function copies the value of ``c`` into each of the first ``n`` wide characters of
the object pointed to by ``s``.

**Returns**

The ``wmemset`` function returns the value of ``s``.

.. index:: wide character time conversion functions

Wide character time conversion functions
========================================
.. index:: wcsftime function

The ``wcsftime`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <time.h>
   #include <wchar.h>
   size_t wcsftime(wchar_t * restrict s, size_t maxsize,
		const wchar_t * restrict format,
		const struct tm * restrict timeptr);

**Description**

The ``wcsftime`` function is equivalent to the ``strftime`` function, except that:

- The argument ``s`` points to the initial element of an array of wide characters into which
  the generated output is to be placed.
- The argument ``maxsize`` indicates the limiting number of wide characters.
- The argument format is a wide string and the conversion specifiers are replaced by
  corresponding sequences of wide characters.
- The return value indicates the number of wide characters.

**Returns**

If the total number of resulting wide characters including the terminating null wide
character is not more than ``maxsize``, the ``wcsftime`` function returns the number of
wide characters placed into the array pointed to by s not including the terminating null
wide character. Otherwise, zero is returned and the contents of the array are
indeterminate.

.. _36.6:

Extended multibyte/wide character conversion utilities
======================================================
The header ``<wchar.h>`` declares an extended set of functions useful for conversion
between multibyte characters and wide characters.

Most of the following functions - those that are listed as "restartable", :ref:`36.6.3` and
:ref:`36.6.4` - take as a last argument a pointer to an object of type ``mbstate_t`` that is used
to describe the current conversion state from a particular multibyte character sequence to
a wide character sequence (or the reverse) under the rules of a particular setting for the
``LC_CTYPE`` category of the current locale.

The initial conversion state corresponds, for a conversion in either direction, to the
beginning of a new multibyte character in the initial shift state. A zero-valued
``mbstate_t`` object is (at least) one way to describe an initial conversion state. A zerovalued
``mbstate_t`` object can be used to initiate conversion involving any multibyte
character sequence, in any **LC_CTYPE** category setting. If an ``mbstate_t`` object has
been altered by any of the functions described in this subclause, and is then used with a
different multibyte character sequence, or in the other conversion direction, or with a
different **LC_CTYPE** category setting than on earlier function calls, the behavior is
undefined. [#]_

On entry, each function takes the described conversion state (either internal or pointed to
by an argument) as current. The conversion state described by the pointed-to object is
altered as needed to track the shift state, and the position within a multibyte character, for
the associated multibyte character sequence.

.. [#] Thus, a particular ``mbstate_t`` object can be used, for example, with both the ``mbrtowc`` and
       ``mbsrtowcs`` functions as long as they are used to step sequentially through the same multibyte
       character string.

Single-byte/wide character conversion functions
-----------------------------------------------
.. index:: btowc function

.. _36.6.1.1:

The ``btowc`` function
^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   wint_t btowc(int c);

**Description**

The ``btowc`` function determines whether ``c`` constitutes a valid single-byte character in the
initial shift state.

**Returns**

The ``btowc`` function returns ``WEOF`` if ``c`` has the value ``EOF`` or if ``(unsigned char)c``
does not constitute a valid single-byte character in the initial shift state. Otherwise, it
returns the wide character representation of that character.

.. index:: wctob function

.. _36.6.1.2:

The ``wctob`` function
^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <stdio.h>
   #include <wchar.h>
   int wctob(wint_t c);

**Description**

The ``wctob`` function determines whether ``c`` corresponds to a member of the extended
character set whose multibyte character representation is a single byte when in the initial
shift state.

**Returns**

The ``wctob`` function returns ``EOF`` if ``c`` does not correspond to a multibyte character with
length one in the initial shift state. Otherwise, it returns the single-byte representation of
that character as an unsigned char converted to an ``int``.

Conversion state functions
--------------------------
.. index:: mbsinit function

The ``mbsinit`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   int mbsinit(const mbstate_t *ps);

**Description**

If ``ps`` is not a null pointer, the mbsinit function determines whether the pointed-to
``mbstate_t`` object describes an initial conversion state.

**Returns**

The ``mbsinit`` function returns nonzero if ``ps`` is a null pointer or if the pointed-to object
describes an initial conversion state; otherwise, it returns zero.

.. _36.6.3:

Restartable multibyte/wide character conversion functions
---------------------------------------------------------
These functions differ from the corresponding multibyte character functions of :ref:`32.7`
(``mblen, mbtowc,`` and ``wctomb``) in that they hav ``e`` an extra parameter, ``ps,`` of type
pointer to ``mbstate_t`` that points to an object that can completely describe the current
conversion state of the associated multibyte character sequence. If ``ps`` is a null pointer,
each function uses its own internal ``mbstate_t`` object instead, which is initialized at
program startup to the initial conversion state. The implementation behaves as if no
library function calls these functions with a null pointer for ``ps``.

Also unlike their corresponding functions, the return value does not represent whether the
encoding is state-dependent.

.. index:: mbrlen function

The ``mbrlen`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t mbrlen(const char * restrict s, size_t n, mbstate_t * restrict ps);

**Description**

The ``mbrlen`` function is equivalent to the call:

.. code-block:: c

   mbrtowc(NULL, s, n, ps != NULL ? ps : &internal)

where ``internal`` is the ``mbstate_t`` object for the ``mbrlen`` function, except that the
expression designated by ps is evaluated only once.

**Returns**

The ``mbrlen`` function returns a value between zero and ``n``, inclusive, ``(size_t)(-2),``
or ``(size_t)(-1)``.

**Forward references:** the ``mbrtowc`` function (:ref:`36.6.3.2`).

.. index:: mbrtowc function

.. _36.6.3.2:

The ``mbrtowc`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t mbrtowc(wchar_t * restrict pwc,
		const char * restrict s, size_t n, mbstate_t * restrict ps);

**Description**

If ``s`` is a null pointer, the ``mbrtowc`` function is equivalent to the call:

.. code-block:: c

   mbrtowc(NULL, "", 1, ps)

In this case, the values of the parameters ``pwc`` and ``n`` are ignored.

If ``s`` is not a null pointer, the ``mbrtowc`` function inspects at most ``n`` bytes beginning with
the byte pointed to by ``s`` to determine the number of bytes needed to complete the next
multibyte character (including any shift sequences). If the function determines that the
next multibyte character is complete and valid, it determines the value of the
corresponding wide character and then, if pwc is not a null pointer, stores that value in
the object pointed to by pwc. If the corresponding wide character is the null wide
character, the resulting state described is the initial conversion state.

**Returns**

The ``mbrtowc`` function returns the first of the following that applies (given the current
conversion state):

``0`` if the next ``n`` or fewer bytes complete the multibyte character that
corresponds to the null wide character (which is the value stored).
between 1 and ``n`` inclusive if the next ``n`` or fewer bytes complete a valid multibyte
character (which is the value stored); the value returned is the number
of bytes that complete the multibyte character.

``(size_t)(-2)`` if the next ``n`` bytes contribute to an incomplete (but potentially valid)
multibyte character, and all ``n`` bytes have been processed (no value is
stored). [#]_

``(size_t)(-1)`` if an encoding error occurs, in which case the next ``n`` or fewer bytes
do not contribute to a complete and valid multibyte character (no
value is stored); the value of the macro **EILSEQ** is stored in **errno**,
and the conversion state is unspecified.

.. [#] When ``n`` has at least the value of the **MB_CUR_MAX** macro, this case can only occur if ``s`` points at a
       sequence of redundant shift sequences (for implementations with state-dependent encodings).

.. index:: wcrtomb function

.. _36.6.3.3:

The ``wcrtomb`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t wcrtomb(char * restrict s, wchar_t wc,
		mbstate_t * restrict ps);

**Description**

If ``s`` is a null pointer, the ``wcrtomb`` function is equivalent to the call
``wcrtomb(buf, L'\0', ps)`` where buf is an internal buffer.

If ``s`` is not a null pointer, the ``wcrtomb`` function determines the number of bytes needed
to represent the multibyte character that corresponds to the wide character given by ``wc``
(including any shift sequences), and stores the multibyte character representation in the
array whose first element is pointed to by ``s``. At most **MB_CUR_MAX** bytes are stored. If
``wc`` is a null wide character, a null byte is stored, preceded by any shift sequence needed
to restore the initial shift state; the resulting state described is the initial conversion state.

**Returns**

The ``wcrtomb`` function returns the number of bytes stored in the array object (including
any shift sequences). When ``wc`` is not a valid wide character, an encoding error occurs:
the function stores the value of the macro **EILSEQ** in **errno** and returns
``(size_t)(-1);`` the conversion state is unspecified.

.. _36.6.4:

Restartable multibyte/wide string conversion functions
------------------------------------------------------
These functions differ from the corresponding multibyte string functions of :ref:`32.8`
(``mbstowcs`` and ``wcstombs``) in that they hav ``e`` an extra parameter, ``ps``, of type pointer to
``mbstate_t`` that points to an object that can completely describe the current conversion
state of the associated multibyte character sequence. If ``ps`` is a null pointer, each function
uses its own internal ``mbstate_t`` object instead, which is initialized at program startup
to the initial conversion state. The implementation behaves as if no library function calls
these functions with a null pointer for ``ps``.

Also unlike their corresponding functions, the conversion source parameter, ``src``, has a
pointer-to-pointer type. When the function is storing the results of conversions (that is,
when ``dst`` is not a null pointer), the pointer object pointed to by this parameter is updated
to reflect the amount of the source processed by that invocation.

.. index:: mbsrtowcs function

The ``mbsrtowcs`` function
^^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t mbsrtowcs(wchar_t * restrict dst,
		const char ** restrict src,
		size_t len, mbstate_t * restrict ps);

**Description**

The ``mbsrtowcs`` function converts a sequence of multibyte characters that begins in the
conversion state described by the object pointed to by ``ps``, from the array indirectly
pointed to by ``src`` into a sequence of corresponding wide characters. If ``dst`` is not a null
pointer, the converted characters are stored into the array pointed to by ``dst``. Conversion
continues up to and including a terminating null character, which is also stored.
Conversion stops earlier in two cases: when a sequence of bytes is encountered that does
not form a valid multibyte character, or (if ``dst`` is not a null pointer) when ``len`` wide
characters have been stored into the array pointed to by dst. [#]_ Each conversion takes
place as if by a call to the ``mbrtowc`` function.

If ``dst`` is not a null pointer, the pointer object pointed to by ``src`` is assigned either a null
pointer (if conversion stopped due to reaching a terminating null character) or the address
just past the last multibyte character converted (if any). If conversion stopped due to
reaching a terminating null character and if ``dst`` is not a null pointer, the resulting state
described is the initial conversion state.

**Returns**

If the input conversion encounters a sequence of bytes that do not form a valid multibyte
character, an encoding error occurs: the ``mbsrtowcs`` function stores the value of the
macro **EILSEQ** in **errno** and returns ``(size_t)(-1);`` the conversion state is
unspecified. Otherwise, it returns the number of multibyte characters successfully
converted, not including the terminating null character (if any).

.. [#] Thus, the value of ``len`` is ignored if ``dst`` is a null pointer.

.. index:: wcsrtombs function

The ``wcsrtombs`` function
^^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wchar.h>
   size_t wcsrtombs(char * restrict dst,
		const wchar_t ** restrict src,
		size_t len,
		mbstate_t * restrict ps);

**Description**

The ``wcsrtombs`` function converts a sequence of wide characters from the array
indirectly pointed to by ``src`` into a sequence of corresponding multibyte characters that
begins in the conversion state described by the object pointed to by ``ps``. If ``dst`` is not a
null pointer, the converted characters are then stored into the array pointed to by ``dst``.
Conversion continues up to and including a terminating null wide character, which is also
stored. Conversion stops earlier in two cases: when a wide character is reached that does
not correspond to a valid multibyte character, or (if ``dst`` is not a null pointer) when the
next multibyte character would exceed the limit of ``len`` total bytes to be stored into the
array pointed to by ``dst``. Each conversion takes place as if by a call to the wcrtomb
function. [#]_

If ``dst`` is not a null pointer, the pointer object pointed to by ``src`` is assigned either a null
pointer (if conversion stopped due to reaching a terminating null wide character) or the
address just past the last wide character converted (if any). If conversion stopped due to
reaching a terminating null wide character, the resulting state described is the initial
conversion state.

**Returns**

If conversion stops because a wide character is reached that does not correspond to a
valid multibyte character, an encoding error occurs: the ``wcsrtombs`` function stores the
value of the macro **EILSEQ** in **errno** and returns ``(size_t)(-1);`` the conversion
state is unspecified. Otherwise, it returns the number of bytes in the resulting multibyte
character sequence, not including the terminating null character (if any).

.. [#] If conversion stops because a terminating null wide character has been reached, the bytes stored
       include those necessary to reach the initial shift state immediately before the null byte.

