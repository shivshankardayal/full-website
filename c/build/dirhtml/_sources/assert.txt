.. index:: assert.h

Diagnostics ``<assert.h>``
**************************
The header ``<assert.h>`` defines the ``assert`` macro and refers to another
macro, ``NDEBUG`` which is *not* defined by ``<assert.h>``. If ``NDEBUG`` is
defined as a macro name at the point in the source file where ``<assert.h>`` is
included, the ``assert`` macro is defined simply as::


  #define assert(ignore) ((void)0)

The ``assert`` macro is redefined according to the current state of ``NDEBUG``
each time that ``<assert.h>`` is included.

The ``assert`` macro shall be implemented as a macro, not as an actual
function. If the macro definition is suppressed in order to access an actual
function, the behavior is undefined.

Program diagnostics
===================

.. index:: __FILE__, __LINE__, __func__
   pair: assert; macros

The ``assert`` macro
--------------------
**Synopsis**

.. code-block:: c

  #include <assert.h>
  void assert(scalar expression);

**Description**

The ``assert`` macro puts diagnostic tests into programs; it expands to a void
expression. When it is executed, if expression (which shall have a scalar type)
is false (that is, compares equal to 0), the assert macro writes information
about the particular call that failed (including the text of the argument, the
name of the source file, the source line number, and the name of the enclosing
function - the latter are respectively the values of the preprocessing macros
``__FILE__`` and ``__LINE__`` and of the identifier ``__func__``) on the
standard error stream in an implementation-defined format. It then calls the
``abort`` function.

**Returns**

The ``assert`` macro returns no value.

**Forward references:** the ``abort`` function (14.20.4.1).

**Synopsis**

.. code-block:: c


  #include <assert.h>
  void assert(scalar expression);

.. index:: NDEBUG; macros

**Description**

If  the  macro  ``NDEBUG``  was  defined  at the moment ``<assert.h>`` was last
included, the macro assert() generates no code, and hence does  nothing at all. 
Otherwise, the macro ``assert()`` prints an error message to standard error
and terminates the program by calling ``abort`` if expression is false (i.e.,
compares equal to zero).

The  purpose  of  this macro is to help the programmer find bugs in his
program.   The  message  "assertion  failed  in  file  foo.c,  function
do_bar(), line 1287" is of no help at all to a user.

**RETURN VALUE**

No value is returned.

In C89, expression is required to be of type ``int`` and undefiend behavior
results if it is not, but in C99 it may have scalar type.

``assert()`` is implemented as a macro; if the expression tested has\
side-effects, program behavior will be different depending on whether
``NDEBUG`` is defined.  This may create Heisenbugs which go away when\
debugging is turned on.

**Example**

.. code-block:: c


  #include <stdio.h>
  #include <assert.h>

  int main()
  {
    assert(0);
    printf("Not gonna happen!");

    return 0;
  }

And the output is::

  a.out: test.c:5: int main(): Assertion `0' failed.
  Aborted (core dumped)

You should replace ``0`` inside ``assert()`` by the expression to be tested.
