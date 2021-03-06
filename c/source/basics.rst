.. meta::
  :description: C Programming
  :keywords: Free C Book, C Programming, C11 Programming, C11 Specification
  
************
Basics of C
************
There are certain rules in every language;
certain grammar which dictates the way language will be spoken and written. It
has a script to write with. Similarly, programming languages have BNF
(Backus-Naur Form) context-free grammar. There are valid characters in a
programming language and a set of keywords. However, programming language
ruleset is very small compared to a natural programming language. Also, when
using natural programming language like talking to someone or writing something
the other person can understand your intent but in programming you cannot
violate rules. The grammar is context-free. Compilers or interpreters cannot
deduce your intent by reading code. They are not intelligent. You make a mistake
and it will refuse to listen to you no matter what you do. Therefore, it is very
essential to understand these rules very clearly and correctly.

Note that C language is governed by ISO specification **ISO/IEC 9899:2011**. As
much as I would like to refer to specification there are 
financial reasons why I will not because it is expensive and I do not expect
all of readers to buy this. Thus I would use n1570.pdf mentioned in previous
chapter.  Sections of this document will be referred like
:math:`\S(\text{iso.section number})`.

.. index::
   single: character sets
   single: trigraph sequences

.. _5.1:

===================
The C Character Set
===================
The following form the C character set you are allowed to use in it:

``[a-z] [A-Z] [0-9] ~ ! # % ^ & * ( ) - = [ ] \ ; ' , . / _ + { } | : " < > ?``

This means along with other symbols you can use all English alphabets (both
uppercase and lowercase) and Arabic numerals. However, English is not the only
spoken language in the world. Therefore in other non-English speaking counties
there are keyboard where certain characters present in above set are not
present. The inventors of C were wise enough to envision this and provide the
facility in form of trigraph sequences. Here, I am presenting table of trigraph
sequences.

+----------+------------+----------+------------+----------+------------+
| Trigraph | Equivalent | Trigraph | Equivalent | Trigraph | Equivalent |
+==========+============+==========+============+==========+============+
|   ??=    |     #      |   ??'    |     ^      |   ??!    |     \|     |
+----------+------------+----------+------------+----------+------------+
|   ??(    |     [      |   ??)    |     ]      |   ??<    |     {      |
+----------+------------+----------+------------+----------+------------+
|   ??>    |     }      |   ??/    |     \\     |   ??-    |     ~      |
+----------+------------+----------+------------+----------+------------+

.. index::
   single: keywords

.. _5.2:

========
Keywords
========
The following are reserved keywords for C programming language which you are not
allows to use other than what they are meant for:

+--------+--------+------------+------------+
|Keywords of C                              |
+========+========+============+============+
|auto    |enum    |restricted  |unsigned    |
+--------+--------+------------+------------+
|break   |extern  |return      |void        |
+--------+--------+------------+------------+
|case    |float   |short       |volatile    |
+--------+--------+------------+------------+
|char    |for     |signed      |while       |
+--------+--------+------------+------------+
|const   |goto    |sizeof      |\_Bool      |
+--------+--------+------------+------------+
|continue|if      |static      |\_Complex   |
+--------+--------+------------+------------+
|default |inline  |struct      |\_Imaginary |
+--------+--------+------------+------------+
|do      |int     |switch      |            |
+--------+--------+------------+------------+
|double  |long    |typedef     |            |      
+--------+--------+------------+------------+
|else    |register|union       |            |
+--------+--------+------------+------------+

Following keywords were added in C11 specification:

+----------+---------+------------+------------+---------------------------------+
|Keywords added in C11 specification                                             |
+==========+=========+============+============+=================+===============+
|\_Alignof |\_Atomic |\_Generic   |\_Noreturn  |\_Static\_assert |\_Thread\_local| 
+----------+---------+------------+------------+-----------------+---------------+

These keywords serve specific purpose. You will come to know about all of them
as you progress through the book. Next we look at identifiers.

.. index::
   single: identifiers

===========
Identifiers
===========
The names which we give to our variables are known as
:math:`\S(\text{iso.6.4.2})`. Something
with which we identify. As you have already seen what is allowed in C's
character set but not all are allowed in an identifiers name. Only alphabets
from English language both lowercase and uppercase, Arabic digits from zero to
nine and underscore (\_) are allowed in an identifiers name. The rule for
constructing names is that among the allowed characters it can only begin with
only English alphabets and underscore. Numbers must not be first character. For
example, ``x, _myVar, varX, yourId78`` are all valid names. However, take care
with names starting from underscore as they are mostly used by different library
authors. Invalid identifier examples are ``9x, my$, your age``. Invalid
identifier examples are ``9x, my$}`` and
``your age``. If the identifier name contains extended
characters(i.e. other than what is mentioned for simplicity like, Chinese,
European, Japanese etc) then it will be replaced with an encoding of universal
character set, however, it cannot be first character.

Length of an identifer for 31 characters, which, acts as minimum limits, as
specified in :math:`\S(\text{iso.5.2.4.1})`, is guaranteed across all
platforms.

===========
Programming
===========
Now is time for some programming. Let us revisit our first program and try to
understand what it does. Here I am giving code once again for quick reference:

.. code-block:: c

  // My first program
  // Description: This program does nothing.
 
  #include <stdio.h>
 
  int main(int argc, char* argv[])
  {
    return 0;
  }



You can now issue a command as ``$gcc nothing.c`` where ``nothing.c`` is the
filename by which you saved the source code. Note that ``$`` is the prompt not
part of command itself. Then you can do an ls and you will find that ``a.out``
is a file which has been produced by gcc. Now you can run this program by
saying ``./a.out`` and nothing will happen. But if you type ``echo $?`` then you
will find that 0 is printed on screen which is nothing but 0 after return of our
program.

As you can see this program does almost nothing but it is fairly complete
program and we can learn a lot from it about C. The first line is a comment.
Whenever C compiler parses C programs and it encounters ``//`` it ignores rest
of line as code i.e. it does not compile them. This type of single line comment
were introduced in C99 standard and if your compiler is really old the compiler
may give you error message about it. The second and third lines are also
comments. Anything between ``/*`` and ``*/`` is ignored like ``//``. However, be
careful of something like ``/* some comment */ more comment */``. Such comments
will produce error messages and your program will fail to compile.

Comments are very integral part of programming. They are used to describe
various things. You can write whatever you want. They may also be used to
generate documentation with tools like doxygen. Typically comments tell what
the program is doing. Sometimes how, when the logic is really complex. One
should be generous while commenting the code.

``#include`` is a pre-processor directive. It will look for whatever is
contained in angular brackets in the ``INCLUDEPATH`` of compiler. For now you
can assume that ``/usr/include`` is in include path of compiler.
Basically what it does is that it looks for a file names ``stdio.h`` in the
``INCLUDEPATH``. If that is found the content of that file is pasted here in our
program.If you really want to see what happens then you can type
``$gcc -E nothing.c``. You will see lots of text scrolling on your screen. The ``-E`` switch
tells gcc that just preprocess the file, do not compile it, and send the
resulting output to standard output (we will know about this more later), which
happens to be your monitor in this case..

Next line is ``int main(int argc, char* argv[])``. Now this is very special
function. Every complete executable(shared objects or dlls do not have main even
though they are C programs) C program will have one main function unless you do
assembly hacking. This function is where the programs start. The first word
``int`` is a keyword which stands for integer. This signifies the return type of
function. ``main`` is the name of the function. Inside parenthesis you see ``int
argc`` which tells how many arguments were passed to program. While ``char*
argv[]`` is a pointer to array which we will see later. For now it holds all the
arguments to the program.

Next is a brace. The scope in C is determined by braces. Something outside any
brace has global scope (we will see these later), something inside first level
of brace has function or local scope. Something inside second or more level of
braces have got that particular block scope. Scope here means that when there
will be a closing brace that particular variable which is valid in that scope
will cease to exist. However, we do not have to worry about that yet as we do
not have any variable. Just note that a corresponding closing brace will be the
end of main function.

Next line is ``return 0;`` This means whoever has called ``main()`` will get a 0
as return is returning 0. In this case, receiver is the shell or operating
system which has invoked the very program. The semicolon is called the
terminator and used also on Java or C++ for example. The very requirement of
semicolon is to terminate the statement and move on to next statement.

However, the program shown does not do much. Let us write a program which has
some more functionality and we can explore more of C. So here is a program which
takes two integers as input from users and presents their sum as output. Here is
the program:

.. code-block:: c

  // My second program
  // Description: It adds two numbers
 
  #include <stdio.h>
 
  int main()
  {
    int x=0, y=0, sum=0;
 
    printf("Please enter an integer:\n");
    scanf("%d", &x);
 
    printf("Please enter another integer:\n");
    scanf("%d", &y);
 
    sum = x + y;
 
    printf("%d + %d = %d\n", x, y, sum);
 
    return 0;
  }



and the output is::

  shiv@shiv:~/book/code$ ./addition
  Please enter an integer:
  7
  Please enter another integer:
  8
  7 + 8 = 15
  shiv@shiv:~/book/code$

Note that ``shiv@shiv:~/book/code$`` is the prompt. The Makefile is also
updated:

.. code-block:: make

  check-syntax:
      gcc -o nul -Wall -S $ (CHK_SOURCES)

  nothing:nothing.c
      gcc nothing.c -o nothing

  addition:addition.c
      gcc addition.c -o addition

You can choose ``Tools->Compile`` then enter ``make -k addition`` as make
commands in the Emacs's minibuffer and execute like ``$./addition``.

Let us discuss new lines one by one. The line ``int x=0, y=0, z=0;`` is
declaration and definition or initialization of three ints. ``int`` keyword in C
is used to represent integers. Now we have three integers with there values set
to 0. Note that how the variables are separated by commas and terminated by
semicolon(as we saw in last program also). We could have also written it like
this:

.. code-block:: c

  int x;
  int y;
  int z;
 
  x = 0;
  y = 0;
  z = 0;

or

.. code-block:: c

  int x, y, z;
 
  x = y = z = 0;

However, the first method is best and most preferred as it prevents use before 
definition. int is a data-type in C. ``x, y,`` and ``z`` are variables of type
``int``. This means that the size of these variables will be same as ``int``.
Note that C is a statically typed language and all types have predefined memory
requirements. In cour case, int requires 4 bytes on 32-bit systems. 

Now I will talk about ``printf()`` function. This function is declared in
``stdio.h``. The prototype of ``printf()`` is

.. code-block:: c

  int printf(const char *restrict format, ...);

The first argument format is what we have in first two function calls. The
second is a ``...`` which means it can take variable number of arguments known
as variable-list. We have seen this in the third call.This means it will take a
string with optional variable no. of arguments. The string is called the
format-string and determines what can be printed with supplied arguments. These
``...`` are used to supply variable no. of arguments. In the first two
``printf()`` statements we just print the format-string so that is simple.
However, in the last one, we have format as ``%d`` which signifies a decimal
integer. The integers printed are in the same order in which they were supplied.

Time for some input. ``scanf()`` is scan function which scans for keyboard
input. As by now you know that ``%d`` is for decimal integer but we have not
said ``x`` or ``y``. The reason is ``x`` and ``y`` are values while ``&x`` and
``&y`` are the addresses of ``x`` and ``y`` in memory. ``scanf()`` needs the
memory address to which it can write the contents to. You will see ``&``
operator in action later when we deal with pointers. Just remember for now that
to use a simple variable with ``scanf()`` requires ``&`` before its name.

Now I am going to take you on a tour of data types. Till now we have just seen
only ``int``. So onward to data types.

.. index::
   single: types

==================
Data Types
==================
C is a statically typed language
that is every variable has a type associated with it. Types are discussed in
specification in great length in :math:`\S(\text{iso.6.2.5})` to
:math:`\S(\text{iso.6.2.8})`.
These types determine
what kind of values these variables can hold and how they will be
interpreted. For example, say you are given a sequence of 0s
and 1s how much can you work with them. We as humans are not very versed with 0s
and 1s. Also, say we encode character 'A' for 10101 will it be easy for you to
see A or numbers. Also, numbers range from :math:`-\infty` to :math:`\infty`.
Also, since C is statically typed the sizes of data types have to be known at
compile time. There are four types of data types. Integral, floating-point,
arrays and pointers. Here, I will deal with the two former types and leave
latter two for later. The integral types are ``char, short int, int, long`` and
``long long`` and floating-point types are ``float, double`` and ``long
double``. ``signed`` and ``unsigned`` are sign modifiers which also modified the
range of data types but do not affect their memory requirements. By default all
basic data types are signed in nature and you must qualify you variables with
unsigned if you want that behavior. ``short`` and ``long`` are modifiers for
size which the data type occupies but I consider them as different types because
memory requirements are different. The ranges of integral data types directly
reflect their memory requirements and if you know how much memory they are going
to occupy you can easily compute their ranges. The range of floating-point comes
from IEEE specification.

The range of data types is given in Numerical limits
:math:`\S(\text{iso.5.2.4.2})`. For example, in the range program given below
size of ``int`` is 4 bytes which is double than what is specified by
specification i.e. 2 bytes. Given below is the table for numerical limits
for reference from specification. Note that these are in 1's complement
form thus you have to adjust for 2's complement. Note that these limits
are minimum limits imposed by specification and actual limits of data
types may be different on your particular platform. The actual values of
these limits can be found in headers ``<limits.h>, <float.h>`` and
``<stdint.h>``. The values given below are replaced by constant
expressions suitable for use in ``#if`` preprocessing
directives. Moreover, except for ``CHAR_BIT`` and ``MB_LEN_MAX``, the
following are replaced by expressions that have the same type as an
expression that is an object of the corresponding type converted
according to the integer promotions. Their implementation-defined values
are equal or greater in magnitude (absolute value) to those shown, with
the same sign. Note that these ranges are for 1's complement. While most
probably your computer uses 2's complement so you should add -1 to the
negative range. Thus MINs are greater than MAXes.
      
* number of bits for smallest object that is not a bit-field (byte)

  ``CHAR_BIT`` 8

* minimum value for an object of type ``signed char``

  ``SCHAR_MIN`` -127 :math:`~~~~-2^7 - 1`

* maximum value for an object of type ``signed char``

  ``SCHAR_MAX`` 127 :math:`~~~~2^7 - 1`

* maximum value for an object of type ``unsigned char``

  ``UCHAR_MAX`` 255 :math:`2^8 - 1`

* minimum value for an object of type ``char``

  ``CHAR_MIN`` *see below*

* maximum value for an object of type ``char``

  ``CHAR_MAX`` *see below*

* maximum number of bytes in a multibyte character, for any supported locale

  ``MB_LEN_MAX`` 1

* minimum value for an object of type ``short int``

  ``SHRT_MIN`` -32767 :math:`-2^{15} - 1`

Let us write a program to find out memory required for various data types:

.. code-block:: c

   // My range program
   // Description: It gives ranges of integral data types
 
   #include <stdio.h>
   #include <limits.h>
 
   int main()
   {
     printf("Size of char is..........%d\n", sizeof(char));
     printf("Size of short int is.....%d\n", sizeof(short int));
     printf("Size of int is...........%d\n", sizeof(int));
     printf("Size of long is..........%d\n", sizeof(long));
     printf("Size of long long is.....%d\n", sizeof(long long));
     printf("Size of float is.........%d\n", sizeof(float));
     printf("Size of double is........%d\n", sizeof(double));
     printf("Size of long double is...%d\n", sizeof(long double));c
 
     return 0;
   }



and the output will be::

    Size of char is..........1
    Size of short int is.....2
    Size of int is...........4
    Size of long is..........4
    Size of long long is.....8
    Size of float is.........4
    Size of double is........8
    Size of long double is...12

Based on this it is left as an exercise to reader to compute the ranges of these
data types.

Integers
========
Integers are probably simplest to understand of all data types in C so I am
discussing them before any other type. As you have seen the keyword for
declaring integer type is ``int``. An integer can be 2 bytes or 4 bytes. A
16-bit compiler will have integer of 2 bytes while a 32-bit or 64-bit compiler
will have a 4 byte integer. The specified minimum size of an integer is 2
bytes. Since most modern computers are either 32-bit with
64-bit becoming more dominant we will assume in this book that integer's size
is 4 bytes or 32-bit implicitly because 32-bit ``gcc`` gives a 32-bit
integer. There is a keyword ``signed`` which when 
applied to a data type splits the range into two parts. Since integer is 32
bit so it will be split in the range from \\(-2^{31}\\) to \\(2^{31} - 1\\). By default
integers, characters and long are ``signed``. Floats and doubles are
always ``signed`` and have no unsigned counterpart. When the integer will
be \texttt{unsigned} then the positive range doubles and it becomes $0$ to
\\(2^{32} - 1\\). When the value of intger is more than its range then the values
rotate in the using modulus with the largest value of the range which is also
known as ``INT_MAX`` or ``INT_MIN``. For ``unsigned`` types it
is ``UINT_MAX``. These are macros and are defined in ``limits.h``
which you can find in ``/usr/include`` or ``/usr/local/include`` by
default.

There are four different types of integers based on their storage
requirement. ``short int, int, long`` and ``long long``. Short
integers are always two bytes. Signed short integer has a range of -32768 to
32767 while unsigned of that has a range of 0 to 65535. Plain integers
i.e. ``int`` have already been discussed. ``long`` are having a
minimum storage requirement of 4 bytes. Usually it is large enough to represent
all memory addresses of the system because ``size_t`` is
``unsigned long``.

``short, long`` and ``long long`` qualifiers decrease/increase the
range of plain integers. On a 64-bit compiler ``short int`` will be 2 bytes
while ``long int`` will be 8 bytes, which, will be equal to ``long longint``.
``unsigned long int`` is chose in such a way that it should be 
capable of representing all memory addresses because it has a ``typedef`` to
``size_t`` which is the type of argument received by many functions
including memory allocation functions.

Characters
==========
A ``char`` is 1 byte i.e. 8 bits or ``CHAR_BIT`` bits. So its signed
version i.e. 2's 
complement where half the range is negative and half is positive will have
value from -128 to 127. Well that is not exactly opposite because we have only
one zero for positive and negative numbers. If it would have been 1's
complement then range would have been from -127 to 127 but since computers
follow 2's complement the specification clearly mentions that range should be
from \\(-2^7\\) to \\(2^7 - 1\\). Note that chars are fundamentally integral types and
ASCII symbols are first 128 numbers or in other words they are 7-bit numbers.

So a character '0' is internally 48 in decimal which is its integral or
internally it is handled as a sequence of binary numbers representing
``0x30`` in hexadecimal. These integral values for characters are known as
ASCII value. A full table of ASCII values is given in the appendix A.

A simple program which takes input for few characters and then prints them on
console along with their ascii values is given below:

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     char c = 0;
     char c1 = 0, c2 = 0;

     printf("Enter a character on your keyboard and then press ENTER:\n");
     scanf("%c", &c);
     printf("The character entered is %c and its ASCII value is %d.\n", c, c);
     // Their remains '\n' in the stdin stream which needs to be cleared.
     getchar();
     printf("Enter a pair of characters on your keyboard and then press \
             ENTER:\n");
     scanf("%c%c", &c1, &c2);
     printf("The characters entered are %c and %c and their ASCII \
             values are %d and %d respectively.\n", c1, c2, c1, c2);

     short int si = 0;

     si = c1 + c2;

     printf("The sum of c1 and c2 as integers is %hd.\n", si);

     return 0;
   }

A sample run may have following output:

.. code-block:: text

   Enter a character on your keyboard and then press ENTER:
   1
   The character entered is 1 and its ASCII value is 49.
   Enter a pair of characters on your keyboard and then press ENTER:
   12
   The characters entered are 1 and 2 and their ASCII values are 49 and 50
   respectively.
   The sum of c1 and c2 as integers is 99.

As you can see from the program that characters are internally stored as
integers and we can even perform integers which we normally perform on
numbers like addition as shown. We can perform other operation as subtraction,
multiplication and division, however, most of the time addition or subtraction
only makes sense to advance the characters in their class. Multiplication and
division of characters with other characters or integers does not make sense.

One problem of concern is the extra ``\n`` in the input
stream. It does not cause trouble with integers but when you want to read
characters then the ``Enter`` or ``Return`` keys which may be left
over from the last input will cause trouble. ``\n`` is
recognized as a character and will be assigned to next variable if it is in
``stdin``. One of the ways to remove it is to make a call to
``getchar`` which reads one character from the ``stdin`` stream.

Floating Types
==============
Floating point representation is a lot more complicated in computers than it
is for us human beings. C specification takes floating points description and
specification from **IEC 60559:1989** which is a standard for floating point
arithmetic which is same as **IEEE 754**. In C there are three types of floating
point numbers ``float, double`` and ``long double``. It is described
in specification in :math:`\S(\text{iso.5.2.4.2.2})`.

A floating-point number is used to represent real-world fractional value which
is a trade-off between range and accuracy because as I said in fractional
binary numbers, a decimal fraction cannot represented in binary unless the
denominator of that number is an integral power of 2. A number is, in general,
represented approximately to a fixed number of significant digits (*the
significand*) and scaled using an exponent; numbers are usually binary, octal,
decimal or hexadecimal. A number that can be represented exactly is of the
following form:

:math:`\text{significand} \times \text{base}^\text{exponent}`

For example, \\(1.2345 = \\underbrace{12345}_\\text{significand} \\times
\\,\\underbrace{10}_\\text{base}\\!\\!\\!\\!\\!\\!^{\\overbrace{-4}^\\text{exponent}}\\)

The term floating point refers to the fact that a number's radix point (decimal
point, or, more commonly in computers, binary point) can "float"; that is, it
can be placed anywhere relative to the significant digits of the number.

Representation of Floating-Point Numbers
----------------------------------------
Given below are pictorial representations of 32-bit and 64-bit floating point
numbers:

.. tikz:: 32-bit floating-point numbers

   \foreach \x in {0, ..., 31}
   \draw (\x*0.4cm, 0) -- +(.4cm, 0) -- +(.4cm, 0.5cm) -- +(0, .5cm) --
   cycle;
   \draw (0.2cm, 0.6cm) -- (0.2cm, 1cm);
   \draw (0.6cm, 0.6cm) -- (0.6cm, 1cm) -- (3.4cm, 1cm) -- (3.4cm, 0.6cm);
   \draw (3.8cm, 0.6cm) -- (3.8cm, 1cm) -- (12.6cm, 1cm) -- (12.6cm, 0.6cm);
   \foreach \x in {31, ..., 0}
   \node at (\x*0.4cm, 0) [xshift=.2cm, yshift=-.3cm, align=center] {\tiny \x};
   \node at (0.2cm, 1.3cm) [align=center] {sign};
   \node at (2cm, 1.3cm) [align=center] {exponent(8 bits)};
   \node at (8.2cm, 1.3cm) [align=center] {fraction(23 bits)};

Similarly in 64-bit floating point numbers we have 1 bit for sign, 11 bits for
exponent and 52 bits for fractional part. Clearly zero will be represented by
all sign and exponent bits having value 0 for them.

C also has concept of positive and negative infinities. Sign bit is 0 for
positive infinity and 1 for negative infinity. Fractional bits are 1 while
exponent bits are all 1.

Certain operations cause floating point exceptions like division from zero or
square rooting a negative number. Such exceptions are represented by NANs which
stands for "not a number". Sign for NaNs is similar i.e. 0 for positive and 1
for negative. Exponent bits are 1 and fractional part is anything but all 0s
because that represents positive infinity.

There is also four rounding modes which we will see later.

Now let us see a program to see how we can take input and print the floating
point numbers.

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     float f = 0.0;
     double d = 0.0;
     long double ld = 0.0;

     printf("Enter a float, double and long double separated by space:\n");
     scanf("%f %lf %Lf", &f, &d, &ld);

     printf("You entered %f %lf %Lf\n", f, d, ld);

     return 0;
   }

If you run this you might have following output:

.. code-block:: text

   Enter a float, double and long double separated by space:
   3.4 5.6 7.8
   You entered 3.400000 5.600000 7.800000

By default these print upto six significant digits but doubles have double
precision as we have studied. Now that we know basic types let us learn a bit
about input/output.

Here I am giving the contents of limits.h for you to see limits of
data types and check for yourself.

.. index::
   single: limits.h

.. code-block:: c

   /* Copyright (C) 1991, 1992, 1996, 1997, 1998, 1999, 2000, 2005
   Free Software Foundation, Inc.
   This file is part of the GNU C Library.
 
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
 
   The GNU C Library is distributed in the hope that it will be useful,	
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
 
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */
 
   /*
   *      ISO C99 Standard: 7.10/5.2.4.2.1 Sizes of integer types <limits.h>
   */
 
   #ifndef _LIBC_LIMITS_H_
   #define _LIBC_LIMITS_H_ 1
 
   #include <features.h>
 
 
   /* Maximum length of any multibyte character in any locale.
    We define this value here since the gcc header does not define
    the correct value.  */
    #define MB_LEN_MAX      16
 
 
   /* If we are not using GNU CC we have to define all the symbols ourself.
   Otherwise use gcc's definitions (see below).  */
   #if !defined __GNUC__ || __GNUC__ < 2
 
   /* We only protect from multiple inclusion here, because all the other
   #include's protect themselves, and in GCC 2 we may #include_next through
   multiple copies of this file before we get to GCC's.  */
   # ifndef _LIMITS_H
   #  define _LIMITS_H     1
 
   #include <bits/wordsize.h>
 
   /* We don't have #include_next.
   Define ANSI <limits.h> for standard 32-bit words.  */
 
   /* These assume 8-bit `char's, 16-bit `short int's,
   and 32-bit `int's and `long int's.  */
 
   /* Number of bits in a `char'.  */
   #  define CHAR_BIT      8
 
   /* Minimum and maximum values a `signed char' can hold.  */
   #  define SCHAR_MIN     (-128)
   #  define SCHAR_MAX     127
 
   /* Maximum value an `unsigned char' can hold.  (Minimum is 0.)  */
   #  define UCHAR_MAX     255
 
   /* Minimum and maximum values a `char' can hold.  */
   #  ifdef __CHAR_UNSIGNED__
   #   define CHAR_MIN     0
   #   define CHAR_MAX     UCHAR_MAX
   #  else
   #   define CHAR_MIN     SCHAR_MIN
   #   define CHAR_MAX     SCHAR_MAX
   #  endif
 
   /* Minimum and maximum values a `signed short int' can hold.  */	
   #  define SHRT_MIN      (-32768)
   #  define SHRT_MAX      32767
 
   /* Maximum value an `unsigned short int' can hold.  (Minimum is 0.)  */
   #  define USHRT_MAX     65535
 
   /* Minimum and maximum values a `signed int' can hold.  */
   #  define INT_MIN       (-INT_MAX - 1)
   #  define INT_MAX       2147483647
 
   /* Maximum value an `unsigned int' can hold.  (Minimum is 0.)  */
   #  define UINT_MAX      4294967295U
 
   /* Minimum and maximum values a `signed long int' can hold.  */
   #  if __WORDSIZE == 64
   #   define LONG_MAX     9223372036854775807L
   #  else
   #   define LONG_MAX     2147483647L
   #  endif   
   #  define LONG_MIN      (-LONG_MAX - 1L)
 
   /* Maximum value an `unsigned long int' can hold.  (Minimum is 0.)  */
   #  if __WORDSIZE == 64
   #   define ULONG_MAX    18446744073709551615UL
   #  else
   #   define ULONG_MAX    4294967295UL
   #  endif
 
   #  ifdef __USE_ISOC99
 
   /* Minimum and maximum values a `signed long long int' can hold.  */
   #   define LLONG_MAX    9223372036854775807LL
   #   define LLONG_MIN    (-LLONG_MAX - 1LL)
 
   /* Maximum value an `unsigned long long int' can hold.  (Minimum is 0.)  */
   #   define ULLONG_MAX   18446744073709551615ULL
 
   #  endif /* ISO C99 */
 
   # endif /* limits.h  */
   #endif  /* GCC 2.  */
 
   #endif  /* !_LIBC_LIMITS_H_ */
 
   /* Get the compiler's limits.h, which defines almost all the ISO constants.
 
   We put this #include_next outside the double inclusion check because
   it should be possible to include this file more than once and still get
   the definitions from gcc's header.  */
   #if defined __GNUC__ && !defined _GCC_LIMITS_H_
   /* `_GCC_LIMITS_H_' is what GCC's file defines.  */
   # include_next <limits.h>
   #endif
 
   /* The <limits.h> files in some gcc versions don't define LLONG_MIN,
   LLONG_MAX, and ULLONG_MAX.  Instead only the values gcc defined for
   ages are available.  */
   #if defined __USE_ISOC99 && defined __GNUC__
   # ifndef LLONG_MIN
   #  define LLONG_MIN     (-LLONG_MAX-1)
   # endif
   # ifndef LLONG_MAX
   #  define LLONG_MAX     __LONG_LONG_MAX__
   # endif
   # ifndef ULLONG_MAX
   #  define ULLONG_MAX    (LLONG_MAX * 2ULL + 1)
   # endif
   #endif
 
   #ifdef  __USE_POSIX
   /* POSIX adds things to <limits.h>.  */
   # include <bits/posix1_lim.h>
   #endif
 
   #ifdef  __USE_POSIX2
   # include <bits/posix2_lim.h>
   #endif
 
   #ifdef  __USE_XOPEN
   # include <bits/xopen_lim.h>
   #endif

Here, I have given gcc's limits.h as gcc includes that. For knowing exact
implementation for floating-point implementation on your platform I recommend
you to read http://en.wikipedia.org/wiki/IEEE_754-2008 . It is not possible to
present all the information in detail here and I do not want to give you
partial information. :-) I recommend you to go through
http://en.wikipedia.org/wiki/Single_precision and
http://en.wikipedia.org/wiki/Double_precision in particular. The range of log
double varies from compiler to compiler.

=================================
New Data Types of C99
=================================
There are some new data types introduced in C99. They are ``_Bool, _Complex``
and ``_Imaginary``.

.. index::
   pair: type; boolean

===================
Boolean Types
===================
``_Bool`` counts as an integral type and is used to represent boolean values.
Here is ``stdbool.h`` for your quick reference.

.. index::
   single: stdbool.h

.. code-block:: c

	/*===---- stdbool.h - Standard header for booleans -------------------------===
	 *
	 * Copyright (c) 2008 Eli Friedman
	 *
	 * Permission is hereby granted, free of charge, to any person obtaining a copy
	 * of this software and associated documentation files (the "Software"), to deal
	 * in the Software without restriction, including without limitation the rights
	 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	 * copies of the Software, and to permit persons to whom the Software is
	 * furnished to do so, subject to the following conditions:
	 *
	 * The above copyright notice and this permission notice shall be included in
	 * all copies or substantial portions of the Software.
	 *
	 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	 * THE SOFTWARE.
	 *
	 *===-----------------------------------------------------------------------===
	 */
 
	#ifndef __STDBOOL_H
	#define __STDBOOL_H
 
	/* Don't define bool, true, and false in C++, except as a GNU extension. */
	#ifndef __cplusplus
	#define bool _Bool
	#define true 1
	#define false 0
	#elif defined(__GNUC__) && !defined(__STRICT_ANSI__)
	/* Define _Bool, bool, false, true as a GNU extension. */
	#define _Bool bool
	#define bool  bool
	#define false false
	#define true  true
	#endif
 
	#define __bool_true_false_are_defined 1
 
	#endif /* __STDBOOL_H */

As you can see from the definition true is 1 and false is 0. Any non-zero value
is considered to be true. Here is a program demonstrating that.

.. code-block:: c

  // Boolean Program
  // Description: Demo of boolean data typec
 
  #include <stdio.h>
  #include <stdbool.h>
 
  int main()
  {
    bool bcpp      = 4;
    _Bool bc       = 5;
    bool True      = true;
    _Bool False    = false;
    bool bFalseCPP = -4;
    _Bool bFalseC  = -7;
 
    printf("%d %d %d %d %d %d\n", bcpp, bc, True, False, bFalseCPP, bFalseC);
 
    getchar();
 
    return 0;
  }



and the output is::

  1 1 1 0 1 1

Note that ``true`` and ``false`` are keywords while ``True`` and ``False`` are
identifiers.

Though I wanted to avoid dealing with this but since I am including header files
verbatim I must give an explanation of #define pre-processor macro at least. I
will touch it very little as it will be covered in more detail later.
``#define`` has two parameters though not as function arguments. Whenever the
first part is encountered second will be replaced. Consider this example:

.. code-block:: c

    // Boolean Program
    // Description: Demo of boolean data type

    #define MAX 7
    int main()
    {
      MAX;
      return 0;
    }



Just do ``$gcc -E define.c`` to see the magic. Note that ``#define``
parameters are not type safe. Compiler will just paste the contents. Notice how
``MAX`` is replaced by 7.

.. index::
   pair: type; complex

==============
Complex Types
==============
For complex types, there is a system header ``complex.h`` which internally
includes various other headers. However I am giving you the summary here. There
are following ``#define`` macros:

``complex``: Expands to ``_Complex``

``_Complex_I``: Expands to a constant expression of type ``const float
_Complex`` with the value of the imaginary.

``imaginary``: Expands to ``_Imaginary``.

``_Imaginary_I``: Expands to a constant expression of type ``const float 
_Imaginary`` with the value of the imaginary value. ``I``: Expands to either 
``_Imaginary_I`` or ``_Complex_I``. If ``_Imaginary_I`` is not defined, ``I``
expands to ``_Complex_I``.

Complex types are declared as given below:
	1. float complex fCompZ;
	2. double complex dCompZ;
	3. long double ldCompZ;

Now I will present a summary of library functions provided by complex.h

.. code-block:: c

    //cabs, cabsf, cabsl - these compute and return absolute value
    //of a complex number z

    double cabs(double complex z);
    float cabsf(float complex z);
    long double cabsl(long double complex z);

    //carg, cargf, cargl - these compute and return argument of a complex
    //number z. The range of return value's range from one +ve pi radian
    //to one -ve pi radian.

    double carg(double complex z);
    float cargf(float complex z);
    long double cargl(long double complex z);

    //cimag, cimagf, cimagl - these compute imaginary part of a complex
    //number z and return that as a real number.

    double cimag(double complex z);
    float cimagf(float complex z);
    long double cimagl(long double complex z);

    //creal, crealf, creall - these compute real part of a complex
    //number z and return the computed value.

    double creal(double complex z);
    float crealf(float complex z);
    long double creall(long double complex z);

    //conj, conjf, conjl - these functions compute the complex conjugate
    //of z, by reversing the sign of its imaginary part and return the
    //computed value.

    double complex conj(double complex z);
    float complex conjf(float complex z);
    long double complex conjl(long double complex z);

    //cproj, cprojf, cprojl - these functions compute a projection of z
    // onto the Riemann sphere: z projects to z, except that all complex
    //infinities (even those with one infinite part and one NaN (not a
    //number) part) project to positive infinity on the real axis. If z
    //has an infinite part, then cproj( z) shall be equivalent to:
    //INFINITY + I * copysign(0.0, cimag(z))
    //These functions return the computed value.

    double complex cproj(double complex z);
    float complex cprojf(float complex z);
    long double complex cprojl(long double complex z);

    //cexp, cexpf, cexpl - these functions shall compute the complex
    //exponent of z, defined as e^z and return the computed value

    double complex cexp(double complex z);
    float complex cexpf(float complex z);
    long double complex cexpl(long double complex z);

    //clog, clogf, clogl - these functions compute the complex
    //natural (base e) logarithm of z, with a branch cut along
    //the negative real axis and return complex natural logarithm
    //value, in a range of a strip mathematically unbounded along
    //real axis and in the interval -ipi to +ipi along the
    //imaginary axis.

    double complex clog(double complex z);
    float complex clogf(float complex z);
    long double complex clogl(long double complex z);

    //csqrt, csqrtf, csqrtl - these functions compute the complex
    //square root of z, with a branch cut along the negative real
    //axis and return the computed value in the range of the right
    //half-plane (including the imaginary axis)

    double complex csqrt(double complex z);
    float complex csqrtf(float complex z);
    long double complex csqrtl(long double complex z);

    //cpow, cpowf, cpowl - these functions compute the complex
    //power function x^y, with a branch cut for the first
    //parameter along the negative real axis and return the
    //computed value.

    double complex cpow(double complex x, double complex y);
    float complex cpowf(float complex x, float complex y);
    long double complex cpowl(long double complex x,
    long double complex y);

    //csin, csinf, csinl - these functions compute the complex
    //sine of z and return the computed value.

    double complex csin(double complex z);
    float complex csinf(float complex z);
    long double complex csinl(long double complex z);

    //ccos, ccosf, ccosl - these functions compute the complex
    //cosine of z and return the computed value.

    double complex ccos(double complex z);
    float complex ccosf(float complex z);
    long double complex ccosl(long double complex z);

    //ctan, ctanf, ctanl - these functions compute the complex
    //tangent of z and return the computed value.

    double complex ctan(double complex z);
    float complex ctanf(float complex z);
    long double complex ctanl(long double complex z);

    //casin, casinf, casinl - these functions compute the complex
    //arc sine of z, with branch cuts outside the interval
    //[-1, +1] along the real axis and return the computed value
    //in the range of a strip mathematically unbounded along the
    //imaginary axis and in the interval -0.5pi to +0.5pi radian
    //inclusive along the real axis.

    double complex casin(double complex z);
    float complex casinf(float complex z);
    long double complex casinl(long double complex z);

    //cacos, cacosf, cacosl - these functions compute the complex
    //arc cosine of z, with branch cuts outside the interval
    //[-1, +1] along the real axis and return the computed value
    //in the range of a strip mathematically unbounded along the
    //imaginary axis and in the interval -0 to +pi radian
    //inclusive along the real axis.

    double complex cacos(double complex z);
    float complex cacosf(float complex z);
    long double complex cacosl(long double complex z);

    //catan, catanf, catanl - these functions compute the complex
    //arc tangent of z, with branch cuts outside the interval
    //[-i, +i] along the real axis and return the computed value
    //in the range of a strip mathematically unbounded along the
    //imaginary axis and in the interval -0.5pi to +0.5pi radian
    //inclusive along the real axis.

    double complex catan(double complex z);
    float complex catanf(float complex z);
    long double complex catanl(long double complex z);

    //csinh, csinhf, csinhl - these functions compute the complex
    //hyperbolic sine of z and return the comupted value.

    double complex csinh(double complex z);
    float complex csinhf(float complex z);
    long double complex csinhl(long double complex z);

    //ccosh, ccoshf, ccoshl - these functions shall compute the
    //complex hyperbolic cosine of z and return the computed
    //value

    double complex ccosh(double complex z);
    float complex ccoshf(float complex z);
    long double complex ccoshl(long double complex z);

    //ctanh, ctanhf, ctanhl - these functions compute the
    //complex hyperbolic tangent of z and return the computed
    //value.

    double complex ctanh(double complex z);
    float complex ctanhf(float complex z);
    long double complex ctanhl(long double complex z);

    //casinh, casinhf, casinhl - these functions compute the
    //complex arc hyperbolic sine of z, with branch cuts
    //outside the interval [-i, +i] along the imaginary axis and
    //return the complex arc hyperbolic sine value, in the range
    //of a strip mathematically unbounded along the real axis
    //and in the interval [-i0.5pi, +i0.5pi] along the imaginary
    //axis.

    double complex casinh(double complex z);
    float complex casinhf(float complex z);
    long double complex casinhl(long double complex z);
    cacosh, cacoshf, cacoshl - theese functions compute the

    //complex arc hyperbolic cosine of z, with a branch cut at
    //values less than 1 along the real axis and return the complex
    //arc hyperbolic cosine value, in the range of a half-strip
    //of non-negative values along the real axis and in the
    //interval [-ipi, +ipi] along the imaginary axis.

    double complex cacosh(double complex z);
    float complex cacoshf(float complex z);
    long double complex cacoshl(long double complex z);

    //catanh, catanhf, catanhl - these functions shall compute the
    //complex arc hyperbolic tangent of z, with branch cuts outside
    //the interval [-1, +1] along the real axis and return the
    //complex arc hyperbolic tangent value, in the range of a strip
    //mathematically unbounded along the real axis and in the
    //interval [-i0.5pi, +i0.5pi] along the imaginary axis.

    double complex catanh(double complex z);
    float complex catanhf(float complex z);
    long double complex catanhl(long double complex z);

Hers is a small demo program which explains two functions:

.. code-block:: c

    // Complex Number Program
    // Description: Demo of complex data type

    #include <stdio.h>
    #include <complex.h>

    int main()
    {
      double complex z = 4.0 + 3.0i;

      printf("Absolute value of z is %lf\n", cabs(z));

      double complex zConj = conj(z);
      printf("Imaghinary part of conjugate is now %lf\n", cimag(zConj));

      return 0;
    }



and the output is::

    Absolute value of z is 5.000000
    Imaghinary part of conjugate is now -3.000000

You must note that in Makefile you must compile it like ``$gcc complex.c -o 
complex -lm``. Note the ``-lm`` part. It tells to look for definition of these
functions in Math library of C. Without it the program won't compile. At this
point I encourage you to further explore different functions presented in the
summary.

There are even more data types for integral type. I am sorry but I am unwrapping
the layers one by one. These types are defined in ``inttypes.h`` and
``stdint.h``. The types are ``int8_t, int16_t, int32_t, uint8_t, uint16_t`` and
``uint32_t``. The numbers tell you how many bits each data type will occupy. The
types without leading u are of signed type and the ones with it are of unsigned
type. You can use the good old ``%d`` or ``%i`` for decimal integers and others
for octals and hexes. Have a look at headers and try to decipher them.

.. index::
   pair: type; void
   pair: type; enum

====================
Void and Enum Types
====================
There are these four types remianing. void type comprises an empty set of
values; it is an incomplete type that cannot be completed. You cannot declare an
array of void. It is a generic type in the sense that any other pointer to any
type can be converted to pointer type of void and vice-versa. It is a low level
type and should be only used to convert data types from one type to another and
sparingly. A type occupies one byte. Typically you never declare a variable of
void type. It is used mostly for casting.

enum comprises a set of named integer constant values. Each distinct enumeration
constitutes a different enumerated type. In C enums are very much equivalent to
integers. You can do all operations of an enum on an enumeration member. An
enumeration is is a set of values. It starts from zero by default and increments
by one unless specifically specified. Consider the following example:

.. code-block:: c

    // Description: Demo of enum

    #include <stdio.h>

    int main()
    {
      typedef enum {zero, one, two} enum1;
      typedef enum {alpha=-5, beta, gamma, theta=4, delta, omega} enum2;

      printf("zero = %d, one = %d, two=%d\n", zero, one, two);
      printf("alpha = %d, beta = %d, gamma=%d, theta=%d, delta=%d, omega=%d\n", \
              alpha, beta, gamma, theta, delta, omega);

      return 0;
    }



and the output is::
  
    zero = 0, one = 1, two=2
    alpha = -5, beta = -4, gamma=-3, tehta=4, delta=5, omega=6

.. index::
   single: constant

=========
Constants
=========
We have seen some variables now let us see some constants. There are five
categories of constants: character, integer, floating-point, string, and
enumeration constant. We will see enumeration constants later first we see
remaining four types of constants. There are certain rules about constants.
Commas and spaces are not allowed except for character and string constants.
Their range cannot outgrow the range of there data type. For numeric type of 
stants they can have a leading (-)minus sign.

Given below is an example:

.. code-block:: c

    // Integer constants
    // Description: Demo of integer constants

    #include <stdio.h>

    int main()
    {
      int decimal = 7;
      int octal = 06;
      int hex = 0xb;

      printf("%d %o %x\n", decimal, octal, hex);

      return 0;
    }



and the output is::
   
   7 6 b

As you can see there are three different categories for integer constants:
decimal constants (base 10), octal constants (base 8) and hexadecimal constants
(base 16). Also, you must have noticed how a zero is prefixed before octal type
and a zero and x for hexadecimal type. The %d format specifier is already known
to you for signed decimals. However, now you know two more %o and %x for
unsigned octal and unsigned hexadecimal respectively. For unsigned integer it
is %u. There is one more format specifier which you may encounter for signed
decimal and that is %i.

Note that there is nothing for binary constants. I leave this as an exercise
to you to convert a number in any base shown above to binary and print it.
Also vice-versa that is take a input in binary and convert to these three.
Later I will show you this program.

Now let us move to floating-point constants. Again, I will explain using an
example:

.. code-block:: c

    // Floating-point constants
    // Description: Demo of floating-point constants

    #include <stdio.h>

    int main()
    {
      float f = 7.5384589234;
      double d = 13.894578834538578234784;
      long double ld = 759.8263478234729402354028358208358230829304;

      printf("%f %lf, %Lf\n", f, d, ld);

      return 0;
    }



and the output is::
  
  7.538459 13.894579, 759.826348

We will learn to change precision later when we deal with format specifiers
along with printf and all input/output family. Here also, you learn three
format specifiers. Other are %e or %E for scientific notation of float
family. Then there is %g or %G which uses shorter of %e and %f types.

Now we move on to character and string type constants and as usual with a
small program.

.. code-block:: c

    // Character constants
    // Description: Demo of character constants

    #include <stdio.h>

    int main()
    {
      char c = 'S';
      char* str ="Shiv S, Dayal"; 

      printf("%c %s\n", c, str);

      return 0;
    }



and the ouput is::

  S Shiv S, Dayal

As I had said that commas and blanks are not allowed in numeric types but you
can see both are allowed on character and string types. Also, the string is a
character pointer that is it can point to memory location where a character is
stored. In this case the string is stored in an area of memory called stack.
When memory is allocated the compiler knows how much has been allocated. For
string there is something called null character represented by '\\0' which is
used to terminate string. By using this mechanism the program knows where the
string is terminating. It is treated in next section as well.A very
interesting thing to be noted is char is considered to be an integral type.
It is allowed to perform addition etc on char type. Till now you have learnt
many format specifiers and have seen they all start with %. Think how will you
print % on stdout. It is printed like %%. It was simple,wasn't it? C program
have got something called ASCII table which is a 7-bit character table values
ranging from0 to 127. There is also
something called escape sequences and it is worth to have a look at them.

.. index::
   single: escape sequences

.. _5.11:

====================
Escape Sequences
====================
All escape sequences start with a leading \\ . Following table shows them:

+------------------------+---------------------+----------------------+
| Chracter               | Escape Sequences    | ASCII Value          |
+========================+=====================+======================+
| null                   | \\0                 | 000                  |
+------------------------+---------------------+----------------------+
| bell(alert)            | \\a                 | 007                  |
+------------------------+---------------------+----------------------+
| backspace              | \\b                 | 008                  |
+------------------------+---------------------+----------------------+
| horizontal tab         | \\t                 | 009                  |
+------------------------+---------------------+----------------------+
| newline (line feed)    | \\n                 | 010                  |
+------------------------+---------------------+----------------------+
| vertical tab           | \\v                 | 011                  |
+------------------------+---------------------+----------------------+
| form feed              | \\f                 | 012                  |
+------------------------+---------------------+----------------------+
| carriage return        | \\r                 | 013                  |
+------------------------+---------------------+----------------------+
| quotation mark (")     | \\"                 | 034                  |
+------------------------+---------------------+----------------------+
| apostrophe (')         | \\'                 | 039                  |
+------------------------+---------------------+----------------------+
| question mark          | \\?                 | 063                  |
+------------------------+---------------------+----------------------+
| backslash              | \\ \\               | 092                  |
+------------------------+---------------------+----------------------+

Note that there is no space between two backslashes. Sphinx does not allow me
to write four continuous backslashes. Now we will talk about all these one by
one. \\0 which is also known as NULL is the string terminating character, as
said previously, and must be present in string for it to terminate. For
example, in our character constant program the str string is "Shiv S. Dayal".
So how many characters are there 13? Wrong 14! The NULL character is hidden.
Even if we say str=""; then it will contain one character and that is this
NULL. Many standard C functions rely on this presence of NULL and causes a
lot of mess because of this.

The bell escape sequence if for a bell from CPU. Let us write a program and
see it in effect.

.. code-block:: c

    // Bell Program
    // Description: Demo of bell escape sequence

    #include <stdio.h>

    int main()
    {
      printf("hello\a");

      getchar();

      return 0;
    }



The output of this program will be hello on stdout and an audible or
visible bell as per settings of your shell. Notice the ``getchar()``
function which waits for input and reads a character from stdin.
Next is backspace escape sequence. Let us see a program for its demo as
well:

.. code-block:: c
  
  // Backspace Program
  // Description: Demo of backspace escape sequence
 
  #include <stdio.h>
 
  int main()
  {
    printf("h\b*e\b*l\b*l\b*o\b*\n");
    printf("\b");
 
    getchar();
 
    return 0;
  }



and the output is::

  *****

It is hello replaced by *****. A minor modification in this program to
replace the character as soon as key is pressed by some other character
will turn it into a password program. Backspace escape sequence means
when it is encountered the cursor moves to the previous position on the
line in context. If active position of cursor is initial position then
C99 standard does not specify the behavior of display device. However,
the behavior on my system is that cursor remains at initial position.
Check out on yours. The second printf function determines this behavior.

Next we are going to deal with newline and horizontal tab escape
sequences together as combined together they are used to format output
in a beautiful fashion. The program is listed below:

.. code-block:: c

  // Newline and Horizontal tab program Program
  // Description: Demo of newline and horizontal tab escape sequence
 
  #include <stdio.h>
 
  int main()
  {
    printf("Before tab\tAftertab\n");
    printf("\nAfter newline\n");
 
    getchar();
 
    return 0;
  }



and the output is::

  Before tab      Aftertab

  After newline

Here I leave you to experiment with other escape sequences. Feel free to
explore them. Try various combinations. Let your creative juices flow.
