.. meta::
  :description: C Programming with C99
  :keywords: Free C Book, C Programming, C99 Programming, C99 Specification

**************
Environment
**************
As last chapter was mapped to chapter 3 of specification similarly this
chapter is mapped to chapter 5 of specification. Please refer to these sections
simultaneously.

We store source code in two different files with two different extensions. One
regular expression for source code is \*.c and the other is \*.h. These files
are stored in hard disk. When compiled it may produce \*.o files optionally.
Your program may also produce \*.a, \*.so, a.out (this name may be different
for you if you provide ``-o`` switch to gcc. At least one \*.a or \*.so or
a.out or its equivalent will be produced on unix systems. On Windows systems
you may produce \*.lib, \*.dll or \*.exe. \*.lib, \*.dll and \*.exe map
directly to their counterparts in Unix as \*.a, \*.so and a.out. These files are
called static library, dynamic library, and executables respectively.

An implementation translates C source files and executes C programs in two data-
processing-system environments, which will be called the *translation environment*
and the *execution environment* in this International Standard. Their
characteristics define and constrain the results of executing conforming C programs
constructed according to the syntactic and semantic rules for conforming
implementations.

Just to ease the words translation environment is the machine where the program is
being compiled and execution environment is the machine where the executables
are/will be executed.

==================
Conceptual Model
==================
------------------------
Translation Environment
------------------------

.. _3.1.1.1:

^^^^^^^^^^^^^^^^^^
Program Structure
^^^^^^^^^^^^^^^^^^
A C program need not all be translated at the same time. The text of the
program is kept in units called *source files,* (or *preprocessing files*) in
International Standard. A source file together with all the headers and
source files included via the preprocessing directive ``#include`` is known as
a *preprocessing translation unit.* After preprocessing, a preprocessing
translation unit is called a *translation unit.* Previously translated
translation units may be preserved individually or in libraries. The separate
translation units of a program communicate by (for example) calls to functions
whose identifiers have external linkage, manipulation of objects whose
identifiers have external linkage, or manipulation of data files. Translation
units may be separately translated and then later linked to produce an
executable program.

A normal C file is *preprocessing translation unit.* while a file produced by output
of ``gcc -E filename.c`` is a *translation unit*. For example, you can have two
source files and three headers. ``par1.c, part2.c, part1.h, part2.h`` and
``common.h``. Now these may be individually compiled to ``part1.o`` and ``part2.o``
and then linked to have a final program ``output``.

**Forward references**: linkages of identifiers (:ref:`4.2.2`), external definitions
(:ref:`4.9`), preprocessing directives (:ref:`macros`).

.. index::
   single: translation phases

^^^^^^^^^^^^^^^^^^^
Translation Phases
^^^^^^^^^^^^^^^^^^^
The precedence among the syntax rules of translation is specified by the
following phases. [#]_

1. Physical source file multibyte characters are mapped, in an
   implementation-defined-manner, to the source character set (introducing
   newline characters for end-of-line indicators) if necessary. Trigraph
   sequences are replaced by corresponding single-character internal
   representations.

   Typically source file reside on HDD in source character set described in
   :ref:`3.2.1`. Sometimes they may also reside in other storage mediums also
   for example, floppy disk, USB drive etc. Implementation defines how multibyte
   characters will map to source character set. Different operating systems
   typically stored end-of-line in different ways. All these are converted to
   newline characters. Trigraph sequences are converted to their equivalents.
   For example, consider following:
  
   .. code-block:: c

     printf("??<\n");

   process it with command ``gcc -E -trigraphs test.c`` to get following:

   .. code-block:: c

     # 1 "test.c"
     # 1 "<built-in>"
     # 1 "<command-line>"
     # 1 "test.c"
     printf("{\n");

2. Each instance of a backslash character (\\) immediately followed by a
   new-line character is deleted, splicing physical source lines to form logical
   source lines. Only the last backslash on any physical source line shall be
   eligible for being part of such a splice. A source file that is not empty
   shall end in a new-line character, which shall not be immediately preceded by
   a backslash character before any such splicing takes place.

   Consider following:

   .. code::block:: c

     printf("line 1 \
     line 2");

   processing it though preprocessor like ``gcc -E test.c`` will yield

   .. code-block:: c

     # 1 "test.c"
     # 1 "<built-in>"
     # 1 "<command-line>"
     # 1 "test.c"
     printf("line 1 line 2");

   Now let us consider two files ``test1.c`` and ``test2.c``.

   .. code-block:: c

     printf("line 1" \

   and

   .. code-block:: c

     #include "test1.c"
     "line 2 \
     line 3");

   process ``test2.c`` to get following:

   .. code-block:: c

     # 1 "test1.c"
     # 1 "<built-in>"
     # 1 "<command-line>"
     # 1 "test1.c"
     # 1 "test.c" 1
     printf("line 1"
     # 2 "test1.c" 2
     "line 2 line 3");

   If you omit newline at end of file then ``gcc`` will issue you a warning. 
3. The source file is decomposed into preprocessing tokens [#]_ and sequences of
   white-space characters (including comments). A source file shall not end in a
   partial preprocessing token or in a partial comment. Each comment is replaced
   by one space character. New-line characters are retained. Whether each
   nonempty sequence of white-space characters other than new-line is retained
   or replaced by one space character is implementation-defined.

   Modifying above example like:

   .. code-block:: c

     #include "test1.c" // a comment
     "line 2 \
     line 3");

   will yield:

   .. code-block:: c

     # 1 "test1.c"
     # 1 "<built-in>"
     # 1 "<command-line>"
     # 1 "test1.c"
     # 1 "test.c" 1
     printf("line 1" 
     # 2 "test1.c" 2
     "line 2 line 3");

   Two important points to note here are that new-lines are retained which is
   important for next step and comments are replaced by one space character.
   new-lines are needed to separate preprocessing directives and comments are
   needed to be replaced by one character else strange things may happen. Consider
   ``int/*a comment*/main()`` being rendered as ``intmain()`` for example. For
   understanding the meaning of last sentence consider the following program:

   .. code-block:: c

     #include <stdio.h>

     int main()
     {
       #define makestr(a) #a

       char *p = makestr(x          y);

       puts(p);
     }

   and the output is::

     x y

   so we can clearly say that ``gcc`` replaces multiple whitespace characters
   by one.
4. Preprocessing directives are executed, macro invocations are expanded, and
   ``_Pragma`` unary operator expressions are executed. If a character sequence 
   that matches the syntax of a universal character name is produced by token
   concatenation, the behavior is undefined. A ``#include`` preprocessing
   directive causes the named header or source file to be processed from phase 1
   through phase 4, recursively. All preprocessing directives are then deleted.

   For example:

   .. code-block:: c

     #define MAX 5

     #define MIN(a,b) ((a)<(b)?(a):(b))

     printf("%d", MAX)

     printf(%d, MIN(5,7));

   will become:
  
   .. code-block:: c

     # 1 "test.c"
     # 1 "<built-in>"
     # 1 "<command-line>"
     # 1 "test.c"




     printf("%d", 5)

     printf(%d, ((5)<(7)?(5):(7)));

   The ``#include`` preprocessing directives are processed in-depth first order.
   Once a header has been fully processed, processing resumes in the file that
   included it. 15 levels of nesting can be done for header files(:ref:`3.2.4.1`)
   Before processing the header, the macros ``__FILE__`` and ``__LINE__`` are set
   (and they are reset when processing resumes in the file containing the header).

5. Each source character set member and escape sequence in character constants
   and string literals is converted to the corresponding member of the execution
   character set; if there is no corresponding member, it is converted to an
   implementation-defined member other than the null (wide) character. [#]_

   For most of the machines both source and execution characters sets are ASCII
   while some mainframes use EBCDIC as their character set.
6. Adjacent string literal tokens are concatenated.

   For example, consider:

   .. code-block:: c

     #include <stdio.h>

     #define STR1 "hello "
     #define STR2 "world"
     int main()
     {
       puts(STR1 STR2);
     }

   and the output is::

     hello world

   Note that this rule only applies to string literals not to character array
   or pointers because they contain null terminating character.
7. White-space characters separating tokens are no longer significant. Each
   preprocessing token is converted into a token. The resulting tokens are
   syntactically and semantically analyzed and translated as a translation unit.
8. All external object and function references are resolved. Library components
   are linked to satisfy external references to functions and objects not
   defined in the current translation. All such translator output is collected
   into a program image which contains information needed for execution in its
   execution environment.

   These steps are typically carried out by the linker ``ld``.

**Forward references:** universal character names (:ref:`4.4.3`), lexical elements
(:ref:`4.4.3`), preprocessing directives (:ref:`macros`), trigraph sequences
(:ref:`3.2.1.1`), external definitions (:ref:`4.9`).

.. [#] Implementations behave as if these separate phases occur, even though
  many are typically folded together in practice.
.. [#] the process of dividing a source file’s characters into preprocessing
  tokens is context-dependent. For example, see the handling of ``<`` within a
  ``#include`` preprocessing directive.
.. [#] An implementation need not convert all non-corresponding source
  characters to the same execution character.

.. index::
   diagnostics

^^^^^^^^^^^^^
Diagnostics
^^^^^^^^^^^^^
A conforming implementation shall produce at least one diagnostic message
(identified in an implementation-defined manner) if a preprocessing translation
unit or translation unit contains a violation of any syntax rule or constraint,
even if the behavior is also explicitly specified as undefined or
implementation-defined. Diagnostic messages need not be produced in other
circumstances. [#]_

Note that it is a requirement imposed on implementation. Nothing about what these
messages will contain. Implementations are also free to provide more than one message
to assist the programmer locate the source of error and by other means as well like
pointing out the line number and column number in program text.

.. [#] The intent is that an implementation should identify the nature of, and
  where possible localize, each violation. Of course, an implementation is free to
  produce any number of diagnostics as long as a valid program is still correctly
  translated. It may also successfully translate an invalid program.

.. index::
   pair: environment; execution

----------------------
Execution Environment
----------------------
Two execution environments are defined: *freestanding* and *hosted*. In both
cases, *program startup* occurs when a designated C function is called by the
execution environment. All objects with static storage duration shall be
*initialized* (set to their initial values) before program startup. The manner
and timing of such initialization are otherwise unspecified. *Program
termination* returns control to the execution environment.

*freestanding* typically means embedded systems though not in standard.

**Forward references:** storage durations of objects (4.2.4), initialization
(4.7.8).

.. index::
   pair: environment; freestanding

^^^^^^^^^^^^^^^^^^^^^^^^^
Freestanding Environment
^^^^^^^^^^^^^^^^^^^^^^^^^
In a freestanding environment (in which C program execution may take place
without any benefit of an operating system), the name and type of the function
called at program startup are implementation-defined. Any library facilities
available to a freestanding program, other than the minimal set required by
clause 4, are implementation-defined.

The effect of program termination in a freestanding environment is
implementation-defined.

For example, consider the BIOS of PC which runs without an operating system.
The startup function name need not be ``main``. Since, such freestanding systems
have scarce resources the requirement for conformance is only limited to a minimal
set of library facilities.  Sometimes it may not be even possible to stop
the program running in a freestanding environment. Consider a PC without
an operating system. BIOS will take over and how will it terminate. You will
need to power off the system manually.

.. index::
   pair: environment; hosted

^^^^^^^^^^^^^^^^^^
Hosted Environment
^^^^^^^^^^^^^^^^^^
A hosted environment need not be provided, but shall conform to the following
specifications if present.

**Program Startup**

The function called at program startup is named ``main``. The
implementation declares no prototype for this function. It shall be defined
with a return type of ``int`` and with no parameters:

.. code-block:: c

  int main(void) { /* ... */ }

or with two parameters (referred to here as ``argc`` and ``argv``, though any
names may be used, as they are local to the function in which they are
declared):

.. code-block:: c

  int main(int argc, char *argv[]) { /* ... */ }

or equivalent; [#]_ or in some other implementation defined manner. The function
``main`` must have external linkage. Also, the implementation or compiler should
not have ``main`` function in any of the headers or libraries. Some implementations
also provide a third argument called environment pointer or ``envp`` which contains
environment variables of the systems.

If they are declared, the parameters to the ``main`` function shall obey the
following constraints:

* The value of ``argc`` shall be nonnegative.
* ``argv[argc]`` shall be a null pointer.
* If the value of argc is greater than zero, the array members ``argv[0]``
  through ``argv[argc-1]`` inclusive shall contain pointers to strings, which
  are given implementation-defined values by the host environment prior to
  program startup. The intent is to supply to the program information
  determined prior to program startup from elsewhere in the hosted
  environment. If the host environment is not capable of supplying strings
  with letters in both uppercase and lowercase, the implementation shall
  ensure that the strings are received in lowercase.
* If the value of argc is greater than zero, the string pointed to by
  ``argv[0]`` represents the *program name*; ``argv[0][0]`` shall be the null
  character if the program name is not available from the host environment.
  If the value of ``argc`` is greater than one, the strings pointed to by
  ``argv[1]`` through ``argv[argc-1]`` represent the *program parameters*.
* The parameters ``argc`` and ``argv`` and the strings pointed to by the
  ``argv`` array shall be modifiable by the program, and retain their
  last-stored values between program startup and program termination.

Let us see a program to summarize this:

.. code-block:: c

  #include <stdio.h>
  #include <stdlib.h>

  int main(int argc, char *argv[])
  {
    for(int i=0; i<argc; i++)
      printf("%s\n", argv[i]);

    if(argv[argc]==NULL)
      printf("argv[argc] is NULL pointer.\n");

    return 0;
  }

and the output is::

  ./a.out
  1
  2
  3
  4
  5 6
  argv[argc] is NULL pointer.

.. [#] Thus, int can be replaced by a typedef name defined as ``int``, or the
  type of argv can be written as ``char ** argv``, and so on.

.. index::
   pair: execution; program

.. _3.1.2.3:

^^^^^^^^^^^^^^^^^
Program Execution
^^^^^^^^^^^^^^^^^
In a hosted environment, a program may use all the functions, macros, type
definitions, and objects described in the library clause (clause 7).

.. index::
   pair: termination; program

**Program Termination**

If the return type of the ``main`` function is a type compatible with ``int``,
a return from the initial call to the ``main`` function is equivalent to
calling the ``exit`` function with the value returned by the ``main`` function
as its argument; [#]_ reaching the **}** that terminates the ``main`` function
returns a value of 0. If the return type is not compatible with ``int``, the
termination status returned to the host environment is unspecified.

.. [#] the lifetimes of objects with automatic storage duration declared in
  ``main`` will have ended in the former case, even where they would not
  have in the latter.


Forward references: definition of terms (:ref:`13.1.1`), the exit function (:ref:`32.4.3`).

.. index::
   pair: execution; program

^^^^^^^^^^^^^^^^^
Program Execution
^^^^^^^^^^^^^^^^^

1. The semantic descriptions in this International Standard describe the
   behavior of an abstract machine in which issues of optimization are
   irrelevant.

   Optimization is very important from compilers aspect. However, it is of
   no concern for standard. The abstract machine in picture here has never been
   fully treated in the specification. There has been only one formally
   verified compiler with a subset of C. [Blazy]_
2. Accessing a volatile object, modifying an object, modifying a file, or
   calling a function that does any of those operations are all *side effects*,
   [#]_ which are changes in the state of the execution environment. Evaluation
   of an expression may produce side effects. At certain specified points in
   the execution sequence called *sequence points*, all side effects of
   previous evaluations shall be complete and no side effects of subsequent
   evaluations shall have taken place. (A summary of the sequence points is
   given in appendix C).

   There is hardly anything you can do without causing side effects. No useful
   program can be written without causing side effects. The C library treats all
   I/O as operations on files. The state of a program in execution includes
   information about current flow of control. Access of a volatile object does not
   guarantee a change in state, however, it has to be treated as side effect.

   Functional language like Lisp, Erlang, Haskell etc designed to be side effect
   free. This helps in proving mathematical properties of a program.

   Expressions may also be evaluated for its result value. Consider following:

   .. code-block:: c

     #include <stdio.h>

     int main(void)
     {
       int i=0;

       printf("Enter an integer.\n");
       scanf("%d", &i);

       if(i%2==0)
         printf("Number entered is intger.\n");

       return 0;
     }

   here you can see that the value of expression ``i%2`` can alter the flow of
   program. The definition of sequence points is given here and possible sequence
   points are discussed later in appendix C.
3. In the abstract machine, all expressions are evaluated as specified by the
   semantics. An actual implementation need not evaluate part of an expression
   if it can deduce that its value is not used and that no needed side effects
   are produced (including any caused by calling a function or accessing a
   volatile object).

   The directions from specification here allow the implementation to optimize
   the machine code as they want. Note that this may result to certain items
   not discussed in specification. Any code which is translated and part of
   final machine code, but is never executed, is known as *dead code*. Similarly,
   a piece of code, which does not affect output of a program, is known as
   *redundant code*.
4. When the processing of the abstract machine is interrupted by receipt of a
   signal, only the values of objects as of the previous sequence point may be
   relied on. Objects that may be modified between the previous sequence point
   and the next sequence point need not have received their correct values yet.

   As you may know about modern processors have pipelines so before a signal is
   pipelined more sequence points may be pipelined, however, we cannot rely on
   that.
5. The least requirements on a conforming implementation are:

   * At sequence points, volatile objects are stable in the sense that previous
     accesses are complete and subsequent accesses have not yet occurred.
   * At program termination, all data written into files shall be identical to
     the result that execution of the program according to the abstract
     semantics would have produced.
   * The input and output dynamics of interactive devices shall take place as
     specified in :ref:`31.3`. The intent of these requirements is that unbuffered
     or line-buffered output appear as soon as possible, to ensure that
     prompting messages actually appear prior to a program waiting for input.
6. What constitutes an interactive device is implementation-defined.
7. More stringent correspondences between abstract and actual semantics may be
   defined by each implementation.
8. EXAMPLE 1 An implementation might define a one-to-one correspondence between
   abstract and actual semantics: at every sequence point, the values of the
   actual objects would agree with those specified by the abstract semantics.
   The keyword ``volatile`` would then be redundant.

   ``volatile`` can only be redundant if the implementation is able to tell the
   order of evaluation of an expression containing ``volatile`` objects.
9. Alternatively, an implementation might perform various optimizations within
   each translation unit, such that the actual semantics would agree with the
   abstract semantics only when making function calls across translation unit
   boundaries. In such an implementation, at the time of each function entry
   and function return where the calling function and the called function are
   in different translation units, the values of all externally linked objects
   and of all objects accessible via pointers therein would agree with the abstract
   semantics. Furthermore, at the time of each such function entry the values
   of the parameters of the called function and of all objects accessible via
   pointers therein would agree with the abstract semantics. In this type of
   implementation, objects referred to by interrupt service routines activated
   by the ``signal`` function would require explicit specification of ``volatile``
   storage, as well as other implementation-defined restrictions.

   Requirement that the code declare all object accessed by interrupt service
   routines as ``volatile`` is difficult to achieve in practice because such
   routines can be invoked in many ways.
10. EXAMPLE 2 In executing the fragment

    .. code-block:: c

      char c1, c2;
      /* ... */
      c1 = c1 + c2;

    the "integer promotions" require that the abstract machine promote the value
    of each variable to ``int`` size and then add the two ``ints`` and truncate the
    sum. Provided the addition of two ``chars`` can be done without overflow, or
    with overflow wrapping silently to produce the correct result, the actual
    execution need only produce the same result, possibly omitting the promotions.
11. EXAMPLE 3 Similarly, in the fragment

    .. code-block:: c

      float f1, f2;
      double d;
      /* ... */
      f1 = f2 * d;

    the multiplication may be executed using single-precision arithmetic if the
    implementation can ascertain that the result would be the same as if it were
    executed using double-precision arithmetic (for example, if ``d`` were replaced
    by the constant ``2.0``, which has type ``double``).
12. EXAMPLE 4 Implementations employing wide registers have to take care to honor
    appropriate semantics. Values are independent of whether they are represented
    in a register or in memory. For example, an implicit spilling of a register is
    not permitted to alter the value. Also, an explicit store and load is required
    to round to the precision of the storage type. In particular, casts and
    assignments are required to perform their specified conversion. For the fragment

    .. code-block:: c

      double d1, d2;
      float f;
      d1 = f = expression;
      d2 = (float) expression;

    the values assigned to ``d1`` and ``d2`` are required to have been converted
    to ``float``.
13. EXAMPLE 5 Rearrangement for floating-point expressions is often restricted
    because of limitations in precision as well as range. The implementation
    cannot generally apply the mathematical associative rules for addition or
    multiplication, nor the distributive rule, because of roundoff error, even
    in the absence of overflow and underflow. Likewise, implementations cannot
    generally replace decimal constants in order to rearrange expressions. In
    the following fragment, rearrangements suggested by mathematical rules for real
    numbers are often not valid (see F.8).

    .. code-block:: c

      double x, y, z;
      /* ... */
      x = (x * y) * z; // not equivalent to x *= y * z;
      z = (x - y) + y; // not equivalent to z = x;
      z = x + x * y;   // not equivalent to z = x * (1.0 + y);
      y = x / 5.0;     // not equivalent to y = x * 0.2;
14. EXAMPLE 6 To illustrate the grouping behavior of expressions, in the following fragment

    .. code-block:: c

      int a, b;
      /* ... */
      a = a + 32760 + b + 5;

    the expression statement behaves exactly the same as::

      a = (((a + 32760) + b) + 5);

    due to the associativity and precedence of these operators. Thus, the result of the
    sum ``(a + 32760)`` is next added to ``b``, and that result is then added to ``5``
    which results in the value assigned to ``a``. On a machine in which overflows produce
    an explicit trap and in which the range of values representable by an ``int`` is
    ``[-32768, +32767]``, the implementation cannot rewrite this expression as
    ``a = ((a + b) + 32765);`` since if the values for ``a`` and ``b`` were, respectively,
    ``-32754`` and ``-15``, the sum ``a + b`` would produce a trap while the original
    expression would not; nor can the expression be rewritten either as::

      a = ((a + 32765) + b);

    or::

      a = (a + (b + 32765));

    since the values for ``a`` and ``b`` might have been, respectively, ``4`` and ``-8``
    or ``-17`` and ``12``. However, on a machine in which overflow silently generates
    some value and where positive and negative overflows cancel, the above expression
    statement can be rewritten by the implementation in any of the above ways because the
    same result will occur.
15. EXAMPLE 7 The grouping of an expression does not completely determine its evaluation.
    In the following fragment

    .. code-block:: c

      #include <stdio.h>
      int sum;
      char *p;
      /* ... */
      sum = sum * 10 - '0' + (*p++ = getchar());

    the expression statement is grouped as if it were written as::

      sum = (((sum * 10) - '0') + ((*(p++)) = (getchar())));

    but the actual increment of p can occur at any time between the previous sequence
    point and the next sequence point (the ;), and the call to ``getchar`` can occur
    at any point prior to the need of its returned value.


.. [#] The IEC 60559 standard for binary floating-point arithmetic requires
  certain user-accessible status flags and control modes. Floating-point
  operations implicitly set the status flags; modes affect result values of
  floating-point operations. Implementations that support such floating-point
  state are required to regard changes to it as side effects - see appendix for
  details. The floating-point environment library <fenv.h> provides a
  programming facility for indicating when these side effects matter, freeing
  the implementations in other cases.

**Forward references:** expressions (:ref:`4.5`), type qualifiers (:ref:`4.7.3`),
statements (:ref:`4.8`), the signal function (:ref:`26.1.1`), files (:ref:`31.3`).

.. [Blazy] Sandrine Blazy, Zaynah Dargaye, Xavier Leroy, Formal Verification of
  a C Compiler Front-end FM'06: 14th Symposium on Formal Methods 4085 (2006) pp.460-475

.. index::
   pair: considerations; environmental

.. _3.2:
  
============================
Environmental considerations
============================

.. index::
   single: character sets

.. _3.2.1:

--------------
Character Sets
--------------
1. Two sets of characters and their associated collating sequences shall be defined:
   the set in  which source files are written (the *source character set*), and the
   set interpreted in the execution environment (the *execution character set*). Each
   set is further divided into a *basic character set*, whose contents are given by
   this subclause, and a set of zero or more locale-specific members (which are not
   members of the basic character set) called *extended characters*. The combined
   set is also called the *extended character set*. The values of the members of
   the execution character set are implementation-defined.
2. In a character constant or string literal, members of the execution character set
   shall be represented by corresponding members of the source character set or by
   *escape sequences* consisting of the backslash \ followed by one or more
   characters. A byte with all bits set to 0, called the *null character*, shall exist
   in the basic execution character set; it is used to terminate a character string.
3. Both the basic source and basic execution character sets shall have the following
   members: the 26 *uppercase letters* of the Latin alphabet::

     A B C D E F G H I J K L: M N O P Q R S T U V W X Y Z

   the 26 *lowercase letters* of the Latin alphabet::

     a b c d e f g h i j k l m n o p q r s t u v w x y z

   the 10 decimal digits::

     0 1 2 3 4 5 6 7 8 9

   the following 29 graphic characters::

     ~ ! # % ^ & * ( ) - _ = + \ | [ ] { } ; : ' " , < . > / ?

   the space character, and control characters representing horizontal tab, vertical
   tab, and form feed. The representation of each member of the source and execution
   basic character sets shall fit in a byte. In both the source and execution basic
   character sets, the value of each character after 0 in the above list of decimal
   digits shall be one greater than the value of the previous. In source files,
   there shall be some way of indicating the end of each line of text; this
   International Standard treats such an end-of-line indicator as if it were a single
   new-line character. In the basic execution character set, there shall be control
   characters representing alert, backspace, carriage return, and new line. If any
   other characters are encountered in a source file (except in an identifier, a character
   constant, a string literal, a header name, a comment, or a preprocessing token that
   is never converted to a token), the behavior is undefined.

   These character sets are also described in :ref:`5.1` .
4. A *letter* is an uppercase letter or a lowercase letter as defined above; in this
   International  Standard the term does not include other characters that are
   letters in other alphabets.
5. The universal character name construct provides a way to name other characters.

**Forward references:** universal character names (:ref:`4.4.3`), character constants
(:ref:`4.4.4.4`), preprocessing directives (:ref:`macros`), string literals (:ref:`4.4.5`),
comments (:ref:`4.4.9`), string (:ref:`13.1`).

.. index::
   single: trigraph sequences

.. _3.2.1.1:

^^^^^^^^^^^^^^^^^^
Trigraph sequences
^^^^^^^^^^^^^^^^^^
All occurrences in a source file of the following sequences of three characters (called
trigraph sequences [#]_) are replaced with the corresponding single character.

  +----------+------------+----------+------------+----------+------------+
  | Trigraph | Equivalent | Trigraph | Equivalent | Trigraph | Equivalent |
  +==========+============+==========+============+==========+============+
  |   ??=    |     #      |   ??'    |     ^      |   ??!    |     \|     |
  +----------+------------+----------+------------+----------+------------+
  |   ??(    |     [      |   ??)    |     ]      |   ??<    |     {      |
  +----------+------------+----------+------------+----------+------------+
  |   ??>    |     }      |   ??/    |     \\     |   ??-    |     ~      |
  +----------+------------+----------+------------+----------+------------+

This table is also given in :ref:`5.1` .
No other trigraph sequences exist. Each ``?`` that does not begin one of the trigraphs listed
above is not changed.

EXAMPLE The following source line

.. code-block:: c

  printf("Eh???/n");

becomes (after replacement of the trigraph sequence ??/)

.. code-block:: c

  printf("Eh?\n");

.. index::
   single: mutlibyte characters

^^^^^^^^^^^^^^^^^^^^
Multibyte characters
^^^^^^^^^^^^^^^^^^^^
The source character set may contain multibyte characters, used to represent members of
the extended character set. The execution character set may also contain multibyte
characters, which need not have the same encoding as for the source character set. For
both character sets, the following shall hold:

* The basic character set shall be present and each character shall be encoded as a
  single byte.
* A multibyte character set may have a *state-dependent encoding*, wherein each
  sequence of multibyte characters begins in an *initial shift state* and enters other
  locale-specific *shift states* when specific multibyte characters are encountered in the
  sequence. While in the initial shift state, all single-byte characters retain their usual
  interpretation and do not alter the shift state. The interpretation for subsequent bytes
  in the sequence is a function of the current shift state.
* A byte with all bits zero shall be interpreted as a null character independent of shift
  state. Such a byte shall not occur as part of any other multibyte character.

For source files, the following shall hold:

* An identifier, comment, string literal, character constant, or header name shall begin
  and end in the initial shift state.
* An identifier, comment, string literal, character constant, or header name shall consist
  of a sequence of valid multibyte characters.

  For example, accented characters fall in this category.

.. index::
   pair: display semantics; character

.. _3.2.2:

---------------------------
Character display semantics
---------------------------
The *active position* is that location on a display device where the next character output by
the *fputc* function would appear. The intent of writing a printing character (as defined
by the *isprint* function) to a display device is to display a graphic representation of
that character at the active position and then advance the active position to the next
position on the current line. The direction of writing is locale-specific. If the active
position is at the final position of a line (if there is one), the behavior of the display
device is unspecified. Following escape sequences are also treated in :ref:`5.11`.

Alphabetic escape sequences representing nongraphic characters in the execution
character set are intended to produce actions on display devices as follows:

``\a`` (*alert*) Produces an audible or visible alert without changing the active position.

``\b`` (*backspace*) Moves the active position to the previous position on the current
line. If the active position is at the initial position of a line, the behavior of
the display device is unspecified.

``\f`` (*form feed*) Moves the active position to the initial position at the start of
the next logical page.

``\n`` (*new line*) Moves the active position to the initial position of the next line.

``\r`` (*carriage return*) Moves the active position to the initial position of the
current line.

``\t`` (*horizontal tab*) Moves the active position to the next horizontal tabulation
position on the current line. If the active position is at or past the last
defined horizontal tabulation position, the behavior of the display device is
unspecified.

``\v`` (*vertical tab*) Moves the active position to the initial position of the next
vertical tabulation position. If the active position is at or past the last
defined vertical tabulation position, the behavior of the display device is
unspecified.

Each of these escape sequences shall produce a unique implementation-defined value
which can be stored in a single char object. The external representations in a text file
need not be identical to the internal representations, and are outside the scope of this
International Standard.

**Forward references:** the ``isprint`` function (:ref:`16.1.8`), the ``fputc``
function (:ref:`31.7.3`).

.. [#] The trigraph sequences enable the input of characters that are not defined in
  the Invariant Code Set as described in ISO/IEC 646, which is a subset of the seven-bit
  US ASCII code set.

.. index::
   single: signals
   single: interrupts

----------------------
Signals and interrupts
----------------------
Functions shall be implemented such that they may be interrupted at any time by a signal,
or may be called by a signal handler, or both, with no alteration to earlier, but still
active, invocations’ control flow (after the interruption), function return values, or
objects with automatic storage duration. All such objects shall be maintained outside
the function image (the instructions that compose the executable representation of a
function) on a per-invocation basis.

.. index:
   pair: limits; environmental

--------------------
Environmental limits
--------------------
Both the translation and execution environments constrain the implementation of
language translators and libraries. The following summarizes the language-related
environmental limits on a conforming implementation; the library-related limits are
discussed in chapter 13 onwards.

.. index:
   pair: limits; translation

.. _3.2.4.1:

^^^^^^^^^^^^^^^^^^
Translation limits
^^^^^^^^^^^^^^^^^^
The implementation shall be able to translate and execute at least one program that
contains at least one instance of every one of the following limits: [#]_

* 127 nesting levels of blocks
* 63 nesting levels of conditional inclusion
* 12 pointer, array, and function declarators (in any combinations) modifying an
  arithmetic, structure, union, or incomplete type in a declaration
* 63 nesting levels of parenthesized declarators within a full declarator
* 63 nesting levels of parenthesized expressions within a full expression
* 63 significant initial characters in an internal identifier or a macro name (each
  universal character name or extended source character is considered a single
  character)
* 31 significant initial characters in an external identifier (each universal
  character name specifying a short identifier of 0000FFFF or less is considered
  6 characters, each universal character name specifying a short identifier of
  00010000 or more is considered 10 characters, and each extended source character
  is considered the same number of characters as the corresponding universal
  character name, if any) [#]_
* 4095 external identifiers in one translation unit
* 511 identifiers with block scope declared in one block
* 4095 macro identifiers simultaneously defined in one preprocessing translation unit
* 127 parameters in one function definition
* 127 arguments in one function call
* 127 parameters in one macro definition
* 127 arguments in one macro invocation
* 4095 characters in a logical source line
* 4095 characters in a character string literal or wide string literal (after
  concatenation)
* 65535 bytes in an object (in a hosted environment only)
* 15 nesting levels for ``#include`` files
* 1023 ``case`` labels for a ``switch`` statement (excluding those for any nested
  ``switch`` statements)
* 1023 members in a single structure or union
* 1023 enumeration constants in a single enumeration
* 63 levels of nested structure or union definitions in a single struct-declaration-list

.. [#] Implementations should avoid imposing fixed translation limits whenever possible.
.. [#] See "future language directions" (:ref:`4.11.3`)


.. index:
   pair: limits; numerical

.. _ref1:

.. _3.2.4.2:

^^^^^^^^^^^^^^^^
Numerical limits
^^^^^^^^^^^^^^^^
An implementation is required to document all the limits specified in this subclause,
which are specified in the headers ``<limits.h>`` and ``<float.h>``. Additional limits
are specified in ``<stdint.h>``.

**Forward references:** integer types <stdint.h> (:ref:`stdint`).

**Sizes of integer types ``<limits.h>``**

The values given below shall be replaced by constant expressions suitable for use in
``#if`` preprocessing directives. Moreover, except for ``CHAR_BIT`` and ``MB_LEN_MAX``,
the following shall be replaced by expressions that have the same type as would an
expression that is an object of the corresponding type converted according to the integer
promotions. Their implementation-defined values shall be equal or greater in magnitude
(absolute value) to those shown, with the same sign.

* number of bits for smallest object that is not a bit-field (byte)
  
  ``CHAR_BIT`` 8
* minimum value for an object of type ``signed char``

  ``SCHAR_MIN`` -127 // :math:`-(2^7 - 1)`
* maximum value for an object of type ``signed char``

  ``SCHAR_MAX`` +127 // :math:`2^7 - 1`
* maximum value for an object of type ``unsigned char``

  ``UCHAR_MAX`` 255 // :math:`2^8 - 1`
* minimum value for an object of type ``char``

  ``CHAR_MIN`` *see below*
* maximum value for an object of type ``char``

  ``CHAR_MAX`` *see below*
* maximum number of bytes in a multibyte character, for any supported locale
  
  ``MB_LEN_MAX`` 1
* minimum value for an object of type ``short int``

  ``SHRT_MIN`` -32767 // :math:`-(2^{15} - 1)`
* maximum value for an object of type ``short int``

  ``SHRT_MAX`` +32767 // :math:`2^{15} - 1`
* maximum value for an object of type ``unsigned short int``

  ``USHRT_MAX`` 65535 // :math:`2^{16} - 1`
* minimum value for an object of type ``int``

  ``INT_MIN`` -32767 // :math:`-(2^{15} - 1)`
* maximum value for an object of type ``int``

  ``INT_MAX`` +32767 // :math:`2^{15} - 1`
* maximum value for an object of type ``unsigned int``

  ``UINT_MAX`` 65535 // :math:`2^{16} - 1`
* minimum value for an object of type ``long int``

  ``LONG_MIN`` -2147483647 // :math:`-(2^{31} - 1)`
* maximum value for an object of type ``long int``

  ``LONG_MAX`` +2147483647 // :math:`2^{31} - 1`
* maximum value for an object of type ``unsigned long int``

  ``ULONG_MAX`` 4294967295 // :math:`2^{32} - 1`
* minimum value for an object of type ``long long int``

  ``LLONG_MIN`` -9223372036854775807 // :math:`-(2^{63} - 1)`
* maximum value for an object of type ``long long int``

  ``LLONG_MAX`` +9223372036854775807 // :math:`2^{63} - 1`
* maximum value for an object of type ``unsigned long long int``

  ``ULLONG_MAX`` 18446744073709551615 // :math:`2^{64} - 1`

If the value of an object of type ``char`` is treated as a signed integer when used
in an expression, the value of ``CHAR_MIN`` shall be the same as that of ``SCHAR_MIN``
and the value of ``CHAR_MAX`` shall be the same as that of ``SCHAR_MAX``. Otherwise,
the value of ``CHAR_MIN`` shall be 0 and the value of ``CHAR_MAX`` shall be the same
as that of ``UCHAR_MAX``. [#]_ The value ``UCHAR_MAX`` shall equal :math:`2^{CHAR_BIT}
- 1`.

**Forward references:** representations of types (:ref:`4.2.6`), conditional inclusion
(:ref:`12.1`).

.. [#] See :ref:`4.2.5`.

**Characteristics of floating types ``<float.h>``**

The characteristics of floating types are defined in terms of a model that describes a
representation of floating-point numbers and values that provide information about an
implementation's floating-point arithmetic. [#]_ The following parameters are used to
define the model for each floating-point type

    |  :math:`s` sign
    |  :math:`b` base or radix of exponent representation (an integer > 1)
    |  :math:`e` exponent (an integer between a minimum emin and a maximum emax )
    |  :math:`p` precision (the number of base-b digits in the significand)
    |  :math:`f_k` nonnegative integers less than b (the significand digits)

A *floating-point number (x)* is defined by the following model:

.. math::

  x = sb^e \sum_{k=1}^p f_kb^{-k},~e_{min}~\leq~e~\leq~e_{max}

In addition to normalized floating-point numbers (:math:`f_1 > 0` if :math:`x \neq 0`),
floating types may be able to contain other kinds of floating-point numbers, such
as subnormal floating-point numbers (:math:`x \neq 0, e = e_{min}, f_1 = 0`) and
unnormalized floating-point numbers (:math:`x \neq 0, e > e_{min} , f_1 = 0`), and
values that are not floating-point numbers, such as infinities and NaNs. A NaN is an
encoding signifying Not-a-Number. A quiet NaN propagates through almost every
arithmetic operation without raising a floating-point exception; a signaling NaN
generally raises a floating-point exception when occurring as an arithmetic operand. [#]_

An implementation may give zero and non-numeric values (such as infinities and NaNs) a
sign or may leave them unsigned. Wherever such values are unsigned, any requirement
in this International Standard to retrieve the sign shall produce an unspecified sign, and
any requirement to set the sign shall be ignored.

The accuracy of the floating-point operations (``+, -, *, /``) and of the library
functions in ``<math.h>`` and ``<complex.h>`` that return floating-point results is
implementation-defined, as is the accuracy of the conversion between floating-point
internal representations and string representations performed by the library
functions in ``<stdio.h>, <stdlib.h>`` and ``<wchar.h>``. The implementation may
state that the accuracy is unknown.

All integer values in the ``<float.h>`` header, except ``FLT_ROUNDS``, shall be constant
expressions suitable for use in ``#if`` preprocessing directives; all floating values
shall be constant expressions. All except ``DECIMAL_DIG, FLT_EVAL_METHOD, FLT_RADIX``
and ``FLT_ROUNDS`` have separate names for all three floating-point types. The floating-
point model representation is provided for all values except ``FLT_EVAL_METHOD`` and
``FLT_ROUNDS``.

The rounding mode for floating-point addition is characterized by the implementation-
defined value of FLT_ROUNDS: [#]_

    |  -1 indeterminable
    |  0 toward zero
    |  1 to nearest
    |  2 toward positive infinity
    |  3 toward negative infinity

All other values for ``FLT_ROUNDS`` characterize implementation-defined rounding
behavior. The four rounding methods were also described in :ref:`2.1`.

The values of operations with floating operands and values subject to the usual
arithmetic conversions and of floating constants are evaluated to a format whose
range and precision may be greater than required by the type. The use of
evaluation formats is characterized by the implementation-defined value of
``FLT_EVAL_METHOD``: [#]_

    |  -1 indeterminable;
    |  0 evaluate all operations and constants just to the range and precision of the
         type;
    |  1 evaluate operations and constants of type float and double to the range and
         precision of the ``double`` type, evaluate ``long double`` operations and constants
         to the range and precision of the ``long double`` type;
    |  2 evaluate all operations and constants to the range and precision of the ``long
       double`` type.

All other negative values for ``FLT_EVAL_METHOD`` characterize implementation-defined
behavior.

The values given in the following list shall be replaced by constant expressions with
implementation-defined values that are greater or equal in magnitude (absolute value) to
those shown, with the same sign:

* radix of exponent representation, :math:`b`

    |  ``FLT_RADIX 2``
* number of base-FLT_RADIX digits in the floating-point significand, :math:`p`

    |  ``FLT_MANT_DIG``
    |  ``DBL_MANT_DIG``
    |  ``LDBL_MANT_DIG``
* number of decimal digits, :math:`n`, such that any floating-point number in the widest
  supported floating type with :math:`p_{max}` radix :math:`b` digits can be rounded to a
  floating-point number with :math:`n` decimal digits and back again without change to
  the value,

    .. math::

      \left\{
      \begin{array}{l l}
      p_{max} \log_{10} b & \quad \text{if } b \text{ is a power of 10}\\
	\lceil 1 + p_{max} \log_{10} b \rceil & \quad \text{otherwise}
	\end{array}\right.

    |  ``DECIMAL_DIG 10``
* number of decimal digits, :	math:`q`, such that any floating-point number
  with :math:`q` decimal digits can be rounded into a floating-point number with
  :math:`p` radix :math:`b` digits and back again without change to the :math:`q`
  decimal digits,

    .. math::

      \left\{
      \begin{array}{l l}
      p \log_{10} b & \quad \text{if } b \text{ is a power of 10}\\
      \lfloor (p - 1) \log_{10} b \rfloor & \quad \text{otherwise}
	\end{array}\right.

    |  ``FLT_DIG 6``
    |  ``DBL_DIG 10``
    |  ``LDBL_DIG 10``
* minimum negative integer such that ``FLT_RADIX`` raised to one less than that power is
  a normalized floating-point number, :math:`e_{min}`

    |  ``FLT_MIN_EXP``
    |  ``DBL_MIN_EXP``
    |  ``LDBL_MIN_EXP``
* minimum negative integer such that 10 raised to that power is in the range of
  normalized floating-point numbers, :math:`\lceil\log_{10}b^{e_{min}-1}\rceil`

    |  ``FLT_MIN_10_EXP -37``
    |  ``DBL_MIN_10_EXP -37``
    |  ``LDBL_MIN_10_EXP -37``
* maximum integer such that ``FLT_RADIX`` raised to one less than that power is a
  representable finite floating-point number, :math:`e_{max}`

    |  ``FLT_MAX_EXP``
    |  ``DBL_MAX_EXP``
    |  ``LDBL_MAX_EXP``
* maximum integer such that 10 raised to that power is in the range of representable
  finite floating-point numbers, :math:`\lfloor\log_{10}((1 - b^{-p})b^{e_{max}})\rfloor`

    |  ``FLT_MAX_10_EXP +37``
    |  ``DBL_MAX_10_EXP +37``
    |  ``LDBL_MAX_10_EXP +37``

The values given in the following list shall be replaced by constant expressions with
implementation-defined values that are greater than or equal to those shown:

* maximum representable finite floating-point number, :math:`(1 - b^{-p})b^{e_{max}}`

    |  ``FLT_MAX 1E+37``
    |  ``DBL_MAX 1E+37``
    |  ``LDBL_MAX 1E+37``

The values given in the following list shall be replaced by constant expressions with
implementation-defined (positive) values that are less than or equal to those shown:

* the difference between 1 and the least value greater than 1 that is representable in the
  given floating point type, :math:`b^{1 - p}`

    |  ``FLT_EPSILON 1E-5``
    |  ``DBL_EPSILON 1E-9``
    |  ``LDBL_EPSILON 1E-9``
* minimum normalized positive floating-point number, :math:`b^{e_{min} - 1}`

    |  ``FLT_MIN 1E-37``
    |  ``DBL_MIN 1E-37``
    |  ``LDBL_MIN 1E-37``

**Recommended practice**

Conversion from (at least) ``double`` to decimal with ``DECIMAL_DIG`` digits and back
should be the identity function.

EXAMPLE 1 The following describes an artificial floating-point representation that meets
the minimum requirements of this International Standard, and the appropriate values in a
``<float.h>`` header for type ``float``:

	.. math::

	  x = s 16^e \sum_{k=1}^6 f_k 16^{-k},~-31 \leq~e~\leq~+32


    |  ``FLT_RADIX                   16``
    |  ``FLT_MANT_DIG                 6``
    |  ``FLT_EPSILON    9.53674316E-07F``
    |  ``FLT_DIG                      6``
    |  ``FLT_MIN_EXP                -31``
    |  ``FLT_MIN        2.93873588E-39F``
    |  ``FLT_MIN_10_EXP             -38``
    |  ``FLT_MAX_EXP                +32``
    |  ``FLT_MAX        3.40282347E+38F``
    |  ``FLT_MAX_10_EXP             +38``

EXAMPLE 2 The following describes floating-point representations that also meet the
requirements for single-precision and double-precision normalized numbers in
IEC 60559, [#]_ and the appropriate values in a ``<float.h>`` header for types
``float`` and ``double``:

	.. math::

	  x = s 2^e \sum_{k=1}^24 f_k 2^{-k},~-125 \leq~e~\leq~+128

	  x = s 2^e \sum_{k=1}^53 f_k 2^{-k},~-1024 \leq~e~\leq~+1024

    |  ``FLT_RADIX                        2``
    |  ``DECIMAL_DIG                     17``
    |  ``FLT_MANT_DIG                    24``
    |  ``FLT_EPSILON        1.19209290E-07F`` *// decimal constant*
    |  ``FLT_EPSILON               0x1P-23F`` *// hex constant*
    |  ``FLT_DIG                          6``
    |  ``FLT_MIN_EXP                   -125``
    |  ``FLT_MIN            1.17549435E-38F`` *// decimal constant*
    |  ``FLT_MIN                  0X1P-126F`` *// hex consttant*
    |  ``FLT_MIN_10_EXP                 -37``
    |  ``FLT_MAX_EXP                   +128``
    |  ``FLT_MAX            3.40282347E+38F`` *// decimal constant*
    |  ``FLT_MAX            0X1.fffffeP127F`` *// hex constant*
    |  ``FLT_MAX_10_EXP                 +38``
    |  ``DBL_MANT_DIG                    53``
    |  ``DBL_EPSILON 2.2204460492503131E-16`` *// deciaml constant*
    |  ``DBL_EPSILON                0X1P-52`` *// hex constant*
    |  ``DBL_DIG                         15``
    |  ``DBL_MIN_EXP                  -1021``
    |  ``DBL_MIN    2.2250738585072014E-308`` *// deciaml constant*
    |  ``DBL_MIN                  0X1P-1022`` *// hex constant*
    |  ``DBL_MIN_10_EXP                -307``
    |  ``DBL_MAX_EXP                  +1024``
    |  ``DBL_MAX    1.7976931348623157E+308`` *// decimal constant*
    |  ``DBL_MAX     0X1.fffffffffffffP1023`` *// hex constant*
    |  ``DBL_MAX_10_EXP                +308``

If a type wider than double were supported, then ``DECIMAL_DIG`` would be greater than
17. For example, if the widest type were to use the minimal-width IEC 60559
double-extended format (64 bits of precision), then ``DECIMAL_DIG`` would be 21.

**Forward references:** conditional inclusion (:ref:`12.1`), complex arithmetic
``<complex.h>`` (:ref:`complex`, extended multibyte and wide character utilities
``<wchar.h>`` (:ref:`wchar`), floating-point environment ``<fenv.h>`` (:ref:`fenv`), general
utilities ``<stdlib.h>`` (:ref:`stdlib`), input/output ``<stdio.h>`` (:ref:`stdio`),
mathematics ``<math.h>`` (:ref:`math`).


.. [#] The floating-point model is intended to clarify the description of each
  floating-point characteristic and does not require the floating-point arithmetic
  of the implementation to be identical.

.. [#] IEC 60559:1989 specifies quiet and signaling NaNs. For implementations that
  do not support IEC 60559:1989, the terms quiet NaN and signaling NaN are intended
  to apply to encodings with similar behavior.
.. [#] Evaluation of ``FLT_ROUNDS`` correctly reflects any execution-time change of
  rounding mode through the function ``fesetround`` in ``<fenv.h>``.
.. [#] The evaluation method determines evaluation formats of expressions involving
  all floating types, not just real types. For example, if ``FLT_EVAL_METHOD`` is 1,
  then the product of two float ``_Complex`` operands is represented in the
  ``double _Complex`` format, and its parts are evaluated to ``double``.
.. [#] The floating-point model in that standard sums powers of b from zero, so
  the values of the exponent limits are one less than shown here.
