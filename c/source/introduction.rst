.. meta::
  :description: C Programming
  :keywords: Free C Book, C Programming, C11 Programming, C11 Specification

***************
Introduction
***************
C programming language is a relatively low-level programming language with an
inclination towards system programming. This book will try to serve both as a
tutorial and reference of C programming language. If you have not programmed
earlier then you should read in linear manner. Even if you have programmed it
would be better if you read the book in linear fashion because there are
certain points which you may miss if you skip chapters. Of all popular
mainstream languages C, and Lisp are two oldest but we cannot really say that
Lisp is really popular. It has a niche area(artificial intelligence) and it is
there for that. So let me redefine my statement. Of all general-purpose and
popular programming language C is the oldest. FORTRAN is another very old
language but it is not general purpose programming language. So what makes C so
special that it is still out there. Well, C and Unix were born almost together
in early 1970s. Then Unix was ported in C and the notion that operating systems
can be only written in assembly language, because it has to do time critical
things, was destroyed. After that Unix became very popular. Then when C++ was
not yet there Windows was written in C and more and more programs were written
in C. It might have been the case that Microsoft and Apple would have written
their OS in C++ had it been there. So, essentially what happened that there is
a lot of code base which is there in C. Also, C++'s backward compatibility is
one of the reasons why C++ is so popular. When C was invented there was no
structured programming language and code was mostly written in assembly. With C
it gave the power of assembly and benefits of structured language like code
reuse, modularity, and portability among others. Because of these reasons C
became immensely popular and is still popular.

C is simple, small, succinct. It may be dirty but is quick. It may have its
quirks but it is a success. C is really so simple yet so deceptive. It
takes years of programming to really thoroughly understand it, however, the
exact number of years vary between people obviously.

C is currently described by ISO/IEC 9899:2011 which you can buy on web or you
can get the draft revision `open-std.org
<http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf>`_. It is not
necessary to buy the specification as draft is very much similar. I will refer
to specification in the form of (§ iso.x.x.x.x) to point to sections where
exact information is discussed. Note that specification is written for accuracy
and the language is not trivial to understand. At the same time, it does not
directly address programmers but compiler writers because there are certain
decisions which specification does not make but rather leaves for compiler
writer's decision. 

==============
Why C?
==============
Because it is the most common denominator. Any language be it C++, Java, Perl,
Python etc have got bindings in C. Whenever you are willing to extend these
languages you need to know C. Also, if by any chance you are going towards
system programming you need to C. C is everywhere. There is no escape from
learning it; it does not matter whether you like it or not.

There is one more important point worth noting here is that C++ is far more
complex compared to C. Also, the runtime calculations of C++ make it slightly
slower than C. The library of C is much smaller than C. Therefore wherever
there is a memory constraint or extreme high performance is needed C is
preferred. The simple syntax of C means its code is very verbose for programmer
in the sense that if you read code then you can very easily see what 
instructions the code is going to translate into.

It is very easy to write interfaces to other languages because other languages
expose their objects in terms of C structures not the other way around. The
reason for this is huge popularity of C and large code base perhaps.

One more important feature is portability. Note that if you want your program
to have high degree of portability then you should not use C99 features but
rather ANSI C because ANSI C compilers are available on most platforms. Even
though Java claims to be portable or other interpreted languages they are
limited by the fact that the interpreters or VMs(JVM in case of Java) is not
available on all the platforms. Therefore, C is the MOST portable language. :-)

One of the advantages with C is that since it is very old a lot of software has
been written using it. GNU/Linux for example uses C for its kernel. GNOME which
is one of the desktop environments of GNU/Linux is also written in C. The fact
is that since a lot of libraries are available in C thus it makes a lot of work
very easy to do in C since the infrastructure or ecosystem is developed and
mature. At the same time, since C is taught in many colleges and universities
as first course in programming a lot of people know C thus if you are writing
free(as in freedom) software then you have a much higher chance of getting
support if you write your code in C.

.. index::
   pair: Dennis; Ritchie

=============
History
=============
C was formally delivered to this world in 1972 and started by Dennis
MacAlistair Ritchie in 1968. What happened was there was a project for
development of a text processor and GE-645 was bought by AT&T Bell Labs. At
that time Ken Thompson had developed a game called "Space Travel". Then they
had another machine PDP-11, before that they had PDP-7. Now all the time the
code for "Space Travel" had to be rewritten and also the Unix had to be
ported. So when C was invented it was used to write Unix code in C. And then
"Space Travel". I do not know what was the real motivation the language, the OS
or the game. But such is the story. Also, I have not studied much in this area
about the exact events. In 1972 C was formally announced. C takes its features
from BCPL a language by Martin Richard and B by Ken Thompson. AT&T Bells labs
gave Unix and a C compiler to many universities at a normal fees and it grew
with leaps and bounds from there and became a ubiquitous language. For many
years "The C Programming Language" served as a reference of C. Later it was
standardized by ANSI and then by ISO standards.

=================================
Comparison with Other Languages
=================================
C is a structured, statically typed, somewhat low-level, high-performance
compiled language. It does not support object-oriented programming like most
modern programming including C++, Java, Perl, Python, Ruby etc. However, that
does not mean you cannot do object-oriented programming in C. It is just that C
does not have support at the language level and it is painful to do so. C is low
level because it allows you to handle memory contents directly. You have
something called void which is raw representation of memory content. C also does
not support functional or generic programming but again it is possible to do so
with painful hacks. One of the coveted features is C programs deliver very high
performance if written correctly as it does not have reunite penalties of
virtual functions of OOP (object-oriented programming) languages.

=========================
How to Learn Programming
=========================
Programming is exactly like Mathematics. As in Mathematics you need to read
theory, understand solved problems and then solve more and more problems by
yourself. If you cannot solve, ask your teacher. Similarly, in
programming you
need to read about language, try examples given, read code written by others
and then develop your own code. If you get stuck there are umpteen number of
tutorials, mailing lists and groups to help you. I recommend comp.lang.c user
group for C programming. Its interface is at
http://groups.google.com/group/comp.lang.c/. You should join it and participate
there. http://www.stackoverflow.com/ is also a very good forum to ask questions
about programming in general.

============================
What is a Computer Program?
============================
Since this book is written for even beginner please allow me to start from
beginning. As the reader may know a computer consists of many components and one
of the most or rather most important part is processor often named as CPU
(central processing unit). The logic gates in CPUs are formed and instructions
like ADD (addition), SUB (subtraction), MUL (multiplication), DIV (division) etc
are implemented in hardware of CPU. When we write a program, say C program, the
instructions given in our program is translated to a format which operating
system can understand. In our case that is GNU/Linux this executable format is
known as ELF (executable and linkable format). For the curious you can read
http://en.wikipedia.org/wiki/Executable_and_Linkable_Format and there are lots
of specification for different CPUs. Then operating system interprets these
files and ask CPU to perform action. So a C program does not directly talk to
processor but it rather talks to operating system or rather kernel of the
operating system and in turn the operating system or kernel provides services
to your program.

.. index::
   single: attributes of a program

========================
Attributes of a Program
========================
You may be wondering so that is very easy. You just learn programming in C and
start hacking on keyboard to produce software. Well, that is partially true but
a program has several desired attributes which you must consider. Any program
cannot be considered a good program unless it satisfies following requirements
or possess following attributes (Note: These are generic attributes and not
specific to C programming language):

1. **Correctness:** Correctness means that a program satisfies its requirement
specification. It means that for a specified input the specified output should
be produced. This particular attribute is of most significance. It does not
matter whether other attributes are present or not but this one is a must. If
a program behavior is not correct, it is of no use.

2. **Efficiency:** Efficiency is second to correctness only. Say you are
developing a text editor and you take 5 seconds to load a 10KB text file then by
no means you can persuade a user to use your text editor. A program/software must
be as efficient as possible. Sometimes it clashes with other attributes and also
depend on the problem domain that how strict are the requirements.

3. **Security:** A very highly desirable feature in programs which deal with
more than one computer and also for desktop applications. It is very bad if
someone can take advantage of buffer overflow, stack overflow, integer overflow
etc. in your program and you must guard against these at all times. Note that to
provide security you must put extra checks which will go against efficiency.

4. **Robustness:** Sometimes users will not give correct inputs. For example
they may enter a character when an integer is asked for or they can give input
beyond range. In such cases you must handle the erroneous input. This is just
one example. Sometimes your memory allocation may fail. The rule is program
defensively. All such input validations and checks on memory do take a toll on
our second attribute but that does not mean that we can neglect it.

5. **Maintainability:** Even a one line program has to be maintained if it is
worth it! Typically, the life of a program far exceeds the development time. In
almost all the cases the original programmer is not maintainer. Because of these
reasons you must strive for maintainability. You should follow some coding
standards like I highly recommend `GNU Coding Standards
<http://www.gnu.org/prep/standards/>`_. Clear documentation is one of the
prerequisites of maintainability.

6. **Extensibility:** Let us take our example of text editor and say our editor
is complete. Now someone else would like to provide a plugin which will enable
syntax highlighting and project management for this editor. So, in order to do
so you can choose a plugin-based extensible architecture or you can allow them
to extend the editor using scripting languages like Guile, Python, Lua etc.This
features allows user to collaborate and make your program better. Remember the
rule is the more the merrier here.

7. **Portability:** It is an elusive and painful goal. Let us say we write our
text editor GUI using something like Xlib directly then we will have to port
the entire GUI for other non X-based OSes. So we can choose some cross-platform
GUI libraries like GTK+, Qt, WxWidgets etc. Even then when system calls come in
your software you can do not much but either write wrappers and do conditional
compilation.

8. **Longevity:** This is probably hardest to achieve after portability. With a
bit of effort you can definitely achieve aforementioned attributes of program
in a fine balance. When I say what I mean is that how long will the life of the
program will be before it requires change, which directly implies that how well
designed is your program that it does not require modification with changes in
other factors which you may not even know at the time of writing the
program. It takes certain vision and wisdom to achieve this goal and one which
separates graet programmers from good programmers. One such example is TeX by
Donald Erwin Knuth or C programming Language. It is not that these program have
not changed but the changes are minimal.

9. **Scalability:** This point is not applicable to programs which are written
for running on one computer but rather which run on multiple i.e. distributed
systems. Scalability means as your no. of computer grow does your program
performance multiply as close to no. of computers in use.

================
Tools of Trade
================
At the very least you need a compiler, an editor and a linker. Almost all
GNU/Linux systems install GCC by default which is the compiler we are going to
use and it includes linker ld. There are several editors you can use from but I
am going to use Emacs along with Sr-speedbar and Flymake plugins. Other options
include VI, Kate, Gedit, Kwrite etc. A debugger is optional but if you want to
go far with C programming then you must learn to use a debugger. GDB is a very
nice debugger and we are going to use it for debugging in Emacs itself. Emacs
has native support for debugging with GDB. For dynamic memory checking, heap
corruption, cache corruption etc I am going to show you how to use
valgrind. Again, valgrind is optional but it becomes mandatory if you want to
work on large projects. For profiling gprof and for code coverage gcov. Note
that you can use gcc for compiling programs. Most of the GNU/Linux systems come
with gcc. For compiling programs I will use GNU Make though in the beginning I
will show you how to compile on command line. Again, profiling, code coverage
and make are optional to learn C but practically they are necessary to develop
any software worth its value.

You may choose another editor or IDE but I will recommend against IDEs for
beginners as they hide much of compilation process from the users. The reason
of choosing Emacs as an editor is its power. Emacs is hard to learn but it is
very powerful and I implore you to spend some time and learn it. Learning Emacs
will pay rich dividends in future to you. Emacs comes with its manual which you
can read in menu for ``Help``. For using more tools like ``Sr-speedbar`` and
Flymake mode you can read more on `Emacs Wiki <http://emacswiki.org/>`_. A lot
of extensions are available at `ELPA <http://elpa.gnu.org>`_, `MELPA
<https://melpa.org>` and `Marmalade <https://marmalade-repo.org/>`_ Elisp(Emacs
Lisp) repositories. In fact it is wrong to say that Emacs is an editor. You can
read your email, play games, have a shell, read news, do remote editing, browse
web and many other things. It is so powerful that some people set it to run
when they login and they never get out of it. In fact Emacs is a Lisp engine
thus it is an interpreter which you can make to do anything by writing a bit of
code.

.. index::
   single: byte
   single: bit

===============
Bits and Bytes
===============
The smallest unit a computer can understand is called a bit. The values for a
bit is either 0 or 1. Consider a voltage. It can be 0V or 1.5V or whatever the
core CPU voltage is. CPU does not understand numbers but voltages :-). You
cannot expect an electronics hardware to understand the same semantics of 0
and 1 which we know. 0 and 1 are abstraction of CPUs voltages in programming.
Four bits form a nibble and eight form a byte. A byte is the area of memory
which can be addressed by CPU and its content manipulated. To address a memory
a CPU has say 4 or 8 or up to 256 pins. For example, in a common 32-bit CPU
there are 32 pins whose voltages may represent 0 or 1. Consider all pins are
low i.e. 0 then the memory location pointed to is
00000000000000000000000000000000 i.e. a 8 bit memory at location 0 can be
accessed. This memory is also called primary memory or RAM (Random Access
Memory). So computing this way we can see that a 32-bit processor can access
:math:`2^{32}` bytes or 4,294,967,296 bytes. You can arrive at this number by
4*1024*1024*1024. This is equivalent to 4GB of RAM. However, modern Intel
processors have 36 physical pins to address up to 64GB of memory. That does not
mean that all 64-bit CPUs have 64 pins for addressing 
memory as 16 Exabytes(approximately \\(16*10^{18}\\)) is really, really huge amount
of memory which is not needed by any single monolithic system practically and
will be very expensive, thus it is not practical.

Since a byte has 8 bits, its value may range from 0 to 255 as :math:`2^8` is
256. For unsigned data type this will be the range. When all bits are 0 value is
zero and when all are high it is 255. Computers use two's complement form to
represent binary number. So if these 8-bits represent signed number the range
will be from :math:`-2^8` to :math:`2^8-1` that is -128 to 127. As you will see
later at lowest levels C allows you to access even one bit using something
called bit-fields. If you read specification it will signify the range of one
8-bit byte as -127 to 127 because it also takes in to consideration of 1's
complement computers in which positive and negative zeroes are different.

.. index::
   single: compilation; execution

=======================
Notes on Number System
=======================
A number system is a system which determines the rules and symbols for numbers
on how we are going to use them.  A number system consists of symbols for
representing numbers and a dot for representing fractional numbers. Minus sign
is used to represent negative numbers. A number system ranges from \\(-\\infty\\)
to \\(+\\infty\\) . It is best represented by a straight line given below:

.. tikz:: Number axis.

   \draw (0, 0) -- (6, 0);
   \draw (0, -.2) -- (0, .2);
   \draw (6, -.2) -- (6, .2);
   \draw (3, -.2) -- (3, .2);
   \draw (0, 0.4) node{$-\infty$};
   \draw (6, 0.4) node{$+\infty$};
   \draw (3, 0.4) node{$0$};

Each point on this axis represents a number. It may be integer or fractional
number. An integer is a whole number like -1, -2, 0, 5, 7 etc. Floating-point
numbers have fractional parts like 1.234. The important fact to note is that
between any two points there exists infinite numbers. In other words between
any two numbers there exists infinite numbers. For example, between 1.2 and 1.3
there are 1.21, 1.22, 1.23..., 1.29. Moreover between 1.21 and 1.22 there are
1.211, 1.212, 1.213 and so on. It enables us to represent a point on this
axis. The numbers I have written are supposedly in decimal number system. Base
of decimal number system is 10. Why because it consists of 10 distinct symbols
0 through 9. Similarly we can have any other number system. Popular number
systems in computers are binary, octal and hexadecimal not to mention decimal
of course.

A number in a generic number system is given below:

.. math::

   (.. c_mb^{m-1} + c_{m-1}b^{m-2}+ ... + c_2b^1 + c1_b^0 + c_{-1}b^{-1} +
   ... + c_{-m}b^{-m} ) \\ = (... c_mc_{m-1}...c_2c_1.c_{-1}...c_{-m})_b

All the terms with \\(c\\)  are called digits. The leftmost or leading digit is
called *most significant digit* and the rightmost or trailing digit is
called *least significant digit*. The . is called a point which
separates the integral part which is towards its left from the fractional part
which is towards its right. \\(b\\)  is known as radix or base of the number
system. Note that all digits will be between \\(0\\) to \\(b-1\\). So in our
decimal system \\(b\\)  is 10 therefore we have digits from 0 to 9. In binary
number system it is 2 therefore digits permitted are 0 and 1.

Binary Number System
--------------------
As the name suggests binary number system has base of 2. Therefore it has only
two symbols. 0 and 1. This is the most popular system for computers because TTL
NAND and NOR gates which are the most basic logic gates using which other gates
are implemented in processor has only two voltage output levels because of
their operation in cut-off and saturation zones. These terms are better
understood with the help of a book on electronics which is out of scope of this
book. All binary numbers consist of 0 and 1. So the count is like 0, 1, 10, 11,
100, 101, 110, 111, 1000 and so on.

Conversion of Unsigned Decimals and Binaries
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Consider a decimal number. Let us say 53 then how would be convert it to
binary. The technique is that of division. Please examine following carefully:

.. code-block:: text

   2 | 53 | 1
   ----------
   2 | 26 | 0
   ----------
   2 | 13 | 1
   ----------
   2 | 6  | 0
   ----------
   2 | 3  | 1
   ----------
     | 1  |

So the binary is \\(110101_2\\). First we divide 53 by 2 and write the
remainder. Then quotient is 26. We repeat the process for 26 therefore
remainder is 0 and quotient is 13. This we go on repeating till we have 1 as
quotient. Note that all the remainders will be 0 or 1 because divisor is
2. Similarly, final quotient is always 1. Now we take final quotient and start
writing remainders from top to bottom.

To convert binary to decimal let us examine following:

\\[1*2^5 +1*2^4 +0*2^3 +1*2^2 +0*2^1 +1*2^0 =53_{10}\\]

The power is to 2 because 2 is the base of source. It starts from 0 for unit's
position and increases to 1 and 2 for ten's and hundred's position and so
on. 1's and 0's are the values of that place. If you note carefully powers of 2
grow like 1, 2, 4, 8, 16, 32, 64, 128 and so on. Any number can be written by
using these powers at most one time. For example consider 100. I know it is
less than 128 so I will use 64. Then 36 remains. So I will use 32 and then
4. This means 100=64+32+4  which means power 6, 5 and 2 have been
used. Therefore, I can quickly write down number as \\(1100100_2\\).

Fractional numbers are slightly more complicated. Let us consider \\(1.1_2\\)  . In
decimal it will be \\(1+\frac{1}{2}\\). This is 1.5 in decimal. Note that when you
convert a fractional part of binary to decimal denominator will always be power
of 2. For that matter when you convert from any base to decimal denominator
will be powers of that base. **Important:** Therefore, when you convert
from decimal to some base n then denominator of that decimal number can have
only those prime factors which are available in the set of prime factors of
\\(n\\).

Let us say we have a fractional number in decimal .59 then to convert it to
decimal we multiply it with 2 which yields 1.018 which is greater than 1 so our
equivalent binary number is .1. Now we subtract 1 from 1.18 to get .18 which
is less than 1 so we multiply it with 2 again to get .36. Now since this is
less than 1 our equivalent binary number is .10. Repeating the process we get
.72 and .100 then 1.44 and .1001. We put 1 in binary part because decimal part
has become greater than 1. Now again we subtract 1 from decimal part to get .44
and repeat the process.

Operations such as addition, subtraction, multiplication and division are
similar in all number systems.

2's Complement and 1's Complement
---------------------------------
2's complement and 1's complement are used to convert binary numbers to decimal
values. In 1's complement the number is obtained by inverting bits i.e. making
0 bit to 1 bit and 1 bit to 0 bit of the binary number in question.

Consider the following table which contains some numbers for 1's complement
of some 8-bit numbers.

The 2's complement of an \\(N\\)-bit number is defined as the complement with
respect to \\(2^N\\); i.e. it is the result of subtracting the number
from \\(2^N\\), which in binary is one followed by \\(N\\) zeroes. This is also
equivalent to taking the 1's complement and then adding one, since the sum of
a number and its 1's complement is all 1 bits.

+-----------+----------------+----------------+
| Bits      | Unsigned Value | 1's Complement |
+===========+================+================+
| 0111 1111 | 127            | 127            |
+-----------+----------------+----------------+
| 0111 1110 | 126            | 126            |
+-----------+----------------+----------------+
| 0000 0010 | 2              | 2              |
+-----------+----------------+----------------+
| 0000 0001 | 1              | 1              |
+-----------+----------------+----------------+
| 0000 0000 | 0              | 0              |
+-----------+----------------+----------------+
| 1111 1111 | 255            | -0             |
+-----------+----------------+----------------+
| 1111 1110 | 254            | -1             |
+-----------+----------------+----------------+
| 1000 0010 | 130            | -125           |
+-----------+----------------+----------------+
| 1000 0001 | 129            | -126           |
+-----------+----------------+----------------+
| 1000 0000 | 128            | -127           |
+-----------+----------------+----------------+


For signed numbers MSB(most significant bit) decides sign in both 1's
complement as well as 2's complement. 1's complement has two zeroes. Positive
and negative. As you see in table that 1111 1111 is -0 because MSB is 1 so it
is a negative number and then if you invert all remaining bits then it turns
out to be 0. In a 1's complement system negative numbers are represented by the
arithmetic negative of the value. An $N$-bit 1's complement number system can
represent integers in the range \\(-2^{N-1} - 1\\) to \\(-2^{N-1} - 1\\).

Now it is easy to do addition, subtraction, multiplication, division and other
arithmetic operations. Subtraction for 1's complement is a bit
different. Consider the following:

.. code-block:: text

  + 0000 0110       6
  - 0001 0011      19
  ===========   ====
  1 1111 0011     -12    -An end-around borrow is produced, and the sign bit
                        of the intermediate result is 1.
  - 0000 0001       1    -Subtract the end-around borrow from the result.
  ===========   ====
    1111 0010     -13    -The correct result (6 - 19 = -13)

Borrows are propagated to the left. If the borrow extends past the end then it
is said to have "wrapped around"", a condition called an "end-around
borrow". When this occurs, the bit must be subtracted from the right-most bit
or least significant bit(LSB). This does not occur in 2's complement arithmetic.

As you see in table and also you can verify the value becomes negative if its
1's complement is computed. However, 2's complement is used on most of
computers because of two zeroes in 1's complement, borrowing being complicated
etc.

+-----------+----------------+----------------+
| Bits      | Unsigned Value | 2's Complement |
+===========+================+================+
| 0111 1111 | 127            | 127            |
+-----------+----------------+----------------+
| 0111 1110 | 126            | 126            |
+-----------+----------------+----------------+
| 0000 0010 | 2              | 2              |
+-----------+----------------+----------------+
| 0000 0001 | 1              | 1              |
+-----------+----------------+----------------+
| 0000 0000 | 0              | 0              |
+-----------+----------------+----------------+
| 1111 1111 | 255            | -1             |
+-----------+----------------+----------------+
| 1111 1110 | 254            | -2             |
+-----------+----------------+----------------+
| 1000 0010 | 130            | -126           |
+-----------+----------------+----------------+
| 1000 0001 | 129            | -127           |
+-----------+----------------+----------------+
| 1000 0000 | 128            | -128           |
+-----------+----------------+----------------+

Clearly, since \\(N\\)-bit 1's complement can represent numbers in range
\\(-2^{N-1}-1\\) to \\(2^{N-1} + 1\\) 2's complement of \\(N\\)-bit can
represent \\(-2^{N-1}\\) to \\(2^{N-1} - 1\\) as it does not have negative 0
i.e. its range is more by 1 number.

The 2' complement system has the advantage that operations of addition,
subtraction, and multiplication are same as unsigned binary numbers (as long as
the inputs are represented in the same number of bits and any overflow beyond
those bits is discarded from the result). This property makes the system both
simpler to implement and capable of easily handling higher precision
arithmetic. Also, as mentioned above zero has only a single 
representation, avoiding the subtleties associated with negative zero, which
exists in 1's complement systems.

The value \\(v\\) of an \\(N\\)-bit integer \\(b_{N-1} b_{N-2} \dots b_0\\) is
given by the following formula:

.. math::

   v=-b_{N-1} 2^{N-1} + \sum_{i=0}^{N-2} b_i 2^i

I will leave it up to you, the reader, to perform basic operations like
addition, subtraction, multiplication, division etc.

=======================
Compiling and Executing
=======================
To compile and execute a program create a new file, edit it and save it. The
extension of file should be \*.c. For example, myprogram.c. After that you can
give this command at terminal. Here is the corrected code for you.

.. code-block:: c

  #include <stdio.h>
 
  int main()
  {
    return 0;
  }

Execute the following command on your command prompt:

``$gcc nothing.c -o nothing``

Then you will see a file named my program is created by compiler if no errors 
were there in your program. In case of errors, like we had in one shown to you 
they have to be resolved first. Suppose nothing is produced then you can execute
it like

``$./nothing``

Note that in both the commands $ is not part of command but it is prompt. For
you it may be % or # or something fancier (depends on the imagination of your
system administrator). To execute this command your working directory must be
same as the directory your program is in. Also, note that on some systems TAB
auto completes filename so do not do the following by accident:

**DO NOT DO FOLLOWING**

``$gcc nothing.c -o nothing.c``

This will overwrite your `nothing.c` by `nothing`. Let us see how to compile
this program using a `Makefile`. In case you are curious about knowing eveything
about Makefiles at this point of time then you can find its very fine manual at
`GNU Make Manual <https://www.gnu.org/software/make/manual/>`_. Edit your Makefile like this:

.. code-block:: make

  #sample Makefile
  check-syntax:
      gcc -o nul -Wall -S $(CHK_SOURCES)
 
  nothing:nothing.c
      gcc nothing.c -o nothing

Now from do this from menu. ``Tools->compile`` and as the command issue ``make
-k test``. Your code will be compiled. Makefiles are better than executing
commands however you must know underlying commands. You can also use something
like CMake or Scons but I think that should be part of a book covering build
systems.

There is reason why these topics will not be covered. Covering these topics will
deviate us from the purpose of this book which is learning C programming.

================================
Wha GCC Flags Should You Choose?
================================
For such small programs which are written in this book the flags should be
`-Wall -Werror -pedantic -std=c11`. This means compiler will ensure that all warnings
are enabled, all warnings are treated as error, program is ISO conformant and we
adhere to C11 standard.


===============
musl libc
===============
Even now GCC or Clang which are main compilers have not implemented as much ISO C11
support as `musl` library has implemented. So, for multithreading I will use it
along with other features which are not found in `glibc` which is default on
GNU/Linux based systems. Home of this library is http://www.musl-libc.org/.
Please read its documentation on how to install it or contact local system
administrator.

It is an excellent library and also implements POSIX library which governs many UNIX
like operating systems including GNU/Linux. When I will write the POSIX Programming
which is a planned book then I will use this library extensively. For now it will be
used only to demonstrate what GCC does not provide.
