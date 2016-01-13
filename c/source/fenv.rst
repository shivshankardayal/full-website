.. index:: fenv.h

.. _fenv:

Floating-point environment ``<fenv.h>``
***************************************
The header ``<fenv.h>`` declares two types and several macros and functions to
provide access to the floating-point environment. The floating-point
environment refers collectively to any floating-point status flags and control
modes supported by the implementation. [#]_ A floating-point status flag is a
system variable whose value is set (but never cleared) when a floating-point
exception is raised, which occurs as a side effect of exceptional floating-point
arithmetic to provide auxiliary information. A floating-point control mode is
a system variable whose value may be set by the user to affect the subsequent
behavior of floating-point arithmetic.

Certain programming conventions support the intended model of use for the
floating-point environment: [#]_

* a function call does not alter its caller's floating-point control modes,
  clear its caller's floating-point status flags, nor depend on the state of
  its caller's floating-point status flags unless the function is so
  documented;
* a function call is assumed to require default floating-point control modes,
  unless its documentation promises otherwise;
* a function call is assumed to have the potential for raising floating-point
  exceptions, unless its documentation promises otherwise.

.. index:: fenv_t, fexcept_t

The type ``fenv_t`` represents the entire floating-point environment.

The type ``fexcept_t`` represents the floating-point status flags collectively,
including any status the implementation associates with the flags.

.. index:: FE_DIVBYZERO macro, FE_INEXACT macro, FE_INVALID macro, FE_OVERFLOW macro, FE_UNDERFLOW macro

Each of the macros:

  FE_DIVBYZERO
  FE_INEXACT
  FE_INVALID
  FE_OVERFLOW
  FE_UNDERFLOW

is defined if and only if the implementation supports the floating-point
exception by means of the functions in 13.6.2. [#]_ Additional
implementation-defined floating-point exceptions, with macro definitions
beginning with ``FE_`` and an uppercase letter, may also be specified by the
implementation. The defined macros expand to integer constant expressions with
values such that bitwise ORs of all combinations of the macros result in
distinct values.

.. index:: FE_ALL_EXCEPT

The macro ``FE_ALL_EXCEPT`` is simply the bitwise OR of all floating-point
exception macros defined by the implementation. If no such macros are defined,
``FE_ALL_EXCEPT`` shall be defined as 0.

.. index:: FE_DOWNEARD macro, FE_TONEAREST macro, FE_TOWARDZERO macro, FE_UPWARD macro


Each of the macros::

  FE_DOWNWARD
  FE_TONEAREST
  FE_TOWARDZERO
  FE_UPWARD

is defined if and only if the implementation supports getting and setting the
represented rounding direction by means of the fegetround and fesetround
functions. Additional implementation-defined rounding directions, with macro
definitions beginning with ``FE_`` and an uppercase letter, may also be
specified by the implementation. The defined macros expand to integer constant
expressions whose values are distinct nonnegative values. [#]_

.. index:: FE_DFL_ENV macro

The macro ``FE_DFL_ENV`` represents the default floating-point environment -
the one installed at program startup - and has type "pointer to const-qualified
``fenv_t``". It can be used as an argument to ``<fenv.h>`` functions that manage
the floating-point environment.

Additional implementation-defined environments, with macro definitions
beginning with ``FE_`` and an uppercase letter, and having type "pointer to
const-qualified ``fenv_t``", may also be specified by the implementation.

.. [#] This header is designed to support the floating-point exception status
  flags and directed-rounding control modes required by IEC 60559, and other
  similar floating-point state information. Also it is designed to facilitate
  code portability among all systems.
.. [#] With these conventions, a programmer can safely assume default
  floating-point control modes (or be unaware of them). The responsibilities
  associated with accessing the floating-point environment fall on the
  programmer or program that does so explicitly.
.. [#] The implementation supports an exception if there are circumstances
  where a call to at least one of the functions in 13.6.2, using the macro as
  the appropriate argument, will succeed. It is not necessary for all the
  functions to succeed all the time. 
.. [#] Even though the rounding direction macros may expand to constants
  corresponding to the values of ``FLT_ROUNDS``, they are not required to do so.

.. index:: FENV_ACCESS pragma

The ``FENV_ACCESS`` pragma
==========================
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  #pragma STDC FENV_ACCESS on-off-switch

**Description**

The ``FENV_ACCESS`` pragma provides a means to inform the implementation when a
program might access the floating-point environment to test floating-point
status flags or run under non-default floating-point control modes. [#]_ The
pragma shall occur either outside external declarations or preceding all
explicit declarations and statements inside a compound statement. When outside
external declarations, the pragma takes effect from its occurrence until another
``FENV_ACCESS`` pragma is encountered, or until the end of the translation unit.
When inside a compound statement, the pragma takes effect from its occurrence
until another ``FENV_ACCESS`` pragma is encountered (including within a nested
compound statement), or until the end of the compound statement; at the end of
a compound statement the state for the pragma is restored to its condition just
before the compound statement. If this pragma is used in any other context, the
behavior is undefined. If part of a program tests floating-point status flags,
sets floating-point control modes, or runs under non-default mode settings, but
was translated with the state for the ``FENV_ACCESS`` pragma "off", the behavior
is undefined. The default state ("on" or "off") for the pragma is
implementation-defined. (When execution passes from a part of the program
translated with ``FENV_ACCESS`` "off" to a part translated with ``FENV_ACCESS``
"on", the state of the floating-point status flags is unspecified and the
floating-point control modes have their default settings.)

EXAMPLE 

.. code-block:: c

  #include <fenv.h>
  void f(double x)
  {
    #pragma STDC FENV_ACCESS ON
    void g(double);
    void h(double);
    /* ... */
    g(x + 1);
    h(x + 1);
    /* ... */
  }

If the function ``g`` might depend on status flags set as a side effect of the
first ``x + 1``, or if the second ``x + 1`` might depend on control modes set as
a side effect of the call to function ``g``, then the program shall contain an
appropriately placed invocation of ``#pragma STDC FENV_ACCESS ON``. [#]_

.. [#] The purpose of the ``FENV_ACCESS`` pragma is to allow certain
	optimizations that could subvert flag tests and mode changes (e.g.,
	global common subexpression elimination, code motion, and constant
	folding). In general, if the state of ``FENV_ACCESS`` is "off", the
	translator can assume that default modes are in effect and the flags
	are not tested.
.. [#] The side effects impose a temporal ordering that requires two evaluations
  of ``x + 1``. On the other hand, without the ``#pragma STDC FENV_ACCESS ON``
  pragma, and assuming the default state is "off", just one evaluation of
  ``x + 1`` would suffice.

.. index:: floating-point exceptions

Floating-point exceptions
=========================
The following functions provide access to the floating-point status flags. [#]_
The ``int`` input argument for the functions represents a subset of
floating-point exceptions, and can be zero or the bitwise OR of one or more
floating-point exception macros, for example ``FE_OVERFLOW | FE_INEXACT``. For
other argument values the behavior of these functions is undefined.

.. index:: feclearexcept function

The feclearexcept function
--------------------------
**Synopsis**

.. code-block:: c

	#include <fenv.h>
	int feclearexcept(int excepts);

**Description**

The ``feclearexcept`` function attempts to clear the supported floating-point
exceptions represented by its argument.

**Returns**

The ``feclearexcept`` function returns zero if the excepts argument is zero or
if all the specified exceptions were successfully cleared. Otherwise, it
returns a nonzero value.

**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int feclearexcept(int excepts);

Link with ``-lm``.
	
Following description, exceptions, rounding mode, floating-point environment
and return values are applicable to all functions of this header
	
**Description**
	
This function was defined in C99, and describe the handling of floating-point
rounding and exceptions (overflow, zero-divide, etc.).

.. index::
   pair: divide-by-zero; exception
   pair: overflow; exception
   pair: underflow; exception
   pair: inexact; exception
   pair: invalid; exception

**Exceptions**

The *divide-by-zero* exception occurs when an operation on finite numbers
produces infinity as exact answer.

The *overflow* exception occurs when a result has to be represented as a
floating-point number, but has (much) larger absolute value than the
largest (finite) floating-point number that is representable.

The *underflow* exception occurs when a result has to be represented as a
floating-point number, but has smaller absolute value than the smallest
positive normalized floating-point number (and would lose much accuracy
when represented as a denormalized number).

The *inexact* exception occurs when the rounded result of an operation is not
equal to the infinite precision result.  It may occur whenever *overflow* or
*underflow* occurs.

The *invalid* exception occurs when there is no well-defined result for an
operation, as for 0/0 or infinity - infinity or sqrt(-1).

**Exception handling**
 
Exceptions are represented in two ways: as a single bit (exception
present/absent), and these bits correspond in some implementation-
defined way with bit positions in an integer, and also as an opaque
structure that may contain more information about the exception (perhaps
the code address where it occurred).

Each of the macros ``FE_DIVBYZERO, FE_INEXACT,  FE_INVALID,  FE_OVERFLOW,
FE_UNDERFLOW`` is defined  when the implementation supports handling of
the corresponding exception, and if so then defines the corresponding
bit(s), so that one can call exception handling functions, for example,
using the integer argument ``FE_OVERFLOW|FE_UNDERFLOW``. Other exceptions
may  be  supported. The macro ``FE_ALL_EXCEPT`` is the bitwise OR of all
bits corresponding to supported exceptions.

The ``feclearexcept()`` function clears  the  supported  exceptions  represented
by the bits in its argument.

The ``fegetexceptflag()`` function stores a representation of the state of
the exception flags represented by the argument excepts in  the  opaque
object ``*flagp``.

The ``feraiseexcept()`` function raises the supported exceptions represented
by the bits in excepts.

The ``fesetexceptflag()`` function sets the complete status for the  exceptions
represented by excepts to the value ``*flagp``. This value must have
been obtained by an earlier call of ``fegetexceptflag()`` with a last argument
that contained all bits in excepts.

The ``fetestexcept()`` function returns a word in which the bits are set
that were set in the argument excepts and for which  the  corresponding
exception is currently set.

.. index:: rounding mode

**Rounding mode**

The rounding mode determines how the result of floating-point operations
is treated when the result cannot be exactly represented in the
significand. Various rounding modes may be provided: round to nearest
(the default), round up (toward positive infinity), round down  (toward
negative infinity), and round toward zero.

Each of the macros ``FE_TONEAREST, FE_UPWARD, FE_DOWNWARD`` and
``FE_TOWARDZERO`` is defined when the implementation supports getting and
setting the corresponding rounding direction.

The ``fegetround()`` function returns the macro corresponding to the current
rounding mode.

The ``fesetround()`` function sets the rounding mode as specified by its
argument and returns zero when it was successful.

C99 and POSIX.1-2008 specify an identifier, ``FLT_ROUNDS``, defined in
``<float.h>``, which indicates the implementation-defined rounding behavior
for  floating-point addition.  This identifier has one of the following
values:

    |  -1 The rounding mode is not determinable.
    |  0 Rounding is toward 0.
    |  1 Rounding is toward nearest number.
    |  2 Rounding is toward positive infinity.
    |  3 Rounding is toward negative infinity.

Other values represent machine-dependent, nonstandard rounding modes.

The value of ``FLT_ROUNDS`` should reflect the current rounding mode as set
by ``fesetround()``.

**Floating-point environment**

The entire floating-point environment, including control modes and status
flags, can be handled as one opaque object, of type ``fenv_t``. The
default  environment is denoted by ``FE_DFL_ENV`` (of type ``const fenv_t *``).
This is the environment setup at program start and it is defined by ISO
C  to have round to nearest, all exceptions cleared and a nonstop (continue
on exceptions) mode.

The ``fegetenv()`` function saves the current floating-point environment in
the object ``*envp``.

The  ``feholdexcept()`` function does the same, then clears all exception
flags, and sets a nonstop (continue on exceptions) mode, if  available.
It returns zero when successful.

The ``fesetenv()`` function restores the floating-point environment from
the object ``*envp``.  This object must be known to be valid, for  example,
the result of a call to ``fegetenv()`` or ``feholdexcept()`` or equal to
``FE_DFL_ENV``.  This call does not raise exceptions.

The ``feupdateenv()`` function installs the floating-point environment represented
by the object ``*envp``, except that currently raised exceptions
are not cleared. After calling this function, the raised exceptions
will  be  a bitwise OR of those previously set with those in ``*envp``.  As
before, the object ``*envp`` must be known to be valid.

**RETURN VALUE**

These functions return zero on success and nonzero if an error occurred.

.. [#] The functions ``fetestexcept, feraiseexcept`` and ``feclearexcept``
	support the basic abstraction of flags that are either set or clear. An
	implementation may endow floating-point status flags with more information
	- for example, the address of the code which first raised the floating-point
	exception; the functions fegetexceptflag and fesetexceptflag deal with the
	full content of flags.

.. index:: fegetexceptflag function

The ``fegetexceptflag`` function
--------------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int fegetexceptflag(fexcept_t *flagp, int excepts);

**Description**

The ``fegetexceptflag`` function attempts to store an implementation-defined
representation of the states of the floating-point status flags indicated by
the argument excepts in the object pointed to by the argument ``flagp``.

**Returns**

The ``fegetexceptflag`` function returns zero if the representation was successfully
stored. Otherwise, it returns a nonzero value.

.. index:: feraiseexcept function

The ``feraiseexcept`` function
------------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int feraiseexcept(int excepts);
  
**Description**

The ``feraiseexcept`` function attempts to raise the supported floating-point
exceptions represented by its argument. [#]_ The order in which these
floating-point exceptions are raised is unspecified, except as stated in
F.7.6 of specification. Whether the feraiseexcept function additionally raises the
"inexact" floating-point exception whenever it raises the "overflow" or
"underflow" floating-point exception is implementation-defined.

**Returns**

The ``feraiseexcept`` function returns zero if the excepts argument is zero or
if all the specified exceptions were successfully raised. Otherwise, it returns
a nonzero value.

.. [#] The effect is intended to be similar to that of floating-point
  exceptions raised by arithmetic operations. Hence, enabled traps for
  floating-point exceptions raised by this function are taken. The specification
  in F.7.6 of specification is in the same spirit.

.. index:: fesetexceptflag function

The ``fesetexceptflag`` function
--------------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int fesetexceptflag(const fexcept_t *flagp, int excepts);

**Description**

The ``fesetexceptflag`` function attempts to set the floating-point status flags
indicated by the argument excepts to the states stored in the object pointed to by
``flagp``. The value of ``*flagp`` shall have been set by a previous call to
``fegetexceptflag`` whose second argument represented at least those floating-point
exceptions represented by the argument ``excepts``. This function does not raise
floating-point exceptions, but only sets the state of the flags.

**Returns**

The ``fesetexceptflag`` function returns zero if the excepts argument is zero or if
all the specified flags were successfully set to the appropriate state. Otherwise, it returns
a nonzero value.

.. index:: fetestexcept function

The ``fetestexcept`` function
-----------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int fetestexcept(int excepts);
  
**Description**

The ``fetestexcept`` function determines which of a specified subset of the
floating-point exception flags are currently set. The ``excepts`` argument specifies
the floating-point status flags to be queried. [#]_

**Returns**

The ``fetestexcept`` function returns the value of the bitwise OR of the floating-point
exception macros corresponding to the currently set floating-point exceptions included in
``excepts``.

.. [#] This mechanism allows testing several floating-point exceptions with
  just one function call.

EXAMPLE Call ``f`` if "invalid" is set, then ``g`` if "overflow" is set:

.. code-block:: c

  #include <fenv.h>
  /* ... */
  {
    #pragma STDC FENV_ACCESS ON
    int set_excepts;
    feclearexcept(FE_INVALID | FE_OVERFLOW);
    // maybe raise exceptions
    set_excepts = fetestexcept(FE_INVALID | FE_OVERFLOW);
    if (set_excepts & FE_INVALID) f();
    if (set_excepts & FE_OVERFLOW) g();
    /* ... */
  }

.. index:: rounding functions

Rounding
========
The ``fegetround`` and ``fesetround`` functions provide control of rounding direction
modes.

.. index:: fgetround function

The fegetround function
-----------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int fegetround(void);

**Description**

The ``fegetround`` function gets the current rounding direction.

**Returns**

The ``fegetround`` function returns the value of the rounding direction macro
representing the current rounding direction or a negative value if there is no such
rounding direction macro or the current rounding direction is not determinable.

.. index:: fsetround function

The ``fesetround`` function
---------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int fesetround(int round);

**Description**

The ``fesetround`` function establishes the rounding direction represented by its
argument round. If the argument is not equal to the value of a rounding direction macro,
the rounding direction is not changed.

**Returns**

The ``fesetround`` function returns zero if and only if the requested rounding direction
was established.

EXAMPLE Save, set, and restore the rounding direction. Report an error and
abort if setting the rounding direction fails.

.. code-block:: c

  #include <fenv.h>
  #include <assert.h>
  void f(int round_dir)
  {
    #pragma STDC FENV_ACCESS ON
    int save_round;
    int setround_ok;
    save_round = fegetround();
    setround_ok = fesetround(round_dir);
    assert(setround_ok == 0);
    /* ... */
    fesetround(save_round);
    /* ... */
  }

Environment
===========
The functions in this section manage the floating-point environment - status flags and
control modes - as one entity.

.. index:: fgetenv function

The ``fegetenv`` function
-------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int fegetenv(fenv_t *envp);

**Description**

The ``fegetenv`` function attempts to store the current floating-point environment
in the object pointed to by ``envp``.

**Returns**

The ``fegetenv`` function returns zero if the environment was successfully stored.
Otherwise, it returns a nonzero value.

.. index:: feholdexcept function

The ``feholdexcept`` function
-----------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int feholdexcept(fenv_t *envp);

**Description**

The ``feholdexcept`` function saves the current floating-point environment in
the object pointed to by envp, clears the floating-point status flags, and
then installs a non-stop (continue on floating-point exceptions) mode, if
available, for all floating-point exceptions. [#]_

**Returns**

The ``feholdexcept`` function returns zero if and only if non-stop floating-point
exception handling was successfully installed.

.. [#] IEC 60559 systems have a default non-stop mode, and typically at least
  one other mode for trap handling or aborting; if the system provides only
  the non-stop mode then installing it is trivial. For such systems, the
  ``feholdexcept`` function can be used in conjunction with the ``feupdateenv``
  function to write routines that hide spurious floating-point exceptions from
  their callers.

.. index:: fesetenv function

The ``fesetenv`` function
-------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int fesetenv(const fenv_t *envp);

**Description**

The ``fesetenv`` function attempts to establish the floating-point environment
represented by the object pointed to by ``envp``. The argument ``envp`` shall
point to an object set by a call to ``fegetenv`` or ```feholdexcept``, or equal
a floating-point environment macro. Note that ``fesetenv`` merely installs
the state of the floating-point status flags represented through its argument,
and does not raise these floating-point exceptions.

**Returns**

The ``fesetenv`` function returns zero if the environment was successfully
established. Otherwise, it returns a nonzero value.

.. index:: feupdateenv function

The ``feupdateenv`` function
----------------------------
**Synopsis**

.. code-block:: c

  #include <fenv.h>
  int feupdateenv(const fenv_t *envp);

**Description**

The ``feupdateenv`` function attempts to save the currently raised floating-point
exceptions in its automatic storage, install the floating-point environment
represented by the object pointed to by ``envp``, and then raise the saved
floating-point exceptions. The argument ``envp`` shall point to an object set
by a call to feholdexcept or ``fegetenv``, or equal a floating-point environment
macro.

**Returns**

The ``feupdateenv`` function returns zero if all the actions were successfully
carried out. Otherwise, it returns a nonzero value.

EXAMPLE Hide spurious underflow floating-point exceptions:

.. code-block:: c

  #include <fenv.h>
  double f(double x)
  {
    #pragma STDC FENV_ACCESS ON
    double result;
    fenv_t save_env;
    if (feholdexcept(&save_env))
      return /* indication of an environmental problem */;
    // compute result
    if (/* test spurious underflow */)
      if (feclearexcept(FE_UNDERFLOW))
        return /* indication of an environmental problem */;
    if (feupdateenv(&save_env))
      return /* indication of an environmental problem */;
    return result;
  }
