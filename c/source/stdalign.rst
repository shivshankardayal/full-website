Alignment ``<stdalign.h>``
**************************
The header ``<stdalign.h>`` defines four macros.

The macro

    ``alignas``

expands to ``_Alignas``; the macro

    ``alignof``

expands to ``_Alignof``.

The remaining macros are suitable for use in ``#if`` preprocessing directives. They are

    ``__alignas_is_defined``

and

    ``__alignof_is_defined``

which both expand to the integer constant 1.
