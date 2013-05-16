.. index:: stdarg.h

.. _stdarg:

Variable arguments ``<stdarg.h>``
*********************************
The header ``<stdarg.h>`` declares a type and defines four macros, for advancing
through a list of arguments whose number and types are not known to the called function
when it is translated.

.. index:: va_list

A function may be called with a variable number of arguments of varying types. As
described in :ref:`4.9.1`, its parameter list contains one or more parameters. The rightmost
parameter plays a special role in the access mechanism, and will be designated ``parmN`` in
this description.

The type declared is

  | ``va_list``

which is an object type suitable for holding information needed by the macros
``va_start, va_arg, va_end`` and ``va_copy``. If access to the varying arguments is
desired, the called function shall declare an object (generally referred to as ap in this
subclause) having type ``va_list``. The object ``ap`` may be passed as an argument to
another function; if that function invokes the ``va_arg`` macro with parameter ap, the
value of ap in the calling function is indeterminate and shall be passed to the ``va_end``
macro prior to any further reference to ap. [#]_

.. [#] It is permitted to create a pointer to a ``va_list`` and pass that pointer to another function, in which
       case the original function may make further use of the original list after the other function returns.

.. index:: va_start macro, va_arg_macro

Variable argument list access macros
====================================
The ``va_start`` and ``va_arg`` macros described in this subclause shall be implemented
as macros, not functions. It is unspecified whether ``va_copy`` and ``va_end`` are macros or
identifiers declared with external linkage. If a macro definition is suppressed in order to
access an actual function, or a program defines an external identifier with the same name,
the behavior is undefined. Each invocation of the ``va_start`` and ``va_copy`` macros
shall be matched by a corresponding invocation of the va_end macro in the same
function.

The ``va_arg`` macro
--------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   type va_arg(va_list ap, type);

**Description**

The ``va_arg`` macro expands to an expression that has the specified type and the value of
the next argument in the call. The parameter ap shall have been initialized by the
``va_start`` or ``va_copy`` macro (without an intervening invocation of the ``va_end``
macro for the same ``ap``). Each invocation of the ``va_arg`` macro modifies ``ap`` so that the
values of successive arguments are returned in turn. The parameter *type* shall be a type
name specified such that the type of a pointer to an object that has the specified type can
be obtained simply by postfixing a ``*`` to *type*. If there is no actual next argument, or if
*type* is not compatible with the type of the actual next argument (as promoted according
to the default argument promotions), the behavior is undefined, except for the following
cases:

* one type is a signed integer type, the other type is the corresponding unsigned integer
  type, and the value is representable in both types;
* one type is pointer to void and the other is a pointer to a character type.

**Returns**

The first invocation of the ``va_arg`` macro after that of the ``va_start`` macro returns the
value of the argument after that specified by ``parmN``. Successive inv ocations return the
values of the remaining arguments in succession.

.. index:: va_copy macro

The ``va_copy`` macro
---------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   void va_copy(va_list dest, va_list src);

**Description**

The ``va_copy`` macro initializes dest as a copy of ``src``, as if the ``va_start`` macro had
been applied to dest followed by the same sequence of uses of the ``va_arg`` macro as
had previously been used to reach the present state of ``src``. Neither the ``va_copy`` nor
``va_start`` macro shall be invoked to reinitialize dest without an intervening
invocation of the ``va_end`` macro for the same dest.

**Returns**

The ``va_copy`` macro returns no value.

.. index:: va_end macro

The ``va_end`` macro
--------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   void va_end(va_list ap);

**Description**

The ``va_end`` macro facilitates a normal return from the function whose variable
argument list was referred to by the expansion of the ``va_start`` macro, or the function
containing the expansion of the ``va_copy`` macro, that initialized the ``va_list ap``. The
``va_end`` macro may modify ``ap`` so that it is no longer usable (without being reinitialized
by the ``va_start`` or ``va_copy`` macro). If there is no corresponding invocation of the
``va_start`` or ``va_copy`` macro or if the ``va_end`` macro is not invoked before the
return, the behavior is undefined.

**Returns**

The ``va_end`` macro returns no value.

.. index:: va_start macro

The ``va_start`` macro
----------------------
**Synopsis**

.. code-block:: c

   #include <stdarg.h>
   void va_start(va_list ap, parmN);

**Description**

The ``va_start`` macro shall be invoked before any access to the unnamed arguments.

The ``va_start`` macro initializes ap for subsequent use by the ``va_arg`` and ``va_end``
macros. Neither the ``va_start`` nor ``va_copy`` macro shall be invoked to reinitialize ``ap``
without an intervening invocation of the ``va_end`` macro for the same ``ap``.

The parameter ``parmN`` is the identifier of the rightmost parameter in the variable
parameter list in the function definition (the one just before the , ``...``). If the parameter
parmN is declared with the ``register`` storage class, with a function or array type, or
with a type that is not compatible with the type that results after application of the default
argument promotions, the behavior is undefined.

**Returns**

The ``va_start`` macro returns no value.

EXAMPLE 1 The function ``f1`` gathers into an array a list of arguments that are pointers to strings (but not
more than ``MAXARGS`` arguments), then passes the array as a single argument to function ``f2``. The number of
pointers is specified by the first argument to ``f1``.

.. code-block:: c

   #include <stdarg.h>

   #define MAXARGS 31

   void f1(int n_ptrs, ...)
   {
     va_list ap;
     char *array[MAXARGS];
     int ptr_no = 0;

       if (n_ptrs > MAXARGS)
         n_ptrs = MAXARGS;

       va_start(ap, n_ptrs);
       while (ptr_no < n_ptrs)
         array[ptr_no++] = va_arg(ap, char *);

       va_end(ap);
       f2(n_ptrs, array);
   }

Each call to ``f1`` is required to have visible the definition of the function or a declaration such as

.. code-block:: c

   void f1(int, ...);

EXAMPLE 2 The function ``f3`` is similar, but saves the status of the variable argument list after the
indicated number of arguments; after ``f2`` has been called once with the whole list, the trailing part of the list
is gathered again and passed to function ``f4``.

.. code-block:: c

   #include <stdarg.h>

   #define MAXARGS 31

   void f3(int n_ptrs, int f4_after, ...)
   {
     va_list ap, ap_save;
     char *array[MAXARGS];
     int ptr_no = 0;

     if (n_ptrs > MAXARGS)
       n_ptrs = MAXARGS;

     va_start(ap, f4_after);

     while (ptr_no < n_ptrs) {
       array[ptr_no++] = va_arg(ap, char *);
       if (ptr_no == f4_after)
         va_copy(ap_save, ap);
     }
     va_end(ap);
     f2(n_ptrs, array);
     // Now process the saved copy.
     n_ptrs -= f4_after;
     ptr_no = 0;
     while (ptr_no < n_ptrs)
       array[ptr_no++] = va_arg(ap_save, char *);
     va_end(ap_save);
     f4(n_ptrs, array);
   }
