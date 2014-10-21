The C Standard Library
**********************
This chapter and rest of book eflects chapter 7 of n1124.pdf. This chapter begins
with ``assert.h``. We will see three parts of each function/macro as much as
possible. From specification, compiler and example point of view in that order.

.. _13.1:

Introduction
============

.. index:: string, decimal-point character, null wide charcater, wide string, shift sequence

.. _13.1.1:

Definitions of terms
--------------------
A *string* is a contiguous sequence of characters terminated by and including
the first null character. The term *multibyte string* is sometimes used instead
to emphasize special processing given to multibyte characters contained in the
string or to avoid confusion with a wide string. A *pointer to a string* is a
pointer to its initial (lowest addressed) character. The *length of a string* is
the number of bytes preceding the null character and the *value of a string* is
the sequence of the values of the contained characters, in order.

The *decimal-point character* is the character used by functions that convert
floating-point numbers to or from character sequences to denote the beginning
of the fractional part of such character sequences. [#]_ It is represented in
the text and examples by a period, but may be changed by the ``setlocale``
function.

A *null wide character* is a wide character with code value zero.

A *wide string* is a contiguous sequence of wide characters terminated by and
including the first null wide character. A *pointer to a wide string* is a
pointer to its initial (lowest addressed) wide character. The *length of a wide
string* is the number of wide characters preceding the null wide character and
the *value of a wide string* is the sequence of code values of the contained
wide characters, in order.

A *shift sequence* is a contiguous sequence of bytes within a multibyte string
that (potentially) causes a change in shift state. A shift sequence shall not
have a corresponding wide character; it is instead taken to be an adjunct to an
adjacent multibyte character. [#]_

**Forward references:** character handling (14.4), the setlocale function
(14.11.1.1).

.. [#] The functions that make use of the decimal-point character are the
  numeric conversion functions (14.20.1, 14.24.4.1) and the formatted
  input/output functions (14.19.6, 14.24.2).
.. [#] For state-dependent encodings, the values for ``MB_CUR_MAX`` and
  ``MB_LEN_MAX`` shall thus be large enough to count all the bytes in any
  complete multibyte character plus at least one adjacent shift sequence of
  maximum length. Whether these counts provide for more than one shift sequence
  is the implementation's choice.

.. index:: standard headers

Standard Headers
----------------
Each library function is declared, with a type that includes a prototype, in a
header, [#]_ whose contents are made available by the ``#include`` preprocessing
directive. The header declares a set of related functions, plus any necessary
types and additional macros needed to facilitate their use. Declarations of
types described in this clause shall not include type qualifiers, unless
explicitly stated otherwise.

The standard headers are::

  <assert.h>  <inttypes.h> <signal.h>  <stdlib.h>
  <complex.h> <iso646.h>   <stdarg.h>  <string.h>
  <ctype.h>   <limits.h>   <stdbool.h> <tgmath.h>
  <errno.h>   <locale.h>   <stddef.h>  <time.h>
  <fenv.h>    <math.h>     <stdint.h>  <wchar.h>
  <float.h>   <setjmp.h>   <stdio.h>   <wctype.h>

If a file with the same name as one of the above < and > delimited sequences,
not provided as part of the implementation, is placed in any of the standard
places that are searched for included source files, the behavior is undefined.

Standard headers may be included in any order; each may be included more than\
once in a giv en scope, with no effect different from being included only once,
except that the effect of including ``<assert.h>`` depends on the definition of
``NDEBUG`` (see 14.2). If used, a header shall be included outside of any
external declaration or definition, and it shall first be included before the
first reference to any of the functions or objects it declares, or to any of
the types or macros it defines. However, if an identifier is declared or
defined in more than one header, the second and subsequent associated headers
may be included after the initial reference to the identifier. The program
shall not have any macros with names lexically identical to keywords currently
defined prior to the inclusion.

Any definition of an object-like macro described in this clause shall expand to
code that is fully protected by parentheses where necessary, so that it groups
in an arbitrary expression as if it were a single identifier.

Any declaration of a library function shall have external linkage.

A summary of the contents of the standard headers is given in annex B.

**Forward references:** diagnostics (14.2).

.. [#] A header is not necessarily a source file, nor are the < and > delimited
  sequences in header names necessarily valid source file names.

.. index:: reserved identifiers

Reserved Identifiers
--------------------
Each header declares or defines all identifiers listed in its associated
subclause, and optionally declares or defines identifiers listed in its
associated future library directions subclause and identifiers which are always
reserved either for any use or for use as file scope identifiers.

* All identifiers that begin with an underscore and either an uppercase letter
  or another underscore are always reserved for any use.
* All identifiers that begin with an underscore are always reserved for use as
  identifiers with file scope in both the ordinary and tag name spaces.
* Each macro name in any of the following subclauses (including the future
  library directions) is reserved for use as specified if any of its associated
  headers is included; unless explicitly stated otherwise (see 14.1.4).
* All identifiers with external linkage in any of the following subclauses
  (including the future library directions) are always reserved for use as
  identifiers with external linkage. [#]_
* Each identifier with file scope listed in any of the following subclauses
  (including the future library directions) is reserved for use as a macro name
  and as an identifier with file scope in the same name space if any of its
  associated headers is included.
 
No other identifiers are reserved. If the program declares or defines an
identifier in a context in which it is reserved (other than as allowed by
14.1.4), or defines a reserved identifier as a macro name, the behavior is
undefined. 

If the program removes (with ``#undef``) any macro definition of an identifier
in the first group listed above, the behavior is undefined.

.. [#] The list of reserved identifiers with external linkage includes
  ```errno, ath_errhandling, setjmp``, and ``va_end``.

.. _13.1.4:

Use of Library Functions
------------------------
Each of the following statements applies unless explicitly stated otherwise in
the detailed descriptions that follow: If an argument to a function has an
invalid value (such as a value outside the domain of the function, or a pointer
outside the address space of the program, or a null pointer, or a pointer to
non-modifiable storage when the corresponding parameter is not const-qualified) 
or a type (after promotion) not expected by a function with variable number of
arguments, the behavior is undefined. If a function argument is described as
being an array, the pointer actually passed to the function shall have a value
such that all address computations and accesses to objects (that would be valid
if the pointer did point to the first element of such an array) are in fact
valid. Any function declared in a header may be additionally implemented as a
function-like macro defined in the header, so if a library function is declared
explicitly when its header is included, one of the techniques shown below can
be used to ensure the declaration is not affected by such a macro. Any macro
definition of a function can be suppressed locally by enclosing the name of the
function in parentheses, because the name is then not followed by the left
parenthesis that indicates expansion of a macro function name. For the same
syntactic reason, it is permitted to take the address of a library function
even if it is also defined as a macro. [#]_ The use of ``#undef`` to remove any
macro definition will also ensure that an actual function is referred to. Any
invocation of a library function that is implemented as a macro shall expand to
code that evaluates each of its arguments exactly once, fully protected by
parentheses where necessary, so it is generally safe to use arbitrary
expressions as arguments. Likewise, those function-like macros described
in the following subclauses may be invoked in an expression anywhere a function
with a compatible return type could be called. [#]_ All object-like macros
listed as expanding to integer constant expressions shall additionally be
suitable for use in ``#if`` preprocessing directives.

Provided that a library function can be declared without reference to any type
defined in a header, it is also permissible to declare the function and use it
without including its associated header.

There is a sequence point immediately before a library function returns.

The functions in the standard library are not guaranteed to be reentrant and
may modify objects with static storage duration. [#]_

.. [#] This means that an implementation shall provide an actual function for
  each library function, even if it also provides a macro for that function.
.. [#] Such macros might not contain the sequence points that the corresponding
  function calls do.
.. [#] Thus, a signal handler cannot, in general, call standard library
  functions.

