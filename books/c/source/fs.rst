.. meta::
  :description: C Programming with C99
  :keywords: Free C Book, C Programming, C99 Programming, C99 Specification

************************
Following Specification
************************
At this point of time I would like to look back and refer to C99 specification
n1124.pdf located at http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1124.pdf,
which, is the C99 specification with me. Since my thoughts are random in nature 
I will try to follow the organization of content given in the specification.
This treatment of C99 is very tightly coupled with compiler(gcc) and
specification. If someone says that a book can be written by ignoring any of
these two then I will be the last person to believe that.:P
However, note that I will not include all the contents of specification and will
exclude some of very obvious and trivial sections/subsections. The following
terms, definitions and symbols have come from specification, however, some are
omitted for the sake of conciseness. When I will repeat the specification at
times I will do a verbatim copy just for quick reference and then add an
explanation to that. Believe me you can learn most of the language just by
studying the specification itself. Chapter no. 2, 3 and 4 will have material
which may have redundant material discussed elsewhere in the book. Note that
specification is directed more at compiler writers rather than at developers.
However, it still covers a lot of ground and is also helpful to understand the
nature of different compilers as where they can go in different directions.

.. _2.1:

================================
Terms, Definitions and Symbols
================================

.. index:: access, read, modify

1. access: <execution-time action> to read or modify the value of an object.

   NOTE 1: Where only one of these two actions is meant, "read" or
   "modify" is used.
   
   NOTE 2: "Modify" includes the case where the new value being stored is
   the same as the previous value.
   
   NOTE 3: Expressions that are not evaluated do not access objects.
   
   There are two parts of any program. Data and instruction. Programs
   are stored in file on some non-volatile storage for example, hard disk drive,
   CD, DVD, tape drive. When they are executed from non-volatile storage they
   are transferred to some volatile storage typically RAM (Random Access Memory)
   of the computer. When a program is executed it becomes a living entity
   capable of doing something and sometimes also referred as process. So when
   the contents of RAM (henceforth referred as memory) is either read or written
   (it does not matter whether the value is same or new) to then it is defined
   as access. Here  point to be noted is that the expressions which will not be
   evaluated do not access objects.
   
   There are certain issues wit the term
   read and modify. One can ask it it the case that multiplication or division
   of a number with 1 modifies it or addition or subtraction of a number with 0
   modifies it. The answer is yes on all these accounts. Similarly, you can
   ask if a bit-field is accessed then is it the case that the bit-fields
   sharing the storage in memory are also accessed. My answer would be yes.
   The reason is there is no way to get address of an individual bit and we
   get at least 32-bits in one fetch cycle on a 32-bit processor.
   
   There can be various reasons why an expression is not evaluated. For
   example:
   
   * being part of a statement which is not executed probably because of
     conditional compilation,
   * being part of a sub-expression whose evaluation is conditional on other
     sub-expressions within a full expression; this means the above point, and
   * being an operand of the ``sizeof`` operator. ``sizeof`` operator never
     evaluates its operand or try to access them. It just computes their
     sizes and pass it along.
   
   Also, consider the following program:
   
   .. code-block:: c

     #include <stdio.h>

     int main()
     {
       int a=0, b=0, c=3, d=4;
         
       a = c + d;
       b = c + d;
          
       return 0;
     }
  
   In this code it is not necessary that data for ``c`` and ``d`` will be
   accessed for second addition.

   Also consider the following program:

   .. code-block:: c

     #include <stdio.h>

     typedef struct {
       volatile int x1:3;
       volatile int x2:3;
       volatile int x3:4;
       volatile int x4:1;
     } S;

     int main()
     {
       int i = 7;
       S s;
			 
       i = s.x2;
			 
       return 0;
     }

   Now depending on whether system is little-endian or big-endian the storage
   of x2 and x3 will be in different bytes. Also, this will change the way
   bytes are accessed when x2 is referred in memory. Many combinations are
   possible depending on processor architecture.

.. index:: alignment

2. alignment: requirement that objects of a particular type be located on
   storage boundaries with addresses that are particular multiples of a byte
   address.

   Say your program requires x bytes of memory then it will not be
   always given x bytes but something more. Say an object requires y bytes then
   it will be always greater or equal to y bytes. This is required so that
   objects are always located on storage boundaries that are particular
   multiples of byte address. The reason for this alignment lies in the
   efficiency of the operating system as a whole. As we know that on 32-bit
   systems data bus is 32 bits similarly on 64-bit systems it is 64 bits. This
   means in one fetch cycle (read up on this on some microprocessor or computer
   architecture book) only 32-bits can be fetched. 32-bits means 4 bytes.
   Oops! I did not tell you about bits and bytes conversion. Not even nibble.
   However, since 4 bytes can be fetched in one cycle compiler tries to optimize
   the data in group of 4 bytes. Given below are some examples.

   .. code-block:: c

     /* Description: Demonstration of structure padding and memory alignment.*/
        
     #include <stdio.h>
    
     typedef struct
     {
       char a;
       int b;
     }A;

     typedef struct
     {
       char a;
       int b;
       char c;
       char d;
       char e;
       int f;
     }B;
      
     typedef struct
     {
       char x;
       char y;
       int z;
     }C;

     typedef struct
     {
       char x;
       int z;
       char y;
     }D;

     int main()
     {
       A a;
       B b;
       C c;
       D d;
       printf("Size of structure %c is %d\n",'A', sizeof(a));
       printf("Size of structure %c is %d\n",'B', sizeof(b));
       printf("Size of structure %c is %d\n",'C', sizeof(c));
       printf("Size of structure %c is %d\n",'D', sizeof(d));

       return 0;
     }

   the output is::

     Size of structure A is 8
     Size of structure B is 16
     Size of structure C is 8
     Size of structure D is 12

   Now let me ask you a question that how come size of ``C`` is 8 while size of
   ``D`` is 12 while both structures contain same no. of similar elements. The answer
   lies in the order of elements. Further let us consider the following program:

   .. code-block:: c

     #include <stdio.h>

     typedef struct {
       char c;
       int j;
     }t;

     int main()
     {
       t s1;

       s1.j = 4;
       s1.c = 5;

       printf("%p %p", &s1.j, &s1.c);

       return 0;
     }

   and the output is::

     0xbfc98f7c 0xbfc98f78

   Now if you notice ``0xbfc98f7c % 4`` is 0 which is our alignment requirement. So,
   now you can see why structure ``C`` and ``D`` have different sizes.

   Another point worth noting is that certain processors allocate arrays on
   word boundaries which are power of 2. For example, a character array
   requiring x bytes will actually n bytes where x is not power of 2 and n is
   next power of 2 which is greater than x. Such optimizations are quite common
   in computers and you need to be aware of it to write efficient programs
   because you cannot make any assumptions about behavior of processor.

.. index:: argument, parameter
.. index::
   pair: actual; argument
   pair: actual; parameter
   pair: formal; argument
   pair: formal; parameter

3. argument: 

   actual argument

   actual parameter (deprecated)

   expression in the comma-separated list bounded by the parentheses in a function
   call expression, or a sequence of preprocessing tokens in the comma-separated
   list bounded by the parentheses in a function-like macro invocation.

   Sometimes they are also called actual parameters(in function definition) but as
   you can see
   in specification ISO/IEC 9899:TC2 Section 3.3 this term is being deprecated. 
   A function can have zero or more actual arguments and if they are more than
   one then each of them will be separated by a comma. These also apply to
   macros that is preprocessor directives when invoked like a function.

.. index:: behavior

4. behavior: external appearance or action

   By this term ``behavior`` the specification tries to categorize certain behavior
   which do not fall in other categories. For example, there are four more types of
   behaviors namely implementation-defined behavior, locale-specific behavior,
   undefined behavior and unspecified behavior. The term ``behavior`` categorizes
   external and those behaviors which do not fall under these four categories.
   External behavior includes mouse, keyboard and such.

.. index::
   pair: behavior; implementation-defined

5. implementation-defined behavior: unspecified behavior where each implementation
   documents how the choice is made.

   EXAMPLE An example of implementation-defined behavior is the propagation of the
   high-order bit when a signed integer is shifted right.

   When specification does not specify how a
   particular element of language should be implemented then programs use their
   logic to implement these things and sometimes it depends on hardware as well.
   Behavior of such elements is called implementation-defined-behavior. A full list
   of such behaviors is typically provided by the compiler. Consider the
   following example:

   .. code-block:: c

     #include <stdio.h>

     int main()
     {
       printf("%d %d\n", -2>>1, -1>>1);

       return 0;
     }

   and the output is::

     -1 -1

.. index:: behavior; locale-specific

6. locale-specific behavior: behavior that depends on local conventions of
   nationality, culture, and language that each implementation documents

   EXAMPLE An example of locale-specific behavior is whether the ``islower`` function
   returns true for characters other than the 26 lowercase Latin letters.

   Any behavior which changes when locale of the program changes will come under
   this category. The character e-acute is a lowercase letter in a Latin-1 locale,
   but not in the "C" locale. A full list of such behaviors is typically provided by
   the compiler. 

.. index:: behavior; undefined

7. undefined behavior: behavior, upon use of a non-portable or erroneous program 
   construct or of erroneous data, for which International Standard imposes
   no requirements.

   NOTE: Possible undefined behavior ranges from ignoring the situation completely
   with unpredictable results, to behaving during translation or program execution
   in a documented manner characteristic of the environment (with or without the
   issuance of a diagnostic message), to terminating a translation or execution
   (with the issuance of a diagnostic message).

   EXAMPLE An example of undefined behavior is the behavior on integer overflow.

   We will see more examples of these undefined behaviors as we go through the
   specification.

   It is very easy to say undefined behavior for specification but when a
   compiler programmer writes a compiler he cannot really say that our program
   is causing undefined behavior. Sometimes it will emit a warning but
   sometimes it will silently compile the program. However, then output of two
   compilers may not match. Even output of two different version of compilers
   may not match.

.. index:: behavior, unspecified

8. unspecified behavior: use of an unspecified value, or other behavior where this
   International Standard provides two or more possibilities and imposes no further
   requirements on which is chosen in any instance.

   EXAMPLE An example of unspecified behavior is the order in which the arguments
   to a function are evaluated.

   We will more of these as we progress and list of all such behaviors is given in
   the appendix.

   It is different than undefined behavior but compiler writers are still free
   to to implement as they see fit.

.. index::
   single: bit

9. bit: unit of data storage in the execution environment large enough to hold an
   object that may have one of two values.

   NOTE It need not be possible to express the address of each individual bit of an
   object.

   The term bit was first coined by John Wilder Tukey who also coined the term
   software, best known for his work on fast Fourier transform(FFT). Note that
   base-2 is not the most efficient way to store the numbers but it is base-e. You
   can read about more on it in. [Hayes]_ Those who are
   from electronics background know that transistors operate in cut-off(very low
   voltage, high current) and saturation(high voltage, low current). These two
   states consume very less power. The other two states are active and
   reverse-active. However, power consumption is more. Therefore, just to save power
   there is a trade-off between compactness and power consumption. Usually, popular
   compilers like gcc or gcc do not provide mechanism to sequence of bits.
   However, there is a compiler which allows bit-level addressing in registers if
   not memory. [Wegner]_ There are processors where data is not byte-aligned and
   some bit-level addressing is available as shown in [Nie]_ .

.. index::
   single: byte

10. byte: addressable unit of data storage large enough to hold any member of the
    basic character set of the execution environment.

    NOTE 1: It is possible to express the address of each individual byte of an
    object uniquely.

    NOTE 2: A byte is composed of a contiguous sequence of bits, the number of
    which is implementation-defined. The least significant bit is called the
    *low-order bit*; the most significant bit is called the *high-order bit*.

    As most of programmers will know that a byte is 8 bits. However, the term for
    8 bits is *octet* as the term for 4 bits is *nibble*. This term is now so common
    for 8 bits that they are used interchangeably. Note that byte and ``char`` are
    different. byte is used to denote the storage while ``char`` is used to denote
    the type. We can say a 32-bit integer occupies 4 bytes but we cannot say the
    same in terms of ``char``. [POSIX]_ defines a byte as an octet.

    Considering an integer which is a multi-byte type can have its bytes
    individually addressed. Even though it says that numbers of bits is
    implementation-defined on most systems this number is governed by
    ``CHAR_BIT`` macro which has a value of 8.

.. index::
   single: character    

11. character: Member of a set of elements used for the organization, control,
    or representation of data.

    There are many character sets each capable of representing one language in this
    world. Sometimes they fit in a single byte while sometimes they do not and then
    we need more bytes to represent that kind of language.

    I.   single-byte character: Bit representation that fits in a byte.
    II.  multi-byte character: Sequence of one or more bytes representing a
         member of the extended character set of either the source or the 
         execution environment.
    III. wide Character: Bit representation that fits in an object of type
         ``wchar_t``, capable of representing any character in the current
         locale.
    
    A character is one the most primitive types of C programming language. On
    most machines its size is 1 byte. Even though ``void`` has also a size of
    1 byte it is known as incomplete type and cannot be used to create an
    object.

.. index::
   single: constraint
    
12. constraint: Restriction, either syntactic or semantic, by which the
    exposition of language elements is to be interpreted.

    There are certain restrictions imposed by the language through the standard
    which programmers must adhere to. Violation of these restrictions may lead to
    diagnostic messages being issued from the compiler. We will see such constraints
    throughout the standard.

.. index::
   single: correctly rounded result

13. correctly rounded result: Representation in the result format that is
    nearest in value, subject to the effective rounding mode, to what the result
    would be given unlimited range and precision.

    This is something which is very much related to floating-point numbers. Consider
    two representable numbers ``a`` and ``b``. Now there can be infinite numbers
    between these two. However, there will be exactly one number which will lie in
    between them. If this number is not representable as per floating-point
    specification then the rounding of this number will depend on the current
    rounding mode in effect. IEEE specifies four rounding modes for rounding
    floating-point numbers. They are: ``rd_near`` (for rounding to the nearest),
    ``rd_zero`` (for rounding to zero), ``rd_minf`` (for rounding to minus infinity)
    and ``rd_pinf`` (for rounding to plus infinity). Consider the following program
    which shows all four rounding modes in action.

    .. code-block:: c

      #include <stdio.h>
      #include <stdlib.h>
      #include <fenv.h>

      int main (int argc, char **argv)
      {
        float x, y, z1, z2;
        
        x = 1.0;
        y = 1.0e-20;
        
        fesetround(FE_TONEAREST);
        z1 = x - y; z2 = y - x; z1 = z1 - x; z2 = z2 + x;
        printf("near, z1 = %17.10e, z2 = %17.10e \n", z1, z2);
        
        fesetround(FE_UPWARD);
        z1 = x - y; z2 = y - x; z1 = z1 - x; z2 = z2 + x;
        printf("minf, z1 = %17.10e, z2 = %17.10e \n", z1, z2);
        
        fesetround(FE_DOWNWARD);
        z1 = x - y; z2 = y - x; z1 = z1 - x; z2 = z2 + x;
        printf("pinf, z1 = %17.10e, z2 = %17.10e \n", z1, z2);
        
        fesetround(FE_TOWARDZERO);
        z1 = x - y; z2 = y - x; z1 = z1 - x; z2 = z2 + x;
        printf("zero, z1 = %17.10e, z2 = %17.10e \n", z1, z2);


      return 0;
      }

    and the output is::

      near, z1 =  0.0000000000e+00, z2 =  0.0000000000e+00 
      minf, z1 =  0.0000000000e+00, z2 =  5.9604644775e-08 
      pinf, z1 = -5.9604644775e-08, z2 = -0.0000000000e+00 
      zero, z1 = -5.9604644775e-08, z2 =  5.9604644775e-08

    Note that you need to link with ``-lm`` for compilation of the program, just in
    case.

.. index::
   single: diagnostic message

14. diagnostic message: message belonging to an implementation-defined subset of the
    implementation's message output.

    These refer to compilation-time warning or error messages produced by the
    compiler. Since the specification does not direct any particular way in which
    these diagnostic messages should be generated all compiler writers are free to
    do whatever suits their whim. For example, earlier gcc used to print only line
    numbers but now they also show column numbers where errors have occurred. gcc
    goes one step further and produces colored output.

.. index::
   single: forward reference

15. forward reference: Reference to a later subclause of International
    Standard that contains additional information relevant to this subclause.

.. index::
   single: implementation

16. implementation: Particular set of software, running in a particular
    translation environment under particular control options, that performs
    translation of programs for, and supports execution of functions in, a
    particular execution environment.

    Here implementation means what we typically know as compiler. Note that it does
    not even say compiler. Even a C interpreter can be taken as an implementation.
    However, historically C has been a compiled language so we will mean
    implementation as compiler henceforth. Note that when you change compiler or even
    compiler options then you are changing the translation of code which means
    implementation has changed.

.. index::
   single: implementation limit
    
17. implementation limit: Restriction imposed upon programs by the implementation.

    In C all types have a range or limits partially for efficiency reasons. The
    specification also says that a strictly conforming program will remain below
    the lowest limits. Now what these limits do is that increase the portability of
    program just like being the lowest common denominator.

.. index::
   single: objects    

18. object: region of data storage in the execution environment, the contents of
    which can represent values. When referenced, an object may be interpreted as
    having a particular type.

    These are what we know as variables in common developer language. The region of
    data storage occupied by an object will be contiguous number of bytes. Note that
    the term object used in ISO standard of C has nothing to do with *object* in
    object-oriented programming paradigm.

.. index::
   single: parameter

19. parameter: Also known as formal parameter or formal argument (deprecated).
    Object declared as part of a function declaration or definition that
    acquires a value on entry to the function, or an identifier from the
    comma-separated list bounded by the parentheses immediately following the
    macro name in a function-like macro definition.

    For example:

    .. code-block:: c

      #define FUNC(X, Y) //two parameters

      int f(int x);  //one parameter
      void y(int y, int z); //two parameters

.. index::
   single: recommended practice

20. recommended practice: Specification that is strongly recommended as being in
    keeping with the intent of the standard, but that may be impractical for
    some implementations.

.. index::
   single: value

21. value: Precise meaning of the contents of an object when interpreted as
    having a specific type.

    This at times will depend on the type of machine. For example, a ``union``
    containing an integer and two characters will have different values for
    characters on big-endian and little-endian machines. But on the same machine
    the meaning must be accurate for contents of an object.

.. index::
   pair: value; implementation-defined

22. implementation-defined value: Unspecified value where each implementation
    documents how the choice is made.

    There are certain values defined by the implementation. For example, in the
    table for defining numerical limits in chapter 3 specification defines INT_MAX
    in a fashion as if integers are 16-bit. But all modern 32-bit compilers do not
    follow this limit and they treat integer as 32-bit entity.

.. index::
   pair: value; indeterminate
    
23. indeterminate value: Either an unspecified value or a trap representation.

    Consider a variable declaration ``int i;``. What value does this integer ``i``
    contain? We do not know. The value contained is unspecified as per specification
    nomenclature. Developers also know this as garbage value. Behavior caused
    by usage of such variables will be known as unspecified behavior. However,
    behavior caused by a trap representation will be undefined behavior.

.. index::
   pair: value; unspecified

24. unspecified value: Valid value of the relevant type where International
    Standard imposes no requirements on which value is chosen in any instance.

    NOTE: An unspecified value cannot be a trap representation.

    As we have seen in last example the value of the variable will be unspecified
    value.
25. :math:`\lceil x\rceil`: ceiling of x: the least integer greater than or
    equal to x.
26. :math:`\lfloor x\rfloor`: floor of x: the greatest integer less than or
    equal to x.


.. [Hayes] B. Hayes. Third base. American Scientist, 89(6):490–494, 2001.
.. [Wegner] J. Wagner and R. Leupers. C compiler design for an industrial network
  processor. In Proceedings of The Workshop on Languages, Compilers, and Tools for
  Embedded Systems (LCTES 2001), pages 155–164, 2001.
.. [Nie] X. Nie, L. Gazsi, F. Engel, and G. Fettweis. A new network processor
  architecture for high-speed communications. In IEEE Workshop on Signal Processing
  Systems (SiPS’99), 1999.
.. [POSIX] ISO. ISO/IEC FDIS 9945:2008 Information technology - Portable Operating
  System Interface (POSIX(R)). ISO, 2008.


You can also read the conformance part of this chapter which is chapter 3 in
specification.
