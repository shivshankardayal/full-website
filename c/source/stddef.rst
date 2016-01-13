.. index:: stddef.h

.. _stddef:

Common definitions ``<stddef.h>``
*********************************
.. index:: ptrdiff_t type, size_t type, wchar_t type, NULL, offsetof

The following types and macros are defined in the standard header ``<stddef.h>``. Some
are also defined in other headers, as noted in their respective subclauses.

The types are

  | ``ptrdiff_t``

which is the signed integer type of the result of subtracting two pointers;

  | ``size_t``

which is the unsigned integer type of the result of the sizeof operator; and

  | ``wchar_t``

which is an integer type whose range of values can represent distinct codes for all
members of the largest extended character set specified among the supported locales; the
null character shall have the code value zero.

The macros are

  | ``NULL``

which expands to an implementation-defined null pointer constant; and

  | ``offsetof`` (*type, member-designator*)

which expands to an integer constant expression that has type ``size_t``, the value of
which is the offset in bytes, to the structure member (designated by member-designator),
from the beginning of its structure (designated by type). The type and member designator
shall be such that given

  | ``static type t;``

then the expression ``&`` (``t``.*member-designator*) evaluates to an address constant. (If the
specified member is a bit-field, the behavior is undefined.)

**Recommended practice**

The types used for ``size_t`` and ``ptrdiff_t`` should not have an integer conversion rank
greater than that of ``signed long int`` unless the implementation supports objects
large enough to make this necessary.
