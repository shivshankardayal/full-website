.. index:: locale.h

Localization <locale.h>
***********************
.. index:: C locale

The header ``<locale.h>`` declares two functions, one type, and defines several macros.

The type is

.. code-block:: c

  struct lconv
  
which contains members related to the formatting of numeric values. The structure shall
contain at least the following members, in any order. The semantics of the members and
their normal ranges are explained in :ref:`23.2.1`. In the "C" locale, the members
shall have the values specified in the comments.

.. code-block:: c

  char *decimal_point;     // "."
  char *thousands_sep;     // ""
  char *grouping;          // ""
  char *mon_decimal_point; // ""
  char *mon_thousands_sep; // ""
  char *mon_grouping;      // ""
  char *positive_sign;     // ""
  char *negative_sign;     // ""
  char *currency_symbol;   // ""
  char frac_digits;        // CHAR_MAX
  char p_cs_precedes;      // CHAR_MAX
  char n_cs_precedes;      // CHAR_MAX
  char p_sep_by_space;     // CHAR_MAX
  char n_sep_by_space;     // CHAR_MAX
  char p_sign_posn;        // CHAR_MAX
  char n_sign_posn;        // CHAR_MAX
  char *int_curr_symbol;   // ""
  char int_frac_digits;    // CHAR_MAX
  char int_p_cs_precedes;  // CHAR_MAX
  char int_n_cs_precedes;  // CHAR_MAX
  char int_p_sep_by_space; // CHAR_MAX
  char int_n_sep_by_space; // CHAR_MAX
  char int_p_sign_posn;    // CHAR_MAX
  char int_n_sign_posn;    // CHAR_MAX

.. index:: LC_ALL macro, LC_COLLATE macro, LC_CTYPE macro, LC_MONETARY macro, LC_NUMERIC macro, LC_TIME macro

The macros defined are NULL (described in :ref:`stddef`); and

  |  ``LC_ALL``
  |  ``LC_COLLATE``
  |  ``LC_CTYPE``
  |  ``LC_MONETARY``
  |  ``LC_NUMERIC``
  |  ``LC_TIME``

which expand to integer constant expressions with distinct values, suitable for use as the
first argument to the setlocale function. [#]_ Additional macro definitions, beginning
with the characters ``LC_`` and an uppercase letter, 

.. [#] ISO/IEC 9945-2 specifies locale and charmap formats that may be used to
  specify locales for C.

Locale control
==============
.. index:: setlocale function


The ``setlocale`` function
--------------------------
**Synopsis**

.. code-block:: c

  #include <locale.h>
  char *setlocale(int category, const char *locale);
  
**Description**

The ``setlocale`` function selects the appropriate portion of the program's locale as
specified by the category and locale arguments. The ``setlocale`` function may be
used to change or query the program's entire current locale or portions thereof. The value
``LC_ALL`` for category names the program's entire locale; the other values for
category name only a portion of the program's locale. ``LC_COLLATE`` affects the
behavior of the ``strcoll`` and ``strxfrm`` functions. ``LC_CTYPE`` affects the behavior
of the character handling functions [#]_ and the multibyte and wide character functions.
``LC_MONETARY`` affects the monetary formatting information returned by the
localeconv function. ``LC_NUMERIC`` affects the decimal-point character for the
formatted input/output functions and the string conversion functions, as well as the
nonmonetary formatting information returned by the localeconv function. ``LC_TIME``
affects the behavior of the ``strftime`` and ``wcsftime`` functions.

A value of "C" for locale specifies the minimal environment for C translation; a value
of "" for ``locale`` specifies the locale-specific native environment. Other
implementation-defined strings may be passed as the second argument to ``setlocale``.

.. [#] The only functions in :ref:`ctype` whose behavior is not affected by the current
  locale are ``isdigit`` and ``isxdigit``.

At program startup, the equivalent of

.. code-block:: c

  setlocale(LC_ALL, "C");
  
is executed.

The implementation shall behave as if no library function calls the ``setlocale`` function.

**Returns**

If a pointer to a string is given for ``locale`` and the selection can be honored, the
``setlocale`` function returns a pointer to the string associated with the specified
``category`` for the new locale. If the selection cannot be honored, the ``setlocale``
function returns a null pointer and the program's locale is not changed.

A null pointer for ``locale`` causes the ``setlocale`` function to return a pointer to the
string associated with the category for the program's current locale; the program's
``locale`` is not changed. [#]_

The pointer to string returned by the ``setlocale`` function is such that a subsequent call
with that string value and its associated category will restore that part of the program's
locale. The string pointed to shall not be modified by the program, but may be
overwritten by a subsequent call to the ``setlocale`` function.

**Forward references:** formatted input/output functions (:ref:`31.6`), multibyte/wide
character conversion functions (:ref:`32.7`), multibyte/wide string conversion functions
(:ref:`32.8`), numeric conversion functions (:ref:`32.1`), the strcoll function
(:ref:`33.4.3`), the ``strftime`` function (:ref:`35.3.5`), the ``strxfrm`` function
(:ref:`33.4.5`).

.. [#] The implementation shall arrange to encode in a string the various categories
  due to a heterogeneous locale when ``category`` has the value ``LC_ALL``.

Numeric formatting convention inquiry
=====================================
.. index:: localeconv function

.. _23.2.1:

The localeconv function
-----------------------
**Synopsis**

.. code-block:: c

  #include <locale.h>
  struct lconv *localeconv(void);

**Description**

The ``localeconv`` function sets the components of an object with type ``struct lconv``
with values appropriate for the formatting of numeric quantities (monetary and otherwise)
according to the rules of the current ``locale``.

The members of the structure with type ``char *`` are pointers to strings, any of which
(except decimal_point) can point to "", to indicate that the value is not available in
the current ``locale`` or is of zero length. Apart from grouping and mon_grouping, the
strings shall start and end in the initial shift state. The members with type ``char`` are
nonnegative numbers, any of which can be ``CHAR_MAX`` to indicate that the value is not
available in the current ``locale``. The members include the following:

.. code-block:: c

  char *decimal_point

The decimal-point character used to format nonmonetary quantities.

.. code-block:: c

  char *thousands_sep

The character used to separate groups of digits before the decimal-point.
character in formatted nonmonetary quantities.

.. code-block:: c

  char *grouping
  
A string whose elements indicate the size of each group of digits in
formatted nonmonetary quantities.

.. code-block:: c

  char *mon_decimal_point
  
The decimal-point used to format monetary quantities.

.. code-block:: c

  char *mon_thousands_sep
  
The separator for groups of digits before the decimal-point in formatted
monetary quantities.

.. code-block:: c

  char *mon_grouping

A string whose elements indicate the size of each group of digits in
formatted monetary quantities.

.. code-block:: c

  char *positive_sign
  
The string used to indicate a nonnegative-valued formatted monetary
quantity.

.. code-block:: c

  char *negative_sign
  
The string used to indicate a negative-valued formatted monetary quantity.

.. code-block:: c

  char *currency_symbol
  
The local currency symbol applicable to the current locale.

.. code-block:: c

  char frac_digits
  
The number of fractional digits (those after the decimal-point) to be
displayed in a locally formatted monetary quantity.

.. code-block:: c

  char p_cs_precedes
  
Set to 1 or 0 if the ``currency_symbol`` respectively precedes or
succeeds the value for a nonnegative locally formatted monetary quantity.

.. code-block:: c

  char n_cs_precedes

Set to 1 or 0 if the ``currency_symbol`` respectively precedes or
succeeds the value for a negative locally formatted monetary quantity.

.. code-block:: c

  char p_sep_by_space
  
Set to a value indicating the separation of the ``currency_symbol``, the
sign string, and the value for a nonnegative locally formatted monetary
quantity.

.. code-block:: c

  char n_sep_by_space
  
Set to a value indicating the separation of the ``currency_symbol``, the
sign string, and the value for a negative locally formatted monetary
quantity.

.. code-block:: c

  char p_sign_posn
  
Set to a value indicating the positioning of the ``positive_sign`` for a
nonnegative locally formatted monetary quantity.

.. code-block:: c

  char n_sign_posn
  
Set to a value indicating the positioning of the ``negative_sign`` for a
negative locally formatted monetary quantity.

.. code-block:: c

  char *int_curr_symbol
  
The international currency symbol applicable to the current locale. The
first three characters contain the alphabetic international currency symbol
in accordance with those specified in ISO 4217. The fourth character
(immediately preceding the null character) is the character used to separate
the international currency symbol from the monetary quantity.

.. code-block:: c

  char int_frac_digits
  
The number of fractional digits (those after the decimal-point) to be
displayed in an internationally formatted monetary quantity.

.. code-block:: c

  char int_p_cs_precedes
  
Set to 1 or 0 if the ``int_curr_symbol`` respectively precedes or
succeeds the value for a nonnegative internationally formatted monetary
quantity.

.. code-block:: c

  char int_n_cs_precedes
  
Set to 1 or 0 if the ``int_curr_symbol`` respectively precedes or
succeeds the value for a negative internationally formatted monetary
quantity.

.. code-block:: c

  char int_p_sep_by_space
  
Set to a value indicating the separation of the ``int_curr_symbol``, the
sign string, and the value for a nonnegative internationally formatted
monetary quantity.

.. code-block:: c

  char int_n_sep_by_space
  
Set to a value indicating the separation of the ``int_curr_symbol``, the
sign string, and the value for a negative internationally formatted monetary
quantity.

.. code-block:: c

  char int_p_sign_posn
  
Set to a value indicating the positioning of the ``positive_sign`` for a
nonnegative internationally formatted monetary quantity.

.. code-block:: c

  char int_n_sign_posn
  
Set to a value indicating the positioning of the ``negative_sign`` for a
negative internationally formatted monetary quantity.

The elements of grouping and mon_grouping are interpreted according to the
following:

  |  ``CHAR_MAX`` No further grouping is to be performed.
  |  0 The previous element is to be repeatedly used for the remainder of the
  |  digits.
  |  *other* The integer value is the number of digits that compose the current group.
  |  The next element is examined to determine the size of the next group of
  |  digits before the current group.

The values of ``p_sep_by_space, n_sep_by_space, int_p_sep_by_space``
and ``int_n_sep_by_space`` are interpreted according to the following:

  |  0 No space separates the currency symbol and value.
  |  1 If the currency symbol and sign string are adjacent, a space separates them from the
  |  value; otherwise, a space separates the currency symbol from the value.
  |  2 If the currency symbol and sign string are adjacent, a space separates them;
  |  otherwise, a space separates the sign string from the value.
  
For ``int_p_sep_by_space`` and ``int_n_sep_by_space``, the fourth character of
``int_curr_symbol`` is used instead of a space.

The values of ``p_sign_posn, n_sign_posn, int_p_sign_posn`` and
``int_n_sign_posn`` are interpreted according to the following:

  |  0 Parentheses surround the quantity and currency symbol.
  |  1 The sign string precedes the quantity and currency symbol.
  |  2 The sign string succeeds the quantity and currency symbol.
  |  3 The sign string immediately precedes the currency symbol.
  |  4 The sign string immediately succeeds the currency symbol.

The implementation shall behave as if no library function calls the ``localeconv``
function.

**Returns**

The ``localeconv`` function returns a pointer to the filled-in object. The structure
pointed to by the return value shall not be modified by the program, but may be
overwritten by a subsequent call to the localeconv function. In addition, calls to the
setlocale function with categories ``LC_ALL, LC_MONETARY`` or ``LC_NUMERIC`` may
overwrite the contents of the structure.

+------------+--------------------+--------------------+-------------------+-----------------+
|            | Local format                            | International format                |
+------------+--------------------+--------------------+-------------------+-----------------+
|  Country   | Positive           | Negative           | Postive           | Negative        |
+============+====================+====================+===================+=================+
| Country1   | 1.234,56 mk        | -1.234,56 mk       | FIM 1.234,56      | FIM -1.234,56   |
+------------+--------------------+--------------------+-------------------+-----------------+
| Country2   | L.1.234            | -L.1.234           | ITL 1.234         | -ITL 1.234      |
+------------+--------------------+--------------------+-------------------+-----------------+
| Country3   | f 1.234,56         | f -1.234,56        | NLG 1.234,56      | NLG -1.234,56   |
+------------+--------------------+--------------------+-------------------+-----------------+
| Country4   | SFrs.1,234.56      | SFrs.1,234.56C     | CHF 1,234.56      | CHF 1,234.56C   |
+------------+--------------------+--------------------+-------------------+-----------------+

For these four countries, the respective values for the monetary members of the structure returned by
``localeconv`` could be:

+---------------------+---------------+--------------+--------------+---------------+
|                     | Country1      | Country2     | Country3     | Country4      |
+=====================+===============+==============+==============+===============+
| mon_decimal_point   | ","           | ""           | ","          | "."           |
+---------------------+---------------+--------------+--------------+---------------+
| mon_thousands_sep   | "."           | "."          | "."          | ","           |
+---------------------+---------------+--------------+--------------+---------------+
| mon_grouping        | "\\3"         | "\\3"        | "\\3"        | "\\3"         |
+---------------------+---------------+--------------+--------------+---------------+
| positive_sign       | ""            | ""           | ""           | ""            |
+---------------------+---------------+--------------+--------------+---------------+
| negative_sign       | "-"           | "-"          | "-"          | "C"           |
+---------------------+---------------+--------------+--------------+---------------+
| currency_symbol     | "mk"          | "L."         | "\\u0192"    | "SFrs."       |
+---------------------+---------------+--------------+--------------+---------------+
| frac_digits         | 2             | 0            | 2            | 2             |
+---------------------+---------------+--------------+--------------+---------------+
| p_cs_precedesd      | 0             | 1            | 1            | 1             |
+---------------------+---------------+--------------+--------------+---------------+
| n_cs_precedes       | 0             | 1            | 1            | 1             |
+---------------------+---------------+--------------+--------------+---------------+
| p_sep_by_space      | 1             | 0            | 1            | 0             |
+---------------------+---------------+--------------+--------------+---------------+
| n_sep_by_space      | 1             | 0            | 2            | 0             |
+---------------------+---------------+--------------+--------------+---------------+
| p_sign_posn         | 1             | 1            | 1            | 1             |
+---------------------+---------------+--------------+--------------+---------------+
| n_sign_posn         | 1             | 1            | 4            | 2             |
+---------------------+---------------+--------------+--------------+---------------+
| int_curr_symbol     | "FIM "        | "ITL "       | "NLG "       | "CHF "        |
+---------------------+---------------+--------------+--------------+---------------+
| int_frac_digits     | 2             | 0            | 2            | 2             |
+---------------------+---------------+--------------+--------------+---------------+
| int_p_cs_precedes   | 1             | 1            | 1            | 1             |
+---------------------+---------------+--------------+--------------+---------------+
| int_n_cs_precedes   | 1             | 1            | 1            | 1             |
+---------------------+---------------+--------------+--------------+---------------+
| int_p_sep_by_space  | 1             | 1            | 1            | 1             |
+---------------------+---------------+--------------+--------------+---------------+
| int_n_sep_by_space  | 2             | 1            | 2            | 1             |
+---------------------+---------------+--------------+--------------+---------------+
| int_p_sign_posn     | 1             | 1            | 1            | 1             |
+---------------------+---------------+--------------+--------------+---------------+
| int_n_sign_posn     | 4             | 1            | 4            | 2             |
+---------------------+---------------+--------------+--------------+---------------+

EXAMPLE 2 The following table illustrates how the ``cs_precedes, sep_by_space`` and ``sign_posn`` members
affect the formatted value.


+--------------------------+-----------------+-----------------------------------+
|  p_cs_precedes           |     p_sign_posn | p_sep_by_space                    |
+--------------------------+-----------------+----------+------------+-----------+
|                          |                 | 0        | 1          | 2         |
+--------------------------+-----------------+----------+------------+-----------+
|                        0 | 0               | (1.25$)  | (1.25 $)   | (1.25$)   |
+--------------------------+-----------------+----------+------------+-----------+
|                        0 | 1               | +1.25$   | +1.25 $    | \+ 1.25$  |
+--------------------------+-----------------+----------+------------+-----------+
|                        0 | 2               | 1.25$+   | 1.25 $+    | 1.25$ \+  |
+--------------------------+-----------------+----------+------------+-----------+
|                        0 | 3               | 1.25+$   | 1.25 +$    | 1.25+ $   |
+--------------------------+-----------------+----------+------------+-----------+
|                        0 | 4               | 1.25$+   | 1.25 $+    | 1.25$ +   |
+--------------------------+-----------------+----------+------------+-----------+
|                        1 | 0               | ($1.25)  | ($ 1.25)   | ($1.25)   |
+--------------------------+-----------------+----------+------------+-----------+
|                        1 | 1               | +$1.25   | +$ 1.25    | \+ $1.25  |
+--------------------------+-----------------+----------+------------+-----------+
|                        1 | 2               | $1.25+   | $ 1.25+    | $1.25 +   |
+--------------------------+-----------------+----------+------------+-----------+
|                        1 | 3               | +$1.25   | +$ 1.25    | \+ $1.25  |
+--------------------------+-----------------+----------+------------+-----------+
|                        1 | 4               | $+1.25   | $+ 1.25    | $ +1.25   |
+--------------------------+-----------------+----------+------------+-----------+
