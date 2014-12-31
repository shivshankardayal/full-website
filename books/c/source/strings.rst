*******
Strings
*******
C has intgral types like ``char, int, long`` and ``long long``, floating-point
types like ``float`` and ``double``. However, to treat a sequence of characters
which are also called strings no new data type is needed. An array of
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
terminating null byte ('\0'). The ``strlen()`` function returns the number of
bytes in the string ``s``.

The ``strnlen()`` function returns the number of bytes in the string pointed to
by ``s``, excluding the terminating null byte ('\0'), but at most ``maxlen``. In
doing this, ``strnlen()`` looks only at the first ``maxlen`` bytes at ``s`` and never
beyond ``s+maxlen``.

The ``strnlen()`` function returns ``strlen(s)``, if that is less than ``maxlen``, or
``maxlen`` if there is no null byte ('\0') among the first ``maxlen`` bytes pointed
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
terminating null byte ('\0'), to the buffer pointed to by ``dest``. The strings
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
over-writing the terminating null byte ('\0') at the end of ``dest``, and then
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
