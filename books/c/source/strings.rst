*******
Strings
*******
C has intgral types like ``char, int, long`` and ``long long``, floating-point
types like ``float`` and ``double``. However, to treat a sequence of characters
which is also called string no new data type is needed. An array of
characters or a pointer to character can be used to represent strings. A C
string is a sequence of characters stored in contiguous memory locations ended
by ``0`` or ``\0`` or ``NULL``. It is mandatory for strings to have this ending else
you will have surprises. A C string typically have one of the following
declarations:

.. code-block:: c

   const char str1[] = "Some string";
   char str2[16] = "Some string";
   const char* str3 = "Some string";
   char* str3=NULL; // Allocate and fill with characters later

The first three strings will be on stack while the last one will be on heap as
we will need to use ``malloc`` to allocate memory for it. Since a C string is
either an array or pointer you can use ``[]`` operator to get characters by index
from string.

You can read a string
from the ``stdin`` i.e. keyboard using deprecated and unsecure ``gets`` function or
secure ``fgets`` function as we have seen in console I/O chapter. We can use
``realloc`` function to read an infinite string as shown below.

.. code-block:: c

   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include <stddef.h>

   int main()
   {
     char *inf_str = (char*)calloc(16, sizeof(char));
     char c=0;
     size_t i = 0, j = 1;

     while((c=getchar()) != '\n') {
       if(i%16 == 0) {
         j++;
	 inf_str = (char*)realloc(inf_str, sizeof(char)*16*j);
       }
       inf_str[i++] = c;
     }

     inf_str[i++] = 0;
     puts(inf_str);
     free(inf_str);

     return 0;
   }

Note that we are allocating 16 bytes to avoid allocation large chunk of memory
which may be wasted. Also, if you keep it too small then there will be many
calls to ``realloc``. This value depends on how much data you are going to read
and accordingly adjusted. We allocate memory for multiple of 16 characters to
start with and we read characters from keyboard one by one till we encounter
``\n``. Once 16 characters have been read which is determined by ``i%16`` we
allocate 16 more characters. For this we use another counter ``j``. Finally we put
0 at the end of string to ``NULL`` terminate it, print it and free the allocated
memory.

This is a very good program but in one case it will have problem. Suppose you
want to read a large string and your memory is fragmented due to which one
contiguous sequnce of memory is not available then you cannot read the string
in to memory even though total free memory is more than memory required by
string. Some languages like Erlang split memory in chunks and create a linked
list to store strings. Also, this reallocation may require full scan of string
which will cause :math:``O(n)`` time cost. Therefore, there is no one shot
solution to read strings into memory.

To work with strings you must know functions provided by header ``string.h``
otherwise you will be duplicating the functionality.

Useful Functions
================

strlen and strlen Functions
---------------------------
One of the most common operations is to know length of the string because it is
needed as input in many functions. There are two versions of it. ``strlen`` is
slightly unsecure because it depends on the ``\0`` character of string which means
if string is not ``NULL`` terminated then ``strlen`` will contnue to read past the
length of string. ``strnlen`` takes an extra argument which is the maximum length
of string and beyond that it will not read. I am giving signatures and
descriptions below.

.. code-block:: c

   #include <string.h>

   size_t strlen(const char *s);
   size_t strnlen(const char *s, size_t maxlen);

The ``strlen()`` function calculates the length of the string ``s``, excluding the
terminating null byte (``\0``). The ``strlen()`` function returns the number of
bytes in the string ``s``.

The ``strnlen()`` function returns the number of bytes in the string pointed to
by ``s``, excluding the terminating null byte (``\0``), but at most ``maxlen``. In 
doing this, ``strnlen()`` looks only at the first ``maxlen`` bytes at ``s`` and never
beyond ``s+maxlen``.

The ``strnlen()`` function returns ``strlen(s)``, if that is less than ``maxlen``, or
``maxlen`` if there is no null byte (``\0``) among the first ``maxlen`` bytes pointed
to by ``s``.

Let us see examples as to how to use these:

.. code-block:: c

   #include <stdio.h>
   #include <string.h>

   int main()
   {
     const char* str1 = "Hello";
     const char str2[] = "Universe";

     printf("Length of str1 is %Zd\n", strlen(str1));
     printf("Length of str2 is %Zd\n", strnlen(str2, 8));

     return 0;
   }

Note the use of conversion specifier ``%Zd`` because return value of these
functions is ``size_t``. The output is:

.. code-block:: text

   Length of str1 is 5
   Length of str2 is 8

You can also implement ``strlen`` and ``strnlen`` yourself easily. Note that if
you are implementing these functions with the same name then do not include the
header which has the prototype of the function in this case ``string.h``
otherwise you will have error for duplication. For example
consider the following program:

.. code-block:: c

   #include <stdio.h>
   #include <stddef.h>

   size_t strlen(const char* s)
   {
     size_t i=0;

     while(*s++)
       ++i;

     return i;
   }

   size_t strnlen(const char* s, size_t maxlen)
   {
     size_t i=0;

     while(*s++ && (i < maxlen))
       ++i;

     return i;
   }

   int main()
   {
     const char* str="Hello there!";

     printf("%Zd\n", strlen(str));
     printf("%Zd\n", strnlen(str, 20));
     printf("%Zd\n", strnlen(str, 10));

     return 0;
   }

strcpy and strncpy Functions
----------------------------
Another important operation is copying one string to another. For this we have
``strcpy`` and its secure version ``strncpy``. You should avoid using ``strcpy``
because if destination is smaller than source then ``strcpy`` will write past the
end of destination length which is a security flaw. ``strncpy`` puts additional
overhead on programmer which is to provide an extra argument specifying how
many bytes to be copied at max. Let us see the synopsis and description of
these functions.

.. code-block:: c

   #include <string.h>

   char *strcpy(char *dest, const char *src);

   char *strncpy(char *dest, const char *src, size_t n);

The ``strcpy()`` function copies the string pointed to by ``src``, including the
terminating null byte (``\0``), to the buffer pointed to by ``dest``. The strings
may not overlap, and the destination string ``dest`` must be large enough to
receive the copy. Beware of buffer overruns!

The ``strncpy()`` function is similar, except that at most ``n`` bytes of src are
copied. Warning: If there is no null byte among the first ``n`` bytes of src, the
string placed in dest will not be null-terminated.

If the length of ``src`` is less than ``n``, ``strncpy()`` writes additional null
bytes to ``dest`` to ensure that a total of ``n`` bytes are written.

The ``strcpy()`` and ``strncpy()`` functions return a pointer to the destination
string ``dest``.

Some programmers consider ``strncpy()`` to be inefficient and error prone. If the
programmer knows (i.e., includes code to test!) that the size of ``dest`` is
greater than the length of ``src``, then ``strcpy()`` can be used.

One valid (and intended) use of ``strncpy()`` is to copy a C string to a
fixed-length buffer while ensuring both that the buffer is not overflowed and
that unused bytes in the target buffer are zeroed out (perhaps to prevent
information leaks if the buffer is to be written to media or transmitted to
another process via an interprocess communication technique).

If there is no terminating null byte in the first ``n`` bytes of src, ``strncpy()``
produces an unterminated string in ``dest``. You can force termination using
something like the following:

.. code-block:: c

   strncpy(buf, str, n);
   if (n > 0)
     buf[n - 1]= '\0';

If the destination string of a ``strcpy()`` is not large enough, then anything
might happen. Overflowing fixed-length string buffers is a favorite cracker
technique for taking complete control of the machine. Any time a program reads
or copies data into a buffer, the program first needs to check that there's
enough space. This may be unnecessary if you can show that overflow is
impossible, but be careful: programs can get changed over time, in ways that
may make the impossible possible.

The best idea is to have large enough buffer to hold source string and use
``strcpy``. Thus the responsibility of ensuring this is upon you, the
programmer. Let us see example programs for these two functions:

.. code-block:: c

   #include <stdio.h>
   #include <string.h>
   #include <stdlib.h>

   int main()
   {
     char *str1 = "Hello";
     char str2[] = "world";
     char str3[6] = {0};
     char *str4 = (char*)calloc(6, 1);

     strcpy(str3, str1);
     strncpy(str4, str2, 6);

     puts(str3);
     puts(str4);

     return 0;
   }

and the output is:

.. code-block:: text

   Hello
   world

Notice that you need to pass space including the `NULL` byte in `strncpy` call.

You can also implement your own version of `strcpy` and `strncpy`. For example,

.. code-block:: c

   #include <stdio.h>
   #include <stdlib.h>
   #include <stddef.h>

   char* strncpy(char* dst, const char* src, size_t n)
   {
     size_t i = 0;

     while((i++ < n) && (*dst++ = *src++));

     return dst;
   }

   char* strcpy(char* dst, const char* src)
   {
     while(*dst++ = *src++);

     return dst;
   }

   int main()
   {
     char *str1 = "Hello";
     char str2[] = "world";
     char str3[6] = {0};
     char *str4 = (char*)calloc(6, 1);

     strcpy(str3, str1);
     strncpy(str4, str2, 6);

     puts(str3);
     puts(str4);

     return 0;
   }

and the output is:

.. code-block:: text

   Hello
   world

strcat and strncat Functions
----------------------------
Some high level languages like C++, Java, Python use operator overloading
(which is typical to object oriented languages) and use + operator to
concatenate strings. However, C is not object oriented and hence we do not have
facility of operator overloading but C provides two functions ``strcat`` and
``strncat`` to achieve the same goal. Let us see their descriptions in man
pages.

.. code-block:: c

   #include <string.h>

   char *strcat(char *dest, const char *src);

   char *strncat(char *dest, const char *src, size_t n);

The ``strcat()`` function appends the ``src`` string to the ``dest`` string,
over-writing the terminating null byte (``\0``) at the end of ``dest``, and then
adds a terminating null byte. The strings may not overlap, and the ``dest``
string must have enough space for the result. If ``dest`` is not large enough,
program behavior is unpredictable; buffer overruns are a favorite avenue for
attacking secure programs.

The ``strncat()`` function is similar, except that

* it will use at most ``n`` bytes from ``src``; and
* ``src`` does not need to be null-terminated if it contains ``n`` or more
  bytes

As with ``strcat()``, the resulting string in ``dest`` is always
null-terminated.

If ``src`` contains ``n`` or more bytes, ``strncat()`` writes ``n+1`` bytes to
``dest`` (``n`` from ``src`` plus the terminating null byte). Therefore, the
size of ``dest`` must be at least ``strlen(dest)+n+1``.

Let us see an example as how we use these functions:

.. code-block:: c

   #include <stdio.h>
   #include <string.h>
   #include <stdlib.h>

   int main()
   {
     char *str1 = "Hello";
     char str2[] = "world";
     char str3[12] = {0};
     char *str4 = (char*)calloc(12, 1);

     strcat(str3, str1);
     strcat(str3, " ");
     strcat(str3, str2);

     puts(str3);

     strncat(str4, str1, strlen(str1));
     strncat(str4, " ", 1);
     strncat(str4, str2, strlen(str2));

     puts(str4);

     return 0;
   }

We can implement these functions similar to previously implemented
functions. For example

.. code-block:: c

   #include <stdio.h>
   #include <string.h>
   #include <stdlib.h>

   char* my_strncat(char* dst, const char*src, size_t n)
   {
     size_t i=0;
     size_t dst_length;

     dst_length = strlen(dst);

     while((i<n) && *src) {
        dst[dst_length + i] = *src;
        src++;
        i++;
     }
     dst[dst_length+i] = 0;

     return dst;
   }

   char* my_strcat(char* dst, const char*src)
   {
     size_t i=0;
     size_t dst_length;

     dst_length = strlen(dst);

     while(*src) {
       dst[dst_length + i] = *src;
       src++;
       i++;
     }
     dst[dst_length+i] = 0;

     return dst;
   }

   int main()
   {
     char *str1 = "Hello";
     char str2[] = "world";
     char str3[12] = {0};
     char *str4 = (char*)calloc(12, 1);

     my_strcat(str3, str1);
     puts(str3);
     my_strcat(str3, " ");
     puts(str3);
     my_strcat(str3, str2);
     puts(str3);

     my_strncat(str4, str1, strlen(str1));
     puts(str4);
     my_strncat(str4, " ", 1);
     puts(str4);
     my_strncat(str4, str2, strlen(str2));
     puts(str4);

     return 0;
   }

strcmp and strncmp Functions
----------------------------
There are very frequent requirements for comparison of two values when
programming. Integers and characters can be compared easily. Floats can be
compared with a very high degree of accuracy. However, comparing strings is to
be done character by character and like ``strcat`` and ``strncat`` object
oriented programming languages use same operators for strings which are used
for compare integers or characters like ``==`` for equality, ``<`` for less
than and so on. Once again C provides functions not simpler operator comparison
to compare two strings. Let us see what man pages say about them:

.. code-block:: c

   #include <string.h>

   int strcmp(const char *s1, const char *s2);

   int strncmp(const char *s1, const char *s2, size_t n);

The ``strcmp()`` function compares the two strings ``s1`` and ``s2``. It
returns an integer less than, equal to, or greater than zero if ``s1`` is
found, respectively, to be less than, to match, or be greater than ``s2``.

The ``strncmp()`` function is similar, except it compares the only first (at
most) ``n`` bytes of ``s1`` and ``s2``.

Let us see an example program for these two functions:

.. code-block:: c

   #include <stdio.h>
   #include <string.h>

   int main()
   {
     char *str1 = "Hello";
     char *str2 = "world";
     char *str3 = "Helloo";

     printf("%d\n", strcmp(str1, str1));
     printf("%d\n", strcmp(str1, str2));
     printf("%d\n", strcmp(str1, str3));

     printf("%d\n", strncmp(str1, str1, 5));
     printf("%d\n", strncmp(str2, str1, 5));
     printf("%d\n", strncmp(str1, str3, 5));

     return 0;
   }

and the output is:

.. code-block:: text

   0
   -47
   -111
   0
   47
   0

Let us try to implement these functions ourselves:

.. code-block:: c

   #include <stdio.h>

   int strncmp(const char* s1, const char* s2, size_t n)
   {
     size_t i = 0;

     while((i < n) && *s1 && (*s1==*s2)) {
       s1++,s2++;
       i++;
     }

     return *(const unsigned char*)s1-*(const unsigned char*)s2;
   }

   int strcmp(const char* s1, const char* s2)
   {
     while(*s1 && (*s1==*s2))
       s1++,s2++;

     return *(const unsigned char*)s1-*(const unsigned char*)s2;
   }

   int main()
   {
     char *str1 = "Hello";
     char *str2 = "world";
     char *str3 = "Helloo";

     printf("%d\n", strcmp(str1, str1));
     printf("%d\n", strcmp(str1, str2));
     printf("%d\n", strcmp(str1, str3));

     printf("%d\n", strncmp(str1, str1, 5));
     printf("%d\n", strncmp(str2, str1, 5));
     printf("%d\n", strncmp(str1, str3, 5));

     return 0;
   }

and the output is:

.. code-block:: text

   0
   -47
   -111
   0
   47
   0

strstr, strchr and strrchr Functions
------------------------------------
Many times we want to find whether a particular character is in string or
not. It is easy to do it in C yourself but we have two functions which help
with that. Those are ``strchr`` and ``strchr``. Many other times we want to
find whether a given string is a substring of another given string. This is
simple to do but most of the time those simple solutions will be inefficient. C
provides a function ``strstr`` for this and compilers usually provide an
implementation of a very good algorithm. I will not go into the algorithm
provided by ``gcc`` now but just describe the function and its example. Let us
see what man pages say about these functions:

.. code-block:: c

   #include <string.h>

   char *strstr(const char *haystack, const char *needle);

   char *strchr(const char *s, int c);

   char *strrchr(const char *s, int c);

The ``strstr()`` function finds the first occurrence of the substring
``needle`` in the string ``haystack``. The terminating null bytes (``\0``) are
not compared. It returns a pointer to the beginning of the substring, or
``NULL`` if the substring is not found.

The ``strchr()`` function returns a pointer to the first occurrence of the
character ``c`` in the string ``s``.

The ``strrchr()`` function returns a pointer to the last occurrence of the
character ``c`` in the string ``s``.

The ``strchr()`` and ``strrchr()`` functions return a pointer to the matched
character or ``NULL`` if the character is not found. The terminating null byte
is considered part of the string, so that if ``c`` is specified as ``\0``, these
functions return a pointer to the terminator.

Let us see an example:

.. code-block:: c

   #include <stdio.h>
   #include <string.h>

   int main()
   {
     const char *str1 = "Hello";
     const char *str3 = "Helloo";

     printf("%s\n", strchr(str1, 'e'));
     printf("%p\n", strchr(str1, 'x'));
     printf("%s\n", strchr(str1, 'l'));
     printf("%s\n", strrchr(str1, 'l'));
     printf("%s\n", strstr(str3, str1));
     printf("%p\n", strstr(str3, "xyz"));

     return 0;
   }

and the output is:

.. code-block:: c

   ello
   (nil)
   llo
   lo
   Helloo
   (nil)

Let us try to implement these three routines ourselves. Now ``strstr`` is a
complex one. There are lots of very good algorithms. You can find a good list
of implementations `here
<http://igm.univ-mlv.fr/~lecroq/string/node1.html>`_. The algorithm which I
will present will be a brute force one and should not be used for any good
code. I am giving it just to present an example. Giving code for algorithms
mentioned in the link is out of scope and will be covered in data structures
and algorithms book.

.. code-block:: c

   #include <stdio.h>

   char* strstr(const char *haystack, const char *needle)
   {
     if (haystack == NULL || needle == NULL) {
       return NULL;
     }

     for ( ; *haystack; haystack++) {
       const char *h, *n;
       for (h = haystack, n = needle; *h && *n && (*h == *n); ++h, ++n) {
       }
       if (*n == '\0') {
         return (char*)haystack;
       }
     }
     return NULL;
   }

   char* strchr(const char* str, int c)
   {
     char *i = NULL;

     while(*str) {
       if(*str == c) {
         i = (char*)str;
	 return i;
       }
       str++;
     }
     return NULL;
   }

   char* strrchr(const char* str, int c)
   {
     char *i = NULL;
     while(*str) {
       if(*str == c)
         i = (char*)str;
       str++;
     }

     return i;
   }

   int main()
   {
     const char *str1 = "Hello";
     const char *str3 = "Helloo";

     printf("%s\n", strchr(str1, 'e'));
     printf("%p\n", strchr(str1, 'x'));
     printf("%s\n", strchr(str1, 'l'));
     printf("%s\n", strrchr(str1, 'l'));
     printf("%s\n", strstr(str3, str1));
     printf("%p\n", strstr(str3, "xyz"));

     return 0;
   }

strerror Function
-----------------
strerror funciton maps an integer to error message. Typically the value of this
integer comes from ``errno`` but it will accept any integer argument. A small
sample program shows the messages printed.

.. code-block:: c

   #include <stdio.h>
   #include <string.h>

   int main()
   {
     for(int i=0; i<135; ++i)
       printf("%d %s\n", i, strerror(i));

     return 0;
   }

and the output is:

.. code-block:: text

   000 Success
   001 Operation not permitted
   002 No such file or directory
   003 No such process
   004 Interrupted system call
   005 Input/output error
   006 No such device or address
   007 Argument list too long
   008 Exec format error
   009 Bad file descriptor
   010 No child processes
   011 Resource temporarily unavailable
   012 Cannot allocate memory
   013 Permission denied
   014 Bad address
   015 Block device required
   016 Device or resource busy
   017 File exists
   018 Invalid cross-device link
   019 No such device
   020 Not a directory
   021 Is a directory
   022 Invalid argument
   023 Too many open files in system
   024 Too many open files
   025 Inappropriate ioctl for device
   026 Text file busy
   027 File too large
   028 No space left on device
   029 Illegal seek
   030 Read-only file system
   031 Too many links
   032 Broken pipe
   033 Numerical argument out of domain
   034 Numerical result out of range
   035 Resource deadlock avoided
   036 File name too long
   037 No locks available
   038 Function not implemented
   039 Directory not empty
   040 Too many levels of symbolic links
   041 Unknown error 41
   042 No message of desired type
   043 Identifier removed
   044 Channel number out of range
   045 Level 2 not synchronized
   046 Level 3 halted
   047 Level 3 reset
   048 Link number out of range
   049 Protocol driver not attached
   050 No CSI structure available
   051 Level 2 halted
   052 Invalid exchange
   053 Invalid request descriptor
   054 Exchange full
   055 No anode
   056 Invalid request code
   057 Invalid slot
   058 Unknown error 58
   059 Bad font file format
   060 Device not a stream
   061 No data available
   062 Timer expired
   063 Out of streams resources
   064 Machine is not on the network
   065 Package not installed
   066 Object is remote
   067 Link has been severed
   068 Advertise error
   069 Srmount error
   070 Communication error on send
   071 Protocol error
   072 Multihop attempted
   073 RFS specific error
   074 Bad message
   075 Value too large for defined data type
   076 Name not unique on network
   077 File descriptor in bad state
   078 Remote address changed
   079 Can not access a needed shared library
   080 Accessing a corrupted shared library
   081 .lib section in a.out corrupted
   082 Attempting to link in too many shared libraries
   083 Cannot exec a shared library directly
   084 Invalid or incomplete multibyte or wide character
   085 Interrupted system call should be restarted
   086 Streams pipe error
   087 Too many users
   088 Socket operation on non-socket
   089 Destination address required
   090 Message too long
   091 Protocol wrong type for socket
   092 Protocol not available
   093 Protocol not supported
   094 Socket type not supported
   095 Operation not supported
   096 Protocol family not supported
   097 Address family not supported by protocol
   098 Address already in use
   099 Cannot assign requested address
   100 Network is down
   101 Network is unreachable
   102 Network dropped connection on reset
   103 Software caused connection abort
   104 Connection reset by peer
   105 No buffer space available
   106 Transport endpoint is already connected
   107 Transport endpoint is not connected
   108 Cannot send after transport endpoint shutdown
   109 Too many references: cannot splice
   110 Connection timed out
   111 Connection refused
   112 Host is down
   113 No route to host
   114 Operation already in progress
   115 Operation now in progress
   116 Stale file handle
   117 Structure needs cleaning
   118 Not a XENIX named type file
   119 No XENIX semaphores available
   120 Is a named type file
   121 Remote I/O error
   122 Disk quota exceeded
   123 No medium found
   124 Wrong medium type
   125 Operation canceled
   126 Required key not available
   127 Key has expired
   128 Key has been revoked
   129 Key was rejected by service
   130 Owner died
   131 State not recoverable
   132 Operation not possible due to RF-kill
   133 Memory page has hardware error
   134 Unknown error 134

strtok Function
---------------
There are times when we need to split a string for a set of delimiters. C
provides a function called ``strtok``. Note that ``strtok`` is not multi-thread
safe so if you need to use ``strtok`` in a multi-threaded program then consider
using its reentrant version ``strtok_r``.

.. code-block:: c

   #include <string.h>

   char *strtok(char *str, const char *delim);

   char *strtok_r(char *str, const char *delim, char **saveptr);

The ``strtok()`` function breaks a string into a sequence of zero or more
nonempty tokens.  On the first call to ``strtok()`` the string to be parsed should be specified in ``str``. In each subsequent call that should parse the same  string, ``str`` must be ``NULL``.

The ``delim`` argument specifies  a set of bytes that delimit the tokens in the
parsed string. The caller may specify different strings in ``delim`` in
successive calls that parse the same string.

Each call to ``strtok()`` returns a pointer to a null-terminated string containing the next token. This string does not include the delimiting byte. If no more tokens are found, ``strtok()`` returns ``NULL``.

A  sequence of calls to ``strtok()`` that operate on the same string maintains
a pointer that determines the point from which to start searching for the next
token.  The first call to ``strtok()`` sets this pointer to point to the first
byte of the string. The start of the next token is determined by scanning forward for the next nondelimiter byte in ``str``. If such a byte is found, it is taken as the start of the next token. If no such byte is found, then  there  are  no
more tokens, and ``strtok()`` returns ``NULL``.  (A string that is empty or
that contains only delimiters will thus cause ``strtok()`` to return ``NULL``
on the first call.)

The end of each token is found by scanning forward until either the next
delimiter byte is found or until the terminating  null  byte (``\0``) is
encountered.  If a delimiter byte is found, it is overwritten with a null byte
to terminate the current token, and ``strtok()`` saves a pointer to the
following byte; that pointer will be used as the starting point when searching
for the next token.  In this case, ``strtok()`` returns a pointer to the start
of the found token.

From the above description, it follows that a sequence of two or more
contiguous delimiter bytes in the parsed string is considered to be a single
delimiter, and that delimiter bytes at the start or end of the string are
ignored. Put another way: the tokens returned by ``strtok()``  are always
nonempty strings.  Thus, for example, given the string "aaa;;bbb,", successive
calls to ``strtok()`` that specify the delimiter string ";," would return the
strings "aaa" and "bbb", and then a NULL pointer.

The ``strtok_r()`` function is a reentrant version ``strtok()``. The
``saveptr`` argument is a pointer to a ``char *`` variable that is used
internally by ``strtok_r()`` in order to maintain context between successive
calls that parse the same string.

On the first call to ``strtok_r()``, ``str`` should point to the string to be
parsed, and the value of ``saveptr`` is ignored. In subsequent calls,`` str``
should be ``NULL``, and ``saveptr`` should be unchanged since the previous
call.

Different  strings  may  be parsed concurrently using sequences of calls to
``strtok_r()`` that specify different ``saveptr`` arguments.

Let us see the example given in man page:

.. code-block:: c

   #include <stdio.h>
   #include <stdlib.h>

   char * strtok(char * str, char *comp)
   {
     static int pos;
     static char *s;	
     int i =0, start = pos;
 
     if(str!=NULL)
       s = str;
	
     i = 0;
     int j = 0;

     while(s[pos] != '\0')
     {
       j = 0;	
       while(comp[j] != '\0')
       {		
	 if(s[pos] == comp[j])
	 {
	   s[pos] = '\0';
	   pos = pos+1;				
	   if(s[start] != '\0')
	     return (&s[start]);
	   else
	   {
	     start = pos;
	     pos--;
	     break;
	   }
	 }
	 j++;
       }
       pos++;		
     }
     s[pos] = '\0';
     if(s[start] == '\0')
       return NULL;
     else
       return &s[start];
   }

   int main(int argc, char *argv[])
   {
     char *str1, *str2, *token, *subtoken;
     int j;

     for (j = 1, str1 = argv[1]; ; j++, str1 = NULL) {
       token = strtok(str1, argv[2]);
       if (token == NULL)
         break;
       printf("%d: %s\n", j, token);
     }
       
     exit(EXIT_SUCCESS);
   }



and the output is:

.. code-block:: text

   $ ./a.out 'a/bbb///cc;xxx:yyy:' ':;'
   1: a/bbb///cc
   2: xxx
   3: yyy

Let us try ti implement strtok ourselves:

.. code-block:: c

   #include <stdio.h>
   #include <stdlib.h>

   char * strtok(char * str, char *delim)
   {
     static int pos;
     static char *s;	
     int i =0, start = pos;
 
     if(str!=NULL)
       s = str;
	
     i = 0;
     int j = 0;

     while(s[pos] != '\0')
     {
       j = 0;	
       while(delim[j] != '\0')
       {		
         if(s[pos] == delim[j])
	 {
	   s[pos] = '\0';
	   pos = pos+1;				
	   if(s[start] != '\0')
	     return (&s[start]);
	   else
	   {
	     start = pos;
	     pos--;
	     break;
	   }
	 }
	 j++;
       }
       pos++;		
     }
     s[pos] = '\0';
     if(s[start] == '\0')
       return NULL;
     else
       return &s[start];
   }

   int main(int argc, char *argv[])
   {
     char *str1, *str2, *token, *subtoken;
     int j;

     for (j = 1, str1 = argv[1]; ; j++, str1 = NULL) {
       token = strtok(str1, argv[2]);
       if (token == NULL)
         break;
       printf("%d: %s\n", j, token);
     }
       
     exit(EXIT_SUCCESS);
   }

With this we come to an end of our discussion on strings.
