.. index:: ctype.h

.. _ctype:

Character Handling ``<ctype.h>``
********************************
The header ``<ctype.h>`` declares several functions useful for classifying and
mapping characters. In all cases the argument is an ``int``, the value of which
shall be representable as an ``unsigned char`` or shall equal the value of the
macro ``EOF``. If the argument has any other value, the behavior is undefined.

The behavior of these functions is affected by the current locale. Those
functions that have locale-specific aspects only when not in the "C" locale are
noted below.

The term printing character refers to a member of a locale-specific set of
characters, each of which occupies one printing position on a display device;
the term control character refers to a member of a locale-specific set of
characters that are not printing characters. [#]_ All letters and digits are
printing characters.

**Forward references:** EOF (14.19.1), localization (14.11).

.. [#] In an implementation that uses the seven-bit US ASCII character set, the
  printing characters are those whose values lie from ``0x20`` (space) through
  ``0x7E`` (``tilde``); the control characters are those whose values lie from
  ``0`` (``NUL``) through ``0x1F`` (``US``), and the character ``0x7F``
  (``DEL``).

.. index:: character classification functions

.. _16.1:

Character classification functions
==================================
The functions in this subclause return nonzero (true) if and only if the value
of the argument c conforms to that in the description of the function.

.. index:: isalnum function

The ``isalnum`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isalnum(int c);

**Description**

The ``isalnum`` function tests for any character for which ``isalpha`` or
``isdigit`` is true.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isalnum(int c);

**Description**

Checks for an alphanumeric character; it is equivalent to ``(isalpha(c) ||
isdigit(c))``.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c='c', c1=9, c2='$', c3='9';
    
    printf("%d %d %d %d\n", isalnum(c), isalnum(c1), isalnum(c2), isalnum(c3));

    return 0;
  }

and the output is::

  8 0 0 8

The output does not need any explation as it is blind-obvious.

.. index:: isalpha function

The ``isalpha`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isalpha(int c);

**Description**

The ``isalpha`` function tests for any character for which ``isupper`` or
``islower`` is true, or any character that is one of a locale-specific set of
alphabetic characters for which none of ``iscntrl, isdigit, ispunct`` or
``isspace`` is true. In the "C" locale, ``isalpha`` returns true only for the
characters for which ``isupper`` or ``islower`` is true.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isalpha(int c);

**Description**

Checks  for an alphabetic character; in the standard "C" locale, it  is
equivalent to ``(isupper(c) || islower(c))``. In some locales, there may be
additional characters for which ``isalpha()`` is true—letters which are
neither upper case nor lower case.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c='c', c1=9, c2='$', c3='9';
    
    printf("%d %d %d %d\n", isalpha(c), isalpha(c1), isalpha(c2), isalpha(c3));

    return 0;
  }

and the output is::

  1024 0 0 0

.. index:: isblank function
  
The ``isblank`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isblank(int c);

**Description**

The ``isblank`` function tests for any character that is a standard blank
character or is one of a locale-specific set of characters for which
``isspace`` is true and that is used to separate words within a line of text.
The standard blank characters are the following: space (' '), and horizontal
tab ('\\t'). In the "C" locale, ``isblank`` returns true only for the standard
blank characters.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isblank(int c);

**Description**

Checks for a blank character; that is, a space or a tab.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c=' ', c1='\n', c2='	', c3='9';
    
    printf("%d %d %d %d\n", isblank(c), isblank(c1), isblank(c2), isblank(c3));

    return 0;
  }

and the output is::

  1 0 1 0
  
The ``iscntrl`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int iscntrl(int c);

**Description**

The ``iscntrl`` function tests for any control character.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int iscntrl(int c);

**Description**

Checks for a control character.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c=0;  //NUL 
    char c1=1; //SOH or ctrl-A
    char c2=3; //STX or ctrl-B
    char c3=4; //ETX or ctrl-C
    
    printf("%d %d %d %d\n", iscntrl(c), iscntrl(c1), iscntrl(c2), iscntrl(c3));

    return 0;
  }

and the output is::

  2 2 2 2

.. index:: isdigit function

The ``isdigit`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isdigit(int c);

**Description**

The ``isdigit`` function tests for any decimal-digit character.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isdigit(int c);

**Description**

Checks for a digit (0 through 9).

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c1='a', c2='1';
    
    printf("%d %d\n", isdigit(c1), isdigit(c2));

    return 0;
  }

and the output is::

  0 2048

.. index:: isgraph function
  
The ``isgraph`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isgraph(int c);

**Description**

The ``isgraph`` function tests for any printing character except space (' ').

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isgraph(int c);

**Description**

Checks for any printable character except space.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c1='a', c2=' ';
    
    printf("%d %d\n", isgraph(c1), isgraph(c2));

    return 0;
  }

and the output is::

  32768 0

.. index:: islower function
  
The ``islower`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int islower(int c);

**Description**

The ``islower`` function tests for any character that is a lowercase letter or
is one of a locale-specific set of characters for which none of ``iscntrl,
isdigit, ispunct`` or ``isspace`` is true. In the "C" locale, ``islower``
returns true only for the lowercase letters  

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int islower(int c);

**Description**

Checks for a lower-case character.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c1='a', c2=' ';
    
    printf("%d %d\n", islower(c1), islower(c2));

    return 0;
  }

and the output is::
  
  512 0

.. index:: isprint function
  
.. _16.1.8:

The ``isprint`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isprint(int c);

**Description**

The ``isprint`` function tests for any printing character including space (' ').

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isprint(int c);

**Description**

Checks for any printable character including space.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c1='a', c2=0;
    
    printf("%d %d\n", isprint(c1), isprint(c2));

    return 0;
  }

and the output is::

  16384 0

.. index:: ispunct function
  
The ``ispunct`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int ispunct(int c);

**Description**

The ``ispunct`` function tests for any printing character that is one of a
locale-specific set of punctuation characters for which neither ``isspace`` nor
``isalnum`` is true. In the "C" locale, ispunct returns true for every printing
character for which neither ``isspace`` nor ``isalnum`` is true.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int ispunct(int c);

**Description**

Checks for any printable character which is not a space or an alphanumeric character.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c1='a', c2=';';
    
    printf("%d %d\n", ispunct(c1), ispunct(c2));

    return 0;
  }

and the output is::

  0 4

.. index:: isspace function

The ``isspace`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isspace(int c);

**Description**

The ``isspace`` function tests for any character that is a standard white-space
character or is one of a locale-specific set of characters for which
``isalnum`` is false. The standard white-space characters are the following:
space (' '), form feed ('\f'), new-line ('\n'), carriage return ('\r'),
horizontal tab ('\t'), and vertical tab ('\v'). In the "C" locale, ``isspace``
returns true only for the standard white-space characters.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isspace(int c);

**Description**

Checks for white-space  characters.   In  the  "C"  and  "POSIX"
locales,  these  are:  space,  form-feed ('\f'), newline ('\n'),
carriage return ('\r'), horizontal tab ('\t'), and vertical  tab
('\v').

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c1='\n', c2=';';
  
    printf("%d %d\n", isspace(c1), isspace(c2));

    return 0;
  }

and the output is::

  8192 0

.. index:: isupper function

The ``isupper`` function
------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isupper(int c);

**Description**

The ``isupper`` function tests for any character that is an uppercase letter or
is one of a locale-specific set of characters for which none of ``iscntrl,
isdigit, ispunct`` or ``isspace`` is true. In the "C" locale, ``isupper``
returns true only for the uppercase letters.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isupper(int c);

**Description**

Checks for an uppercase letter.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c1='A', c2=';';
  
    printf("%d %d\n", isupper(c1), isupper(c2));

    return 0;
  }

and the output is::

  256 0

.. index:: isxdigit function

The ``isxdigit`` function
-------------------------
**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isxdigit(int c);

**Description**

The ``isxdigit`` function tests for any hexadecimal-digit character.

**Synopsis**

.. code-block:: c

  #include <ctype.h>
  int isxdigit(int c);

**Description**

Checks for a hexadecimal digits, that is, one of::

  0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.

**Return Value**

The  values  returned  are  nonzero  if  the character ``c`` falls into the
tested class, and a zero value if not.

**Example**

.. code-block:: c

  #include <stdio.h>
  #include <ctype.h>

  int main()
  {
    char c1='a', c2=';';
  
    printf("%d %d\n", isxdigit(c1), isxdigit(c2));

    return 0;
  }

and the output is::

 4096 0

 
