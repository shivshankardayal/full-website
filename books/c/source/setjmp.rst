.. index:: setjmp.h

Nonlocal jumps ``<setjmp.h>``
*****************************
The header ``<setjmp.h>`` defines the macro ``setjmp``, and declares one function and
one type, for bypassing the normal function call and return discipline. [#]_

.. index:: jump_buf

The type declared is

  | ``jmp_buf``

which is an array type suitable for holding the information needed to restore a calling
environment. The environment of a call to the setjmp macro consists of information
sufficient for a call to the longjmp function to return execution to the correct block and
invocation of that block, were it called recursively. It does not include the state of the
floating-point status flags, of open files, or of any other component of the abstract
machine.

It is unspecified whether ``setjmp`` is a macro or an identifier declared with external
linkage. If a macro definition is suppressed in order to access an actual function, or a
program defines an external identifier with the name setjmp, the behavior is undefined.

.. [#] These functions are useful for dealing with unusual conditions encountered in a low-level function of
  a program.

.. index:: saving calling environment

Save calling environment
========================
.. index:: setjmp macro

The ``setjmp`` macro
--------------------
**Synopsis**

.. code-block:: c

   #include <setjmp.h>
   int setjmp(jmp_buf env);

**Description**

The ``setjmp`` macro saves its calling environment in its ``jmp_buf`` argument for later use
by the ``longjmp`` function.

**Returns**

If the return is from a direct invocation, the ``setjmp`` macro returns the value zero. If the
return is from a call to the ``longjmp`` function, the ``setjmp`` macro returns a nonzero
value.

**Environmental limits**

An invocation of the ``setjmp`` macro shall appear only in one of the following contexts:

* the entire controlling expression of a selection or iteration statement;
* one operand of a relational or equality operator with the other operand an integer
  constant expression, with the resulting expression being the entire controlling
  expression of a selection or iteration statement;
* the operand of a unary ! operator with the resulting expression being the entire
  controlling expression of a selection or iteration statement; or
* the entire expression of an expression statement (possibly cast to void).

If the invocation appears in any other context, the behavior is undefined.

.. index:: restroring calling environment

Restore calling environment
===========================
.. index:: longjmp function

The ``longjmp`` function
------------------------
**Synopsis**

.. code-block:: c

   #include <setjmp.h>
   void longjmp(jmp_buf env, int val);

**Description**

The ``longjmp`` function restores the environment saved by the most recent invocation of
the setjmp macro in the same invocation of the program with the corresponding
``jmp_buf`` argument. If there has been no such invocation, or if the function containing
the invocation of the setjmp macro has terminated execution [#]_ in the interim, or if the
invocation of the ``setjmp`` macro was within the scope of an identifier with variably
modified type and execution has left that scope in the interim, the behavior is undefined.

All accessible objects have values, and all other components of the abstract machine [#]_
have state, as of the time the ``longjmp`` function was called, except that the values of
objects of automatic storage duration that are local to the function containing the
invocation of the corresponding setjmp macro that do not have volatile-qualified type
and have been changed between the ``setjmp`` invocation and ``longjmp`` call are
indeterminate.

**Returns**

After ``longjmp`` is completed, program execution continues as if the corresponding
invocation of the ``setjmp`` macro had just returned the value specified by ``val``. The
``longjmp`` function cannot cause the ``setjmp`` macro to return the value 0; if ``val`` is 0,
the ``setjmp`` macro returns the value 1.

EXAMPLE The ``longjmp`` function that returns control back to the point of the ``setjmp`` invocation
might cause memory associated with a variable length array object to be squandered.

.. code-block:: c

   #include <setjmp.h>

   jmp_buf buf;
   void g(int n);
   void h(int n);
   int n = 6;

   void f(void)
   {
     int x[n]; // valid: f is not terminated
     setjmp(buf);
     g(n);
   }

   void g(int n)
   {
     int a[n]; // a may remain allocated
     h(n);
   }

   void h(int n)
   {
     int b[n]; // b may remain allocated
     longjmp(buf, 2); // might cause memory loss
   }


.. [#] For example, by executing a ``return`` statement or because another ``longjmp`` call has caused a
  transfer to a ``setjmp`` invocation in a function earlier in the set of nested calls.
.. [#] This includes, but is not limited to, the floating-point status flags and the state of open files.

