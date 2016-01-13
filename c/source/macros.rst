.. index::
   single: preprocessing directives

.. _macros:

Preprocessing Directives
************************
The following come from section 6.10 of specification. It will terminate when you
see code starting. :-)
**Description**

A *preprocessing directive* consists of a sequence of preprocessing tokens that
begins with a ``#`` preprocessing token that (at the start of translation phase
4) is either the first character in the source file (optionally after white space
containing no new-line characters) or that follows white space containing at
least one new-line character, and is ended by the next new-line character. [#]_
A new-line character ends the preprocessing directive even if it occurs within
what would otherwise be an invocation of a function-like macro.

A text line shall not begin with a ``#`` preprocessing token. A non-directive
shall not begin with any of the directive names appearing in the syntax.

When in a group that is skipped (12.1), the directive syntax is relaxed to allow
any sequence of preprocessing tokens to occur between the directive name and the
following new-line character.

.. [#] Thus, preprocessing directives are commonly called "lines". These "lines" 
  have no other syntactic significance, as all white space is equivalent except
  in certain situations during preprocessing (see the # character string literal
  creation operator in 12.3.2, for example).

**Constraints**

The only white-space characters that shall appear between preprocessing tokens
within a preprocessing directive (from just after the introducing ``#``
preprocessing token through just before the terminating new-line character) are
space and horizontal-tab (including spaces that have replaced comments or
possibly other white-space characters in translation phase 3).

**Semantics**

The implementation can process and skip sections of source files conditionally,
include other source files, and replace macros. These capabilities are called
preprocessing, because conceptually they occur before translation of the
resulting translation unit.

The preprocessing tokens within a preprocessing directive are not subject to
macro expansion unless otherwise stated.

EXAMPLE In:

.. code-block:: c

  #define EMPTY
  EMPTY # include <file.h>

the sequence of preprocessing tokens on the second line is not a preprocessing
directive, because it does not begin with a ``#`` at the start of translation
phase 4, even though it will do so after the macro ``EMPTY`` has been replaced.

.. index::
   single: conditional; inclusion

.. _12.1:

Conditional Inclusion
=====================
**Contraints**

The expression that controls conditional inclusion shall be an integer constant
expression except that: it shall not contain a cast; identifiers (including those
lexically identical to keywords) are interpreted as described below; [#]_ and it
may contain unary operator expressions of the form::

  defined identifier

or::

  defined (identifier)

which evaluate to 1 if the identifier is currently defined as a macro name (that
is, if it is predefined or if it has been the subject of a ``#define``
preprocessing directive without an intervening ``#undef`` directive with the same
subject identifier), 0 if it is not.

.. [#] Because the controlling constant expression is evaluated during
  translation phase 4, all identifiers either are or are not macro names - there
  simply are no keywords, enumeration constants, etc.

**Semantics**

Preprocessing directives of the forms::

  # if constant-expression new-line group_opt
  # elif constant-expression new-line group_opt

check whether the controlling constant expression evaluates to nonzero.

Prior to evaluation, macro invocations in the list of preprocessing tokens that
will become the controlling constant expression are replaced (except for those
macro names modified by the ``defined`` unary operator), just as in normal text.
If the token ``defined`` is generated as a result of this replacement process or
use of the ``defined`` unary operator does not match one of the two specified
forms prior to macro replacement, the behavior is undefined. After all
replacements due to macro expansion and the ``defined`` unary operator have been
performed, all remaining identifiers are replaced with the pp-number 0, and then
each preprocessing token is converted into a token. The resulting tokens
compose the controlling constant expression which is evaluated according to the
rules of constant expressions. For the purposes of this token conversion and
evaluation, all signed integer types and all unsigned integer types act as if
they hav e the same representation as, respectively, the types ``intmax_t`` and
``uintmax_t`` defined in the header ``<stdint.h>``. [#]_ This includes
interpreting character constants, which may involve converting escape sequences
into execution character set members. Whether the numeric value for these
character constants matches the value obtained when an identical character
constant occurs in an expression (other than within a ``#if`` or ``#elif``
directive) is implementation-defined. [#]_ Also, whether a single-character
character constant may have a neg ative value is implementation-defined.

Preprocessing directives of the forms::

  # ifdef identifier new-line group_opt
  # ifndef identifier new-line group_opt

check whether the identifier is or is not currently defined as a macro name.
Their conditions are equivalent to ``#if defined`` *identifier* and ``#if
!defined`` *identifier* respectively.

Each directive's condition is checked in order. If it evaluates to false (zero),
the group that it controls is skipped: directives are processed only through the
name that determines the directive in order to keep track of the level of nested
conditionals; the rest of the directives' preprocessing tokens are ignored, as
are the other preprocessing tokens in the group. Only the first group whose
control condition evaluates to true (nonzero) is processed. If none of the
conditions evaluates to true, and there is a ``#else`` directive, the group
controlled by the ``#else`` is processed; lacking a ``#else`` directive, all the
groups until the ``#endif`` are skipped. [#]_

**Forward references:** macro replacement (12.3), source file inclusion (12.2),
largest integer types (13.18.1.5).

.. [#] Thus, on an implementation where ``INT_MAX`` is ``0x7FFF`` and
  ``UINT_MAX`` is ``0xFFFF``, the constant ``0x8000`` is signed and positive
  within a ``#if`` expression even though it would be unsigned in translation
  phase 7.
.. [#] Thus, the constant expression in the following ``#if`` directive and
  ``if`` statement is not guaranteed to evaluate to the same value in these two
  contexts.

  ``#if 'z' - 'a' == 25``

  ``if ('z' - 'a' == 25)``
.. [#] As indicated by the syntax, a preprocessing token shall not follow a
  ``#else`` or ``#endif`` directive before the terminating new-line character.
  However, comments may appear anywhere in a source file, including within a
  preprocessing directive.

.. index::
   single: source file inclusion

.. _12.2:

Source File Inclusion
=====================

**Constraints**

A ``#include`` directive shall identify a header or source file that can be
processed by the implementation.

**Semantics**

A preprocessing directive of the form::

  # include <h-char-sequence> new-line

searches a sequence of implementation-defined places for a header identified
uniquely by the specified sequence between the < and > delimiters, and causes the
replacement of that directive by the entire contents of the header. How the
places are specified or the header identified is implementation-defined.

A preprocessing directive of the form::

  # include "q-char-sequence" new-line

causes the replacement of that directive by the entire contents of the source
file identified by the specified sequence between the " delimiters. The named
source file is searched for in an implementation-defined manner. If this search
is not supported, or if the search fails, the directive is reprocessed as if it
read::

  # include <h-char-sequence> new-line

with the identical contained sequence (including > characters, if any) from the
original directive.

A preprocessing directive of the form::

  # include pp-tokens new-line

(that does not match one of the two previous forms) is permitted. The
preprocessing tokens after include in the directive are processed just as in
normal text. (Each identifier currently defined as a macro name is replaced by
its replacement list of preprocessing tokens.) The directive resulting after all
replacements shall match one of the two previous forms. [#]_ The method by which
a sequence of preprocessing tokens between a < and a > preprocessing token pair
or a pair of " characters is combined into a single header name preprocessing
token is implementation-defined.

The implementation shall provide unique mappings for sequences consisting of one
or more letters or digits followed by a period (.) and a single letter. The
first character shall be a letter. The implementation may ignore the
distinctions of alphabetical case and restrict the mapping to eight significant
characters before the period.

A ``#include`` preprocessing directive may appear in a source file that has been
read because of a ``#include`` directive in another file, up to an
implementation-defined nesting limit.

**Forward references:** macro replacement (12.3).

.. [#] Note that adjacent string literals are not concatenated into a single
  string literal; thus, an expansion that results in two string literals is an
  invalid directive.

.. index::
   single: macro replacement

.. _12.3:

Macro Replacement
=================
**Constraints**

Two replacement lists are identical if and only if the preprocessing tokens in
both have  the same number, ordering, spelling, and white-space separation, where
all white-space separations are considered identical.

An identifier currently defined as an object-like macro shall not be redefined by
another ``#define`` preprocessing directive unless the second definition is an
object-like macro definition and the two replacement lists are identical.
Likewise, an identifier currently defined as a function-like macro shall not be
redefined by another ``#define`` preprocessing directive unless the second
definition is a function-like macro definition that has the same number and
spelling of parameters, and the two replacement lists are identical.

There shall be white-space between the identifier and the replacement list in the
definition of an object-like macro.

If the identifier-list in the macro definition does not end with an ellipsis, the
number of arguments (including those arguments consisting of no preprocessing
tokens) in an invocation of a function-like macro shall equal the number of
parameters in the macro definition. Otherwise, there shall be more arguments in
the invocation than there are parameters in the macro definition (excluding the
...). There shall exist a ) preprocessing token that terminates the invocation.

The identifier ``__VA_ARGS__`` shall occur only in the replacement-list of a
function-like macro that uses the ellipsis notation in the parameters.

A parameter identifier in a function-like macro shall be uniquely declared within
its scope.

**Semantics**

The identifier immediately following the define is called the macro name. There
is one name space for macro names. Any white-space characters preceding or
following the replacement list of preprocessing tokens are not considered part of
the replacement list for either form of macro.

If a ``#`` preprocessing token, followed by an identifier, occurs lexically at
the point at which a preprocessing directive could begin, the identifier is not
subject to macro replacement.

A preprocessing directive of the form::

  # define identifier replacement-list new-line

defines an object-like macro that causes each subsequent instance of the macro
name [#]_ to be replaced by the replacement list of preprocessing tokens that
constitute the remainder of the directive.

A preprocessing directive of the form::

  # define identifier lparen identifier-listopt ) replacement-list new-line
  # define identifier lparen ... ) replacement-list new-line
  # define identifier lparen identifier-list , ... ) replacement-list new-line

defines a function-like macro with arguments, similar syntactically to a function
call. The parameters are specified by the optional list of identifiers, whose
scope extends from their declaration in the identifier list until the new-line
character that terminates the ``#define`` preprocessing directive. Each
subsequent instance of the function-like macro name followed by a ( as the next
preprocessing token introduces the sequence of preprocessing tokens that is
replaced by the replacement list in the definition (an invocation of the macro).
The replaced sequence of preprocessing tokens is terminated by the matching )
preprocessing token, skipping intervening matched pairs of left and right
parenthesis preprocessing tokens. Within the sequence of preprocessing tokens
making up an invocation of a function-like macro, new-line is considered a normal
white-space character.

The sequence of preprocessing tokens bounded by the outside-most matching
parentheses forms the list of arguments for the function-like macro. The
individual arguments within the list are separated by comma preprocessing tokens,
but comma preprocessing tokens between matching inner parentheses do not separate
arguments. If there are sequences of preprocessing tokens within the list of
arguments that would otherwise act as preprocessing directives, [#]_ the behavior
is undefined.

If there is a ... in the identifier-list in the macro definition, then the
trailing arguments, including any separating comma preprocessing tokens, are
merged to form a single item: the *variable arguments*. The number of arguments
combined is such that, following merger, the number of arguments is one more than
the number of parameters in the macro definition (excluding the ...).

.. [#] Since, by macro-replacement time, all character constants and string
  literals are preprocessing tokens, not sequences possibly containing
  identifier-like subsequences, they are never scanned for macro names or
  parameters.
.. [#] Despite the name, a non-directive is a preprocessing directive.

.. index::
   single: argument substition

.. _12.3.1:

Argument Substitution
---------------------
After the arguments for the invocation of a function-like macro have been
identified, argument substitution takes place. A parameter in the replacement
list, unless preceded by a ``#`` or ``##`` preprocessing token or followed by a
``##`` preprocessing token (see below), is replaced by the corresponding argument
after all macros contained therein have been expanded. Before being substituted,
each argument's preprocessing tokens are completely macro replaced as if they
formed the rest of the preprocessing file; no other preprocessing tokens are
available.

An identifier ``__VA_ARGS__`` that occurs in the replacement list shall be
treated as if it were a parameter, and the variable arguments shall form the
preprocessing tokens used to replace it.

.. index::
   pair: #; operators

.. _12.3.2:

The # Operator
--------------
**Constraints**

Each ``#`` preprocessing token in the replacement list for a function-like macro
shall be followed by a parameter as the next preprocessing token in the
replacement list.

**Semantics**

If, in the replacement list, a parameter is immediately preceded by a ``#``
preprocessing token, both are replaced by a single character string literal
preprocessing token that contains the spelling of the preprocessing token
sequence for the corresponding argument. Each occurrence of white space between
the argument's preprocessing tokens becomes a single space character in the
character string literal. White space before the first preprocessing token and
after the last preprocessing token composing the argument is deleted. Otherwise,
the original spelling of each preprocessing token in the argument is retained in
the character string literal, except for special handling for producing the
spelling of string literals and character constants: a \\ character is inserted
before each " and \\ character of a character constant or string literal
(including the delimiting " characters), except that it is implementation-defined
whether a \\ character is inserted before the \\ character beginning a universal
character name. If the replacement that results is not a valid character string
literal, the behavior is undefined. The character string literal corresponding
to an empty argument is "". The order of evaluation of ``#`` and ``##`` operators
is unspecified.

.. index::
   pair: ##; operators

.. _12.3.3:

The ## Operator
---------------
**Constraints**

A ``##`` preprocessing token shall not occur at the beginning or at the end of a
replacement list for either form of macro definition.

**Semantics**

If, in the replacement list of a function-like macro, a parameter is immediately
preceded or followed by a ``##`` preprocessing token, the parameter is replaced
by the corresponding argument's preprocessing token sequence; however, if an
argument consists of no preprocessing tokens, the parameter is replaced by a
placemarker preprocessing token instead. [#]_

For both object-like and function-like macro invocations, before the replacement
list is reexamined for more macro names to replace, each instance of a ``##``
preprocessing token in the replacement list (not from an argument) is deleted and
the preceding preprocessing token is concatenated with the following
preprocessing token. Placemarker preprocessing tokens are handled specially:
concatenation of two placemarkers results in a single placemarker preprocessing
token, and concatenation of a placemarker with a non-placemarker preprocessing
token results in the non-placemarker preprocessing token. If the result is not a
valid preprocessing token, the behavior is undefined. The resulting token is
available for further macro replacement. The order of evaluation of ``##``
operators is unspecified.

.. [#] Placemarker preprocessing tokens do not appear in the syntax because they
  are temporary entities that exist only within translation phase 4.

.. _12.3.4:

Rescanning and Further Replacement
----------------------------------
After all parameters in the replacement list have been substituted and ``#`` and
``##`` processing has taken place, all placemarker preprocessing tokens are
removed. Then, the resulting preprocessing token sequence is rescanned, along
with all subsequent preprocessing tokens of the source file, for more macro names
to replace.

If the name of the macro being replaced is found during this scan of the
replacement list (not including the rest of the source file’s preprocessing
tokens), it is not replaced. Furthermore, if any nested replacements encounter
the name of the macro being replaced, it is not replaced. These nonreplaced macro
name preprocessing tokens are no longer available for further replacement even if
they are later (re)examined in contexts in which that macro name preprocessing
token would otherwise have been replaced.

The resulting completely macro-replaced preprocessing token sequence is not
processed as a preprocessing directive even if it resembles one, but all pragma
unary operator expressions within it are then processed as specified in 12.9
below.

.. index::
   pair: scope; macro definitions

.. _12.3.5:

Scope of Macro Definitions
--------------------------
A macro definition lasts (independent of block structure) until a corresponding
``#undef`` directive is encountered or (if none is encountered) until the end of
the preprocessing translation unit. Macro definitions have no significance after
translation phase 4.

A preprocessing directive of the form::

  # undef identifier new-line

causes the specified identifier no longer to be defined as a macro name. It is
ignored if the specified identifier is not currently defined as a macro name.

.. index::
   single: line control

.. _12.4:

Line Control
============
**Constraints**

The string literal of a #line directive, if present, shall be a character string
literal.

**Semantics**

The line number of the current source line is one greater than the number of
new-line characters read or introduced in translation phase 1 while processing
the source file to the current token.

A preprocessing directive of the form::

  # line digit-sequence new-line

causes the implementation to behave as if the following sequence of source lines
begins with a source line that has a line number as specified by the digit
sequence (interpreted as a decimal integer). The digit sequence shall not specify
zero, nor a number greater than 2147483647.

A preprocessing directive of the form::

  # line digit-sequence "s-char-sequenceopt" new-line

sets the presumed line number similarly and changes the presumed name of the
source file to be the contents of the character string literal.

A preprocessing directive of the form::

  # line pp-tokens new-line

(that does not match one of the two previous forms) is permitted. The
preprocessing tokens after line on the directive are processed just as in normal
text (each identifier currently defined as a macro name is replaced by its
replacement list of preprocessing tokens). The directive resulting after all
replacements shall match one of the two previous forms and is then processed as
appropriate.

.. index::
   single: error; directives

.. _12.5:

Error directive
===============
Semantics
1 A preprocessing directive of the form
# error pp-tokensopt new-line
causes the implementation to produce a diagnostic message that includes the specified
sequence of preprocessing tokens.

.. index::
   pair: pragma; directives

.. _12.6:

Pragma Directive
================
**Semantics**
A preprocessing directive of the form::

  # pragma pp-tokensopt new-line

where the preprocessing token STDC does not immediately follow pragma in the
directive (prior to any macro replacement) [#]_ causes the implementation to
behave in an implementation-defined manner. The behavior might cause translation
to fail or cause the translator or the resulting program to behave in a
non-conforming manner. Any such pragma that is not recognized by the
implementation is ignored.

If the preprocessing token STDC does immediately follow pragma in the directive
(prior to any macro replacement), then no macro replacement is performed on the
directive, and the directive shall have one of the following forms whose
meanings are described elsewhere::

  #pragma STDC FP_CONTRACT on-off-switch
  #pragma STDC FENV_ACCESS on-off-switch
  #pragma STDC CX_LIMITED_RANGE on-off-switch

*on-off-switch:* one of
    **ON OFF DEFAULT**

**Forward references:** the ``FP_CONTRACT`` pragma (13.12.2), the
``FENV_ACCESS`` pragma (13.6.1), the ``CX_LIMITED_RANGE`` pragma (13.3.4).
149).

.. [#] An implementation is not required to perform macro replacement in pragmas,
  but it is permitted except for in standard pragmas (where ``STDC`` immediately
  follows pragma). If the result of macro replacement in a non-standard pragma
  has the same form as a standard pragma, the behavior is still
  implementation-defined; an implementation is permitted to behave as if it were
  the standard pragma, but is not required to.

.. index::
   single: null; directives

.. _12.7:

Null Directive
==============
**Semantics**

A preprocessing directive of the form::

  # new-line

has no effect.

.. index:: predefined macro names, __DATE__, __FILE__, __LINE__, __STDC__, __STDC_VERSION__, __TIME__, __STDC_IEC_559__, __STDC_IEC_559_COMPLEX__, __STDC_ISO_10646__, __STDC_HOSTED__

.. _12.8:

Predefined Macro Names
======================
The following macro names shall be defined by the implementation:

``__DATE__`` The date of translation of the preprocessing translation unit: a
character string literal of the form "Mmm dd yyyy", where the names of the
months are the same as those generated by the asctime function, and the
first character of dd is a space character if the value is less than 10. If the
date of translation is not available, an implementation-defined valid date
shall be supplied.

``__FILE__`` The presumed name of the current source file (a character string
literal) [#]_

``__LINE__`` The presumed line number (within the current source file) of the
current source line (an integer constant). [#]_

``__STDC__`` The integer constant 1, intended to indicate a conforming
implementation. ``__STDC_HOSTED__`` The integer constant 1 if the
implementation is a hosted implementation or the integer constant 0 if it is
not.

``__STDC_VERSION__`` The integer constant 199901L. [12]_

``__TIME__`` The time of translation of the preprocessing translation unit: a
character string literal of the form "hh:mm:ss" as in the time generated by the
asctime function. If the time of translation is not available, an
implementation-defined valid time shall be supplied.

The following macro names are conditionally defined by the implementation:
``__STDC_IEC_559__`` The integer constant 1, intended to indicate conformance to
the specifications in annex F (IEC 60559 floating-point arithmetic).

``__STDC_IEC_559_COMPLEX__`` The integer constant 1, intended to indicate
adherence to the specifications in informative annex G (IEC 60559
compatible complex arithmetic).

``__STDC_ISO_10646__`` An integer constant of the form yyyymmL (for example,
199712L). If this symbol is defined, then every character in the Unicode
required set, when stored in an object of type wchar_t, has the same
value as the short identifier of that character. The Unicode required set
consists of all the characters that are defined by ISO/IEC 10646, along with
all amendments and technical corrigenda, as of the specified year and
month.

The values of the predefined macros (except for ``__FILE__`` and ``__LINE__``)
remain constant throughout the translation unit.

None of these macro names, nor the identifier defined, shall be the subject of a
``#define`` or a ``#undef`` preprocessing directive. Any other predefined macro
names shall begin with a leading underscore followed by an uppercase letter or a
second underscore.

The implementation shall not predefine the macro _ _cplusplus, nor shall it
define it in any standard header.

**Forward references:** the asctime function (13.23.3.1), standard headers
(13.1.2).

.. [#] The presumed source file name and line number can be changed by the
  ``#line`` directive.
.. [#] This macro was not specified in ISO/IEC 9899:1990 and was specified as
  199409L in ISO/IEC 9899/AMD1:1995. The intention is that this will remain an
  integer constant of type long int that is increased with each revision of
  International Standard.

.. index::
   pair: pragma; operators

.. _12.9:

Pragma Operator
===============
**Semantics**

A unary operator expression of the form::

  _Pragma ( string-literal )

is processed as follows: The string literal is destringized by deleting the L
prefix, if present, deleting the leading and trailing double-quotes, replacing
each escape sequence \\" by a double-quote, and replacing each escape sequence
\\\\ by a single backslash. The resulting sequence of characters is processed
through translation phase 3 to produce preprocessing tokens that are executed as
if they were the pp-tokens in a pragma directive. The original four preprocessing
tokens in the unary operator expression are removed.


At this point specification material ends here and now we will see usage of above
discussed macros.

Usage
=====
Note that for this part the compilation command should be ``gcc -E
filename.c``. Let us create two files test.c and test1.c and their contents are
given below respectively.

.. index:: #include

#include
--------

.. code-block:: c

  #include "test1.c"
  I am test.

.. code-block:: c

  #include "test.c"
  I am test1.

Keep both the files in same directory and execute ``gcc -E test.c`` you will
see following:

.. code-block:: c

  # 1 "test.c"
  # 1 "test.c" 1
  # 1 "<built-in>" 1
  # 1 "<built-in>" 3
  # 143 "<built-in>" 3
  # 1 "<command line>" 1
  # 1 "<built-in>" 2
  # 1 "test.c" 2
  # 1 "./test1.c" 1
  ...
  In file included from test.c:1:
  In file included from ./test1.c:1:
  In file included from test.c:1:
  In file included from ./test1.c:1:
  In file included from test.c:1:
  In file included from ./test1.c:1:
  ...
  In file included from test.c:1:
  ./test1.c:1:10: error: #include nested too deeply
  #include "test.c"

  I am test1.
  # 2 "test.c" 2
  I am test
  # 2 "./test1.c" 2
  I am test1.
  # 2 "test.c" 2
  I am test
  # 2 "./test1.c" 2
  I am test1.
  # 2 "test.c" 2

As you can see ``test.c`` includes ``test1.c`` and ``test1.c`` includes
``test.c``. So they are including each other which is causing nested includes.
After processesing for some time preprocessor's head starts spinning as if it
has drunk a full bottle of rum and it bails out. As you know headers are
included in all meaningful C programs and headers include each other as well.
This inclusion of each other can easily lead to nested inclusion so how do
header authors circumvent this problem. Well, a technique has been devised
known popularly as *header guard*. The lines which have the form ``# number
text`` is actually ``# line`` direective.

Consider following code:

.. code-block:: c

  #ifndef ANYTHING
  #define ANYTHING
  
  #include "test1.c"
  
  I am test.

  #endif

.. code-block:: c

  #ifndef ANYTHING_ELSE
  #define ANYTHING_ELSE

  #include "test.c"

  I am test1.

  #endif

Now what will happen that when ``test.c`` is included ``ANYTHING`` is defined
and when ``test1.c`` is included via it ``ANYTHING_ELSE`` will be defined.
After first round of inclusion no more inclusion can happen as governed by
the directives. Please see headers of standard library to see the conventions
for ``ANYTHING``.

Why We Need Headers
-------------------
Now that we have seen the ``#include`` directive I would like to tell that why
we even need header files. Header files contain several elements of libraries
which come with C. For example, function prototypes, structure/type,
declarations, macros, global variable declaration etc. Actual code resides inside
\*.a or \*.so library files on GNU/Linux os. Now let us consider a case that we
want to access a C function of standard library. The compilation phase requires
that prototype of function should be known at compilation time. If we do not have
headers we have no way to provide this function prototype at compile time. Same
stands true for global variables. The declaration of these must be known at
compilation time. You take any language there has to be a mechanism to include
code from other files. Be it ``use`` directive of ``Perl`` or ``import`` of
``Python`` or any other mechanism of any other language.

.. index:: #define

#define
-------
``#define`` and ``#include`` are probably the most encountered macro in all C
files. There are many usage of it. We will first see the text replacement and
function like usage which can be avoided and should be replaced by global
constants and ``inline`` functions. First let us see what text replacement
functionality we get using ``#define``. Consider the following code fragment:

.. code-block:: c

  #define MAX 5

  MAX

  I am MAX

Now run it though ``gcc -E filename.c`` and you will get following output::

  # 1 "test.c"
  # 1 "<built-in>"
  # 1 "<command-line>"
  # 1 "test.c"


  5

  I am 5

So as you see both the occurrences are replaced by the text 5. This is the
simplest form of text replacement which people use to handle many things. Most
common are array sizes and symbolic constants. Another form is the form like
functions which has been shown in 10.4.

The bad part of these two is that both do not enter symbol table and make code
hard to debug. The former can be replaced by ``const`` variables and latter by
inline functions.

The other usage of it is to define names. For example, we revisit our old
example headers. Header guards usually declare something like this::

  #ifndef SOMETHING
  #define SOMETHING

  /* header code */
  #endif

As you can see ``#define`` is used to define ``SOEMTHING`` so second time the
conditional inclusion ``#ifndef`` will fail. It can also be tested by defiend
like ``if(defined(SOMETHING)``. Now if ``SOMETHING`` has been defined ``if``
test will pass successfully. Similarly ``#ifdef`` can be used to test it as a
shortcut i.e. ``#ifdef SOMETHING``. The normal if-else statements are replaced
in preprocessing directives using ``#if``, ``#elif`` and ``#endif``.

.. index:: #undef

#undef
------
Anything defined by ``#define`` can be undefined by ``#undef``. For example
consider the following code:

.. code-block:: c

  #define test
  #ifdef test

  //do something

  #undef test
  #ifdef test

  //do something else
  #endif

If you do this then first ``something else`` will be executed while the second
will not be.

.. index:: #, ##

# and ##
--------
You can use following two examples and description given above to understand
both of these:

.. code-block:: c

  #define hash_hash # ## #
  #define mkstr(a) # a
  #define in_between(a) mkstr(a)
  #define join(c, d) in_between(c hash_hash d)

  char p[] = join(x, y); //char p[]="x ## y"

  #define FIRST a # b
  #define SECOND a ## b

  char first[] = FIRST;
  char second[] = SECOND;

.. index:: #error

#error
------
This one is simple. Consider the following:

.. code-block:: c

  #include <stdio.h>

  int main()
  {
    # error MAX
  
    return 0;
  }

If you try to compile this like ``gcc filename.c`` then you will get
following::

  gcc test.c
  test.c:5:5: error: #error MAX
    # error MAX
    ^
  1 error generated.

You can combine ``# error`` with ``#if`` but I have yet to see purposeful code
written that way. Non-preprocessing constructs are better for handling such
situations. Only if you want to test a preprocessing token then it should be
used.

.. index:: #pragma

#pragma
-------
``#pragma`` is dependent on what follows it. You should consult compiler
documentation as it is mostly implementation-defined.

.. index:: __FILE__, __DATE__, __LINE__, __TIME__

Miscellaneous
-------------
Usage of ``__LINE__, __FILE__, __DATE__`` and ``__TIME__`` is simple and shown
in following example:

.. code-block:: c

  #include <stdio.h>

  int main()
  {
    printf("%s:%d:%s:%s", __FILE__, __LINE__, __DATE__, __TIME__);
  
    return 0;
  }

and the output is::

  test.c:5:Jun 24 2012:11:24:57

This concluded our discussion on macros. Rest of the book will describe the
standard library.
