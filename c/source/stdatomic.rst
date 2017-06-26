Atomics ``<stdatomic.h>``
*************************
Introduction
============
The header ``<stdatomic.h>`` defines several macros and declares several types
and functions for performing atomic operations on data shared between
threads. [1]_

Implementations that define the macro ``__STDC_NO_ATOMICS__`` need not provide this header nor support any of its facilities.

The macros defined are the atomic lock-free macros

    ``ATOMIC_BOOL_LOCK_FREE``

    ``ATOMIC_CHAR_LOCK_FREE``

    ``ATOMIC_CHAR16_T_LOCK_FREE``

    ``ATOMIC_CHAR32_T_LOCK_FREE``

    ``ATOMIC_WCHAR_T_LOCK_FREE``

    ``ATOMIC_SHORT_LOCK_FREE``

    ``ATOMIC_INT_LOCK_FREE``

    ``ATOMIC_LONG_LOCK_FREE``

    ``ATOMIC_LLONG_LOCK_FREE``

    ``ATOMIC_POINTER_LOCK_FREE``

which indicate the lock-free property of the corresponding atomic types (both signed and unsigned); and

    ``ATOMIC_FLAG_INIT``

which expands to an initializer for an object of type ``atomic_flag``.

The types include

    ``memory_order``

which is an enumerated type whose enumerators identify memory ordering constraints;

    ``atomic_flag``

which is a structure type representing a lock-free, primitive atomic flag; and several atomic analogs of integer types.

In the following synopses:

* An `A` refers to one of the atomic types.
* A `C` refers to its corresponding non-atomic type.
* An `M` refers to the type of the other argument for arithmetic
  operations. For atomic integer types, `M` is `C`. For atomic pointer types,
  `M` is ``ptrdiff_t``.
* The functions not ending in ``_explicit`` have the same semantics as the
  corresponding ``_explicit`` function with ``memory_order_seq_cst`` for the
  ``memory_order`` argument.

NOTE Many operations are volatile-qualified. The "volatile as device register"
semantics have not changed in the standard. This qualification means that
volatility is preserved when applying these operations to volatile objects.

Initialization
==============
The ``ATOMIC_VAR_INIT`` macro
-----------------------------
**Synopsis**

.. code-block:: c

   #include <stdatomic.h>
   #define ATOMIC_VAR_INIT(C value)

**Description**

The **ATOMIC_VAR_INIT** macro expands to a token sequence suitable for
initializing an atomic object of a type that is initialization-compatible with
value. An atomic object with automatic storage duration that is not explicitly
initialized using **ATOMIC_VAR_INIT** is initially in an indeterminate state;
however, the default (zero) initialization for objects with static or
thread-local storage duration is guaranteed to produce a valid state.

Concurrent access to the variable being initialized, even via an atomic
operation, constitutes a data race.

EXAMPLE

.. code-block:: c

    atomic_int guide = ATOMIC_VAR_INIT(42);

The atomic_init generic function
--------------------------------
**Synopsis**

.. code-block:: c

   #include <stdatomic.h>
   void atomic_init(volatile A *obj, C value);

**Description**

The ``atomic_init`` generic function initializes the atomic object pointed to
by obj to the value value, while also initializing any additional state that
the implementation might need to carry for the atomic object.

Although this function initializes an atomic object, it does not avoid data
races; concurrent access to the variable being initialized, even via an atomic
operation, constitutes a data race.

Returns

The atomic_init generic function returns no value.

EXAMPLE

.. code-block:: c

    atomic_int guide;
    atomic_init(&guide, 42);

Order and consistency
=====================
The enumerated type ``memory_order`` specifies the detailed regular
(non-atomic) memory synchronization operations as defined in (iso.5.1.2.4 and
may provide for operation ordering. Its enumeration constants are as follows:
[1]_

    ``memory_order_relaxed``

    ``memory_order_consume``

    ``memory_order_acquire``

    ``memory_order_release``

    ``memory_order_acq_rel``

    ``memory_order_seq_cst``

For ``memory_order_relaxed``, no operation orders memory.

For ``memory_order_release, memory_order_acq_rel`` and
``memory_order_seq_cst``, a store operation performs a release operation on the
affected memory location.

For ``memory_order_acquire, memory_order_acq_rel`` and
``memory_order_seq_cst``, a load operation performs an acquire operation on the
affected memory location.

For ``memory_order_consume``, a load operation performs a consume operation on
the affected memory location.

There shall be a single total order ``S`` on all ``memory_order_seq_cst``
operations, consistent with the "happens before" order and modification orders
for all affected locations, such that each ``memory_order_seq_cst`` operation
`B` that loads a value from an atomic object `M` observes one of the following
values:

* the result of the last modification `A` of `M` that precedes `B` in `S`, if
  it exists, or
* if `A` exists, the result of some modification of `M` in the visible sequence
  of side effects with respect to `B` that is not ``memory_order_seq_cst`` and
  that does not happen before `A`, or
* if `A` does not exist, the result of some modification of `M` in the visible
  sequence of side effects with respect to `B` that is not
  ``memory_order_seq_cst``.


    **NOTE 1**

    Although it is not explicitly required that `S` include lock operations, it
    can always be extended to an order that does include lock and unlock
    operations, since the ordering between those is already included in the
    "happens before" ordering.

    **NOTE 2**

    Atomic operations specifying ``memory_order_relaxed`` are relaxed only with
    respect to memory ordering. Implementations must still guarantee that any
    given atomic access to a particular atomic object be indivisible with respect
    to all other atomic accesses to that object.

For an atomic operation `B` that reads the value of an atomic object `M`, if
there is a ``memory_order_seq_cst`` fence `X` sequenced before `B`, then `B`
observes either the last ``memory_order_seq_cst`` modification of `M` preceding
`X` in the total order `S` or a later modification of `M` in its modification
order.

For atomic operations `A` and `B` on an atomic object `M`, where `A` modifies
`M` and `B` takes its value, if there is a ``memory_order_seq_cst`` fence `X`
such that `A` is sequenced before `X` and `B` follows `X` in `S`, then `B`
observes either the effects of `A` or a later modification of `M` in its
modification order.

For atomic operations A and B on an atomic object M, where A modifies M and B takes its value, if there are memory_order_seq_cst fences X and Y such that A is sequenced before X, Y is sequenced before B, and X precedes Y in S, then B observes either the effects of A or a later modification of M in its modification order.

Atomic read-modify-write operations shall always read the last value (in the modification order) stored before the write associated with the read-modify-write operation.

An atomic store shall only store a value that has been computed from constants and program input values by a finite sequence of program evaluations, such that each evaluation observes the values of variables as computed by the last prior assignment in the sequence.[86] The ordering of evaluations in this sequence shall be such that

    If an evaluation B observes a value computed by A in a different thread, then B does not happen before A.
    If an evaluation A is included in the sequence, then all evaluations that assign to the same variable and happen before A are also included.
.. [1] See "future library direction" (iso.7.31.8).
