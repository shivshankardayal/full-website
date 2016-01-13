*************
Console I/O
*************
IO stands for input/output. C provides only mechanism to interact through
console using its standard library. C does not provide ways to have GUI
although that is possible with various GUI libraries most notable being
GTK. However, discussing about GTK is out of scope of this book. In this
chapter we will focus on console output facilities of C because any program we
write at this stage will be meaningless if it has no input/output. Typically
when we interact with a C program we give input using keyboard which is also
referred as \texttt{stdin} stream. The output is monitor or \texttt{stdout}
stream. There is one more stream \texttt{stderr} which is generally redirected
to monitor or a log file. For historical reasons these are known as
\texttt{FILE} stream which represents the datatype of these
streams. \texttt{FILE} is capable of representing other streams which are disk
based for example a file on your hard drive. There are more type of input
devices on a modern computer. For example, network i/o is there. Whenever you
browse web or download a file through your Internet connection network i/o comes
into play. There is an opengroup
which specifies functions for network related functions. Operating systems
like GNU/Linux are POSIX compatible which defines how network i/o will be
used. Even a printer is a special output device, a camera input, speakers
output, microphone input and so on. In this books we are concerned with
keyboard input, output on monitor and i/o using files. Other types of i/os are
out of scope of this book.

However, before we go on with i/o I would
like to present C's memory model which will be needed by our discussion of i/o
related functions. However, if things do not make sense even then please go
through it and come later to understand more. 

.. index::
   single: memory model

=====================
C's Memory Model
=====================
As you may be knowing RAM(random access memory) is the area which is used as
primary memory. Whenever we execute a program the first thing which happens is
that it gets loaded into memory. Now a binary program becomes a process when it
is running i.e. a running program is referred as process. All processes have
memory area divided into different portions. These portions are known as data
segment, stack and code or text segment. Data segment is further split in
three parts; initialized data segment, uninitialized data segment or BSS which
is name after an ancient assembler Block Started by Symbol and
heap. Initialized data segment contains initialized global variables and static
variables. For uninitialized data segment it is same as above just that the
variables are not initialized explicitly but implicitly to zero.

Heap is the largest area of memory used for dynamic memory allocation. As
you will see later that you can manage heap using ``malloc(), calloc(),
realloc()`` and ``{free()``. Note that operating system does not manage memory
allocated for you on heap. You, the programmer, are responsible for allocating and
freeing up memory in area. If heap gets full os will use virtual memory or swap
space on hard disk. Objects allocated on heap persist across function
calls. However, there are some very nasty problems, which, come in picture when
you use heap. There are several of them. You may forget to allocate memory and
may dereference unallocated pointer. You may have initialized it to
``NULL`` and try to dereference that. You may allocate and free twice. You
forgot to set pointer to \``NULL`` after freeing it. And last but not the
least you loose all pointers to the memory area before you can free. The nature
with this particular problem is that if your program is going to run for long
time then it is going to consume more and more memory. Because of its nature it
is known as memory leak. It is very difficult to detect such problems in code
which does not run for long periods of time. Our friend Valgrind will come to
help up with this problem. When a memory leak happens it eats up RAM slowly and
then operating system has to use virtual memory as explained above. In a
nutshell, I will say that heap means you have to manage it.

.. tikz:: 

   \draw (0, 0) -- (0, 1) -- (3, 1) -- (3, 0) -- cycle;
   \draw (0, 1) -- (0, 2) -- (3, 2) -- (3, 1) -- cycle;
   \draw (0, 2) -- (0, 4) -- (3, 4) -- (3, 2) -- cycle;
   \draw (0, 4) -- (0, 6) -- (3, 6) -- (3, 4) -- cycle;
   
   \draw (1.5, 0.5) node {Code Segment};
   \draw (1.5, 1.5) node {Data Segment};
   \draw (1.5, 2.5) node {Heap};
   \draw (1.5, 5.5) node {Stack};

   \draw [->, thick, >=stealth] (1.5, 3) -- (1.5, 3.8);
   \draw [->, thick, >=stealth] (1.5, 5) -- (1.5, 4.2);

   \draw (1.5, 6.5) node {Memory model of a process};

Stack is relatively simple. All non-static and non-register variables go on
stack if not allocated dynamically. Stack variables do not retain there value
across function calls unless
they are passed as pointers. Also, when they go out of
scope, that is the scope in which they were declared ends, they will be kind of
lost. The way in which stack frame moves the same area will be used for new
variables. However, stack is very limited (compared to heap) and in deeply
nested function calls or recursion (you will see these in Functions chapter)
stack may get full and program may crash. The reason for crashing is that
operating system will not use virtual memory but will do a segmentation fault
in its place. GNU/Linux allow its users to modify the stack size by 
``ulimit`` command. Note that stack and heap are adjacent in memory and 
grow in opposite direction.

Code segment or text segment is an area where the executable instructions of
program reside. It is typically constant and read-only area unless your system
allows self-modifying code. Following diagram shows the memory layout.

Note that this memory model not only applies to C but any process.

Now we will look at those functions, which, allow us to do console i/o. We will
begin with our familiar friends; printf and scanf.

In this chapter we will look at only those functions, which, allow us to do
console i/o. We will begin with our familiar friends ``printf`` and ``scanf``.

.. index::
   single: printf

========
printf
========
The prototype of ``printf`` is given by

.. code-block:: c

   int printf(const char* fmt, ...);

Let us take a minute to understand this as we have not yet covered
functions. The first word is ``int`` which denotes the return type of the
``printf`` function. This is no. of characters printed. Then we have name
of the function. ``fmt`` is the format string of type ``const char``. In C,
strings are either character arrays or character pointers. Here, 
const means ``printf`` will not modify the format string. The ``...`` means
variable no. of arguments, which can be 0 also, to be supplied to
``printf``.

``printf`` is a string based output function that is It writes character strings
to ``stdout``. The data which has to be written is formatted by format string as
shown previously. After the format specifier it expects as many arguments as
specified in format string. The characters which are not like, say ``%d`` for
example, arecalled ordinary characters. These are simply copied to output
stream, which, is ``stdout`` for ``printf``. The ``%d`` like conversion
characters are known as conversion specification or format specifiers. Each
conversion specification should be augmented with one one argument. The results
are undefined if there are insufficient arguments for the format. If extra
arguments are given the excess arguments will be evaluated but are otherwise
ignored. However, there is a big problem here! There is no type-safety.:-( In
general compiler will warn you about it and you, the programmer, are responsible
for giving correct format string, correct no. of correct type of arguments.
Consider the following program for example:

.. code-block:: c

  // printf demo
  // Author: Shiv Shankar Dayal
  // Description: printf demo
 
  #include <stdio.h>
 
  int main()
  {
    printf("%d %d\n", 3, 8);
 
    //do not mess it. undefined behavior
    printf("%d %d\n", 5);
 
    //extra arguments ignored
    printf("%d %d\n", 3, 5, "hello");
 
    //legal because char is integer type
    printf("%d\n", 's');
 
    //wrap around of integer as char
    printf("%c\n", 836);
 
    //do not mess with type-safety
    int i = printf("%d\n", "hello");
    prinf("%d\n", i);
 
    return 0;
  }



now that if you give the command like ``gcc printf.c`` then you will be shown following warnings::

  printf.c:12:14: warning: more '%' conversions than data arguments [-Wformat]
          printf("%d %d\n", 5);
                   ~^
  printf.c:15:26: warning: data argument not used by format string [-Wformat-extra-args]
          printf("%d %d\n", 3, 5, "hello");
               ~~~~~~~~~        ^
  printf.c:24:19: warning: conversion specifies type 'int' but the argument has type
  'char *' [-Wformat]
        int i = printf("%d\n", "hello");
                        ~^     ~~~~~~~
                        %s
  3 warnings generated.

Clearly this is not a good sign for any program. A program should compile
cleanly. In our case compiler is generating binary even though there are
warnings. You can make compiler generate more warnings by issuing a ``-Wall``
flag. You can also treat all warnings as errors by passing ``-Werror`` to
compiler. These two options will ensure that your code has no warnings. Now let
us move to output and try to understand it. The output on my system is as given
below. It may differ on your system::
    
  3 8
  5 8
  3 5
  115
  D
  134514119
  10

First ``printf`` is correct as expected. The second line causes undefined
behavior. You may think it is the previous 8 but believe me it is not guaranteed
that it will always the case. Ii is ``UNDEFINED``. Third ``printf`` is also fine
in the sense that extra argument is ignored. Fourth and fifth are normal. Sixth
is again a big problem. You are trying to print a decimal integer while argument
is a character string. There is no way for compiler to determine that what
should be printed which will fit on standards. Now we will have to take a look
at all possible format specifier and their meanings. You have seen most of them
so this is more for a reference. I have taken following from
http://www3.opengroup.org and modified to suit the book. In particular, I have
omitted facts related to XSI specification.

.. index::
   single: conversion specification

A full detail of all conversion specification is given in specification at
:ref:`31.6.1` :math:`\S(\text{iso.7.21.6.1})`, which lists ``fprintf`` function
but conversion specifiers are same as ``printf``.

In real-world most of the time the conversion specifiers are kept simple. Given
below is a sample program showing some of the things given above:

I suggest you to read the desciption of conversion specifiers and experiment
with various parameters to get different kind of output.

.. index::
   single: scanf

======
scanf
======
The prototype of ``scanf`` is given below which is very similar to ``printf``.

.. code-block:: c

   int scanf(const char * restrict format, ...);

``scanf()`` is sister of ``printf()``. They work in tandem. As its name says
scan function it scans ``stdin`` or keyboard for input. Its signature is same
as that of ``printf()``. It raeds bytes from keyboard input, interprets them
according to format string. It also expects a set of pointer arguments as
opposed to values for ``printf()``. The pointers indicate where the interpreted
data from the input will be stored. The result is ``UNDEFINED`` if there are 
less number of pointer arguments than the number of conversion specifers in
format string. Excess arguments will be evaluated but ignored. The format string
can have only white-space characters or an ordinary character (neither '%' nor a
white-space character) or a conversion specification.

The full detail of conversion specification can be found at :ref:`31.6.2`
:math:`\S(\text{iso.7.12.6.2})` which lists ``fscanf`` function but conversion
specifiers are same for both.

Time for some code. You have already seen many examples of scanf so I will
just explain some concepts here. Consider the following program:

.. code-block:: c

  // Author: Shiv S. Dayal
  // Description: Demo of string input

  #include <stdio.h>

  int main()
  {
    char str[128] = {0};

    scanf("%s", str);
    printf("You entered:\n%s\n", str);

    return 0;
  }



and the output is::

  Hi! My name is Shiv.
  You entered:
  Hi!

It is certainly not the corect output. We had expected to see like: "Hi! My name
is Shiv.". What happend to input string after "Hi!". Well, in a form given above
for ``scanf()`` it will stop taking input after white-space for character
strings. For numerics it does not matter as it does not match the format. For
characters it is character-by-character so no confusion either. So what if you
want to have the entire string including white-spaces. Use [^\n] as given below:

.. code-block:: c

  // Author: Shiv S. Dayal
  // Description: Corrected demo of string input

  #include <stdio.h>

  int main()
  {
    char str[128] = {0};

    scanf("%[^\n]s", str);
    printf("You entered:\n%s\n", str);

    return 0;
  }



and the output is::

  Hi! My name is Shiv.
  You entered:
  Hi! My name is Shiv.
  
What if you want to filter a string based on certain patterns. For example, a
charcater string does not contain more that a single space, English alphabets,
period and digits. To scan such a string you can define a pttern as program
given below shows:

.. code-block:: c

  // Author: Shiv. S Dayal
  // Description: Demo of []

  #include <stdio.h>

  int main()
  {
    char c[100]={0};
  
    scanf("%[ A-Za-z0-9!.]", c);
    printf("%s\n", c);
  
    return 0;
  }



and the output is::
  
  Hi! My name is Shiv! My phone no. is 1234. %^$&*
  Hi! My name is Shiv! My phone no. is 1234. 

There is also a major problem associated with input and that comes when you have
characters involved. Consider the following program:

.. code-block:: c

  // Author: Shiv S. Dayal
  // Description: Demo of scanf() function

  #include <stdio.h>

  int main()
  {
    int   i = 0;
    float f = 0.0;
    char  c1 = '\0';
    char  c2 = '\0';
    char  c3 = '\0';

    printf("Enter an integer, a float and three character one by one:\n");

    scanf("%d", &i);
    scanf("%f", &f);
    scanf("%c", &c1);
    scanf("%c", &c2);
    scanf("%c", &c3);

    printf("You entered\n");
    printf("%d\n", i);
    printf("%f\n", f);
    printf("%c\n", c1);
    printf("%c\n", c2);
    printf("%c\n", c3);

    return 0;
  }



and the output is::

  2 
  3.4
  s
  You entered
  2
  3.400000


  s

  
What is happening here is that newline entered by our RET key is getting
assigned to ``c1`` and ``c3``. That is why the program accepted only second
character. The enter after ``float f;`` was assigned to ``c1`` and the character
entered to ``c2`` and then the RET newline to ``c3``. There is a very simple way
to recover from this:

.. code-block:: c

    // Author: Shiv S. Dayal
    // Description: Demo of scanf() function
     
    #include <stdio.h>

    int main()
    {
      int   i = 0;
      float f = 0.0;
      char  c1 = '\0';
      char  c2 = '\0';
      char  c3 = '\0';
     
      printf("Enter an integer, a float and three character one by one:\n");
      scanf("%d", &i);
      scanf("%f", &f);
      scanf(" %c", &c1);
      scanf(" %c", &c2);
      scanf(" %c", &c3);

      printf("%d\n", i);
      printf("%f\n", f);
      printf("%c\n", c1);
      printf("%c\n", c2);
      printf("%c\n", c3);

      return 0;
    }



The whitespace character shown will eat up all the white-space given after the
previous input. This concludes our discussion on ``printf()`` and ``scanf()``.
Now we will move to another set of i/o functions which take character string
without filtering and print it to screen without filtering. What I am going to
discuss are ``gets(), fgets(), puts()`` and ``fputs()``.

.. index:: gets, fgets, puts, fputs

===============================
Character String I/O Functions
===============================
These functions are very simple compared to ``printf()`` and ``scanf()``. They
take a pointer to a character array or a character pointer and fill it with
input or print it to monitor. Note that ``gets()`` and ``puts()`` work only with
``stdin`` and ``stdout`` respectively while ``fgets()`` and ``fputs()`` work
with ``FILE`` streams. They can read and write to file streams that is. Here is
a sample program:

.. code-block:: c

    // Author: Shiv S. Dayal
    // Description : Demo of string i/o
    #include <stdio.h>
    #include <stdlib.h>
    
    int main()
    {
      char cStack[1024] = "";
      char *cHeap = (char*)malloc(sizeof(1024));

      gets(cStack);
      puts(cStack);

      cHeap = fgets(cHeap, 1024, stdin);
      fputs(cHeap, stdout);

      return 0;
    }



and the output is::

  Hi!
  Hi!
  Hello!
  Hello!

First ``"Hi!"`` and ``"Hello!"`` are keyboard inputs. Do not worry about array
and pointer syntax at the moment. Just see the difference between function
calls. Their is a problem with ``gets()`` that it can cause buffer overflow. If
input is bigger than 1024 bytes including the null terminator then buffer
overflow will happen. Note how you can prevent it with ``fgets()`` by specifying
the number of characters you want to read. Rest of input will be ignored by
``fgets()``. This is a security hole and therefore you should never ever use
``gets()``.

Time for single character input/output.

.. index:: getc, putc, getchar, putchar, fgetc, fputc

===============================
Single Character I/O
===============================
There are several functions for single character i/o. They are ``getc(), putc(),
getchar(), putchar(), fgetc()`` and ``fputc()``. Apart from ``getchar()`` and
``putchar()`` rest can do any FILE stream-based i/o. Let us see them as they are
mostly trivial.

.. code-block:: c

  // Author: Shiv S. Dayal
  // Description: Single character funciton demo
  #include<stdio.h>

  int main()
  {
    char c ='';

    c = getchar();
    putchar(c);

    c = getchar();
    putchar(c);

    c = fgetc(stdin);
    fputc(c, stdout);

    c = getchar();
    putchar(c);

    c = getc(stdin);
    putc(c, stdout);

    return 0;
  }



and the output is::

  4
  4
  5
  5
  6
  6

The first 4, 5 and 6 were keyboard inputs. Note the use of extra ``getchar()``
and ``putchar()`` to handle the situation we faced during ``scanf()``.

So we have seen many functions and programs for console i/o. File i/o is still
there and will be covered later. This chapter ends here. See you in the next
chapter with operators and expressions.:-)
