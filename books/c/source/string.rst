.. index:: string.h

String handling ``<string.h>``
******************************
String function conventions
===========================
The header ``<string.h>`` declares one type and several functions, and defines one
macro useful for manipulating arrays of character type and other objects treated as arrays
of character type. The type is ``size_t`` and the macro is ``NULL`` (both described in
:ref:`stddef`). Various methods are used for determining the lengths of the arrays, but in all cases
a ``char *`` or ``void *`` argument points to the initial (lowest addressed) character of the
array. If an array is accessed beyond the end of an object, the behavior is undefined.

Where an argument declared as ``size_t`` n specifies the length of the array for a
function, ``n`` can have the value zero on a call to that function. Unless explicitly stated
otherwise in the description of a particular function in this subclause, pointer arguments
on such a call shall still have valid values, as described in :ref:`13.1.4`. On such a call, a
function that locates a character finds no occurrence, a function that compares two
character sequences returns zero, and a function that copies characters copies zero
characters.

For all functions in this subclause, each character shall be interpreted as if it had the type
``unsigned char`` (and therefore every possible object representation is valid and has a
different value).

.. index:: copying functions

.. _33.2:

Copying functions
=================
.. index:: memcpy function

The ``memcpy`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   void *memcpy(void * restrict s1, const void * restrict s2, size_t n);

**Description**

The ``memcpy`` function copies n characters from the object pointed to by ``s2`` into the
object pointed to by ``s1``. If copying takes place between objects that overlap, the behavior
is undefined.

**Returns**

The ``memcpy`` function returns the value of ``s1``.

.. index:: memmove function

The ``memmove`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   void *memmove(void *s1, const void *s2, size_t n);

**Description**

The ``memmove`` function copies n characters from the object pointed to by ``s2`` into the
object pointed to by ``s1``. Copying takes place as if the ``n`` characters from the object
pointed to by ``s2`` are first copied into a temporary array of ``n`` characters that does not
overlap the objects pointed to by ``s1`` and ``s2``, and then the ``n`` characters from the
temporary array are copied into the object pointed to by ``s1``.

**Returns**

The ``memmove`` function returns the value of ``s1``.

.. index:: strcpy function

The ``strcpy`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strcpy(char * restrict s1, const char * restrict s2);

**Description**

The ``strcpy`` function copies the string pointed to by ``s2`` (including the terminating null
character) into the array pointed to by ``s1``. If copying takes place between objects that
overlap, the behavior is undefined.

**Returns**

The ``strcpy`` function returns the value of ``s1``.

.. index:: strncpy function

The ``strncpy`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strncpy(char * restrict s1, const char * restrict s2, size_t n);

**Description**

The ``strncpy`` function copies not more than ``n`` characters (characters that follow a null
character are not copied) from the array pointed to by ``s2`` to the array pointed to by
``s1``. [#]_ If copying takes place between objects that overlap, the behavior is undefined.

If the array pointed to by ``s2`` is a string that is shorter than ``n`` characters, null characters
are appended to the copy in the array pointed to by ``s1``, until ``n`` characters in all have been
written.

**Returns**

The ``strncpy`` function returns the value of ``s1``.

.. [#] Thus, if there is no null character in the first ``n`` characters of the array pointed to by ``s2``, the result will
       not be null-terminated.

.. index:: concatenation functions

Concatenation functions
=======================
The ``strcat`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strcat(char * restrict s1, const char * restrict s2);

**Description**

The ``strcat`` function appends a copy of the string pointed to by ``s2`` (including the
terminating null character) to the end of the string pointed to by ``s1``. The initial character
of ``s2`` overwrites the null character at the end of ``s1``. If copying takes place between
objects that overlap, the behavior is undefined.

**Returns**

The ``strcat`` function returns the value of ``s1``.

.. index:: strncat function

The ``strncat`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strncat(char * restrict s1, const char * restrict s2, size_t n);

**Description**

The ``strncat`` function appends not more than ``n`` characters (a null character and
characters that follow it are not appended) from the array pointed to by ``s2`` to the end of
the string pointed to by ``s1``. The initial character of ``s2`` overwrites the null character at the
end of ``s1``. A terminating null character is always appended to the result. [#]_ If copying
takes place between objects that overlap, the behavior is undefined.

**Returns**

The ``strncat`` function returns the value of ``s1``.

**Forward references:** the ``strlen`` function (:ref:`33.6.3`).

.. [#] Thus, the maximum number of characters that can end up in the array pointed to by ``s1`` is
       ``strlen(s1)+n+1``.

.. index:: comparison functions

Comparison functions
====================
The sign of a nonzero value returned by the comparison functions ``memcmp, strcmp``
and ``strncmp`` is determined by the sign of the difference between the values of the first
pair of characters (both interpreted as ``unsigned char``) that differ in the objects being
compared.

.. index:: memcmp function

The ``memcmp`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   int memcmp(const void *s1, const void *s2, size_t n);

**Description**

The ``memcmp`` function compares the first ``n`` characters of the object pointed to by ``s1`` to
the first ``n`` characters of the object pointed to by ``s2``. [#]_

**Returns**

The ``memcmp`` function returns an integer greater than, equal to, or less than zero,
accordingly as the object pointed to by ``s1`` is greater than, equal to, or less than the object
pointed to by ``s2``.

.. [#] The contents of "holes" used as padding for purposes of alignment within structure objects are
       indeterminate. Strings shorter than their allocated space and unions may also cause problems in
       comparison.

.. index:: strcmp function

The ``strcmp`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   int strcmp(const char *s1, const char *s2);

**Description**

The ``strcmp`` function compares the string pointed to by ``s1`` to the string pointed to by
``s2``.

&&Returns**

The ``strcmp`` function returns an integer greater than, equal to, or less than zero,
accordingly as the string pointed to by ``s1`` is greater than, equal to, or less than the string
pointed to by ``s2``.

.. index:: strcoll function

.. _33.4.3:

The ``strcoll`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   int strcoll(const char *s1, const char *s2);

**Description**

The ``strcoll`` function compares the string pointed to by s1 to the string pointed to by
``s2``, both interpreted as appropriate to the ``LC_COLLATE`` category of the current locale.

**Returns**

The ``strcoll`` function returns an integer greater than, equal to, or less than zero,
accordingly as the string pointed to by ``s1`` is greater than, equal to, or less than the string
pointed to by ``s2`` when both are interpreted as appropriate to the current locale.

.. index:: strcmp function

The ``strncmp`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   int strncmp(const char *s1, const char *s2, size_t n);

**Description**

The ``strncmp`` function compares not more than n characters (characters that follow a
null character are not compared) from the array pointed to by ``s1`` to the array pointed to
by ``s2``.

**Returns**

The ``strncmp`` function returns an integer greater than, equal to, or less than zero,
accordingly as the possibly null-terminated array pointed to by ``s1`` is greater than, equal
to, or less than the possibly null-terminated array pointed to by ``s2``.

.. index:: strxfrm function

.. _33.4.5:

The ``strxfrm`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   size_t strxfrm(char * restrict s1, const char * restrict s2, size_t n);

**Description**

The ``strxfrm`` function transforms the string pointed to by ``s2`` and places the resulting
string into the array pointed to by ``s1``. The transformation is such that if the ``strcmp``
function is applied to two transformed strings, it returns a value greater than, equal to, or
less than zero, corresponding to the result of the ``strcoll`` function applied to the same
two original strings. No more than ``n`` characters are placed into the resulting array
pointed to by ``s1``, including the terminating null character. If ``n`` is zero, ``s1`` is permitted to
be a null pointer. If copying takes place between objects that overlap, the behavior is
undefined.

**Returns**

The ``strxfrm`` function returns the length of the transformed string (not including the
terminating null character). If the value returned is ``n`` or more, the contents of the array
pointed to by ``s1`` are indeterminate.

EXAMPLE The value of the following expression is the size of the array needed to hold the
transformation of the string pointed to by ``s``.

.. code-block:: c

   1 + strxfrm(NULL, s, 0)

.. index:: search functions

Search functions
================
.. index:: memchr function

The ``memchr`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   void *memchr(const void *s, int c, size_t n);

**Description**

The ``memchr`` function locates the first occurrence of ``c`` (converted to an unsigned
char) in the initial ``n`` characters (each interpreted as ``unsigned char``) of the object
pointed to by ``s``.

**Returns**

The ``memchr`` function returns a pointer to the located character, or a null pointer if the
character does not occur in the object.

.. index:: strchr function

The ``strchr`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strchr(const char *s, int c);

**Description**

The ``strchr`` function locates the first occurrence of ``c`` (converted to a char) in the
string pointed to by ``s``. The terminating null character is considered to be part of the
string.

**Returns**

The ``strchr`` function returns a pointer to the located character, or a null pointer if the
character does not occur in the string.

.. index:: strcspn function

The ``strcspn`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   size_t strcspn(const char *s1, const char *s2);

**Description**

The ``strcspn`` function computes the length of the maximum initial segment of the string
pointed to by ``s1`` which consists entirely of characters not from the string pointed to by
``s2``.

**Returns**

The ``strcspn`` function returns the length of the segment.

.. index:: strpbrk function

The ``strpbrk`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strpbrk(const char *s1, const char *s2);

**Description**

The ``strpbrk`` function locates the first occurrence in the string pointed to by ``s1`` of any
character from the string pointed to by ``s2``.

**Returns**

The ``strpbrk`` function returns a pointer to the character, or a null pointer if no character
from ``s2`` occurs in ``s1``.

.. index:: strchr function

The ``strrchr`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strrchr(const char *s, int c);

**Description**

The ``strrchr`` function locates the last occurrence of ``c`` (converted to a char) in the
string pointed to by ``s``. The terminating null character is considered to be part of the
string.

**Returns**

The ``strrchr`` function returns a pointer to the character, or a null pointer if ``c`` does not
occur in the string.

.. index:: strspn function

The ``strspn`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   size_t strspn(const char *s1, const char *s2);

**Description**

The ``strspn`` function computes the length of the maximum initial segment of the string
pointed to by ``s1`` which consists entirely of characters from the string pointed to by ``s2``.

**Returns**

The ``strspn`` function returns the length of the segment.

.. index:: strstr function

The ``strstr`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strstr(const char *s1, const char *s2);

**Description**

The ``strstr`` function locates the first occurrence in the string pointed to by ``s1`` of the
sequence of characters (excluding the terminating null character) in the string pointed to
by ``s2``.

**Returns**

The ``strstr`` function returns a pointer to the located string, or a null pointer if the string
is not found. If ``s2`` points to a string with zero length, the function returns ``s1``.

.. index:: strtok function

The ``strtok`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strtok(char * restrict s1, const char * restrict s2);

**Description**

A sequence of calls to the ``strtok`` function breaks the string pointed to by ``s``1 into a
sequence of tokens, each of which is delimited by a character from the string pointed to
by ``s2``. The first call in the sequence has a non-null first argument; subsequent calls in the
sequence have a null first argument. The separator string pointed to by ``s2`` may be
different from call to call.

The first call in the sequence searches the string pointed to by s1`` for the first character
that is not contained in the current separator string pointed to by ``s2``. If no such character
is found, then there are no tokens in the string pointed to by ``s1`` and the ``strtok`` function
returns a null pointer. If such a character is found, it is the start of the first token.

The ``strtok`` function then searches from there for a character that is contained in the
current separator string. If no such character is found, the current token extends to the
end of the string pointed to by ``s1``, and subsequent searches for a token will return a null
pointer. If such a character is found, it is overwritten by a null character, which
terminates the current token. The strtok function saves a pointer to the following
character, from which the next search for a token will start.

Each subsequent call, with a null pointer as the value of the first argument, starts
searching from the saved pointer and behaves as described above.

The implementation shall behave as if no library function calls the strtok function.

**Returns**

The ``strtok`` function returns a pointer to the first character of a token, or a null pointer
if there is no token.

EXAMPLE

.. code-block:: c

   #include <string.h>
   static char str[] = "?a???b,,,#c";
   char *t;

   t = strtok(str, "?");   // t points to the token "a"
   t = strtok(NULL, ",");  // t points to the token "??b"
   t = strtok(NULL, "#,"); // t points to the token "c"
   t = strtok(NULL, "?");  // t is a null pointer

Miscellaneous functions
=======================
.. index:: memset function

The ``memset`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   void *memset(void *s, int c, size_t n);

**Description**

The ``memset`` function copies the value of ``c`` (converted to an ``unsigned char``) into
each of the first ``n`` characters of the object pointed to by ``s``.

**Returns**

The ``memset`` function returns the value of ``s``.

.. index:: strerror function

.. _33.6.2:

The ``strerror`` function
-------------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   char *strerror(int errnum);

**Description**

The ``strerror`` function maps the number in ``errnum`` to a message string. Typically,
the values for errnum come from ``errno``, but ``strerror`` shall map any value of type
int to a message.

The implementation shall behave as if no library function calls the ``strerror`` function.

**Returns**

The ``strerror`` function returns a pointer to the string, the contents of which are locale-specific.
The array pointed to shall not be modified by the program, but may be
overwritten by a subsequent call to the strerror function.

.. index:: strlen function

.. _33.6.3:

The ``strlen`` function
-----------------------
**Synopsis**

.. code-block:: c

   #include <string.h>
   size_t strlen(const char *s);

**Description**

The ``strlen`` function computes the length of the string pointed to by ``s``.

**Returns**

The ``strlen`` function returns the number of characters that precede the terminating null
character.
