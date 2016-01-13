..index:: stdbool.h

Boolean type and values ``<stdbool.h>``
***************************************
.. indeX:: bool macro, _bool, true macro, false macro, __bool_true_flase_are_defined macro

The header ``<stdbool.h>`` defines four macros.
The macro

  | ``bool``

expands to ``_Bool``.

The remaining three macros are suitable for use in ``#if`` preprocessing directives. They
are

  | ``true``

which expands to the integer constant 1,

  | ``false``

which expands to the integer constant 0, and

  | ``__bool_true_false_are_defined``

which expands to the integer constant 1.

Notwithstanding the provisions of :ref:`12.3`, a program may undefine and perhaps then
redefine the macros ``bool, true`` and ``false``. 
