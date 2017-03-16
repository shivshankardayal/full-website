Tools for C Programming(gdb and gcc and others)
***********************************************
In this chapter we will focus on how to use gcc and gdb. I do not care about
compilers and debuggers which do not share the idea of freedom in
software. Even clang and lldb will not be discussed because they are even
bigger threat to software freedom than commercial compilers and debuggers. gdb
is a very high-quality debugger and it has very good manual which can be found
at http://www.gnu.org/software/gdb/documentation/ and if you feeling upto it
then you can go ahead and read the sources of gdb and gcc as well. This chapter
is not attempt to replace that manual in any way but rather I will try to
present most useful and common operations while debugging. In fact a lot of
information in this chapter will come from the documentation of the tools.

Debugging is the process of removing bugs. This warrants another question that
what is a bug. A bug is a mistake in a program which compiler cannot
catch. Broadly bugs can be categorized in two groups. One which compiler can
catch and second which compiler cannot. First category includes syntactical
errors, which causes compilation errors and linker errors where linker will
throw the error. Second category is called logical errors which can be due to
typing mistakes or wrong logic of the program being implemented. While using a
debugger like gdb we almost always want to find logical errors although gdb can
be used for some other purposes. I will give an example as to what is a logical
error.

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     int i = 0;

     printf("Enter an integer not equal to zero:\n");
     scanf("%d", &i);

     if(i = 0)
     {
       printf("Your input is wrong.\n");
     }

     return 0;
   }

Now as you can see that inside if we are assigning 0 to ``i`` while we should
have used ``==`` operator. Most probable reason for this is a typing
mistake. The worst part is code seems for work for all positive inputs. What
that essentially means that code works correctly i.e. it gives correct output
for positive value but not for 0. Now it is very easy to miss 0 as input if you
are just starting programming. Experienced programmers will definitely check 0
as input since it constitutes boundary test case. Many times in industry 90% of
test cases passing is good enough. As you can see this program will probably
pass 99.99%+ test cases but still it is wrong. A program is not guaranteed to
work unless that has been mathematically proven i.e. formal verification of the
code has been done. But that discussion is for another time.

Even ``gcc`` is not clear about this and a compilation command ``gcc -
Wall -Wextra filename.c`` fails to exactly point the problem because assignment
in if is not illegal in C but yes, you get a hint as given below:

.. code-block:: text

   test.c: In function ‘main’:
   test.c:10:3: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
      if(i = 0)
      ^

However, if you use ``-Werror`` flag then it will be treated as an error which
is actually a good thing to have.

Another such example is given below:

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     int i;

     printf("Enter an integer not equal to zero:\n");
     scanf("%d", &i);

     i=+5;

     printf("Increased value of i is %d\n", i);
     return 0;
   }

Now what possibly has happened here is that programmer intended to use ``+=``
but his/her typing sequence went wrong and s/he types ``=+``. This is even
worse that previous case because compiler cannot provide any help here and
output will be 5. Once again it is easy to locate because code is small but for
programs of size in tens of thousands to more it would be pain to locate such a
mistake. When such a mistake is made it is easy to locate at that point of time
but say the test case did not cover this and program worked for some time and
then it is mis-behaving. Then it would be very hard for a new programmer to
locate it.

Now the programs presented here are simple enough not to warrant a
debugger. However, for complex algorithms it is not so easy to read the code
and apply logic and deduce the mistake. Many times we use numbers after
performing certain calculation by hand. If that calculation is wrong it is hard
to debug it just by reading code.

In these situations we need to use debuggers like ``gdb``. But before we can
really use a debugger we need to prepare our programs for debugging. To do that
we need to tell compiler i.e. ``gcc`` in our case that we intend to debug a
program bu passing option ``-g`` while compiling. Since now we have touched
compilers I think it is appropriate to discuss some common compiler options.

Most used gcc options
=====================
``gcc`` 's man page is quite extensive and you should spend some time reading
it. Other than that gcc has a a lot of documentation which can be found at
https://gcc.gnu.org/onlinedocs/. I strongly recommend that you read those. Here
I will present some most common options and when to use those. This section is
by no means is a replacement of man page. These options are most used options
and by now you know few of them.


* ``-E`` options just preprocesses file. That is ``#include, #define, #ifdef,
  #endif`` etc are processed. This causes preprocessor to run. This part is
  handled by cpp which is "The C Preprocessor". You can do this by running
  ``cpp filename.c``. The output will be preprocessed code which is fed to the
  compiler for compilation. In case of a problem for example recursive header
  inclusion the diagnostics is printed and preprocessing terminates.
* ``-c`` does preprocessing and compilation together. The ourput of previous
  step i.e. preprocessing is fed to the compiler. Syntactical checks are
  performed and object code is produced which has the extension ``.o``. In case
  of a problem compilation is aborted and diagnostics(errors and warnings) is
  printed. If this switch is used then linker is not invoked and thus final
  binary is not generated.
* ``-o`` filename designates the filename to which output has to be
  written. You should be careful that output name is not same as your source
  file else your source file will be oevrwritten.
* ``-ansi`` can be used to make your code compliant to ANSI or C89
  standards. Practically this will make your code highly portable to all the
  systems where ANSI C compilers are supported.
* ``-pedantic`` is like ``-ansi`` but this will ensure that your code is
  compliant to ISO C standards where the specific version can be supplied like
  ``-std=c99``. Please look at man page of gcc for more details.
* ``-Wall`` enables all warnings. Ideally you should have this all the time in
  your compilation command in whatever build tool you use.
* ``-Wextra`` enables warnings not enabled by ``-Wall`` and thus ``-Wall``
  becomes a misnomer. :)
* ``-Werror`` makes compiler treat warnings as errors. You can enable this if
  you are targeting zero warnings. Ideally this should be enabled.
* ``-v`` prints (on standard error output) the commands executed to run the
  stages of compilation and compiler information.
* ``-O1, -O2, O3`` enable optimization for code generation with 1 being lowest
  and 3 being higehst. Not that this will alter the generated assembly
  instructions. Thus you should also use next switch.
* ``-fopt-info`` gives optimization information.
* ``-static`` prevents linking with the shared libraries if system supports
  them. On other systems, this option has no effect
* ``-shared`` produces a shared object which can then be linked with other
  objects to form an executable. Not all systems support this option. For
  predictable results, you must also specify the same set of options used for
  compilation (``-fpic, -fPIC`` or model suboptions) when you specify this
  linker option..
* ``-Wl,`` option passes option to linker. If option contains commas, it is
  split into multiple options at the commas. You can use this syntax to pass an
  argument to the option. For example, ``-Wl,-Map,output.map`` passes ``-Map
  output.map`` to the linker. When using the GNU linker, you can also get the
  same effect with ``-Wl,-Map=output.map``.
* ``-Idir`` puts directory dir in front of list of directories where files
  included, by ``#include``, will be searched for.
* ``-llib`` tell linker that which library to link output with. For example, if we want to link with math library then filename would be ``libm.so`` or ``libm``.a then it would look like ``-lm``. Multiple libraries can be linked like ``-lname1 -lname2``.
* ``-Ldir`` puts directory dir in front of list of directories where libraries
  to be linked, by ``-l``, will be searched for. Multiple paths can be provided
  by ``-Ldir1 -Ldir2`` and so on.
* ``-g`` produce debugging information in the operating system's native format
  (``stabs, COFF, XCOFF`` or ``DWARF 2``). GDB can work with this debugging
  information. ``gcc`` allows use to use ``-g`` with ``-O``. Thus even though
  code generated may be different than code written it is possible to debug
  that.
* ``-glevel`` requests debugging information and also use level to specify how
  much information. The default level is 2.
* Level 0 produces no debug information at all. Thus, ``-g0`` negates ``-g``.
* Level 1 produces minimal information, enough for making backtraces in parts
  of the program that you don't plan to debug. This includes descriptions of
  functions and external variables, but no information about local variables
  and no line numbers.
* Level 3 includes extra information, such as all the macro definitions present
  in the program. Some debuggers support macro expansion when you use ``-g3``.
* ``-fsanitize=address`` enables ``AddressSanitizer``, a fast memory error
  detector. Memory access instructions will be instrumented to detect
  out-of-bounds and use-after-free bugs. See
  http://code.google.com/p/address-sanitizer/ for more details.
* ``-fsanitize=thread`` enables ThreadSanitizer, a fast data race
  detector. Memory access instructions will be instrumented to detect data race
  bugs. See http://code.google.com/p/data-race-test/wiki/ThreadSanitizer for
  more details.
* ``-Dname`` predefines name as a macro, with definition 1.
* ``-Dname=definition`` makes sure that contents of definition are tokenized
  and processed as if they appeared during translation phase three in a
  ``#define`` directive. In particular, the definition will be truncated by
  embedded newline characters.
  
  If you are invoking the preprocessor from a shell or shell-like program you
  may need to use the shell's quoting syntax to protect characters such as
  spaces that have a meaning in the shell syntax.

  If you wish to define a function-like macro on the command line, write its
  argument list with surrounding parentheses before the equals sign (if
  any). Parentheses are meaningful to most shells, so you will need to quote
  the option. With ``sh`` and ``csh``, ``-D'name(args...)=definition'`` works.

  ``-D`` and ``-U`` (given below) options are processed in the order they are
  given on the command line. All -``imacros`` file and ``-include`` file
  options are processed after all ``-D`` and ``-U`` options. ``-U`` is
  basically ``#undef``.


  ``-Uname`` cancels any previous definition of name, either built in or
  provided with a ``-D`` option.

* ``-fPIC`` emits position-independent code, suitable for dynamic linking and
  avoiding any limit on the size of the global offset table if supported for
  the target machine. This option makes a difference on the m68k, PowerPC and
  SPARC. This is very important for building shared libraries.

There are zillions of other useful options, which gcc gives to us. Those
options are used to achieve various results. This is a very small sample of
options which I have described here just to take us forward with our discussion
on ``gdb``.

Multi-file programs, static and dynamic libraries
=================================================
In real-world programs none of the programs are really one file program but it
typically involves really much larger no. of files than that. Similarly, a
program is not only executable but part of it is kept as library. Whether the
library is static or dynamic that is a different matter. Consider the following
famous "Hello, world!" program:

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     printf("Hello, world!");

     return 0;
   }


Now let us compile this program in two different ways as shown below:

.. code-block:: text

   $ gcc test.c 
   shiv@machine ~ $ ls -l a.out
   -rwxr-xr-x 1 shiv shiv 8550 Sep  8 22:08 a.out
   shiv@machine ~ $ gcc -static test.c 
   shiv@machine ~ $ ls -l a.out
   -rwxr-xr-x 1 shiv shiv 877186 Sep  8 22:08 a.out


Now to understand what has happened here which caused the size of file to blow
by approximately 869k I will use a tool called ``nm``. If you just invoke
``M-x`` man followed by ``nm`` then you can read man page of ``nm`` in Emacs
else you can read it in you shell by ``man nm``. It is a beautiful small piece
of program which lists symbols in an object file. If the argument is not an
object file then it assumes argument is ``a.out``. Let us invoke nm on the
first ``a.out`` and see what we have.

.. code-block:: text

   0000000000601048 B __bss_start
   0000000000601048 b completed.6973
   0000000000601038 D __data_start
   0000000000601038 W data_start
   00000000004004c0 t deregister_tm_clones
   0000000000400530 t __do_global_dtors_aux
   0000000000600e18 t __do_global_dtors_aux_fini_array_entry
   0000000000601040 D __dso_handle
   0000000000600e28 d _DYNAMIC
   0000000000601048 D _edata
   0000000000601050 B _end
   0000000000400634 T _fini
   0000000000400550 t frame_dummy
   0000000000600e10 t __frame_dummy_init_array_entry
   0000000000400780 r __FRAME_END__
   0000000000601000 d _GLOBAL_OFFSET_TABLE_
                    w __gmon_start__
   0000000000400418 T _init
   0000000000600e18 t __init_array_end
   0000000000600e10 t __init_array_start
   0000000000400640 R _IO_stdin_used
                    w _ITM_deregisterTMCloneTable
                    w _ITM_registerTMCloneTable
   0000000000600e20 d __JCR_END__
   0000000000600e20 d __JCR_LIST__
                    w _Jv_RegisterClasses
   0000000000400630 T __libc_csu_fini
   00000000004005c0 T __libc_csu_init
                    U __libc_start_main@@GLIBC_2.2.5
   000000000040057d T main
                    U printf@@GLIBC_2.2.5
                    U puts@@GLIBC_2.2.5
   00000000004004f0 t register_tm_clones
   0000000000400490 T _start
   0000000000601048 D __TMC_END__

That is just 35 lines. The important lines for us are towards bottom where
``main`` and ``printf`` are located. You can also notice little ``puts`` hiding
there as well. What this means is our code has these functions and they(not
``main``) are referring to ``glibc_2.2.5`` shared library. You can dig more
information about what are dependencies in terms of shared libraries by using
another beautiful program ``ldd``. Again, you should refer to man page of
``ldd``. It is described in a manner which shows brevity as ``ldd`` - print
shared library dependencies". ``ldd`` can be invoked on binaries or shared
libraries. But it cannot be invoked on binaries which have static linking. For
now let us go back and visit our second a.out binary which was produced with
``-static`` switch to ``gcc``.

We again invoke ``nm`` on ``a.out``. And voila!!! Catch your breath. It has
following output which is truncated in between.

.. code-block:: text

   0000000000406a00 T abort
   00000000006c2240 B __abort_msg
   000000000045ebc0 W access
   000000000045ebc0 T __access
   0000000000490310 t add_fdes
   000000000043a960 t add_module.isra.1
   000000000045f300 t add_name_to_object.isra.3
   00000000006c1c28 d adds.9001
   0000000000445b40 T __add_to_environ
   00000000004682b0 t add_to_global
   0000000000408f40 t adjust_wide_data
   00000000006c2740 V __after_morecore_hook
   0000000000404980 t alias_compare
   0000000000415080 W aligned_alloc
   00000000006c27b0 b aligned_heap_area
   000000000045e2b0 T __alloc_dir
   0000000000499c40 r archfname
   00000000006c3300 b archive_stat
   00000000006c32e0 b archloaded
   00000000006c33b0 b archmapped
   0000000000410260 t arena_get2.isra.3
   ... omitted
   ... omitted
   0000000000433280 W wmempcpy
   0000000000433280 T __wmempcpy
   000000000045a5c0 T wmemset
   0000000000422550 T _wordcopy_bwd_aligned
   00000000004226d0 T _wordcopy_bwd_dest_aligned
   00000000004222f0 T _wordcopy_fwd_aligned
   0000000000422420 T _wordcopy_fwd_dest_aligned
   00000000004585b0 T __woverflow
   0000000000434130 W write
   0000000000434130 W __write
   0000000000434139 T __write_nocancel
   000000000045ed10 W writev
   000000000045ed10 T __writev
   00000000004585f0 T __wuflow
   00000000004587f0 T __wunderflow
   00000000006c1160 D __x86_data_cache_size
   00000000006c1170 D __x86_data_cache_size_half
   00000000006c3ed8 B __x86_prefetchw
   00000000006c1140 D __x86_raw_data_cache_size
   00000000006c1150 D __x86_raw_data_cache_size_half
   00000000006c1100 D __x86_raw_shared_cache_size
   00000000006c1110 D __x86_raw_shared_cache_size_half
   00000000006c1120 D __x86_shared_cache_size
   00000000006c1130 D __x86_shared_cache_size_half
   0000000000433fd0 W _xstat
   0000000000433fd0 T __xstat
   0000000000433fd0 T __xstat64
   0000000000493e60 r yycheck
   0000000000493f00 r yydefact
   0000000000493efb r yydefgoto
   0000000000493ee0 r yypact
   0000000000493ed7 r yypgoto
   0000000000493f29 r yyr1
   0000000000493f1b r yyr2
   0000000000493ea0 r yytable
   0000000000493f40 r yytranslate
   00000000004a8400 r zeroes
   00000000004a8560 r zeroes
   00000000006c3540 b zone_names


If you are beginner then I doubt your shell is even configured enough to scroll
up and see all the output. Thus for simplicity we you can invoke it as ``nm
a.out|less`` which will redirect the output to the pager ``less``. If you look
carefully toward bottom you can notice ``wmemcpy`` although not exactly. Now
what is it doing in our code. What has happened is that to satisfy the printf
call the required code has been stuffed in the binary which is causing binary
size to bloat up.

Now let us turn our focus for now on ``ldd``. If you invoke ``ldd`` then you
will have kind of following output:

.. code-block:: text

   $ ldd a.out
       linux-vdso.so.1 =>  (0x00007fffd8b9f000)
       libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f4bb4c18000)
       /lib64/ld-linux-x86-64.so.2 (0x00007f4bb4ffe000)

The critical information for us is libc.so.6, which is further a symbolic
link(think shortcut of Windows) to ``lrwxrwxrwx 1 root root 12 Sep 7 20:54
/lib/x86_64-linux-gnu/libc.so.6 -> libc-2.19.so``. Now let us try ``ldd`` on
``-static`` version of output and we have following:

.. code-block:: text

   $ ldd a.out
	     not a dynamic executable

If it surprises you then do not be so. This essentially means once we link to
library statically then it is no longer dependent on a shared library. Thus you
have no output in term of dependency.

Now the time is for judgement call. Should you use shared libraries or should
we use static libraries? Usually, shared libraries are better but in case you
are not sure if the user of your code will have those libraries on their system
then you can give static binaries as well. However, in free software community
since we always share code we have the shared libraries available to us(almost
always). We will come back to libraries in a bit.

Coming back to multi-file compilation consider two source files and one header
file given below:

.. code-block:: c

   #ifndef MY_HEADER_H
   #define MY_HEADER_H

   void f();

   #endif
    
.. code-block:: c

   #include "my_header.h"

   int main()
   {
     f();

     return 0;
   }
    
.. code-block:: c

   #include <stdio.h>

   void f()
   {
     printf("In function f\n");
   }

Now assuming these are named ``my_header.h, test.c`` and ``test1.c`` and all
are in same directory then you can compile these like ``gcc test1.c test.c -o
whatever_name_you_want`` then your output will be in that file. However, this
is a bad bad bad way of compiling code. Why because say you change ``test1.c``
where you have written your function ``f()`` then why should you compile
``test.c`` which has not changed. Thus, the proper way to compile it would be
``gcc -c test.c`` then ``gcc -c test1.c`` which will produce ``test.o`` and
``test1.o``. Then you can link them together using ``gcc test.o test1.o -o
filename``. Now if you make changes to ``test1.c`` the you need to just compile
``test1.c`` and link again. This may sound cumbersome for this small set of
files but usually you do not do this manually but rather put it in a
``makefile``. You should read about the build tool ``make``. Describing
``make`` in this book is not good because it is a build system. You can find
GNU make's documentation at https://www.gnu.org/software/make/manual/. When you
will compile hundreds of files then you will see why latter method is
superior. In fact, makefiles are not written by hand as I have said at the end
of first chapter but rather a build tool is used like ``autotools``(``autoconf,
automake, libtool`` etc) or ``cmake`` or ``scons``.

Creating static and dynamic libraries
=====================================
Now that we have learned how to compile multiple files let us turn our focus
towards how to create libraries. First let us create static libraries. Again, I
will create two files for example and since we are creating libraries we will
not have main function. Consider following C files:

.. code-block:: c

   #include <stdio.h>

   void f()
   {
     printf("In function f\n");
   }


.. code-block:: c

   #include <stdio.h>

   void g()
   {
     printf("In function g\n");
   }


First we create two object files form these two files by executing commands
``gcc -c test.c`` and ``gcc -c test1.c`` which will create ``test.o`` and
``test1.o``. You are free to choose any other name as well using ``-o`` option
of ``gcc``. Now we can create three different libraries. ``libtest.a`` or
``libtest1.a`` which will have individual object code. The tool which we need
to use is ``ar``. Once again I would request you to see its man page. ``ar`` is
used to create, modify and extract from archives. Now to create you can use a
command like ``ar rcs libtest.a test.o`` and ``ar rcs libtest1.a test1.o`` or
we can even combine both like ``ar rcs libtest.a test.o test1.o``. Please note
that how lib is prepended to the library name.

Once these libraries are created you need to create header which will have
prototype of these functions so that compilation phase of our driver program
containing main succeeds. The header may look like:

.. code-block:: c

   #ifndef MY_HEADER_H
   #define MY_HEADER_H

   void f();
   void g();

   #endif
      
and then we can write our driver program like:

.. code-block:: c

   #include "my_header.h"

   int main()
   {
     f();
     g();

     return 0;
   }
      
and then compile it like ``gcc test.c -ltest -L.`` since our home directory is
not part of environment variable ``LIBRARY_PATH`` we need to tell linker where
to find the library in this case ``.`` represents the current
directory. However, if you want to add your working directory to ``ld`` which
is our linker then you can export your directory where your file is by ``export
LIBRARY_PATH=/home/shiv:$LIBRARY_PATH`` where ``/home/shiv`` is the directory
containing ``libtest.a``. Once it is done you can compile without ``-L``
switch.

Building shared library is slightly more involved. Your compilation command
should include ``-fPIC`` even on x86 CPUs like ``gcc -c -fPIC test.c`` and
``gcc -c -fPIC test1.c``. Then you can create shared library like ``gcc -shared
-Wl,-soname,libtest.so.1 -o libtest.so.1.0.1 test.o test1.o`` This will produce
a shared library ``libtest.so.1.0.1``. However, if you do not use ``-fPIC``
option and try to build a shared library then you will get following error:

.. code-block:: text

   /usr/bin/ld: test1.o: relocation R_X86_64_32 against `.rodata' can not be used when making a shared object; recompile with -fPIC
   test1.o: error adding symbols: Bad value
   collect2: error: ld returned 1 exit status

Usually shared libraries have a version in their name in actual files and
symbolic links are created with library names with so extension which stands
for "shared object" in case you have not figure that yet. So we can create a
symbolic link by using the command ``ln -s /home/shiv/libtest.so.1.0.1
/home/shiv/libtest.so``. Then you can link to it and execute a program like we
did for static one. If you run ldd over this new binary then you will see its
dependencies in terms of shared object. Note that you can even run ldd on
shared objects as well.

Introduction to gdb
===================
First thing first. A typical output from invocation of ``ulimit`` command on
64-bit is given below:

.. code-block:: text
                
   $ ulimit -a
   core file size          (blocks, -c) 0
   data seg size           (kbytes, -d) unlimited
   scheduling priority             (-e) 0
   file size               (blocks, -f) unlimited
   pending signals                 (-i) 19721
   max locked memory       (kbytes, -l) 64
   max memory size         (kbytes, -m) unlimited
   open files                      (-n) 1024
   pipe size            (512 bytes, -p) 8
   POSIX message queues     (bytes, -q) 819200
   real-time priority              (-r) 0
   stack size              (kbytes, -s) 8192
   cpu time               (seconds, -t) unlimited
   max user processes              (-u) 19721
   virtual memory          (kbytes, -v) unlimited
   file locks                      (-x) unlimited

Now if you see carefully these describe upper limits on various
parameters. What is unlimited there by default we need not worry about it. Let
us see what is not unlimited and is of importance to me. The very first line of
output is of main concern for me. Core file size of 0 will mean that core file
will not be generated. Another important one is maximum no. of open files. Note
that this may not be a problem for a typical beginner but for advanced
programmers this may be a problem when you are working with a sofware which can
keep lots of files open, for example, Hypertable, which strongly recommends
higher value for this. Another problem is stack size. Usually I like to keep it
32M because 8M is too low. It will allow you as to how deep your recursion is
or how much can you allocate on stack. But it can be easily made more. Now to
increase core file size you can invoke a ulimit option like ``ulimit -c
unlimited`` or you can choose a value if you want.
 
Consider the following program: 

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     int *i = (int*)0;

     printf("%d\n", *i);
     return 0;
   }

It is almost guaranteed that this program will cause a ``SIGSEGV`` which should
dump core but core will not be dumped with default settings of ulimit but it
needs a bigger value. If you have changed your core file size upper limit to
some reasonable value then you will see that running this program dumps
core. Core files are very important for debugging an application as it contains
entire contents of memory occupied at the instance it crashes.


To debug a program you should use ``-g`` or ``-ggdb`` while compiling your
program to debug it with ``gdb``.

Invoking gdb

There are several ways you can invoke ``gdb``. The simplest is that just use
``gdb`` command. If you do that you will see something like given below:

.. code-block:: text

   $ gdb
   GNU gdb (Ubuntu 7.7.1-0ubuntu5~14.04.2) 7.7.1
   Copyright (C) 2014 Free Software Foundation, Inc.
   License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
   This is free software: you are free to change and redistribute it.
   There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
   and "show warranty" for details.
   This GDB was configured as "x86_64-linux-gnu".
   Type "show configuration" for configuration details.
   For bug reporting instructions, please see:
   <http://www.gnu.org/software/gdb/bugs/>.
   Find the GDB manual and other documentation resources online at:
   <http://www.gnu.org/software/gdb/documentation/>.
   For help, type "help".
   Type "apropos word" to search for commands related to "word".

Thus what you see is license information, bug reporting link and documentation
link. But the most important for you, my reader, as a beginner is last two
lines. ``gdb`` has help built-in for its commands. I would come back to this in
a bit let us just finish different ways of invocation first.

However, even before ``gdb`` can start we can get help about what options gdb
accepts. The typical way to get help on a program on GNU/Linux is ``-h`` or
``--help``. Please note that ``-h`` does not work always for all commands but
``--help`` is almost guaranteed to work. Few examples are ``df`` and ``ls``
commands where ``-h`` makes output human-readable. If you invoke ``gdb -h``
then you will have following output(will vary with your version of ``gdb``):

.. code-block:: text

   $ gdb -h
   This is the GNU debugger.  Usage:

        gdb [options] [executable-file [core-file or process-id]]
        gdb [options] --args executable-file [inferior-arguments ...]

   Selection of debuggee and its files:

        --args             Arguments after executable-file are passed to inferior
        --core=COREFILE    Analyze the core dump COREFILE.
        --exec=EXECFILE    Use EXECFILE as the executable.
        --pid=PID          Attach to running process PID.
        --directory=DIR    Search for source files in DIR.
        --se=FILE          Use FILE as symbol file and executable file.
        --symbols=SYMFILE  Read symbols from SYMFILE.
        --readnow          Fully read symbol files on first access.
        --write            Set writing into executable and core files.

   Initial commands and command files:

        --command=FILE, -x Execute GDB commands from FILE.
        --init-command=FILE, -ix
                           Like -x but execute commands before loading inferior.
        --eval-command=COMMAND, -ex
                           Execute a single GDB command.
                           May be used multiple times and in conjunction
                           with --command.
        --init-eval-command=COMMAND, -iex
                           Like -ex but before loading inferior.
        --nh               Do not read ~/.gdbinit.
        --nx               Do not read any .gdbinit files in any directory.

   Output and user interface control:

        --fullname         Output information used by emacs-GDB interface.
        --interpreter=INTERP
                           Select a specific interpreter / user interface
        --tty=TTY          Use TTY for input/output by the program being debugged.
        -w                 Use the GUI interface.
        --nw               Do not use the GUI interface.
        --tui              Use a terminal user interface.
        --dbx              DBX compatibility mode.
        --xdb              XDB compatibility mode.
        --quiet            Do not print version number on startup.

   Operating modes:

        --batch            Exit after processing options.
        --batch-silent     Like --batch, but suppress all gdb stdout output.
        --return-child-result
                           GDB exit code will be the child's exit code.
        --configuration    Print details about GDB configuration and then exit.
        --help             Print this message and then exit.
        --version          Print version information and then exit.

   Remote debugging options:

        -b BAUDRATE        Set serial port baud rate used for remote debugging.
        -l TIMEOUT         Set timeout in seconds for remote debugging.

   Other options:

        --cd=DIR           Change current directory to DIR.

   At startup, GDB reads the following init files and executes their commands:
      * system-wide init file: /etc/gdb/gdbinit

   For more information, type "help" from within GDB, or consult the
   GDB manual (available as on-line info or a printed manual).
   Report bugs to "<http://www.gnu.org/software/gdb/bugs/>".``
                
   
This is self-explanatory and I will not attempt to describe it and it is
covered very well in documentation. One more point I would like to give is that
you do not necessarily go to ``https://gnu.org`` for documentation. Rather you should
install ``gdb-doc`` package on your GNU/Linux system. This has an advantage that
your documentation will be in sync with the version of gdb installed on your
system unless you manually install it by source. The help files can be found in
``/usr/share/doc/gdb/`` by default. Then either you can read the pdf version or
info manual(you can read this in Emacs).

One of the most common ways to invoke ``gdb`` with program name as argument
i.e. ``gdb prog_name``. You can also specify core file with program name
i.e. ``gdb prog_name core`` and the for program prog_name will be loaded for
debugging. You can also supply PID(process ID, which you get in second column
when you execute ``ps -eaf``) with ``prog_name`` and if that program with that
PID is running then will allow you to debug that.

There is another way to invoke ``gdb`` and that is ``gdb --args prog_name
args`` which will invoke ``gdb`` on ``prog_name`` with arguments ``args``.

Getting help
============
Once you are on ``gdb`` prompt after ``gdb`` has initialized you have a lot of
help from ``gdb`` available at your disposal. To see help topics you can type
``help`` on ``gdb`` prompt and you will see something like below:

.. code-block:: text

   (gdb) help
   List of classes of commands:

   aliases -- Aliases of other commands
   breakpoints -- Making program stop at certain points
   data -- Examining data
   files -- Specifying and examining files
   internals -- Maintenance commands
   obscure -- Obscure features
   running -- Running the program
   stack -- Examining the stack
   status -- Status inquiries
   support -- Support facilities
   tracepoints -- Tracing of program execution without stopping the program
   user-defined -- User-defined commands

   Type "help" followed by a class name for a list of commands in that class.
   Type "help all" for the list of all commands.
   Type "help" followed by command name for full documentation.
   Type "apropos word" to search for commands related to "word".
   Command name abbreviations are allowed if unambiguous.
      

Thus it is not hard to find if you want to know how to put a breakpoint in a
program using ``gdb``. ``help breakpoints`` will show you everything related to
breakpoints.

