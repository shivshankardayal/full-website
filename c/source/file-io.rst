*****************
File Input/Output
*****************
In this chapter we will study how to perform IO on a file i.e. how we read data
from file or how we write data to file. Any significant program operate on
files. For exmaple, reading and parsing a configuration file is a very common
operation. Understanding the concepts related to file IO is very critical to
write large programs. First question is that what is a
file. Well on GNU/Linux which I am going to focus on treats everything as a
file. A file is a resource which stores information. It can be in memory
i.e. RAM or hard disk. A file can be of several types. If you perform ``ls -l``
in a directory then the first character of line for each file tells you about
type of file. Given below is a table for this:

+-----------------+------------------+
| First character |   Type of file   |
+=================+==================+
|       "-"       |  ordinary file   |
+-----------------+------------------+
|       d         |     directory    |
+-----------------+------------------+
|       l         |  symbolic link   |
+-----------------+------------------+
|       p         |    named pipe    |
+-----------------+------------------+
|       s         |       socket     |
+-----------------+------------------+
|       c         | character device |
+-----------------+------------------+
|       b         |   block device   |
+-----------------+------------------+

We are going to be concerned with first type only because to operate on other
types of devices you need to use library or system calls provided by
GNU/Linux. For example, to read a sirectory you have ``readdir()`` system call,
to open a socket you have ``socket()`` system call and so on. These functions
are out of scope of this book.

Text and Binary Files
=====================
POSIX specification defined a text file that contains characters zero or more
lines. The beauty of a text file is that it has no metadata therefore it can be
of zero bytes in length. Usually a text file will contain either all ASCII or
UTF-8 characters. However, text files can contain other characters as well. For
our discussion we will focus on ASCII text files. On GNU/Linux or other Unix
systems lines are separated by ``\n`` while on Windows they are separated by
``\r\n``. This is a very important difference if you are processing file on the
basis of individual characters.

Binary files are those files which are not text files. Some binary files
contain headers, blocks of metadata used by a computer program to interpret the
data in the file. The header often contains a signature or magic number which
can identify the format. If a binary file does not contain headers then it is
called *flat binary file*.

Functions Related to Files
==========================

fopen and fclose Function
-------------------------
Before you can do anything with a file you need to open it which is done by
using ``fopen`` function. ``fopen`` returns a ``FILE *`` as a return value. For
historical reasons, he type of the C data
structure that represents a stream is called ``FILE`` rather than
"stream". Since C library functions deal with objects of type ``FILE *``,
sometimes the term file pointer is also used to mean "stream". This leads to
unfortunate confusion over terminology in many books on C.The ``FILE`` type is
declared in the header ``stdio.h``.

When you open a file internally a file descriptor is used which is associated
with the ``FILE`` object. Now the number of files which can be open at the same
time is limited. The number of files which can be opened at the same time is
governed by ``ulimit`` command. There is a macro ``FOPEN_MAX`` which is the
minimum number of files that can be opened and is guaranteed by
implementation. Therefore, it is very important that you close a file once you
have no further use of its contents. To close a file you use ``fclose``
function. Matching an ``fopen`` with ``fclose`` is same as matching a call to
``malloc, calloc, realloc`` with ``free``.

``fopen`` function is describe in great detail at section :ref:`fopen` and
``fclose`` is descibed at section :ref:`fclose`. You should read the sections
to know more about these functions. Let us look at the signatures first:

.. code-block:: c

   #include <stdio.h>

   FILE *fopen(const char * restrict filename, const char * restrict mode);

   int fclose(FILE *stream);

``mode`` is what is described in section mentioned above. ``filename`` is path
on your filesystem. It can be absolute or relative. However, you must have
correct permission i.e. read and write permissions. These permission are
govered by your operating system. For example, you will almost always have
permission inside your home directory. Let us try to create a file in this
directory. Since we are going to create we will use ``w`` mode. For example:

.. code-block:: c

   #include <stdio.h>
   #include <string.h>

   int main()
   {
     FILE *fp = NULL;

     if(fp=fopen("temp.txt", "w")) {
       printf("Successfully opened file.\n");
       int n = fclose(fp);
       if(n != 0)
         printf("%s\n", strerror(n));

     }

     return 0;
   }

if you run this program then you should see:

.. code-block:: text

   Successfully opened file.

and if you check your directory in which program is then you will see an empty
file ``temp.txt`` created. It is important to check for errors when you call
``fclose`` to close an output stream, because real, everyday errors can be
detected at this time. For example, when ``fclose`` writes the remaining
buffered output, it might get an error because the disk is full. Even if you
know the buffer is empty, errors can still occur when closing a file if you are
using NFS.

.. index:: fpuc, fgetc

fputc and fgetc Function
------------------------
``fputc`` and ``fgetc`` are described at sections :ref:`fputc` and :ref:`fgetc`
respectively. Let us see an example:

.. code-block:: c

   #include <stdio.h>
   #include <string.h>

   int main()
   {
     FILE *fp = NULL;

     if(fp=fopen("temp.txt", "r+")) {
       if(fputc('a', fp) == EOF)
         printf("Could not write to file.\n");
     }

     int n = fclose(fp);
     if(n != 0)
       printf("%s\n", strerror(n));

     if(fp=fopen("temp.txt", "r+")) {
       if((n = fgetc(fp)) == EOF)
         printf("Could not read from file.\n");
       else
         putchar(n);
     }

     n = fclose(fp);
     if(n != 0)
       printf("%s\n", strerror(n));

     return 0;
   }

and the output is ``a``. Note that we have to close file stream and then open
again because once you write ``a`` to file then file pointer advances to next
location. Therefore if we try to read without closing and opening again then
``fgetc`` will return ``EOF``.

Now this pogram could have been written without closing file and opening again
if we could reposition file pointer to beginning. C gives us that facility to
reposition the file pointer. We have several functions to do that. ``fgetpos,
fseek, fgetpos, ftell`` and ``rewind`` function. These functions are described
in sections :ref:`fgetpos`, :ref:`fseek`, :ref:`fgetpos`, :ref:`ftell` and
:ref:`rewind` respectively. All these functions are defined in header file
``stdio.h``. If you read these sections then you will get a very
good idea about what these functions do. Asuuming you have read and encountered
three macros ``SEEK_SET, SEEK_CUR`` and ``SEEK_END``. These give position of
beginning of file, current position of file pointer and end of file
respectively. Let us see examples of these functions one by one.

File Poisitoning Functions
==========================

.. index:: fsetpos

fgetpos Function
----------------
I am giving the signature here as well.

.. code-block:: c

   int fgetpos(FILE * restrict stream, fpos_t * restrict pos);

``pos`` is output parameter which is set by ``fgetpos`` which can be used by
``fsetpos`` function.

.. index:: fseek

fseek Function
--------------

.. code-block:: c

   int fseek(FILE *stream, long int offset, int whence);

``whence`` can be an integer or one of the three file positioning
macros. ``offset`` is offset from ``whence``. So ``whence`` and ``offset`` will
be added and file pointer will be set to that position.

.. index:: fsetpos

fsetpos Function
----------------

.. code-block:: c

   int fsetpos(FILE *stream, const fpos_t *pos);

``fsetpos`` sets the file pointer to the position which you can get from
``fgetpos``.

.. index:: ftell

ftell Function
--------------

.. code-block:: c

   long int ftell(FILE *stream);

``ftell`` gives current value of file position indicator.

.. index:: rewind

rewind Function
---------------

.. code-block:: c

   void rewind(FILE *stream);

The ``rewind`` function sets the file position indicator for the ``stream``
pointed to by ``stream`` to the beginning of the file. It is equivalent to

.. code-block:: c

   (void)fseek(stream, 0L, SEEK_SET)

except that the error indicator for the ``stream`` is also cleared.

Now let us try to use these functions altogether.

Edit the ``temp.txt`` file created above or create a new file with this name
and put ``Hello world!`` in it.

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     FILE *fp = NULL;

     if((fp=fopen("temp.txt", "r+"))) {
       int c = 0;
       fpos_t pos;

       if(fgetpos(fp, &pos))
         puts("Could not get file position.");

       printf("%ld\n", ftell(fp));

       while((c=fgetc(fp)) != EOF)
         putchar(c);
    
       printf("%ld\n", ftell(fp));

       if(fsetpos(fp, &pos))
         puts("Could not set file position.");

       printf("%ld\n", ftell(fp));

       while((c=fgetc(fp)) != EOF)
         putchar(c);

       printf("%ld\n", ftell(fp));
       fseek(fp, 0, SEEK_SET);
       printf("%ld\n", ftell(fp));

       while((c=fgetc(fp)) != EOF)
         putchar(c);

       printf("%ld\n", ftell(fp));
       rewind(fp);
       printf("%ld\n", ftell(fp));
     }

     int n = fclose(fp);

     if(n != 0)
       puts("File could not be closed.");

     return 0;
   }

The program is very simple and you can guess the output which is given below:

.. code-block:: c

   0
   Hello world!
   13
   0
   Hello world!
   13
   0
   Hello world!
   13
   0

While ``fgetc`` and ``fputc`` are nice but they are limited to once character
each. There are other more efficient functions like ``fprintf, fscanf, fputs,
fgets, fwrite`` and ``fread`` all described in :ref:`stdio`. The usage is
simple and can be figured from their signature. If you need to read or write
multiple characters at the same time consider using one of those for efficiency
depending on your requirement.

Now there are three special streams ``stdout, stdin`` and ``stderr`` which are
for output, input and error respectively. They can be treated as ``FILE``
streams. For example, you can close ``stdout`` stream and then you can redirect
it to a file. For example:

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     fclose(stdout);
     stdout = fopen("temp.txt", "w");
     fprintf(stdout, "Surprise!!!\n");
     fclose(stdout);

     return 0;
   }

If you open file ``temp.txt`` after running this program then it will contain
the text which we are printing rather than appearing on console because we have
attached ``stdout`` to ``temp.txt``. Note that if you use ``printf`` then the
default behavior of ``stdout`` will kick in which is line buffering and also
since you are writing to a file it will be fully buffered so even a call to set
buffering to ``NULL`` will not help. You can set buffering to ``NULL`` by
calling ``setbuf(stdout, NULL);`` and then flushing the stdout stream using
``fflush(stdout);`` everytime you want to clear the stream. But since file is
fully buffered these calls will still not print to file if you use
``printf``. ``stderr`` is not buffered. We cover buffering next.

Stream Buffering
================
When we output or input something in C it is not immediate but is rather
delayed. Typically it is stored in a buffer whose size is controlled by a macro
``BUFSIZ``. The reason for this is it is inefficient to read or write content
to streams as soon as they come character by character. Therefore it is very
important to understand buffering because you will be always giving some output
and most of the time taking some input. If you do not understand buffering then
your interactive programs may not behave as you intend them to. There are three
separate kinds of buffering.

* No buffering. Content is transferred as soon as it comes.
* Line buffering. Content is transferred as soon as new line occurs.
* Full buffering. Content is transferred as soon as ``BUFSIZ`` is achieved by
  buffer.

Whenever you open a file stream it is fully buffered except when the stream is
connected to an interactive device such as a terminal. A stream like ``stdout``
which is connected to terminal is line buffered. Usually the buffering settings
are optimized for convenience and performance but there will be times when you
would want to override those. There are times when we want output to appear
immediattely for ``stdout``. The simplest way is to use ``\n`` because
``stdout`` is line buffered. But there is another choice and you can use
``fflush`` to flush the buffer.

Flushing output on buffered streams means transmitting all content in buffer to
the file. There are many circumstances when this happens automatically:

* When you try to do output and the output buffer is full.
* When the stream is closed.
* When the program terminates by calling ``exit``.
* When a newline is written, if the stream is line buffered.
* Whenever an input operation on any stream actually reads data from its file. 

.. index: fflush

fflush Function
---------------
It is described at :ref:`fflush`.

.. code-block:: c

   int fflush(FILE *stream);

Typically you can use it like ``fflush(stdout);``. The ``fflush`` function can
be used to flush all streams currently opened. While this is useful in some
situations it does often more than necessary since it might be done in
situations when terminal input is required and the program wants to be sure
that all output is visible on the terminal. But this means that only line
buffered streams have to be flushed.

However, if you want to control buffering to your streams for your special
purposed then you have two functions at your disposal which we will study next.

Controlling Buffering
=====================
``setbuf`` and ``setvbuf`` are two functions which are used to control
buffering and are described at :ref:`31.5.5` and :ref:`31.5.6` respectively.

.. code-block:: c

   void setbuf(FILE * restrict stream, char * restrict buf);

   int setvbuf(FILE * restrict stream, char * restrict buf, int mode, size_t size);


``setvbuf`` function is used to specify that the stream stream should have the
buffering mode mode, which can be either ``_IOFBF`` (for full buffering),
``_IOLBF`` (for line buffering), or ``_IONBF`` (for unbuffered input/output). 

If you specify a null pointer as the ``buf`` argument, then ``setvbuf``
allocates a buffer itself using ``malloc``. This buffer will be freed when you
close the stream.

Otherwise, ``buf`` should be a character array that can hold at least ``size``
characters. You should not free the space for this array as long as the
``stream`` remains open and this array remains its buffer. You should usually
either allocate it statically, or ``malloc`` the buffer. Using an automatic
array is not a good idea unless you close the file before exiting the block
that declares the array.

While the array remains a stream buffer, the stream I/O functions will use the
buffer for their internal purposes. You shouldn't try to access the values in
the array directly while the stream is using it for buffering.

If ``buf`` is a null pointer, the effect of this function is equivalent to
calling ``setvbuf`` with a mode argument of ``_IONBF``. Otherwise, it is
equivalent to calling ``setvbuf`` with ``buf``, and a mode of ``_IOFBF`` and a
``size`` argument of ``BUFSIZ``.

The ``setbuf`` function is provided for compatibility with old code; use
``setvbuf`` in all new programs.

Peeking Ahead ungetc Function
=============================
``ungetc`` function is used to put back a character which has been read from an
input stream to input stream back. Consider the following program:

.. code-block:: c

   int ungetc(int c, FILE *stream);

If ``c`` is ``EOF``, ``ungetc`` does nothing and just returns ``EOF``. This
lets you call ``ungetc`` with the return value of ``getc`` without needing to
check for an error from ``getc``.

The character that you push back doesn't have to be the same as the last
character that was actually read from the ``stream``. In fact, it isn't
necessary to actually read any characters from the ``stream`` before unreading
them with ``ungetc``! But that is a strange way to write a program; usually
``ungetc`` is used only to unread a character that was just read from the same
stream. The GNU C Library supports this even on files opened in binary mode,
but other systems might not.

The GNU C Library only supports one character of pushback-in other words, it
does not work to call ``ungetc`` twice without doing input in between.

Pushing back characters doesn't alter the file; only the internal buffering for the stream is affected. If a file positioning function (such as ``fseek`` or ``rewind``) is called, any pending pushed-back characters are discarded.

Unreading a character on a stream that is at end of file clears the end-of-file
indicator for the stream, because it makes the character of input
available. After you read that character, trying to read again will encounter
end of file.

A simple example is give below:

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     int c = putchar(getchar());
     ungetc(c, stdin);
     putchar(getchar());

     return 0;
   }

Operation on Files
==================
We have seen how to create files and do IO on that. For removal and renaming
there are two functions ``remove`` and ``rename`` which do what their name
suggests. Then there are two functions which generate a temporary file and a
temporary unique name. They are ``tmpfile`` and ``tmpnam`` respectively. These
funcitons signatures and details can be found at :ref:`remove`, :ref:`rename`,
:ref:`tmpfile` and :ref:`tmpnam` sections respectively. These are very simple
and trivial to use functions.

With this we come to an end of File IO. Functions for which examples are not
given will be covered in :ref:`stdio` chapter.
