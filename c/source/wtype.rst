.. index:: wtype.h

Wide character classification and mapping utilities ``<wctype.h>``
******************************************************************
Introduction
============
The header ``<wctype.h>`` declares three data types, one macro, and many functions.

.. index:: wint_t function, wctrans_t function, wctype_t function

The types declared are

 ! ``wint_t``
 
described in :ref:`36.1`;

 | ``wctrans_t``
 
which is a scalar type that can hold values which represent locale-specific character
mappings; and

 | ``wctype_t``
 
which is a scalar type that can hold values which represent locale-specific character
classifications.

The macro defined is ``WEOF`` (described in :ref:`36.1`).

The functions declared are grouped as follows:

* Functions that provide wide character classification;
* Extensible functions that provide wide character classification;
* Functions that provide wide character case mapping;
* Extensible functions that provide wide character mapping.

For all functions described in this subclause that accept an argument of type ``wint_t``, the
value shall be representable as a ``wchar_t`` or shall equal the value of the macro ``WEOF``. If
this argument has any other value, the behavior is undefined.

The behavior of these functions is affected by the ``LC_CTYPE`` category of the current
locale.


Wide character classification utilities
=======================================
The header ``<wctype.h>`` declares several functions useful for classifying wide
characters.

The term *printing wide character* refers to a member of a locale-specific set of wide
characters, each of which occupies at least one printing position on a display device. The
term *control wide character* refers to a member of a locale-specific set of wide characters
that are not printing wide characters.

.. index:: wide character classification functions

.. _37.2.1:

Wide character classification functions
---------------------------------------
The functions in this subclause return nonzero (true) if and only if the value of the
argument wc conforms to that in the description of the function.

Each of the following functions returns true for each wide character that corresponds (as
if by a call to the ``wctob`` function) to a single-byte character for which the corresponding
character classification function from :ref:`16.1` returns true, except that the ``iswgraph`` and
``iswpunct`` functions may differ with respect to wide characters other than ``L' '`` that are
both printing and white-space wide characters. [#]_

**Forward references:** the ``wctob`` function (:ref:`36.6.1.2`).

.. [#] For example, if the expression ``isalpha(wctob(wc))`` evaluates to true, then the call
	``iswalpha(wc)`` also returns true. But, if the expression ``isgraph(wctob(wc))`` evaluates to true
	(which cannot occur for ``wc == L' '`` of course), then either ``iswgraph(wc)`` or ``iswprint(wc)
	&& iswspace(wc)`` is true, but not both.

.. index:: iswalnum function

The ``iswalnum`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswalnum(wint_t wc);

**Description**

The ``iswalnum`` function tests for any wide character for which ``iswalpha`` or
``iswdigit`` is true.

.. index:: iswalpha function

The ``iswalpha`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswalpha(wint_t wc);

**Description**

The ``iswalpha`` function tests for any wide character for which ``iswupper`` or
``iswlower`` is true, or any wide character that is one of a locale-specific set of alphabetic
wide characters for which none of ``iswcntrl, iswdigit, iswpunct`` or ``iswspace``
is true. [#]_

.. [#] The functions ``iswlower`` and ``iswupper`` test true or false separately for each of these additional
	wide characters; all four combinations are possible.

.. index:: iswblank function

The ``iswblank`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswblank(wint_t wc);

**Description**

The ``iswblank`` function tests for any wide character that is a standard blank wide
character or is one of a locale-specific set of wide characters for which ``iswspace`` is true
and that is used to separate words within a line of text. The standard blank wide
characters are the following: space (``L' '``), and horizontal tab (``L'\t'``). In the "C"
locale, ``iswblank`` returns true only for the standard blank characters.

.. index:: iswcntrl function

The ``iswcntrl`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswcntrl(wint_t wc);

**Description**

The ``iswcntrl`` function tests for any control wide character.

.. index:: iswdigit function

The ``iswdigit`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswdigit(wint_t wc);

**Description**

The ``iswdigit`` function tests for any wide character that corresponds to a decimal-digit
character (as defined in :ref:`3.2.1`).

.. index:: iswgraph function

The ``iswgraph`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswgraph(wint_t wc);

**Description**

The ``iswgraph`` function tests for any wide character for which ``iswprint`` is true and
``iswspace`` is false. [#]_

.. index:: iswlower function

The ``iswlower`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswlower(wint_t wc);

**Description**

The ``iswlower`` function tests for any wide character that corresponds to a lowercase
letter or is one of a locale-specific set of wide characters for which none of ``iswcntrl,
iswdigit, iswpunct`` or ``iswspace`` is true.

.. index:: iswprint function

The ``iswprint`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswprint(wint_t wc);

**Description**

The ``iswprint`` function tests for any printing wide character.

.. index:: iswpunct function

The ``iswpunct`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswpunct(wint_t wc);

**Description**

The ``iswpunct`` function tests for any printing wide character that is one of a locale-specific
set of punctuation wide characters for which neither ``iswspace`` nor ``iswalnum``
is true. [3]_

.. [#] Note that the behavior of the ``iswgraph`` and ``iswpunct`` functions may differ from their
	corresponding functions in :ref:`16.1` with respect to printing, white-space, single-byte execution
	characters other than ' '.

.. index:: iswspace function

The ``iswspace`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswspace(wint_t wc);

**Description**

The ``iswspace`` function tests for any wide character that corresponds to a locale-specific
set of white-space wide characters for which none of ``iswalnum, iswgraph`` or
``iswpunct`` is true.

.. index:: iswupper function

The ``iswupper`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswupper(wint_t wc);

**Description**

The ``iswupper`` function tests for any wide character that corresponds to an uppercase
letter or is one of a locale-specific set of wide characters for which none of ``iswcntrl,
iswdigit, iswpunct`` or ``iswspace`` is true.

.. index:: iswxdigit function

The ``iswxdigit`` function
^^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswxdigit(wint_t wc);

**Description**

The ``iswxdigit`` function tests for any wide character that corresponds to a
hexadecimal-digit character (as defined in :ref:`4.4.4.1`).

Extensible wide character classification functions
--------------------------------------------------
The functions ``wctype`` and ``iswctype`` provide extensible wide character classification
as well as testing equivalent to that performed by the functions described in the previous
subclause (:ref:`37.2.1`).

.. index:: iswctype function

The ``iswctype`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   int iswctype(wint_t wc, wctype_t desc);

**Description**

The ``iswctype`` function determines whether the wide character ``wc`` has the property
described by ``desc``. The current setting of the ``LC_CTYPE`` category shall be the same as
during the call to ``wctype`` that returned the value ``desc``.

Each of the following expressions has a truth-value equivalent to the call to the wide
character classification function (:ref:`37.2.1`) in the comment that follows the expression:

.. code-block:: c

   iswctype(wc, wctype("alnum"))  // iswalnum(wc)
   iswctype(wc, wctype("alpha"))  // iswalpha(wc)
   iswctype(wc, wctype("blank"))  // iswblank(wc)
   iswctype(wc, wctype("cntrl"))  // iswcntrl(wc)
   iswctype(wc, wctype("digit"))  // iswdigit(wc)
   iswctype(wc, wctype("graph"))  // iswgraph(wc)
   iswctype(wc, wctype("lower"))  // iswlower(wc)
   iswctype(wc, wctype("print"))  // iswprint(wc)
   iswctype(wc, wctype("punct"))  // iswpunct(wc)
   iswctype(wc, wctype("space"))  // iswspace(wc)
   iswctype(wc, wctype("upper"))  // iswupper(wc)
   iswctype(wc, wctype("xdigit")) // iswxdigit(wc)

**Returns**

The ``iswctype`` function returns nonzero (true) if and only if the value of the wide
character ``wc`` has the property described by ``desc``.

**Forward references:** the ``wctype`` function (:ref:`37.2.2.2`).

.. index:: wctype function

.. _37.2.2.2:

The ``wctype`` function
^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   wctype_t wctype(const char *property);

**Description**

The ``wctype`` function constructs a value with type ``wctype_t`` that describes a class of
wide characters identified by the string argument property.

The strings listed in the description of the ``iswctype`` function shall be valid in all
locales as property arguments to the ``wctype`` function.

**Returns**

If property identifies a valid class of wide characters according to the ``LC_CTYPE``
category of the current locale, the ``wctype`` function returns a nonzero value that is valid
as the second argument to the ``iswctype`` function; otherwise, it returns zero.

Wide character case mapping utilities
=====================================
The header ``<wctype.h>`` declares several functions useful for mapping wide characters.

.. index:: towlower function

.. _37.3.1:

Wide character case mapping functions
-------------------------------------
The ``towlower`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   wint_t towlower(wint_t wc);

**Description**

The ``towlower`` function converts an uppercase letter to a corresponding lowercase letter.

**Returns**

If the argument is a wide character for which ``iswupper`` is true and there are one or
more corresponding wide characters, as specified by the current locale, for which
``iswlower`` is true, the ``towlower`` function returns one of the corresponding wide
characters (always the same one for any giv en locale); otherwise, the argument is
returned unchanged.

.. index:: towupper function

The ``towupper`` function
^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   wint_t towupper(wint_t wc);

**Description**

The ``towupper`` function converts a lowercase letter to a corresponding uppercase letter.

**Returns**

If the argument is a wide character for which ``iswlower`` is true and there are one or
more corresponding wide characters, as specified by the current locale, for which
iswupper is true, the ``towupper`` function returns one of the corresponding wide
characters (always the same one for any giv en locale); otherwise, the argument is
returned unchanged.

Extensible wide character case mapping functions
------------------------------------------------
The functions ``wctrans`` and ``towctrans`` provide extensible wide character mapping as
well as case mapping equivalent to that performed by the functions described in the
previous subclause (:ref:`37.3.1`).

.. index:: towctrans function

The ``towctrans`` function
^^^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   wint_t towctrans(wint_t wc, wctrans_t desc);

**Description**

The ``towctrans`` function maps the wide character ``wc`` using the mapping described by
``desc``. The current setting of the ``LC_CTYPE`` category shall be the same as during the call
to wctrans that returned the value ``desc``.

Each of the following expressions behaves the same as the call to the wide character case
mapping function (:ref:`37.3.1`) in the comment that follows the expression:

.. code-block:: c

   towctrans(wc, wctrans("tolower")) // towlower(wc)
   towctrans(wc, wctrans("toupper")) // towupper(wc)

**Returns**

The ``towctrans`` function returns the mapped value of ``wc`` using the mapping described
by ``desc``.

.. index:: wctrans function

The ``wctrans`` function
^^^^^^^^^^^^^^^^^^^^^^^^
**Synopsis**

.. code-block:: c

   #include <wctype.h>
   wctrans_t wctrans(const char *property);

**Description**

The ``wctrans`` function constructs a value with type ``wctrans_t`` that describes a
mapping between wide characters identified by the string argument property.

The strings listed in the description of the ``towctrans`` function shall be valid in all
locales as property arguments to the ``wctrans`` function.

**Returns**

If property identifies a valid mapping of wide characters according to the ``LC_CTYPE``
category of the current locale, the ``wctrans`` function returns a nonzero value that is valid
as the second argument to the ``towctrans`` function; otherwise, it returns zero.
