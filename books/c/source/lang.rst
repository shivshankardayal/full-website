.. meta::
  :description: C Programming with C99
  :keywords: Free C Book, C Programming, C99 Programming, C99 Specification, C Programming Language,
             for loop, do loop, do-while loop, if statement, if-else statement, switch statement, data types,
             identifiers, linkage, auto, static, extern, const

Language
*********
This is going to be meat of the book. This chapter is mapped with chapter 6 of
specification. This will almost cover entire language. If you are already
proficient in any programming language you must read it. However for it might
be too involving without much introduction to language. I would recommend to
skip and come back later. I could have put this later but then the flow of
specification would have been broken.

.. index::
   single: notation

Notation
========
In the syntax notation used in this clause, syntactic categories (nonterminals) are
indicated by italic type, and literal words and character set members (terminals) by
**bold** type. A colon (:) following a nonterminal introduces its definition. Alternative
definitions are listed on separate lines, except when prefaced by the words "one of".
An optional symbol is indicated by the subscript "opt", so that

    { :math:`expression_{opt}`}

indicates an optional expression enclosed in braces.

When syntactic categories are referred to in the main text, they are not italicized and
words are separated by spaces instead of hyphens.

A summary of the language syntax is given in annex A.

Concepts
========

.. index::
   pair: scope; identifiers

.. _4.2.1:

Scope of Identifiers
--------------------
An identifier can denote an object; a function; a tag or a member of a
structure, union, or enumeration; a typedef name; a label name; a macro name; or
a macro parameter. The same identifier can denote different entities at
different points in the program. A member of an enumeration is called an
*enumeration constant*. Macro names and macro parameters are not considered
further here, because prior to the semantic phase of program translation any
occurrences of macro names in the source file are replaced by the
preprocessing token sequences that constitute their macro definitions.

The interesting part is "The same identifier can denote different entities at
different points in the program.". This can happen if the identifer is in
different scopes.

.. code-block:: c

  #include <stdio.h>

  void f()
  {
    int f=0;
  }

  int main()
  {
    f();

    return 0;
  }

For each different entity that an identifier designates, the identifier is
visible (i.e., can be used) only within a region of program text called its
*scope*. Different entities designated by the same identifier either have
different scopes, or are in different name spaces. There are four kinds of
scopes: function, file, block, and function prototype. (A *function prototype*
is a declaration of a function that declares the types of its parameters.)

For example; consider following program:

.. code-block:: c

  #include <stdio.h>

  int i = 25;

  void f(int );

  void f(int i)
  {
    printf("%d\n",i); //uses file scope

    i = 24;

    printf("%d\n",i); //uses function scope

    {
      i = 27;
      
      printf("%d\n",i); //uses block scope
    }
  }

  int main()
  {
    f(i);

    return 0;
  }

and the output is::

  25
  24
  27


A label name is the only kind of identifier that has function scope. It can be
used (in a ``goto`` statement) anywhere in the function in which it appears, and
is declared implicitly by its syntactic appearance (followed by a : and a
statement).

For example, consider following program:

.. code-block:: c

  #include <stdio.h>

  void f()
  {
    int i=1;

    ONE:  if(i==2)
	    goto TWO;
	  else {
	    i=2;
	    goto ONE;
	  }
    TWO: ;
    //TWO: goto MAIN; //will cause error
  }

  int main()
  {
    f();
    //goto MAIN; //will cause error
    //MAIN: ; //will cause error

    return 0;
  }

Every other identifier has scope determined by the placement of its declaration 
(in a declarator or type specifier). If the declarator or type specifier that
declares the identifier appears outside of any block or list of parameters, the
identifier has *file scope*, which terminates at the end of the translation
unit. If the declarator or type specifier that declares the identifier appears
inside a block or within the list of parameter declarations in a function
definition, the identifier has *block scope*, which terminates at the end of the
associated block. If the declarator or type specifier that declares the
identifier appears within the list of parameter declarations in a function
prototype (not part of a function definition), the identifier has function
*prototype scope*, which terminates at the end of the function declarator. If an
identifier designates two different entities in the same name space, the scopes
might overlap. If so, the scope of one entity (the *inner scope*) will be a
strict subset of the scope of the other entity (the *outer scope*). Within the
inner scope, the identifier designates the entity declared in the inner scope;
the entity declared in the outer scope is *hidden* (and not visible) within the inner scope.

For example, consider the following program:

.. code-block:: c

  #include <stdio.h>

  void f(int j);

  void f(int i)
  {
    //identifier j not available in this function
    {
      int i=5;
      printf("%d\n",i);
    }
    //printf("%d", i); not available outside inner scope will cause error
  }

  int main()
  {
    f(7);

    return 0;
  }

and the output is::

  5

Unless explicitly stated otherwise, where International Standard uses the term
"identifier" to refer to some entity (as opposed to the syntactic construct), it
refers to the entity in the relevant name space whose declaration is visible at
the point the identifier occurs.

Two identifiers have the same scope if and only if their scopes terminate at the
same point.

Structure, union, and enumeration tags have scope that begins just after the
appearance of the tag in a type specifier that declares the tag. Each
enumeration constant has scope that begins just after the appearance of its
defining enumerator in an enumerator list. Any other identifier has scope that
begins just after the completion of its declarator.

For example, consider the following program:

.. code-block:: c

  #include <stdio.h>

  typedef struct STRUCT {
    struct STRUCT *s1; //just a pointer so can be delared
    struct STRUCT s2;  //objct therefore incomplete type error
  }S;

  int main()
  {
    return 0;
  }

.. code-block:: c

  #include <stdio.h>

  typedef struct {
    int i;
  }S; //type S is has file scope

  int main()
  {
    S s; //s has function scope

    return 0;
  }

**Forward references:** declarations (:ref:`4.7`), function calls (:ref:`4.5.2.2`),
function definitions (:ref:`4.9.1`), identifiers (:ref:`4.4.2`), name spaces of
identifiers (:ref:`4.2.3`), macro replacement (:ref:`12.3`), source file inclusion
(:ref:`12.2`), statements (:ref:`4.8`).

.. _4.2.2:

Linkages of identifiers
-----------------------
An identifier declared in different scopes or in the same scope more than once
can be made to refer to the same object or function by a process called linkage.
[#]_ There are three kinds of linkage: external, internal, and none.

In the set of translation units and libraries that constitutes an entire
program, each declaration of a particular identifier with *external linkage*
denotes the same object or function. Within one translation unit, each
declaration of an identifier with internal linkage denotes the same object or
function. Each declaration of an identifier with *no linkage* denotes a unique
entity.

For example, consider the following program:

.. code-block:: c

  #include <stdio.h>

  int i; //external scope

  void f()
  {
    // int i=0; same problem
    int j=0; //can declare j as j has internal scope
  }

  int main()
  {
    // int i=0; will give redeclaration error
    int j;

    f();

    return 0;
  }

If the declaration of a file scope identifier for an object or a function
contains the storage-class specifier ``static``, the identifier has *internal
linkage*. [#]_

For example, consider the following program:

.. code-block:: c

  #include <stdio.h>

  static int i; //internal scope not visible outside file

  void f()
  {
    // int i=0; same problem
    int j=0; //can declare j as j has internal scope
  }

  int main()
  {
    // int i=0; will give redeclaration error
    int j;

    f();

    return 0;
  }

For an identifier declared with the storage-class specifier ``extern`` in a
scope in which a prior declaration of that identifier is visible, [#]_ if the
prior declaration specifies internal or external linkage, the linkage of the
identifier at the later declaration is the same as the linkage specified at the
prior declaration. If no prior declaration is visible, or if the prior
declaration specifies no linkage, then the identifier has external linkage.

For example, consider the following programs:

.. code-block:: c

  //test.c
  #include <stdio.h>

  int i; //external scope not visible outside file

  int main()
  {
    printf("%d\n", i);
    f();

    return 0;
  }

.. code-block:: c

  //test1.c
  #include <stdio.h>

  extern int i;

  void f()
  {
    printf("%d\n", i);
  }

compile them like ``gcc test.c test1.c -o out``.

The output is::

  0
  0

If the declaration of an identifier for a function has no storage-class
specifier, its linkage is determined exactly as if it were declared with the
storage-class specifier ``extern``. If the declaration of an identifier for an object
has file scope and no storage-class specifier, its linkage is external.

.. code-block:: c

  #include <stdio.h>

  int i;   //external linkage can be called from other files 
  void f() //external linkage can be called from other files
  {
    //do something here
  }

  int main()
  {
    f();

    return 0;
  }

The following identifiers have no linkage: an identifier declared to be anything
other than an object or a function; an identifier declared to be a function
parameter; a block scope identifier for an object declared without the
storage-class specifier extern.

.. code-block:: c

  #include <stdio.h>

  void f(int i) //i has no linkage
  {
  }

  int main()
  {
    {
      int i;//no linkage
      f(i);
    }
    return 0;
  }

If, within a translation unit, the same identifier appears with both internal
and external linkage, the behavior is undefined.

**Forward references:** declarations (:ref:`4.7`), expressions (:ref:`4.5`),
external definitions (:ref:`4.9`), statements (:ref:`4.8`).

.. [#] There is no linkage between different identifiers.
.. [#] A function declaration can contain the storage-class specifier **static**
  only if it is at file scope; see :ref:`4.7.1`.
.. [#] As specified in :ref:`4.2.1`, the later declaration might hide the prior
  declaration.

.. index::
   pair: namespace; identifiers

.. _4.2.3:

Name Spaces of the Identifiers
------------------------------
If more than one declaration of a particular identifier is visible at any point
in a translation unit, the syntactic context disambiguates uses that refer to
different entities. Thus, there are separate *name spaces* for various
categories of identifiers, as follows:

* *label names* (disambiguated by the syntax of the label declaration and use);
* the tags of structures, unions, and enumerations (disambiguated by following
  any [#]_ of the keywords **struct, union** or **enum**);
* the *members* of structures or unions; each structure or union has a separate
  name space for its members (disambiguated by the type of the expression used  
  to access the member via the . or -> operator);
* all other identifiers, called *ordinary identifiers* (declared in ordinary
  declarators or as enumeration constants).

For example, consider the following

.. code-block:: c

  #include <stdio.h>

  struct S{
    int i;
  };

  union U {
    int i;
  };

  int main()
  {
    int i = 0;
    int END = 0;
    int S = 0;
    int U = 0;
    struct S s;
    union U u;

    s.i = 7;
    u.i = 9;

    goto END;
    END: ;

    return 0;
  }


**Forward references:** enumeration specifiers (:ref:`4.7.2.2`), labeled
statements (:ref:`4.8.1`), structure and union specifiers (:ref:`4.7.2.1`),
structure and union members (:ref:`4.5.2.3`), tags (:ref:`4.7.2.3`), the goto
statement (:ref:`4.8.6.1`).

.. [#] There is only one name space for tags even though three are possible.

.. index::
   pair: storge duration; objects

.. _4.2.4:

Storage duration of objects
----------------------------
An object has a *storage duration* that determines its lifetime. There are three
storage durations: static, automatic, and allocated. Allocated storage is
described in :ref:`32.3`.

The *lifetime* of an object is the portion of program execution during which
storage is guaranteed to be reserved for it. An object exists, has a constant
address, [#]_ and retains its last-stored value throughout its lifetime. [#]_ If
an object is referred to outside of its lifetime, the behavior is undefined. The
value of a pointer becomes indeterminate when the object it points to reaches
the end of its lifetime.

.. code-block:: c

  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {
    int *p;
    {
      int i=4;

      p=&i;

      printf("%d %d\n", i, *p);
    }

    //printf("%d\n", i) //will cause error
    printf("%d\n", *p); //dangerous because i is dead

    return 0;
  }

and the output is::

  4 4
  4

Note that even though 4 has been printed for \*p that is because stack has not
been touched. Make some function calls between brace and ``printf`` and most
probably 4 will be overwritten.

An object whose identifier is declared with external or internal linkage, or
with the storage-class specifier ``static`` has *static storage duration*. Its
lifetime is the entire execution of the program and its stored value is
initialized only once, prior to program startup.

.. code-block:: c

  #include <stdio.h>

  void f()
  {
    static int i=0;
    
    printf("%d\n", i++);
  }

  int main()
  {
    f();
    f();
    f();
    
    return 0;
  }

and the output is::

  0
  1
  2

An object whose identifier is declared with no linkage and without the
storage-class specifier ``static`` has *automatic storage duration*.

.. code-block:: c

  #include <stdio.h>

  void f()
  {
    {
      int i=0;
    
      printf("%d\n", i++);
    }
  }

  int main()
  {
    f();
    f();
    f();
    
    return 0;
  }

and the output is::

  0
  0
  0

For such an object that does not have a variable length array type, its lifetime
extends from entry into the block with which it is associated until execution of
that block ends in any way. (Entering an enclosed block or calling a function
suspends, but does not end, execution of the current block.) If the block is
entered recursively, a new instance of the object is created each time. The
initial value of the object is indeterminate. If an initialization is specified
for the object, it is performed each time the declaration is reached in the
execution of the block; otherwise, the value becomes indeterminate each time the
declaration is reached.

.. code-block:: c

  #include <stdio.h>

  void f()
  {
    int i=0;
    static int n=0;
    
    if(n<4)
      printf("%d\n", i++);
    n++;
    f();
  }

  int main()
  {
    f();
    
    return 0;
  }

and the output is::

  0
  0
  0
  0

For such an object that does have a variable length array type, its lifetime
extends from the declaration of the object until execution of the program leaves
the scope of the declaration. [#]_ If the scope is entered recursively, a new
instance of the object is created each time. The initial value of the object is
indeterminate.

**Forward references:** statements (:ref:`4.8`), function calls (:ref:`4.5.2.2`),
declarators (:ref:`4.7.5`), array declarators (:ref:`4.7.5.2`), initialization
(:ref:`4.7.8`).

.. [#] The term "constant address" means that two pointers to the object
  constructed at possibly different times will compare equal. The address may be
  different during two different executions of the same program.
.. [#] In the case of a volatile object, the last store need not be explicit in 
  the program.
.. [#] Leaving the innermost block containing the declaration, or jumping to a
  point in that block or an embedded block prior to the declaration, leaves the 
  scope of the declaration.

.. index::
   single: types

.. _4.2.5:

Types
-----
The meaning of a value stored in an object or returned by a function is
determined by the *type* of the expression used to access it. (An identifier
declared to be an object is the simplest such expression; the type is specified
in the declaration of the identifier.) Types are partitioned into *object types*
(types that fully describe objects), *function types* (types that describe
functions), and *incomplete types* (types that describe objects but lack
information needed to determine their sizes).

An object declared as type ``_Bool`` is large enough to store the values 0 and
1.

.. code-block:: c

  #include <stdio.h>

  int main()
  {
    _Bool b=23;

    printf("%d %d\n", b, sizeof(_Bool));

    return 0;
  }

and the output is::

  1 1

Note that size of 1 byte which means whatever nonzero value we assign will be
converted to 1 implicitly.

An object declared as type ``char`` is large enough to store any member of the
basic execution character set. If a member of the basic execution character set
is stored in a ``char`` object, its value is guaranteed to be nonnegative. If
any other character is stored in a ``char`` object, the resulting value is
implementation-defined but shall be within the range of values that can be
represented in that type.

First let us see how big is ``char``:

.. code-block:: c

  #include <stdio.h>

  int main()
  {
    printf("%d\n", sizeof(char));

    return 0;
  }

and the output is 1. Now let us what we can store in it.

.. code-block:: c

  #include <stdio.h>
  #include <conio.h>
  
  int main()
  {
    for(register int i=0;  i<256; i++)
      printf("%c\t", i);

    return 0;
  }

It will show lots of non-printable characters as well. Run it as ``./a.out|od -c``
and maximum possible characters will be shown.

There are five standard *signed integer types*, designated as``signed char,
short int, int, long int`` and ``long long int``. (These and other types may be
designated in several additional ways, as described in :ref:`4.7.2`.) There may also be
implementation-defined *extended signed integer* types. [#]_ The standard and
extended signed integer types are collectively called signed integer types. [#]_

An object declared as type ``signed char`` occupies the same amount of storage
as a "plain" ``char`` object. A "plain" int object has the natural size
suggested by the architecture of the execution environment (large enough to
contain any value in the range ``INT_MIN`` to ``INT_MAX`` as defined in the
header ``<limits.h>``).

.. code-block:: c

  #include <stdio.h>
  #unclude <limits.h>

  int main()
  {
    printf("%d %d", INT_MIN, INT_MAX);

    return 0;
  }

and the output is::

  -2147483648 2147483647

which is much much greater than ``-127`` and ``128`` possible for out 1 byte
character.

For each of the signed integer types, there is a corresponding (but different)
unsigned integer type (designated with the keyword ``unsigned``) that uses the
same amount of storage (including sign information) and has the same alignment
requirements. The type ``_Bool`` and the *unsigned integer types* that
correspond to the standard signed integer types are the standard unsigned
integer types. The unsigned integer types that correspond to the extended signed
integer types are the *extended unsigned integer types*. The standard and
extended unsigned integer types are collectively called unsigned integer types.
[#]_

The standard signed integer types and standard unsigned integer types are
collectively called the *standard integer types*, the extended signed integer
types and extended unsigned integer types are collectively called the *extended
integer types*.

For any two integer types with the same signedness and different integer
conversion rank (see :ref:`4.3.1.1`), the range of values of the type with smaller
integer conversion rank is a subrange of the values of the other type.

The range of nonnegative values of a signed integer type is a subrange of the
corresponding unsigned integer type, and the representation of the same value in
each type is the same. [#]_ A computation involving unsigned operands can never
overflow, because a result that cannot be represented by the resulting unsigned
integer type is reduced modulo the number that is one greater than the largest
value that can be represented by the resulting type.

There are three *real floating types*, designated as ``float, double`` and
``long double``. The set of values of the type ``float`` is a subset of the
set of values of the type ``double``; the set of values of the type ``double``
is a subset of the set of values of the type ``long double``.

There are three *complex types*, designated as ``float _Complex, double
_Complex``, and ``long double _Complex``. The real floating and complex
types are collectively called the *floating types*.

For each floating type there is a *corresponding real type*, which is always a
real floating type. For real floating types, it is the same type. For complex
types, it is the type given by deleting the keyword ``_Complex`` from the type
name.

Each complex type has the same representation and alignment requirements as an
array type containing exactly two elements of the corresponding real type; the
first element is equal to the real part, and the second element to the imaginary
part, of the complex number.

The type ``char``, the signed and unsigned integer types, and the floating types
are collectively called the *basic types*. Even if the implementation defines
two or more basic types to have the same representation, they are nevertheless
different types. [#]_

The three types ``char, signed char`` and ``unsigned char`` are collectively
called the *character types*. The implementation shall define ``char`` to have
the same range, representation, and behavior as either ``signed char`` or
``unsigned char``. [#]_

An *enumeration* comprises a set of named integer constant values. Each distinct
enumeration constitutes a different *enumerated type*.

The type **char**, the signed and unsigned integer types, and the enumerated
types are collectively called *integer types*. The integer and real floating
types are collectively called *real types*.

Integer and floating types are collectively called *arithmetic types*. Each
arithmetic type belongs to one *type domain*: the *real type domain* comprises
the real types, the *complex type domain* comprises the complex types.

The **void** type comprises an empty set of values; it is an incomplete type
that cannot be completed.

Any number of *derived types* can be constructed from the object, function, and
incomplete types, as follows:

* An *array type* describes a contiguously allocated nonempty set of objects
  with a particular member object type, called the *element type*. [#]_ Array
  types are characterized by their element type and by the number of elements in
  the array.  An array type is said to be derived from its element type, and if
  its element type is *T*, the array type is sometimes called "array of *T*".
  The construction of an array type from an element type is called "array type
  derivation".
* A *structure type* describes a sequentially allocated nonempty set of member
  objects (and, in certain circumstances, an incomplete array), each of which
  has an optionally specified name and possibly distinct type.
* A *union type* describes an overlapping nonempty set of member objects, each
  of which has an optionally specified name and possibly distinct type.
* A *function type* describes a function with specified return type. A function
  type is characterized by its return type and the number and types of its
  parameters. A function type is said to be derived from its return type, and if
  its return type is *T*, the function type is sometimes called "function
  returning *T*". The construction of a function type from a return type is
  called "function type derivation".
* A *pointer type* may be derived from a function type, an object type, or an
  incomplete type, called the *referenced type*. A pointer type describes an
  object whose value provides a reference to an entity of the referenced type. A
  pointer type derived from the referenced type *T* is sometimes called "pointer
  to *T*". The construction of a pointer type from a referenced type is called
  "pointer type derivation".

These methods of constructing derived types can be applied recursively.
What this mean is you can have structures of structrues of structures and so on.
Similarly, you can have array of array of array and so on. And you can have array
of array of array of such structures of structures of structures ... .

Arithmetic types and pointer types are collectively called *scalar types*. Array
and structure types are collectively called *aggregate types*. [#]_

An array type of unknown size is an incomplete type. It is completed, for an
identifier of that type, by specifying the size in a later declaration (with
internal or external linkage). A structure or union type of unknown content (as
described in :ref:`4.7.2.3`) is an incomplete type. It is completed, for all
declarations of that type, by declaring the same structure or union tag with its
defining content later in the same scope.

.. code-block:: c

  #include <stdio.h>

  S s[10]; //incomplete type at this moment

  typedef struct {
    int i;
  }S; //type completed here

  int main()
  {  
    return 0;
  }

Array, function, and pointer types are collectively called *derived declarator
types*. A *declarator type derivation* from a type *T* is the construction of a
derived declarator type from *T* by the application of an array-type, a
function-type, or a pointer-type derivation to *T*.

.. code-block:: c

  #include <stdio.h>

  S s[10];

  S f()
  {
    S s1;
    
    return s1;
  }

  S (*g)()
  {
    S s2;
    
    return s2;
  }

  typedef struct {
    int i;
  }S;

  int main()
  {  
    return 0;
  }

A type is characterized by its *type category*, which is either the outermost
derivation of a derived type (as noted above in the construction of derived
type), or the type itself if the type consists of no derived types.

Any type so far mentioned is an unqualified type. Each unqualified type has
several qualified versions of its type, [#]_ corresponding to the combinations
of one, two, or all three of the **const, volatile** and **restrict**
qualifiers. The qualified or unqualified versions of a type are distinct types
that belong to the same type category and have the same representation and
alignment requirements. [#]_ A derived type is not qualified by the qualifiers
(if any) of the type from which it is derived.

A pointer to ``void`` shall have the same representation and alignment
requirements as a pointer to a character type. [17]_ Similarly, pointers to
qualified or unqualified versions of compatible types shall have the same
representation and alignment requirements. All pointers to structure types shall
have the same representation and alignment requirements as each other. All
pointers to union types shall have the same representation and alignment
requirements as each other. Pointers to other types need not have the same
representation or alignment requirements.

.. [#] Implementation-defined keywords shall have the form of an identifier
  reserved for any use as described in 7.1.3.
.. [#] Therefore, any statement in this Standard about signed integer types also
  applies to the extended signed integer types.
.. [#] Therefore, any statement in this Standard about unsigned integer types
  also applies to the extended unsigned integer types.
.. [#] The same representation and alignment requirements are meant to imply
  interchangeability as arguments to functions, return values from functions,
  and members of unions.
.. [#] An implementation may define new keywords that provide alternative ways
  to designate a basic (or any other) type; this does not violate the
  requirement that all basic types be different. Implementation-defined keywords 
  shall have the form of an identifier reserved for any use as described in
  7.1.3.
.. [#] ``CHAR_MIN``, defined in ``<limits.h>``, will have one of the values 0 or
  **SCHAR_MIN**, and this can be used to distinguish the two options.
  Irrespective of the choice made, char is a separate type from the other two
  and is not compatible with either.
.. [#] Since object types do not include incomplete types, an array of
  incomplete type cannot be constructed.
.. [#] Note that aggregate type does not include union type because an object
  with union type can only contain one member at a time.
.. [#] See :ref:`4.7.3` regarding qualified array and function types.
.. [#] The same representation and alignment requirements are meant to imply
  interchangeability as arguments to functions, return values from functions,
  and members of unions.

.. index::
   pair: representation; type

.. _4.2.6:

Representation of Types
-----------------------
General
^^^^^^^
The representations of all types are unspecified except as stated in this subclause.

Except for bit-fields, objects are composed of contiguous sequences of one or
more bytes, the number, order, and encoding of which are either explicitly
specified or implementation-defined.

Values stored in unsigned bit-fields and objects of type **unsigned char** shall
be represented using a pure binary notation. [#]_

Values stored in non-bit-field objects of any other object type consist of *n*
x ``CHAR_BIT`` bits, where *n* is the size of an object of that type, in bytes.
The value may be copied into an object of type unsigned char [*n*] (e.g., by
memcpy); the resulting set of bytes is called the object representation of the
value. Values stored in bit-fields consist of *m* bits, where *m* is the size
specified for the bit-field. The object representation is the set of *m* bits
the bit-field comprises in the addressable storage unit holding it. Two values
(other than NaNs) with the same object representation compare equal, but values
that compare equal may have different object representations.

.. code-block:: c

  #include <stdio.h>

  typedef struct {
    char   c:7;
    int    i:3;
  }S;

  int main()
  {
    S s;

    s.c = '0';
    s.i = 5;

    printf("%c %d\n", s.c, s.i);

    return 0;
  }

and the output is::

  0 -3

Consider the following program:

.. code-block:: c

  #include <stdio.h>

  typedef struct {
    int    i:1;
  }S;

  int main()
  {
    S s;

    s.i = 1;

    printf("%d\n", s.i);

    return 0;
  }

what do you think the output will be?  0 to 1 that is what my gut feeling tells
me but I am wrong. With ``N`` bits the range of integer is :math:`-2^N - 1` to
:math:`2^{N-1} - -1`. This evaluates to -1 to 0. So any even no. stored in 1 bits
field is 0 and any odd no. is -1. Useful for finding odd and even numbers eh?

The output is::

  -1

Certain object representations need not represent a value of the object type. If
the stored value of an object has such a representation and is read by an lvalue
expression that does not have character type, the behavior is undefined. If such
a representation is produced by a side effect that modifies all or any part of
the object by an lvalue expression that does not have character type, the
behavior is undefined. [#]_ Such a representation is called a *trap
representation*.

There are two places where trap representation has been talked about in the
specification. First is parity bits on numeric types which are visible to
software. This is given in footnote 44 of n1124.pdf at page no. 38. Second is
negative zeros in non-twos-complement architecture, given on page 39.

When a value is stored in an object of structure or union type, including in a
member object, the bytes of the object representation that correspond to any
padding bytes take unspecified values. [#]_ The value of a structure or union
object is never a trap representation, even though the value of a member of the
structure or union object may be a trap representation.

When a value is stored in a member of an object of union type, the bytes of the
object representation that do not correspond to that member but do correspond to
other members take unspecified values. What this means is that say you have
two members where one is of ``m`` bytes and another of ``n`` bytes and ``m>n``.
Then if you assign value to one having ``n`` bytes then ``m - n`` bytes will
have unspecified value.

Where an operator is applied to a value that has more than one object
representation, which object representation is used shall not affect the value
of the result. [#]_ Where a value is stored in an object using a type that has
more than one object representation for that value, it is unspecified which
representation is used, but a trap representation shall not be generated.

For example, ``char`` is integral type. Therefore all operations of integers
can be done on characters.

**Forward references:** declarations (:ref:`4.7`), expressions (:ref:`4.5`), lvalues, arrays,
and function designators (:ref:`4.3.2.1`).

.. [#] A positional representation for integers that uses the binary digits 0
	and 1, in which the values represented by successive bits are additive, begin
	with 1, and are multiplied by successive integral powers of 2, except perhaps 
	the bit with the highest position. (Adapted from the American National
	Dictionary for Information Processing Systems.) A byte contains CHAR_BIT bits,
	and the values of type unsigned char range from 0 to
	:math:`2^{CHAR\_BIT} - 1`.
.. [#] Thus, an automatic variable can be initialized to a trap representation
	without causing undefined	behavior, but the value of the variable cannot be
	used until a proper value is stored in it.
.. [#] Thus, for example, structure assignment need not copy any padding bits.
.. [#] It is possible for objects **x** and **y** with the same effective type
	**T** to have the same value when they are accessed as objects of type **T**,
	but to have different values in other contexts. In particular, if **==** is
	defined for type **T**, thenx **==** ydoes not imply that **memcmp(&x, &y,
	sizeof (T)) == 0**. Furthermore, **x == y** does not necessarily imply that
	**x** and **y** have the same value; other operations on values of type **T**
	may distinguish between them.

.. index::
   pair: integer; type

Integer Types
^^^^^^^^^^^^^
For unsigned integer types other than ``unsigned char``, the bits of the object
representation shall be divided into two groups: value bits and padding bits
(there need not be any of the latter). If there are *N* value bits, each bit
shall represent a different power of 2 between 1 and :math:`2^{N-1}`, so that
objects of that type shall be capable of representing values from 0 to
:math:`2^N - 1` using a pure binary representation; this shall be known as the
value representation. The values of any padding bits are unspecified. [#]_

For signed integer types, the bits of the object representation shall be divided
into three groups: value bits, padding bits, and the sign bit. There need not be
any padding bits; there shall be exactly one sign bit. Each bit that is a value
bit shall have the same value as the same bit in the object representation of
the corresponding unsigned type (if there are *M* value bits in the signed type
and *N* in the unsigned type, then *M <= N*). If the sign bit is zero, it shall
not affect the resulting value. If the sign bit is one, the value shall be
modified in one of the following ways:

* the corresponding value with sign bit 0 is negated (*sign and magnitude*);
* the sign bit has the value -(:math:`2^N`) (*two's complement*);
* the sign bit has the value -(:math:`2^N - 1`) (*ones' complement*).

Which of these applies is implementation-defined, as is whether the value with
sign bit 1 and all value bits zero (for the first two), or with sign bit and all
value bits 1 (for ones' complement), is a trap representation or a normal value.
In the case of sign and magnitude and one'’ complement, if this representation
is a normal value it is called a negative zero.

If the implementation supports negative zeros, they shall be generated only by:

* the &, \|, ^, ~, <<, and >> operators with arguments that produce such a
  value;
* the +, -, \*, /, and % operators where one argument is a negative zero and
  the result is zero;
* compound assignment operators based on the above cases.

It is unspecified whether these cases actually generate a negative zero or a
normal zero, and whether a negative zero becomes a normal zero when stored in an
object.

If the implementation does not support negative zeros, the behavior of the &,
\|, ^, ~, <<, and >> operators with arguments that would produce such a value is
undefined.

The values of any padding bits are unspecified. [#]_ A valid (non-trap) object
representation of a signed integer type where the sign bit is zero is a valid
object representation of the corresponding unsigned type, and shall represent
the same value. For any integer type, the object representation where all the
bits are zero shall be a representation of the value zero in that type.

The *precision* of an integer type is the number of bits it uses to represent
values, excluding any sign and padding bits. The *width* of an integer type is
the same but including any sign bit; thus for unsigned integer types the two
values are the same, while for signed integer types the width is one greater
than the precision.

.. [#] Some combinations of padding bits might generate trap representations,
	for example, if one padding bit is a parity bit. Regardless, no arithmetic
	operation on valid values can generate a trap representation other than as
	part of an exceptional condition such as an overflow, and this cannot occur
	with unsigned types. All other combinations of padding bits are alternative
	object representations of the value specified by the value bits.
.. [#] Some combinations of padding bits might generate trap representations,
	for example, if one padding bit is a parity bit. Regardless, no arithmetic
	operation on valid values can generate a trap representation other than as
	part of an exceptional condition such as an overflow. All other combinations
	of padding bits are alternative object representations of the value specified 
	by the value bits.

.. index::
   pair: type; compatible
   pair: type; composite

Compatible and Composite Types
------------------------------
Two types have compatible type if their types are the same. Additional rules
for determining whether two types are compatible are described in :ref:`4.7.2` for type
specifiers, in :ref:`4.7.3` for type qualifiers, and in :ref:`4.7.5` for declarators. [#]_
Moreover, two structure, union, or enumerated types declared in separate
translation units are compatible if their tags and members satisfy the following
requirements: If one is declared with a tag, the other shall be declared with
the same tag. If both are complete types, then the following additional
requirements apply: there shall be a one-to-one correspondence between their
members such that each pair of corresponding members are declared with
compatible types, and such that if one member of a corresponding pair is
declared with a name, the other member is declared with the same name. For two
structures, corresponding members shall be declared in the same order. For two
structures or unions, corresponding bit-fields shall have the same widths. For
two enumerations, corresponding members shall have the same values.

All declarations that refer to the same object or function shall have compatible
type; otherwise, the behavior is undefined.

A *composite type* can be constructed from two types that are compatible; it is
a type that is compatible with both of the two types and satisfies the following
conditions:

* If one type is an array of known constant size, the composite type is an
  array of that size; otherwise, if one type is a variable length array, the
  composite type is that type.
* If only one type is a function type with a parameter type list (a function
  prototype), the composite type is a function prototype with the parameter
  type list.
* If both types are function types with parameter type lists, the type of each
  parameter in the composite parameter type list is the composite type of the
  corresponding parameters.

These rules apply recursively to the types from which the two types are derived.

For an identifier with internal or external linkage declared in a scope in which
a prior declaration of that identifier is visible, [#]_ if the prior declaration
specifies internal or external linkage, the type of the identifier at the later
declaration becomes the composite type.

.. [#] Tw o types need not be identical to be compatible.
.. [#] As specified in :ref:`4.2.1`, the later declaration might hide the prior
	declaration.

.. index::
   single: conversions

Conversions
===========
Several operators convert operand values from one type to another automatically.
This subclause specifies the result required from such an implicit conversion,
as well as those that result from a cast operation (an explicit conversion). The
list in `4.3.1.8` summarizes the conversions performed by most ordinary operators;
it is supplemented as required by the discussion of each operator in `4.5`.

Conversion of an operand value to a compatible type causes no change to the
value or the representation.

**Forward references:** cast operators (:ref:`4.5.4`).

.. index::
   pair: arithmetic; operands

Arithmetic Operands
-------------------

.. index::
   single: boolean
   single: character
   single: integer

.. _4.3.1.1:

Booleans, Characters and Integers
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Every integer type has an *integer conversion rank* defined as follows:
	
* No two signed integer types shall have the same rank, even if they have the
  same representation.
* The rank of a signed integer type shall be greater than the rank of any
  signed integer type with less precision.
* The rank of ``long long int`` shall be greater than the rank of ``long
  int``, which shall be greater than the rank of ``int``, which shall be
  greater than the rank of short int, which shall be greater than the rank of 
  ``signed char``.
* The rank of any unsigned integer type shall equal the rank of the
  corresponding signed integer type, if any.
* The rank of any standard integer type shall be greater than the rank of any
  extended integer type with the same width.
* The rank of ``char`` shall equal the rank of ``signed char`` and ``unsigned
  char``.
* The rank of ``_Bool`` shall be less than the rank of all other standard
  integer types.
* The rank of any enumerated type shall equal the rank of the compatible
  integer type (see :ref:`4.7.2.2`).
* The rank of any extended signed integer type relative to another extended
  signed integer type with the same precision is implementation-defined, but
  still subject to the other rules for determining the integer conversion rank.
* For all integer types ``T1, T2,`` and ``T3``, if ``T1`` has greater rank than
  ``T2`` and ``T2`` has greater rank than ``T3``, then ``T1`` has greater rank 
  than ``T3``.

The following may be used in an expression wherever an int or unsigned int may
be used:

* An object or expression with an integer type whose integer conversion rank is
  less than or equal to the rank of ``int`` and ``unsigned int``.
* A bit-field of type ``_Bool, int, signed int,`` or ``unsigned int``.

If an ``int`` can represent all values of the original type, the value is
converted to an ``int``; otherwise, it is converted to an ``unsigned int``. These
are called the integer promotions. [#]_ All other types are unchanged by the
integer promotions.

The integer promotions preserve value including sign. As discussed earlier,
whether a "plain" ``char`` is treated as signed is implementation-defined.

**Forward references:** enumeration specifiers (:ref:`4.7.2.2`), structure and union
specifiers (:ref:`4.7.2.1`).

.. [#] The integer promotions are applied only: as part of the usual arithmetic
	conversions, to certain argument expressions, to the operands of the unary +,
	-, and ~ operators, and to both operands of the shift operators, as specified
	by their respective subclauses.

.. index::
   pair: type; boolean

Boolean Type
^^^^^^^^^^^^
When any scalar value is converted to ``_Bool``, the result is 0 if the value
compares equal to 0; otherwise, the result is 1.

.. index::
   pair: integer; signed
   pair: integer; unsigned

Signed and Unsigned Integers
^^^^^^^^^^^^^^^^^^^^^^^^^^^^
When a value with integer type is converted to another integer type other than
``_Bool``, if the value can be represented by the new type, it is unchanged.

Otherwise, if the new type is unsigned, the value is converted by repeatedly
adding or subtracting one more than the maximum value that can be represented in 
the new type until the value is in the range of the new type. [#]_

Otherwise, the new type is signed and the value cannot be represented in it;
either the result is implementation-defined or an implementation-defined signal
is raised.

.. [#] The rules describe arithmetic on the mathematical value, not the value of 
	a given type of expression.

.. index::
   single: real floating
   single: real integer

.. _4.3.1.4:

Real Floating and Integer
^^^^^^^^^^^^^^^^^^^^^^^^^
When a finite value of real floating type is converted to an integer type other
than ``_Bool``, the fractional part is discarded (i.e., the value is truncated
toward zero). If the value of the integral part cannot be represented by the
integer type, the behavior is undefined. [#]_

When a value of integer type is converted to a real floating type, if the value
being converted can be represented exactly in the new type, it is unchanged. If
the value being converted is in the range of values that can be represented but
cannot be represented exactly, the result is either the nearest higher or nearest
lower representable value, chosen in an implementation-defined manner. If the
value being converted is outside the range of values that can be represented, the
behavior is undefined.

.. [#] The remaindering operation performed when a value of integer type is
	converted to unsigned type need not be performed when a value of real floating 
	type is converted to unsigned type. Thus, the range of portable real floating
	values is (-1, U *type* _ **MAX+1** ).

.. index::
   pair: type; real floating

.. _4.3.1.5:

Real Floating Types
^^^^^^^^^^^^^^^^^^^
When a ``float`` is promoted to ``double`` or ``long double``, or a ``double`` is
promoted to ``long double``, its value is unchanged.

When a ``double`` is demoted to ``float``, a ``long double`` is demoted to
``double`` or ``float``, or a value being represented in greater precision and
range than required by its semantic type (see :ref:`4.3.1.8`) is explicitly converted to
its semantic type, if the value being converted can be represented exactly in the
new type, it is unchanged. If the value being converted is in the range of values
that can be represented but cannot be represented exactly, the result is either
the nearest higher or nearest lower representable value, chosen in an
implementation-defined manner. If the value being converted is outside the range
of values that can be represented, the behavior is undefined.

.. index::
   pair: type; complex

Complex Types
^^^^^^^^^^^^^
When a value of complex type is converted to another complex type, both the real
and imaginary parts follow the conversion rules for the corresponding real types.

Real and Complex
^^^^^^^^^^^^^^^^
When a value of real type is converted to a complex type, the real part of the
complex result value is determined by the rules of conversion to the
corresponding real type and the imaginary part of the complex result value is a
positive zero or an unsigned zero.

When a value of complex type is converted to a real type, the imaginary part of
the complex value is discarded and the value of the real part is converted
according to the conversion rules for the corresponding real type.

.. index::
   pair: arithmetic; conversions

.. _4.3.1.8:

Usual Arithmetic Conversions
^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Many operators that expect operands of arithmetic type cause conversions and
yield result types in a similar way. The purpose is to determine a *common real
type* for the operands and result. For the specified operands, each operand is
converted, without change of type domain, to a type whose corresponding real type
is the common real type. Unless explicitly stated otherwise, the common real type
is also the corresponding real type of the result, whose type domain is the type
domain of the operands if they are the same, and complex otherwise. This pattern
is called the *usual arithmetic conversions*:

* First, if the corresponding real type of either operand is ``long double``, the
  other operand is converted, without change of type domain, to a type whose
  corresponding real type is long double.

* Otherwise, if the corresponding real type of either operand is double, the
  other operand is converted, without change of type domain, to a type whose
  corresponding real type is double.

* Otherwise, if the corresponding real type of either operand is float, the other
  operand is converted, without change of type domain, to a type whose
  corresponding real type is float. [#]_

* Otherwise, the integer promotions are performed on both operands. Then the
  following rules are applied to the promoted operands:

  * If both operands have the same type, then no further conversion is needed.

  * Otherwise, if both operands have signed integer types or both have unsigned
    integer types, the operand with the type of lesser integer conversion rank is
    converted to the type of the operand with greater rank.

  * Otherwise, if the operand that has unsigned integer type has rank greater or
    equal to the rank of the type of the other operand, then the operand with
    signed integer type is converted to the type of the operand with unsigned
    integer type.

  * Otherwise, if the type of the operand with signed integer type can represent
    all of the values of the type of the operand with unsigned integer type, then
    the operand with unsigned integer type is converted to the type of the
    operand with signed integer type.

  * Otherwise, both operands are converted to the unsigned integer type
    corresponding to the type of the operand with signed integer type.
  
The values of floating operands and of the results of floating expressions may be
represented in greater precision and range than that required by the type; the
types are not changed thereby. [#]_

.. [#] For example, addition of a ``double _Complex`` and a ``float`` entails
	just the conversion of the ``float`` operand to ``double`` (and yields a
	``double _Complex`` result).
.. [#] The cast and assignment operators are still required to perform their
	specified conversions as described in :ref:`4.3.1.4` and :ref:`4.3.1.5`.

.. _4.3.2.1:

Other Operands
--------------

.. index::
   single: lvalue
   single: array
   pair: designator; function

Lvalues, Arrays and Function Designators
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
An *lvalue* is an expression with an object type or an incomplete type other than``void``; [#]_ if an lvalue does not designate an object when it is evaluated,
the behavior is undefined. When an object is said to have a particular type, the
type is specified by the lvalue used to designate the object. A *modifiable
lvalue* is an lvalue that does not have array type, does not have an incomplete
type, does not have a const-qualified type, and if it is a structure or union,
does not have any member (including, recursively, any member or element of
all contained aggregates or unions) with a const-qualified type.

Except when it is the operand of the ``sizeof`` operator, the unary & operator,
the ++ operator, the -- operator, or the left operand of the . operator or an
assignment operator, an lvalue that does not have array type is converted to the
value stored in the designated object (and is no longer an lvalue). If the lvalue
has qualified type, the value has the unqualified version of the type of the
lvalue; otherwise, the value has the type of the lvalue. If the lvalue has an
incomplete type and does not have array type, the behavior is undefined.

Except when it is the operand of the sizeof operator or the unary & operator, or
is a string literal used to initialize an array, an expression that has type
"array of type" is converted to an expression with type "pointer to type" that
points to the initial element of the array object and is not an lvalue. If the
array object has register storage class, the behavior is undefined.

A *function designator* is an expression that has function type. Except when it
is the operand of the ``sizeof`` operator [#]_ or the unary & operator, a function
designator with type "function returning type" is converted to an expression that
has type "pointer to function returning type".

For example, consider following:

.. code-block:: c

  #include <stdio.h>

  void f()
  {
    printf("Hello\n");
  }

  int main()
  {
    f();
    (*f)();
    (&f)();
    (**f)();
    (***f)();

    return 0;
  }

and the output is::

  Hello
  Hello
  Hello
  Hello
  Hello

**Forward references:** address and indirection operators (:ref:`4.5.3.2`), assignment
operators (:ref:`4.5.16`), common definitions ``<stddef.h>`` (:ref:`stddef`), initialization
(:ref:`4.7.8`), postfix increment and decrement operators (:ref:`4.5.2.4`), prefix increment
and decrement operators (:ref:`4.5.3.1`), the sizeof operator (:ref:`4.5.3.4`), structure and
union members (:ref:`4.5.2.3`).

.. [#] The name "lvalue" comes originally from the assignment expression E1 = E2,
	in which the left operand ``E1`` is required to be a (modifiable) lvalue. It is
	perhaps better considered as representing an object "locator value". What is
	sometimes called "rvalue" is in this International Standard described
	as the "value of an expression".

	An obvious example of an lvalue is an identifier of an object. As a further
	example, if ``E`` is a unary expression that is a pointer to an object, ``\*E``
	is an lvalue that designates the object to which ``E`` points.

.. [#] Because this conversion does not occur, the operand of the sizeof operator
	remains a function designator and violates the constraint in 4.5.3.4.

.. index::
   single: void

void
^^^^
The (nonexistent) value of a *void* expression (an expression that has type void)
shall not be used in any way, and implicit or explicit conversions (except to
``void``) shall not be applied to such an expression. If an expression of any
other type is evaluated as a void expression, its value or designator is
discarded. (A void expression is evaluated for its side effects.)

.. index::
   single: pointer

Pointers
^^^^^^^^
A pointer to ``void`` may be converted to or from a pointer to any incomplete or
object type. A pointer to any incomplete or object type may be converted to a
pointer to ``void`` and back again; the result shall compare equal to the
original pointer.

For any qualifier q, a pointer to a non-q-qualified type may be converted to a
pointer to the q-qualified version of the type; the values stored in the original
and converted pointers shall compare equal.

An integer constant expression with the value 0, or such an expression cast to
type ``void`` \*, is called a *null pointer constant*. [#]_ If a null pointer
constant is converted to a pointer type, the resulting pointer, called a *null
pointer*, is guaranteed to compare unequal to a pointer to any object or
function.

Conversion of a null pointer to another pointer type yields a null pointer of
that type. Any two null pointers shall compare equal.

An integer may be converted to any pointer type. Except as previously specified,
the result is implementation-defined, might not be correctly aligned, might not
point to an entity of the referenced type, and might be a trap representation.
[#]_

Any pointer type may be converted to an integer type. Except as previously
specified, the result is implementation-defined. If the result cannot be
represented in the integer type, the behavior is undefined. The result need not
be in the range of values of any integer type.

A pointer to an object or incomplete type may be converted to a pointer to a
different object or incomplete type. If the resulting pointer is not correctly
aligned [#]_ for the pointed-to type, the behavior is undefined. Otherwise, when
converted back again, the result shall compare equal to the original pointer.
When a pointer to an object is converted to a pointer to a character type, the
result points to the lowest addressed byte of the object. Successive increments
of the result, up to the size of the object, yield pointers to the remaining
bytes of the object.

A pointer to a function of one type may be converted to a pointer to a function
of another type and back again; the result shall compare equal to the original
pointer. If a converted pointer is used to call a function whose type is not
compatible with the pointed-to type, the behavior is undefined.

**Forward references:** cast operators (:ref:`4.5.4`), equality operators (:ref:`4.5.9`),
integer types capable of holding object pointers (:ref:`30.1.4`), simple assignment
(:ref:`4.5.16.1`).

.. [#] The macro ``NULL`` is defined in ``<stddef.h>`` (and other headers) as a
	null pointer constant; see 7.17.
.. [#] The mapping functions for converting a pointer to an integer or an integer
	to a pointer are intended to be consistent with the addressing structure of the
	execution environment.
.. [#] In general, the concept "correctly aligned" is transitive: if a pointer
	to type A is correctly aligned for a pointer to type B, which in turn is
	correctly aligned for a pointer to type C, then a pointer to type A is
	correctly aligned for a pointer to type C.

Lexical Elements
================
**Constraints**

Each preprocessing token that is converted to a token shall have the lexical form
of a keyword, an identifier, a constant, a string literal, or a punctuator.

**Semantics**

A *token* is the minimal lexical element of the language in translation phases 7
and 8. The categories of tokens are: keywords, identifiers, constants, string
literals, and punctuators. A preprocessing token is the minimal lexical element
of the language in translation phases 3 through 6. The categories of
preprocessing tokens are: header names, identifiers, preprocessing numbers,
character constants, string literals, punctuators, and single non-white-space
characters that do not lexically match the other preprocessing token categories.
[#]_ If a ' or a " character matches the last category, the behavior is
undefined. Preprocessing tokens can be separated by white space; this consists of
comments (described later), or white-space characters (space, horizontal tab,
new-line, vertical tab, and form-feed), or both. As described in :ref:`macros`, in certain
circumstances during translation phase 4, white space (or the absence thereof)
serves as more than preprocessing token separation. White space may appear within
a preprocessing token only as part of a header name or between the quotation
characters in a character constant or string literal.

If the input stream has been parsed into preprocessing tokens up to a given
character, the next preprocessing token is the longest sequence of characters
that could constitute a preprocessing token. There is one exception to this rule:
a header name preprocessing token is only recognized within a #include
preprocessing directive, and within such a directive, a sequence of characters
that could be either a header name or a string literal is recognized as the
former.

EXAMPLE 1 The program fragment ``1Ex`` is parsed as a preprocessing number token
(one that is not a valid floating or integer constant token), even though a
parse as the pair of preprocessing tokens ``1`` and ``Ex`` might produce a
valid expression (for example, if ``Ex`` were a macro defined as ``+1``).
Similarly, the program fragment ``1E1`` is parsed as a preprocessing number
(one that is a valid floating constant token), whether or not ``E`` is a
macro name.

EXAMPLE 2 The program fragment ``x+++++y`` is parsed as ``x ++ ++ + y``,
which violates a constraint on increment operators, even though the parse
``x ++ + ++ y`` might yield a correct expression.


**Forward references:** character constants (:ref:`4.4.4.4`), comments (:ref:`4.4.9`),
expressions (:ref:`4.5`), floating constants (:ref:`4.4.4.2`), header names
(:ref:`4.4.7`), macro replacement (:ref:`12.3`), postfix increment and decrement
operators (:ref:`4.5.2.4`), prefix increment and decrement operators (:ref:`4.5.3.1`),
preprocessing directives (:ref:`macros`), preprocessing numbers (:ref:`4.4.8`),
string literals (:ref:`4.4.5`).

.. [#] An additional category, placemarkers, is used internally in translation
	phase 4 (see :ref:`12.3.3`); it cannot occur in source files.

Keywords
--------
List of keywords are given in :ref:`3.2`

The keywords token (case sensitive) are reserved (in translation phases 7 and
8) for use as keywords, and shall not be used otherwise. The keyword
``_Imaginary`` is reserved for specifying imaginary types. [#]_

.. [#] One possible specification for imaginary types appears in annex G.

.. index::
   single: identifiers

.. _4.4.2:

Identifiers
-----------

.. _4.4.2.1:

General
^^^^^^^
The characterset for ideantifiers is given in :ref:`5.1`.

**Semantics**

An identifier is a sequence of nondigit characters (including the underscore
``_``, the lowercase and uppercase Latin letters, and other characters) and
digits, which designates one or more entities as described in :ref:`4.2.1`.
Lowercase and uppercase letters are distinct. There is no specific limit
on the maximum length of an identifier

Each universal character name in an identifier shall designate a character
whose encoding in ISO/IEC 10646 falls into one of the ranges specified in
annex D. [#]_ The initial character shall not be a universal character
name designating a digit. An implementation may allow multibyte characters
that are not part of the basic source character set to appear in
identifiers; which characters and their correspondence to universal character
names is implementation-defined.

When preprocessing tokens are converted to tokens during translation phase
7, if a preprocessing token could be converted to either a keyword or an
identifier, it is converted to a keyword.

**Implementation limits**

As discussed in :ref:`3.2.4.1`, an implementation may limit the number of
significant initial characters in an identifier; the limit for an *external
name* (an identifier that has external linkage) may be more restrictive
than that for an *internal name* (a macro name or an identifier that does
not have external linkage). The number of significant characters in an
identifier is implementation-defined.

Any identifiers that differ in a significant character are different
identifiers. If two identifiers differ only in nonsignificant characters,
the behavior is undefined.

**Forward references:** universal character names (:ref:`4.4.3`), macro replacement
(:ref:`12.3`).

.. [#] On systems in which linkers cannot accept extended characters, an
  encoding of the universal character name may be used in forming valid
  external identifiers. For example, some otherwise unused character or
  sequence of characters may be used to encode the \\u in a universal
  character name. Extended characters may produce a long external identifier.

.. index::
   pair: predefined; identifiers

.. _4.4.2.2:

Predefined identifiers
^^^^^^^^^^^^^^^^^^^^^^
**Semantics**

The identifier "__func__" shall be implicitly declared by the translator as if,
immediately following the opening brace of each function definition, the declaration

.. code-block:: c

  static const char __func__[] = "function-name";

appeared, where *function-name* is the name of the lexically-enclosing function. [#]_

This name is encoded as if the implicit declaration had been written in the source
character set and then translated into the execution character set as indicated in
translation phase 5.

EXAMPLE Consider the code fragment:

.. code-block:: c

  #include <stdio.h>
  void myfunc(void)
  {
    printf("%s\n", __func__);
    /* ... */
  }

Each time the function is called, it will print to the standard output stream::

  myfunc

**Forward references:** function definitions (:ref:`4.9.1`).

.. [#] Since the name ``__func__`` is reserved for any use by the implementation
  (:ref:`12.3`), if any other identifier is explicitly declared using the name
  ``__func__``, the behavior is undefined.

.. index::
   single: universal character names

.. _4.4.3:

Universal character names
-------------------------
**Constraints**

A universal character name shall not specify a character whose short identifier
is less than 00A0 other than 0024 (\$), 0040 (@), or 0060 ('), nor one in the
range D800 through DFFF inclusive. [#]_

**Description**

Universal character names may be used in identifiers, character constants, and string
literals to designate characters that are not in the basic character set.

**Semantics**

The universal character name \\Unnnnnnnn designates the character whose eight-digit
short identifier (as specified by ISO/IEC 10646) is nnnnnnnn. [#]_ Similarly, the
universal character name \\unnnn designates the character whose four-digit
short identifier is nnnn (and whose eight-digit short identifier is 0000nnnn).

.. [#] The disallowed characters are the characters in the basic character set
  and the code positions reserved by ISO/IEC 10646 for control characters, the
  character DELETE, and the S-zone (reserved for use by UTF-16).
.. [#] Short identifiers for characters were first specified in ISO/IEC
  10646-1/AMD9:1997.

.. index::
   single: constants

.. _4.4.4:

Constants
---------
**Constraints**

The value of a constant shall be in the range of representable values for its type.

**Semantics**

Each constant has a type, determined by its form and value, as detailed later.

.. index::
   pair: constants; integer

.. _4.4.4.1:

Integer Constants
^^^^^^^^^^^^^^^^^
**Description**

An integer constant begins with a digit, but has no period or exponent part. It
may have a prefix that specifies its base and a suffix that specifies its type.

A decimal constant begins with a nonzero digit and consists of a sequence of
decimal digits. An octal constant consists of the prefix ``0`` optionally
followed by a sequence of the digits ``0`` through ``7`` only. A hexadecimal constant
consists of the prefix ``0x`` or ``0X`` followed by a sequence of
the decimal digits and the letters ``a`` (or ``A``) through ``f`` (or ``F``)
with values ``10`` through ``15`` respectively.

**Semantics**

The value of a decimal constant is computed base 10; that of an octal
constant, base 8; that of a hexadecimal constant, base 16. The
lexically first digit is the most significant.

The type of an integer constant is the first of the corresponding list in
which its value can be represented.

+-----------------------+--------------------------------+---------------------------------+
| Suffix                | Decimal Constant               | Octal or Hexadecimal Constant   |
+=======================+================================+=================================+
| none                  |  ``int``                       | ``int``                         |
|                       |                                |                                 |
|                       |  ``long int``                  | ``unsigned int``                |
|                       |                                |                                 |
|                       |  ``long long int``             | ``long int``                    |
|                       |                                |                                 |
|                       |                                | ``unsigned long int``           |
|                       |                                |                                 |
|                       |                                | ``long long int``               |
|                       |                                |                                 |
|                       |                                | ``unsigned long long int``      |
+-----------------------+--------------------------------+---------------------------------+
| ``u`` or ``U``        | ``unsigned int``               | ``unsigned int``                |
|                       |                                |                                 |
|                       | ``unsigned long int``          | ``unsigned long int``           |
|                       |                                |                                 |
|                       | ``unsgined long long int``     | ``unsigned long long int``      |
+-----------------------+--------------------------------+---------------------------------+
| ``l`` or ``L``        | ``long int``                   | ``long int``                    |
|                       |                                |                                 |
|                       | ``long long int``              | ``unsigned long int``           |
|                       |                                |                                 |
|                       |                                | ``long long int``               |
|                       |                                |                                 |
|                       |                                | ``unsigned long long int``      |
+-----------------------+--------------------------------+---------------------------------+
| Both ``u`` or ``U``   | ``unsigned long int``          | ``unsgined long int``           |
|                       |                                |                                 |
| and ``l`` or ``L``    | ``unsigned long long int``     | ``unsigned long long int``      |
+-----------------------+--------------------------------+---------------------------------+
| ``ll`` or ``LL``      | ``long long int``              | ``long long int``               |
|                       |                                |                                 |
|                       |                                | ``unsigned long long int``      |
+-----------------------+--------------------------------+---------------------------------+
| Both ``u`` or ``U``   | ``unsigned long long int``     | ``unsigned long long int``      |
|                       |                                |                                 |
| and ``ll`` or ``LL``  |                                |                                 |
+-----------------------+--------------------------------+---------------------------------+

If an integer constant cannot be represented by any type in its list, it may have an
extended integer type, if the extended integer type can represent its value. If all of the
types in the list for the constant are signed, the extended integer type shall be signed. If
all of the types in the list for the constant are unsigned, the extended integer type shall
be unsigned. If the list contains both signed and unsigned types, the extended integer type
may be signed or unsigned.

.. index::
   pair: contants; floating

.. _4.4.4.2:

Floating Constants
^^^^^^^^^^^^^^^^^^
**Description**

A floating constant has a *significand part* that may be followed by an
*exponent part* and a suffix that specifies its type. The components of the
significand part may include a digit sequence representing the whole-number
part, followed by a period (.), followed by a digit sequence representing
the fraction part. The components of the exponent part are an ``e, E, p``
or ``P`` followed by an exponent consisting of an optionally signed digit
sequence. Either the whole-number part or the fraction part has to be
present; for decimal floating constants, either the period or the exponent
part has to be present.

**Semantics**

The significand part is interpreted as a (decimal or hexadecimal) rational number; the
digit sequence in the exponent part is interpreted as a decimal integer. For decimal
floating constants, the exponent indicates the power of 10 by which the significand part is
to be scaled. For hexadecimal floating constants, the exponent indicates the power of 2
by which the significand part is to be scaled. For decimal floating constants, and also for
hexadecimal floating constants when ``FLT_RADIX`` is not a power of 2, the result is either
the nearest representable value, or the larger or smaller representable value immediately
adjacent to the nearest representable value, chosen in an implementation-defined manner.
For hexadecimal floating constants when ``FLT_RADIX`` is a power of 2, the result is
correctly rounded.

An unsuffixed floating constant has type ``double``. If suffixed by the letter
``f`` or ``F``, it has type ``float``. If suffixed by the letter ``l`` or L,
it has type ``long double``.

Floating constants are converted to internal format as if at translation-time. The
conversion of a floating constant shall not raise an exceptional condition or a floating-
point exception at execution time.

**Recommended practice**

The implementation should produce a diagnostic message if a hexadecimal constant
cannot be represented exactly in its evaluation format; the implementation should then
proceed with the translation of the program.

The translation-time conversion of floating constants should match the execution-time
conversion of character strings by library functions, such as strtod, given matching
inputs suitable for both conversions, the same result format, and default execution-time
rounding. [#]_

.. [#] The specification for the library functions recommends more accurate
  conversion than required for floating constants (see :ref:`32.1.3`).

.. index::
   pair: constants; enumeration

.. _4.4.4.3:

Enumeration constants
^^^^^^^^^^^^^^^^^^^^^
**Semantics**

An identifier declared as an enumeration constant has type ``int``.

**Forward references:** enumeration specifiers (:ref:`4.7.2.2`).

.. index::
   pair: constants; character

.. _4.4.4.4:

Character constants
^^^^^^^^^^^^^^^^^^^
**Description**

An integer character constant is a sequence of one or more multibyte characters enclosed
in single-quotes, as in ``'x'``. A wide character constant is the same, except prefixed
by the letter ``L``. With a few exceptions detailed later, the elements of the sequence
are any members of the source character set; they are mapped in an implementation-defined
manner to members of the execution character set.

The single-quote ', the double-quote ", the question-mark ?, the backslash \\, and
arbitrary integer values are representable according to the following table of escape
sequences:

  |  ``single quote ' \\'``
  |  ``double quote " \\"``
  |  ``question mark ? \\?``
  |  ``backslash \\ \\\\``
  |  ``octal character \\octal digits``
  |  ``hexadecimal character \\x hexadecimal digits``

The double-quote " and question-mark ? are representable either by themselves or by the
escape sequences \\" and \\?, respectively, but the single-quote ' and the backslash \\
shall be represented, respectively, by the escape sequences \\' and \\\\.

The octal digits that follow the backslash in an octal escape sequence are taken to be part
of the construction of a single character for an integer character constant or of a single
wide character for a wide character constant. The numerical value of the octal integer so
formed specifies the value of the desired character or wide character.

The hexadecimal digits that follow the backslash and the letter ``x`` in a hexadecimal escape
sequence are taken to be part of the construction of a single character for an integer
character constant or of a single wide character for a wide character constant. The
numerical value of the hexadecimal integer so formed specifies the value of the desired
character or wide character.

Each octal or hexadecimal escape sequence is the longest sequence of characters that can
constitute the escape sequence.

In addition, characters not in the basic character set are representable by universal
character names and certain nongraphic characters are representable by escape sequences
consisting of the backslash \\ followed by a lowercase letter: \\a, \\b, \\f, \\n, \\r, \\t,
and \\v. [#]_

.. [#] The semantics of these characters were discussed in :ref:`3.2.2`. If any other
  character follows a backslash, the result is not a token and a diagnostic is required.
  See "future language directions" (:ref:`4.11.4`).

**Constraints**

The value of an octal or hexadecimal escape sequence shall be in the range of
representable values for the type ``unsigned char`` for an integer character constant, or
the unsigned type corresponding to ``wchar_t`` for a wide character constant.

**Semantics**

An integer character constant has type ``int``. The value of an integer character constant
containing a single character that maps to a single-byte execution character is the
numerical value of the representation of the mapped character interpreted as an integer.
The value of an integer character constant containing more than one character (e.g.,
``'ab'``), or containing a character or escape sequence that does not map to a single-byte
execution character, is implementation-defined. If an integer character constant contains
a single character or escape sequence, its value is the one that results when an object with
type ``char`` whose value is that of the single character or escape sequence is converted to
type ``int``.

A wide character constant has type ``wchar_t``, an integer type defined in the
``<stddef.h>`` header. The value of a wide character constant containing a single
multibyte character that maps to a member of the extended execution character set is the
wide character corresponding to that multibyte character, as defined by the ``mbtowc``
function, with an implementation-defined current locale. The value of a wide character
constant containing more than one multibyte character, or containing a multibyte
character or escape sequence not represented in the extended execution character set, is
implementation-defined.

EXAMPLE 1 The construction ``'\0'`` is commonly used to represent the null character.

EXAMPLE 2 Consider implementations that use two's-complement representation
for integers and eight bits for objects that have type ``char``. In an
implementation in which type ``char`` has the same range of values as
``signed char``, the integer character constant ``'\xFF'`` has the value ``-1``;
if type ``char`` has the same range of values as ``unsigned char``, the character
constant ``'\xFF'`` has the value ``+255``.

EXAMPLE 3 Even if eight bits are used for objects that have type ``char``, the
construction ``'\x123'`` specifies an integer character constant containing
only one character, since a hexadecimal escape sequence is terminated only
by a non-hexadecimal character. To specify an integer character constant
containing the two characters whose values are ``'\x12'`` and ``'3'``, the
construction ``'\0223'`` may be used, since an octal escape sequence is
terminated after three octal digits. (The value of this two-character
integer character constant is implementation-defined.)

EXAMPLE 4 Even if ``12`` or more bits are used for objects that have type
``wchar_t``, the construction ``L'\1234'`` specifies the implementation-defined
value that results from the combination of the values ``0123`` and ``'4'``.

**Forward references:** common definitions ``<stddef.h>`` (:ref:`stddef`), the
``mbtowc`` function (:ref:`32.7.2`).

.. index::
   pair: literals; string

.. _4.4.5:

String literals
---------------
**Description**

A *character string literal* is a sequence of zero or more multibyte characters
enclosed in double-quotes, as in "xyz". A *wide string literal* is the same,
except prefixed by the letter ``L``.

The same considerations apply to each element of the sequence in a character
string literal or a wide string literal as if it were in an integer character
constant or a wide character constant, except that the single-quote ``'``
is representable either by itself or by the escape sequence ``\'``, but
the double-quote ``"`` shall be represented by the escape sequence ``\"``.

**Semantics**

In translation phase 6, the multibyte character sequences specified by any sequence of
adjacent character and wide string literal tokens are concatenated into a single multibyte
character sequence. If any of the tokens are wide string literal tokens, the resulting
multibyte character sequence is treated as a wide string literal; otherwise, it is treated
as a character string literal.

In translation phase 7, a byte or code of value zero is appended to each multibyte
character sequence that results from a string literal or literals.66) The multibyte
character sequence is then used to initialize an array of static storage duration
and length just sufficient to contain the sequence. For character string literals,
the array elements have type ``char``, and are initialized with the individual
bytes of the multibyte character sequence; for wide string literals, the array
elements have type ``wchar_t``, and are initialized with the sequence of wide
characters corresponding to the multibyte character sequence, as defined by the
``mbstowcs`` function with an implementation-defined current locale. The value
of a string literal containing a multibyte character or escape sequence
not represented in the execution character set is implementation-defined.

It is unspecified whether these arrays are distinct provided their elements have the
appropriate values. If the program attempts to modify such an array, the behavior is
undefined.

EXAMPLE This pair of adjacent character string literals::

  "\x12" "3"

produces a single character string literal containing the two characters whose values
are ``'\x12'`` and ``'3'``, because escape sequences are converted into single members
of the execution character set just prior to adjacent string literal concatenation.

**Forward references:** common definitions ``<stddef.h>`` (:ref:`stddef`), the ``mbstowcs``
function (:ref:`32.8.11`).

.. index::
   single: punctuators

.. _4.4.6:

Punctuators
-----------
These are one of::

  [ ] ( ) { } . -> ++ -- & * + - ~ ! / % << >> < > <= > ? : ; ... = *= /=
  %= += -= <<= , # ## <: :> <% %> %: %:%: == >>= != &= ^ | ^= &&  || |=

**Semantics**

A punctuator is a symbol that has independent syntactic and semantic significance.
Depending on context, it may specify an operation to be performed (which in turn may
yield a value or a function designator, produce a side effect, or some combination thereof)
in which case it is known as an *operator* (other forms of operator also exist in some
contexts). An *operand* is an entity on which an operator acts.

In all aspects of the language, the six tokens [#]_ ::

  <: :> <% %> %: %:%:

behave, respectively, the same as the six tokens::

  [ ] { } # ##

except for their spelling. [#]_

Forward references: expressions (:ref:`4.5`), declarations (:ref:`4.7`),
preprocessing directives (:ref:`macros`), statements (:ref:`4.8`).

.. [#] These tokens are sometimes called "digraphs".
.. [#] Thus ``[`` and ``<:`` behave differently when "stringized (see :ref:`12.3.2`),
  but can otherwise be freely interchanged.

.. index::
   single: headers

.. _4.4.7:

Header names
------------
**Semantics**

The sequences in both forms of header names are mapped in an implementation-defined
manner to headers or external source file names as specified in :ref:`12.2`.

If the characters ``', \, ", //`` or ``/*`` occur in the sequence between the
``<`` and ``>`` delimiters, the behavior is undefined. Similarly, if the
characters ``', \, //`` or ``/*`` occur in the sequence between the ``"``
delimiters, the behavior is undefined. [#]_ A header name preprocessing token
is recognized only within a ``#include`` preprocessing directive.

EXAMPLE The following sequence of characters:

.. code-block:: c

  0x3<1/a.h>1e2
  #include <1/a.h>
  #define const.member@$

forms the following sequence of preprocessing tokens (with each individual preprocessing token delimited
by a *{* on the left and a *}* on the right).

.. code-block:: c

  {0x3}{<}{1}{/}{a}{.}{h}{>}{1e2}
  {#}{include} {<1/a.h>}
  {#}{define} {const}{.}{member}{@}{$}

**Forward references:** source file inclusion (:ref:`12.2`).

.. [#] Thus, sequences of characters that resemble escape sequences cause undefined behavior.

.. index::
   single: preprocessing numbers

.. _4.4.8:

Preprocessing numbers
---------------------
**Description**

A preprocessing number begins with a digit optionally preceded by a period (.) and may
be followed by valid identifier characters and the character sequences ``e+, e-, E+, E-,
p+, p-, P+`` or ``P-``.

Preprocessing number tokens lexically include all floating and integer constant tokens.

**Semantics**

A preprocessing number does not have type or a value; it acquires both after a successful
conversion (as part of translation phase 7) to a floating constant token or an integer
constant token.

.. index::
   single: comments

.. _4.4.9:

Comments
--------
Except within a character constant, a string literal, or a comment, the characters ``/*``
introduce a comment. The contents of such a comment are examined only to identify
multibyte characters and to find the characters ``*/`` that terminate it. [#]_

Except within a character constant, a string literal, or a comment, the characters ``//``
ntroduce a comment that includes all multibyte characters up to, but not including, the
next new-line character. The contents of such a comment are examined only to identify
multibyte characters and to find the terminating new-line character.

EXAMPLE

.. code-block:: c

  "a//b"                      // four-character string literal
  #include "//e"              // undefined behavior
  // */                       // comment, not syntax error
  f = g/**//h;                // equivalent to f = g / h;
  //\
  i();                        // part of a two-line comment
  /\
  / j();                      // part of a two-line comment
  #define glue(x,y) x##y
  glue(/,/) k();              // syntax error, not comment
  /*//*/ l();                 // equivalent to l();
  m = n//**/o                
  + p;                        // equivalent to m = n + p;

.. [#] Thus, ``/* ... */`` comments do not nest.

.. index::
   single: expressions

.. _4.5:

Expressions
===========
An expression is a sequence of operators and operands that specifies computation of a
value, or that designates an object or a function, or that generates side effects, or that
performs a combination thereof.

Between the previous and next sequence point an object shall have its stored value
modified at most once by the evaluation of an expression. Furthermore, the prior value
shall be read only to determine the value to be stored. [#]_

The grouping of operators and operands is indicated by the syntax. [#]_ Except as specified
later (for the function-call ``(), &&, ||, ?:`` and comma operators), the order of evaluation
of subexpressions and the order in which side effects take place are both unspecified.

Some operators (the unary operator ``~``, and the binary operators ``<<, >>, &, ^`` and ``|``,
collectively described as bitwise operators) are required to have operands that have
integer type. These operators yield values that depend on the internal representations of
integers, and have implementation-defined and undefined aspects for signed types.

If an exceptional condition occurs during the evaluation of an expression (that is, if the
result is not mathematically defined or not in the range of representable values for its
type), the behavior is undefined.

The effective type of an object for an access to its stored value is the declared type of the
object, if any. [#]_ If a value is stored into an object having no declared type through an
lvalue having a type that is not a character type, then the type of the lvalue becomes the
effective type of the object for that access and for subsequent accesses that do not modify
the stored value. If a value is copied into an object having no declared type using
``memcpy`` or ``memmove`` or is copied as an array of character type, then the effective type
of the modified object for that access and for subsequent accesses that do not modify the
value is the effective type of the object from which the value is copied, if it has one. For
all other accesses to an object having no declared type, the effective type of the object is
simply the type of the lvalue used for the access.

An object shall have its stored value accessed only by an lvalue expression that has one of
the following types: [#]_

* a type compatible with the effective type of the object,
* a qualified version of a type compatible with the effective type of the object,
* a type that is the signed or unsigned type corresponding to the effective type of the
  object,

* a type that is the signed or unsigned type corresponding to a qualified version of the
  effective type of the object,
* an aggregate or union type that includes one of the aforementioned types among its
  members (including, recursively, a member of a subaggregate or contained union), or
* a character type.

A floating expression may be *contracted*, that is, evaluated as though it were an atomic
operation, thereby omitting rounding errors implied by the source code and the
expression evaluation method. [#]_ The ``FP_CONTRACT`` pragma in ``<math.h>`` provides a
way to disallow contracted expressions. Otherwise, whether and how expressions are
contracted is implementation-defined. [#]_

**Forward references:** the ``FP_CONTRACT`` pragma (:ref:`24.2`), copying functions
(:ref:`33.2`).

.. [#] This paragraph renders undefined statement expressions such as
  ``i = ++i + 1;``

  ``a[i++] = i;``

  while allowing

  ``i = i + 1;``
  ``a[i] = i;``
.. [#] The syntax specifies the precedence of operators in the evaluation of an
  expression, which is the same as the order of the major subclauses of this
  subclause, highest precedence first. Thus, for example, the expressions allowed
  as the operands of the binary ``+`` operator (:reF:`4.5.6`) are those expressions
  defined in :ref:`4.5.1` through :ref:`4.5.6`. The exceptions are cast expressions
  (:ref:`4.5.4`) as operands of unary operators (:ref:`4.5.3`), and an operand
  contained between any of the following pairs of operators: grouping parentheses
  ``()`` (:ref:`4.5.1`), subscripting brackets ``[] (:ref:`4.5.2.1`), function-call
  parentheses ``()`` (:ref:`4.5.2.2`), and the conditional operator ``?:``
  (:ref:`4.5.15`).

  Within each major subclause, the operators have the same precedence. Left- or
  right-associativity is indicated in each subclause by the syntax for the
  expressions discussed therein.

.. [#] Allocated objects have no declared type.
.. [#] The intent of this list is to specify those circumstances in which an object
  may or may not be aliased.
.. [#] A contracted expression might also omit the raising of floating-point exceptions.
.. [#] This license is specifically intended to allow implementations to exploit
  fast machine instructions that combine multiple C operators. As contractions
  potentially undermine predictability, and can even decrease accuracy for containing
  expressions, their use needs to be well-defined and clearly documented.

.. index::
   pair: expressions; primary

.. _4.5.1:

Primary expressions
-------------------
**Semantics**

An identifier is a primary expression, provided it has been declared as designating an
object (in which case it is an lvalue) or a function (in which case it is a function
designator). [#]_

A constant is a primary expression. Its type depends on its form and value, as detailed in
:ref:`4.4.4`.

A string literal is a primary expression. It is an lvalue with type as detailed in :ref:`4.4.5`.

A parenthesized expression is a primary expression. Its type and value are identical to
those of the unparenthesized expression. It is an lvalue, a function designator, or a void
expression if the unparenthesized expression is, respectively, an lvalue, a function
designator, or a void expression.

Forward references: declarations (:ref:`4.7`).

.. [#] Thus, an undeclared identifier is a violation of the syntax.

.. index::
   pair: operators; postfix

.. _4.5.2:

Postfix operators
-----------------

.. index::
   single: array subscripting

.. _4.5.2.1:

Array subscripting
^^^^^^^^^^^^^^^^^^
**Constraints**

One of the expressions shall have type "pointer to object type", the other expression shall
have integer type, and the result has type "type".

**Semantics**

A postfix expression followed by an expression in square brackets ``[]`` is a subscripted
designation of an element of an array object. The definition of the subscript operator ``[]``
is that ``E1[E2]`` is identical to ``(*((E1)+(E2)))``. Because of the conversion rules that
apply to the binary ``+`` operator, if ``E1`` is an array object (equivalently, a pointer to the
initial element of an array object) and ``E2`` is an integer, ``E1[E2]`` designates the ``E2``-th
element of ``E1`` (counting from zero).

Successive subscript operators designate an element of a multidimensional array object.
If ``E`` is an ``n``-dimensional array (:math:`n~\geq~2`) with dimensions :math:`i~*~j~*~.~.~.~*~k`,
then ``E`` (used as other than an lvalue) is converted to a pointer to an ``(n - 1)``-dimensional
array with dimensions :math:`j~*~.~.~.~*~k`. If the unary ``*`` operator is applied to this
pointer explicitly, or implicitly as a result of subscripting, the result is the pointed-to
``(n - 1)``-dimensional array, which itself is converted into a pointer if used as other than
an lvalue. It follows from this that arrays are stored in row-major order (last subscript
varies fastest).

EXAMPLE Consider the array object defined by the declaration

.. code-block:: c

  int x[3][5];

Here ``x`` is a :math:`3~*~5` array of ints; more precisely, ``x`` is an array of three
element objects, each of which is an array of five ints. In the expression ``x[i]`` which
is equivalent to ``(*((x)+(i)))``, ``x`` is first converted to a pointer to the initial
array of five ints. Then ``i`` is adjusted according to the type of ``x``, which conceptually
entails multiplying ``i`` by the size of the object to which the pointer points, namely
an array of five ``int`` objects. The results are added and indirection is applied to yield
an array of five ints. When used in the expression ``x[i][j]`` that array is in turn
converted to a pointer to the first of the ints, so ``x[i][j]`` yields an ``int``.

**Forward references:** additive operators (:ref:`4.5.6`), address and indirection operators
(:ref:`4.5.3.2`), array declarators (:ref:`4.7.5.2`).

.. index::
   single: function calls

.. _4.5.2.2:

Function calls
^^^^^^^^^^^^^^
**Constraints**

The expression that denotes the called function [#]_ shall have type pointer to function
returning ``void`` or returning an object type other than an array type.

If the expression that denotes the called function has a type that includes a prototype, the
number of arguments shall agree with the number of parameters. Each argument shall
have a type such that its value may be assigned to an object with the unqualified version
of the type of its corresponding parameter.

**Semantics**

A postfix expression followed by parentheses ``()`` containing a possibly empty, comma-
separated list of expressions is a function call. The postfix expression denotes the called
function. The list of expressions specifies the arguments to the function.

An argument may be an expression of any object type. In preparing for the call to a
function, the arguments are evaluated, and each parameter is assigned the value of the
corresponding argument. [#]_

If the expression that denotes the called function has type pointer to function returning an
object type, the function call expression has the same type as that object type, and has the
value determined as specified in :ref:`4.8.6.4`. Otherwise, the function call has type void. If
an attempt is made to modify the result of a function call or to access it after the next
sequence point, the behavior is undefined.

If the expression that denotes the called function has a type that does not include a
prototype, the integer promotions are performed on each argument, and arguments that
have type ``float`` are promoted to ``double``. These are called the *default argument
promotions*. If the number of arguments does not equal the number of parameters, the
behavior is undefined. If the function is defined with a type that includes a prototype, and
either the prototype ends with an ellipsis ``(, ...)`` or the types of the arguments after
promotion are not compatible with the types of the parameters, the behavior is undefined.
If the function is defined with a type that does not include a prototype, and the types of
the arguments after promotion are not compatible with those of the parameters after
promotion, the behavior is undefined, except for the following cases:

* one promoted type is a signed integer type, the other promoted type is the
  corresponding unsigned integer type, and the value is representable in both types;
* both types are pointers to qualified or unqualified versions of a character type or
  ``void``.

If the expression that denotes the called function has a type that does include a prototype,
the arguments are implicitly converted, as if by assignment, to the types of the
corresponding parameters, taking the type of each parameter to be the unqualified version
of its declared type. The ellipsis notation in a function prototype declarator causes
argument type conversion to stop after the last declared parameter. The default argument
promotions are performed on trailing arguments.

No other conversions are performed implicitly; in particular, the number and types of
arguments are not compared with those of the parameters in a function definition that
does not include a function prototype declarator.

If the function is defined with a type that is not compatible with the type (of the
expression) pointed to by the expression that denotes the called function, the behavior is
undefined.

The order of evaluation of the function designator, the actual arguments, and
subexpressions within the actual arguments is unspecified, but there is a sequence point
before the actual call.

Recursive function calls shall be permitted, both directly and indirectly through any chain
of other functions.

EXAMPLE In the function call

.. code-block:: c

  (*pf[f1()]) (f2(), f3() + f4())

the functions ``f1, f2, f3`` and ``f4`` may be called in any order. All side effects
have to be completed before the function pointed to by ``pf[f1()]`` is called.

**Forward references:** function declarators (including prototypes)
(:ref:`4.7.5.3`), function definitions (:ref:`4.9.1`), the ``return`` statement
(:ref:`4.8.6.4`), simple assignment (:ref:`4.5.16.1`).

.. [#] Most often, this is the result of converting an identifier that is a
  function designator.
.. [#] A function may change the values of its parameters, but these
  changes cannot affect the values of the arguments. On the other hand,
  it is possible to pass a pointer to an object, and the function may change
  the value of the object pointed to. A parameter declared to have array or
  function type is adjusted to have a pointer type as described in :ref:`4.9.1`.

.. index::
   pair: member; structure
   pair: member; union

.. _4.5.2.3:

Structure and union members
^^^^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

The first operand of the ``.`` operator shall have a qualified or unqualified
structure or union type, and the second operand shall name a member of that type.

The first operand of the ``->`` operator shall have type "pointer to qualified or
unqualified structure" or "pointer to qualified or unqualified union", and the
second operand shall name a member of the type pointed to.

**Semantics**

A postfix expression followed by the ``.`` operator and an identifier designates a member of
a structure or union object. The value is that of the named member, and is an lvalue if the
first expression is an lvalue. If the first expression has qualified type, the result has the
so-qualified version of the type of the designated member.

A postfix expression followed by the ``->`` operator and an identifier designates a member
of a structure or union object. The value is that of the named member of the object to
which the first expression points, and is an lvalue. [#]_ If the first expression is a pointer to
a qualified type, the result has the so-qualified version of the type of the designated
member.

One special guarantee is made in order to simplify the use of unions: if a union contains
several structures that share a common initial sequence (see below), and if the union
object currently contains one of these structures, it is permitted to inspect the common
initial part of any of them anywhere that a declaration of the complete type of the union is
visible. Two structures share a *common initial sequence* if corresponding members have
compatible types (and, for bit-fields, the same widths) for a sequence of one or more
initial members.

EXAMPLE 1 If ``f`` is a function returning a structure or union, and ``x`` is a member
of that structure or union, ``f().x`` is a valid postfix expression but is not an lvalue.

EXAMPLE 2 In:

.. code-block:: c

  struct s { int i; const int ci; };
  struct s s;
  const struct s cs;
  volatile struct s vs;

the various members have the types:

.. code-block:: c

  s.i   int
  s.ci  const int
  cs.i  const int
  cs.ci const int
  vs.i  volatile int
  vs.ci volatile const int

EXAMPLE 3 The following is a valid fragment:

.. code-block:: c

  union {
    struct {
      int alltypes;
    } n;
    struct {
      int type;
      int intnode;
    } ni;
    struct {
    int type;
    double doublenode;
    } nf;
  } u;
  u.nf.type = 1;
  u.nf.doublenode = 3.14;
  /* ... */
  if (u.n.alltypes == 1)
  if (sin(u.nf.doublenode) == 0.0)
  /* ... */

The following is not a valid fragment (because the union type is not visible
within function f):

.. code-block:: c

  struct t1 { int m; };
  struct t2 { int m; };
  int f(struct t1 *p1, struct t2 *p2)
  {
    if (p1->m < 0)
      p2->m = -p2->m;
    return p1->m;
  }
  int g()
  {
    union {
      struct t1 s1;
      struct t2 s2;
    } u;
    /* ... */
    return f(&u.s1, &u.s2);
  }

**Forward references:** address and indirection operators (:ref:`4.5.3.2`),
structure and union specifiers (:ref:`4.7.2.1`).

.. [#] If ``&E`` is a valid pointer expression (where ``&`` is the "address-of"
  operator, which generates a pointer to its operand), the expression
  ``(&E)->MOS`` is the same as ``E.MOS``.

.. index::
   pair: operators; postfix
   pair: operators; increment
   pair: operators; decrement

.. _4.5.2.4:

Postfix increment and decrement operators
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

The operand of the postfix increment or decrement operator shall have qualified or
unqualified real or pointer type and shall be a modifiable lvalue.

**Semantics**

The result of the postfix ``++`` operator is the value of the operand. After the result is
obtained, the value of the operand is incremented. (That is, the value 1 of the appropriate
type is added to it.) See the discussions of additive operators and compound assignment
for information on constraints, types, and conversions and the effects of operations on
pointers. The side effect of updating the stored value of the operand shall occur between
the previous and the next sequence point.

The postfix ``--`` operator is analogous to the postfix ``++`` operator, except that the value of
the operand is decremented (that is, the value 1 of the appropriate type is subtracted from
it).

**Forward references:** additive operators (:ref:`4.5.6`), compound assignment
(:ref:`4.5.16.2`).

.. index::
   pair: lierals; compound

.. _4.5.2.5:

Compound literals
^^^^^^^^^^^^^^^^^
**Constraints**

The type name shall specify an object type or an array of unknown size, but not a variable
length array type.

No initializer shall attempt to provide a value for an object not contained within the entire
unnamed object specified by the compound literal.

If the compound literal occurs outside the body of a function, the initializer list shall
consist of constant expressions.

**Semantics**

A postfix expression that consists of a parenthesized type name followed by a brace-
enclosed list of initializers is a *compound literal*. It provides an unnamed object whose
value is given by the initializer list. [#]_

If the type name specifies an array of unknown size, the size is determined by the
initializer list as specified in :ref:`4.7.8` , and the type of the compound literal is that of the
completed array type. Otherwise (when the type name specifies an object type), the type
of the compound literal is that specified by the type name. In either case, the result is an
lvalue.

The value of the compound literal is that of an unnamed object initialized by the
initializer list. If the compound literal occurs outside the body of a function, the object
has static storage duration; otherwise, it has automatic storage duration associated with
the enclosing block.

All the semantic rules and constraints for initializer lists in :ref:`4.7.8` are applicable to
compound literals. [#]_

String literals, and compound literals with const-qualified types, need not designate
distinct objects. [#]_

EXAMPLE 1 The file scope definition

.. code-block:: c

  int *p = (int []){2, 4};

initializes ``p`` to point to the first element of an array of two ints, the first
having the value two and the second, four. The expressions in this compound literal
are required to be constant. The unnamed object has static storage duration.

EXAMPLE 2 In contrast, in

.. code-block:: c

  void f(void)
  {
  int *p;
  /*...*/
  p = (int [2]){*p};
  /*...*/
  }

``p`` is assigned the address of the first element of an array of two ints, the
first having the value previously pointed to by ``p`` and the second, zero. The
expressions in this compound literal need not be constant. The unnamed object
has automatic storage duration.

EXAMPLE 3 Initializers with designations can be combined with compound literals. Structure objects
created using compound literals can be passed to functions without depending on member order:

.. code-block:: c

  drawline((struct point){.x=1, .y=1},
  (struct point){.x=3, .y=4});

Or, if drawline instead expected pointers to struct point:

.. code-block:: c

  drawline(&(struct point){.x=1, .y=1},
  &(struct point){.x=3, .y=4});

EXAMPLE 4 A read-only compound literal can be specified through constructions like:

.. code-block:: c

  (const float []){1e0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6}

EXAMPLE 5 The following three expressions have different meanings:

.. code-block:: c

  "/tmp/fileXXXXXX"
  (char []){"/tmp/fileXXXXXX"}
  (const char []){"/tmp/fileXXXXXX"}

The first always has static storage duration and has type array of char, but need not be modifiable; the last
two have automatic storage duration when they occur within the body of a function, and the first of these
two is modifiable.

EXAMPLE 6 Like string literals, const-qualified compound literals can be placed into read-only memory
and can even be shared. For example,

.. code-block:: c

  (const char []){"abc"} == "abc"

might yield 1 if the literals’ storage is shared.

EXAMPLE 7 EXAMPLE 7 Since compound literals are unnamed, a single compound literal cannot specify a circularly
linked object. For example, there is no way to write a self-referential compound literal that could be used
as the function argument in place of the named object endless_zeros below:

.. code-block:: c

  struct int_list { int car; struct int_list *cdr; };
  struct int_list endless_zeros = {0, &endless_zeros};
  eval(endless_zeros);

EXAMPLE 8 Each compound literal creates only a single object in a given scope:

.. code-block:: c

  struct s { int i; };
  int f (void)
  {
    struct s *p = 0, *q;
    int j = 0;
  again:
    q = p, p = &((struct s){ j++ });
    if (j < 2) goto again;
    return p == q && q->i == 1;
  }

The function ``f()`` always returns the value 1.

Note that if an iteration statement were used instead of an explicit ``goto`` and a labeled statement, the
lifetime of the unnamed object would be the body of the loop only, and on entry next time around  ``p`` would
have an indeterminate value, which would result in undefined behavior.

**Forward references:** type names (:ref:`4.7.6`), initialization (:ref:`4.7.8`).


.. [#] Note that this differs from a cast expression. For example, a cast specifies
  a conversion to scalar types or ``void`` only, and the result of a cast expression
  is not an lvalue.
.. [#] For example, subobjects without explicit initializers are initialized to zero.
.. [#] This allows implementations to share storage for string literals and constant
  compound literals with the same or overlapping representations.

.. index::
   pair: operators; unary

.. _4.5.3:

Unary operators
---------------

.. index::
   pair: operators; prefix
   pair: operators; increment
   pair: operators; decrement

.. _4.5.3.1:

Prefix increment and decrement operators
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

The operand of the prefix increment or decrement operator shall have qualified or
unqualified real or pointer type and shall be a modifiable lvalue.

**Semantics**

The value of the operand of the prefix ``++`` operator is incremented. The result is the new
value of the operand after incrementation. The expression ``++E`` is equivalent to ``(E+=1).``
See the discussions of additive operators and compound assignment for information on
onstraints, types, side effects, and conversions and the effects of operations on pointers.

The prefix ``--`` operator is analogous to the prefix ``++`` operator, except that the value of the
operand is decremented.

**Forward references:** additive operators (:ref:`4.5.6`), compound assignment (:ref:`4.5.16.2`).

.. index::
   pair: operators; address
   pair: operators; indirection

.. _4.5.3.2:

Address and indirection operators
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

The operand of the unary ``&`` operator shall be either a function designator, the result of a
``[]`` or unary ``*`` operator, or an lvalue that designates an object that is not a bit-field
and is not declared with the ``register`` storage-class specifier.

The operand of the unary ``*`` operator shall have pointer type.

**Semantics**

The unary ``&`` operator yields the address of its operand. If the operand has type "type",
the result has type "pointer to type". If the operand is the result of a unary ``*`` operator,
neither that operator nor the ``&`` operator is evaluated and the result is as if both were
omitted, except that the constraints on the operators still apply and the result is not an
lvalue. Similarly, if the operand is the result of a ``[]`` operator, neither the ``&`` operator
nor he unary ``*`` that is implied by the ``[]`` is evaluated and the result is as if the
``&`` operator were removed and the ``[]`` operator were changed to a ``+`` operator.
Otherwise, the result is a pointer to the object or function designated by its operand.

The unary ``*`` operator denotes indirection. If the operand points to a function, the result is
a function designator; if it points to an object, the result is an lvalue designating the
object. If the operand has type "pointer to type", the result has type "type". If an
invalid value has been assigned to the pointer, the behavior of the unary ``*`` operator is
undefined. [#]_

**Forward references:** storage-class specifiers (:ref:`4.7.1`), structure and union specifiers
(:ref:`4.7.2.1`).

.. [#] Thus, ``&*E`` is equivalent to ``E`` (even if ``E`` is a null pointer), and
  ``&(E1[E2])`` to ``((E1)+(E2)).`` It is always true that if ``E`` is a function
  designator or an lvalue that is a valid operand of the unary ``&`` operator, ``*&E``
  is a function designator or an lvalue equal to ``E.`` If ``*P`` is an lvalue and ``T``
  is the name of an object pointer type, ``*(T)P`` is an lvalue that has a type
  compatible with that to which ``T`` points. Among the invalid values for dereferencing
  a pointer by the unary * operator are a null pointer, an address inappropriately aligned
  for the type of object pointed to, and the address of an object after the end of its lifetime.

.. index::
   pair: operators; unary
   pair: operators; arithmetic

.. _4.5.3.3:

Unary arithmetic operators
^^^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

The operand of the unary ``+`` or ``-`` operator shall have arithmetic type; of the ``-``
operator, integer type; of the ``!`` operator, scalar type.

**Semantics**

The result of the unary ``+`` operator is the value of its (promoted) operand. The integer
promotions are performed on the operand, and the result has the promoted type.

The result of the unary ``-`` operator is the negative of its (promoted) operand. The integer
promotions are performed on the operand, and the result has the promoted type.

The result of the ``~`` operator is the bitwise complement of its (promoted) operand (that is,
each bit in the result is set if and only if the corresponding bit in the converted operand is
not set). The integer promotions are performed on the operand, and the result has the
promoted type. If the promoted type is an unsigned type, the expression ``~E`` is equivalent
to the maximum value representable in that type minus ``E``.

The result of the logical negation operator ``!`` is 0 if the value of its operand compares
unequal to 0, 1 if the value of its operand compares equal to 0. The result has type ``int.``
The expression ``!E`` is equivalent to ``(0==E).``

.. index::
   pair: operators; sizeof

.. _4.5.3.4:

The ``sizeof`` operator
^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

The ``sizeof`` operator shall not be applied to an expression that has function type or an
incomplete type, to the parenthesized name of such a type, or to an expression that
designates a bit-field member.

**Semantics**

The ``sizeof`` operator yields the size (in bytes) of its operand, which may be an
expression or the parenthesized name of a type. The size is determined from the type of
the operand. The result is an integer. If the type of the operand is a variable length array
type, the operand is evaluated; otherwise, the operand is not evaluated and the result is an
integer constant.

When applied to an operand that has type ``char, unsigned char`` or ``signed char``,
(or a qualified version thereof) the result is 1. When applied to an operand that has array
type, the result is the total number of bytes in the array. [#]_ When applied to an operand
that has structure or union type, the result is the total number of bytes in such an object,
including internal and trailing padding.

The value of the result is implementation-defined, and its type (an unsigned integer type)
is ``size_t,`` defined in ``<stddef.h>`` (and other headers).

EXAMPLE 1 A principal use of the sizeof operator is in communication with routines such as storage
allocators and I/O systems. A storage-allocation function might accept a size (in bytes) of an object to
allocate and return a pointer to void. For example:

.. code-block:: c

  extern void *alloc(size_t);
  double *dp = alloc(sizeof *dp);

The implementation of the alloc function should ensure that its return value is aligned suitably for
conversion to a pointer to ``double``.

EXAMPLE 2 Another use of the ``sizeof`` operator is to compute the number of elements in an array:

.. code-block:: c

  sizeof array / sizeof array[0]

EXAMPLE 3 In this example, the size of a variable length array is computed and returned from a function:

.. code-block:: c

  #include <stddef.h>
  size_t fsize3(int n)
  {
    char b[n+3];     // variable length array
    return sizeof b; // execution time sizeof
  }
  int main()
  {
    size_t size;
    size = fsize3(10); // fsize3 returns 13
    return 0;
  }

**Forward references:** common definitions ``<stddef.h>`` (:ref:`stddef`), declarations (:ref:`4.7`),
structure and union specifiers (:ref:`4.7.2.1`), type names (:ref:`4.7.6`), array declarators (:ref:`4.7.5.2`).

.. [#] When applied to a parameter declared to have array or function type, the ``sizeof`` operator yields the
  size of the adjusted (pointer) type (see :ref:`4.9.1`).

.. index::
   pair: operators; cast

.. _4.5.4:

Cast operators
--------------
**Constraints**

Unless the type name specifies a ``void`` type, the type name shall specify qualified or
unqualified scalar type and the operand shall have scalar type.

Conversions that involve pointers, other than where permitted by the constraints of
:ref:`4.5.16.1`, shall be specified by means of an explicit cast.

**Semantics**

Preceding an expression by a parenthesized type name converts the value of the
expression to the named type. This construction is called a cast. [#]_ A cast that specifies
no conversion has no effect on the type or value of an expression. [#]_

**Forward references:** equality operators (:ref:`4.5.9`), function declarators (including
prototypes) (:ref:`4.7.5.3`), simple assignment (:ref:`4.5.16.1`), type names (:ref:`4.7.6`).

.. [#] A cast does not yield an lvalue. Thus, a cast to a qualified type has the same
  effect as a cast to the unqualified version of the type.
.. [#] If the value of the expression is represented with greater precision or range
  than required by the type named by the cast (:ref:`4.3.1.8`), then the cast specifies
  a conversion even if the type of the expression is the same as the named type.

.. index::
   pair: operators; multiplicative

.. _4.5.5:

Multiplicative operators
------------------------
**Constraints**

Each of the operands shall have arithmetic type. The operands of the \% operator shall
have integer type.

**Semantics**

The usual arithmetic conversions are performed on the operands.

The result of the binary ``*`` operator is the product of the operands.

The result of the ``/`` operator is the quotient from the division of the first operand by the
second; the result of the ``%`` operator is the remainder. In both operations, if the value of
the second operand is zero, the behavior is undefined.

When integers are divided, the result of the ``/`` operator is the algebraic quotient with any
fractional part discarded. [#]_ If the quotient ``a/b`` is representable, the expression
``(a/b)*b + a%b`` shall equal ``a``.

.. [#] This is often called "truncation toward zero".

.. index::
   pair: operators; additive

.. _4.5.6:

Additive operators
------------------
**Constraints**

For addition, either both operands shall have arithmetic type, or one operand shall be a
pointer to an object type and the other shall have integer type. (Incrementing is
equivalent to adding 1.)

For subtraction, one of the following shall hold:

* both operands have arithmetic type;
* both operands are pointers to qualified or unqualified versions of compatible object
  types; or
* the left operand is a pointer to an object type and the right operand has integer type.

(Decrementing is equivalent to subtracting 1.)

**Semantics**

If both operands have arithmetic type, the usual arithmetic conversions are performed on
them.

The result of the binary ``+`` operator is the sum of the operands.

The result of the binary ``-`` operator is the difference resulting from the subtraction of the
second operand from the first.

For the purposes of these operators, a pointer to an object that is not an element of an
array behaves the same as a pointer to the first element of an array of length one with the
stype of the object as its element type.

When an expression that has integer type is added to or subtracted from a pointer, the
result has the type of the pointer operand. If the pointer operand points to an element of
an array object, and the array is large enough, the result points to an element offset from
the original element such that the difference of the subscripts of the resulting and original
array elements equals the integer expression. In other words, if the expression ``P`` points to
the *i*-th element of an array object, the expressions ``(P)+N`` (equivalently, ``N+(P)``) and
``(P)-N`` (where ``N`` has the value *n*) point to, respectively, the *i+n*-th and *i-n*-th elements of
the array object, provided they exist. Moreover, if the expression P points to the last
element of an array object, the expression ``(P)+1`` points one past the last element of the
array object, and if the expression Q points one past the last element of an array object,
the expression ``(Q)-1`` points to the last element of the array object. If both the pointer
operand and the result point to elements of the same array object, or one past the last
element of the array object, the evaluation shall not produce an overflow; otherwise, the
behavior is undefined. If the result points one past the last element of the array object, it
shall not be used as the operand of a unary ``*`` operator that is evaluated.

When two pointers are subtracted, both shall point to elements of the same array object,
or one past the last element of the array object; the result is the difference of the
subscripts of the two array elements. The size of the result is implementation-defined,
and its type (a signed integer type) is ``ptrdiff_t`` defined in the ``<stddef.h>`` header.
If the result is not representable in an object of that type, the behavior is undefined. In
other words, if the expressions ``P`` and ``Q`` point to, respectively, the *i*-th and *j*-th elements of
an array object, the expression ``(P)-(Q)`` has the value *i-j* provided the value fits in an
object of type ``ptrdiff_t``. Moreover, if the expression P points either to an element of
an array object or one past the last element of an array object, and the expression ``Q`` points
to the last element of the same array object, the expression ``((Q)+1)-(P)`` has the same
value as ``((Q)-(P))+1`` and as ``-((P)-((Q)+1))``, and has the value zero if the
expression ``P`` points one past the last element of the array object, even though the
expression ``(Q)+1`` does not point to an element of the array object. [#]_

EXAMPLE Pointer arithmetic is well defined with pointers to variable length array types.

.. code-block:: c

  {
    int n = 4, m = 3;
    int a[n][m];
    int (*p)[m] = a; // p == &a[0]
    p += 1;          // p == &a[1]
    (*p)[2] = 99;    // a[1][2] == 99
    n = p - a;       // n == 1
  }

If array ``a`` in the above example were declared to be an array of known constant size,
and pointer ``p`` were declared to be a pointer to an array of the same known constant
size (pointing to ``a``), the results would be the same.

**Forward references:** array declarators (:ref:`4.7.5.2`), common definitions ``<stddef.h>``
(:ref:`stddef`).

.. [#] Another way to approach pointer arithmetic is first to convert the pointer(s) to
  character pointer(s): In this scheme the integer expression added to or subtracted from
  the converted pointer is first multiplied by the size of the object originally pointed to,
  and the resulting pointer is converted back to the original type. For pointer subtraction,
  the result of the difference between the character pointers is similarly divided by the
  size of the object originally pointed to.

  When viewed in this way, an implementation need only provide one extra byte (which may
  overlap another object in the program) just after the end of the object in order to
  satisfy the "one past the last element" requirements.


.. index::
   pair: operators; bitwise shift

.. _4.5.7:

Bitwise shift operators
-----------------------
**Constraints**

Each of the operands shall have integer type.

**Semantics**

The integer promotions are performed on each of the operands. The type of the result is
that of the promoted left operand. If the value of the right operand is negative or is
greater than or equal to the width of the promoted left operand, the behavior is undefined.

The result of :math:`E1 << E2` is :math:`E1` left-shifted :math:`E2` bit positions; vacated bits are filled with
zeros. If :math:`E1` has an unsigned type, the value of the result is :math:`E1~*~2^{E2 }`, reduced modulo
one more than the maximum value representable in the result type. If :math:`E1` has a signed
type and nonnegative value, and :math:`E1~*~2^{E2}` is representable in the result type, then that is
the resulting value; otherwise, the behavior is undefined.

The result of :math:`E1 >> E2` is :math:`E1` right-shifted :math:`E2` bit positions. If :math:`E1` has an unsigned type
or if :math:`E1` has a signed type and a nonnegative value, the value of the result is the integral
part of the quotient of :math:`E1/2^{E2}`. If :math:`E1` has a signed type and a negative value, the
resulting value is implementation-defined.

.. index::
   pair: operators; relational

.. _4.5.8:

Relational operators
--------------------
**Constraints**

One of the following shall hold:

* both operands have real type;
* both operands are pointers to qualified or unqualified versions of compatible object
  types; or
* both operands are pointers to qualified or unqualified versions of compatible
  incomplete types.

**Semantics**

If both of the operands have arithmetic type, the usual arithmetic conversions are
performed.

For the purposes of these operators, a pointer to an object that is not an element of an
array behaves the same as a pointer to the first element of an array of length one with the
type of the object as its element type.

When two pointers are compared, the result depends on the relative locations in the
address space of the objects pointed to. If two pointers to object or incomplete types both
point to the same object, or both point one past the last element of the same array object,
they compare equal. If the objects pointed to are members of the same aggregate object,
pointers to structure members declared later compare greater than pointers to members
declared earlier in the structure, and pointers to array elements with larger subscript
values compare greater than pointers to elements of the same array with lower subscript
values. All pointers to members of the same union object compare equal. If the
expression P points to an element of an array object and the expression ``Q`` points to the
last element of the same array object, the pointer expression ``Q+1`` compares greater than
``P``. In all other cases, the behavior is undefined.

Each of the operators ``<`` (less than), ``>`` (greater than), ``<=`` (less than or equal to), and ``>=``
(greater than or equal to) shall yield 1 if the specified relation is true and 0 if it is false. [#]_
The result has type ``int``.

.. [#] The expression ``a<b<c`` is not interpreted as in ordinary mathematics. As
  the syntax indicates, it means ``(a<b)<c``; in other words, "if ``a`` is less than ``b``,
  compare 1 to ``c``; otherwise, compare 0 to ``c``".

.. index::
   pair: operators; equality

.. _4.5.9:

Equality operators
------------------
**Constraints**

One of the following shall hold:

* both operands have arithmetic type;
* both operands are pointers to qualified or unqualified versions of compatible types;
* one operand is a pointer to an object or incomplete type and the other is a pointer to a
  qualified or unqualified version of void; or
* one operand is a pointer and the other is a null pointer constant.

**Semantics**

The ``==`` (equal to) and ``!=`` (not equal to) operators are analogous to the relational
operators except for their lower precedence. [#]_ Each of the operators yields 1 if the
specified relation is true and 0 if it is false. The result has type ``int``. For any pair of
operands, exactly one of the relations is true.

If both of the operands have arithmetic type, the usual arithmetic conversions are
performed. Values of complex types are equal if and only if both their real parts are equal
and also their imaginary parts are equal. Any two values of arithmetic types from
different type domains are equal if and only if the results of their conversions to the
(complex) result type determined by the usual arithmetic conversions are equal.

Otherwise, at least one operand is a pointer. If one operand is a pointer and the other is a
null pointer constant, the null pointer constant is converted to the type of the pointer. If
one operand is a pointer to an object or incomplete type and the other is a pointer to a
qualified or unqualified version of ``void``, the former is converted to the type of the latter.

Two pointers compare equal if and only if both are null pointers, both are pointers to the
same object (including a pointer to an object and a subobject at its beginning) or function,
both are pointers to one past the last element of the same array object, or one is a pointer
to one past the end of one array object and the other is a pointer to the start of a different
array object that happens to immediately follow the first array object in the address
space. [#]_

For the purposes of these operators, a pointer to an object that is not an element of an
array behaves the same as a pointer to the first element of an array of length one with the
type of the object as its element type.

.. [#] Because of the precedences, ``a<b == c<d`` is 1 whenever ``a<b`` and ``c<d`` have
  the same truth-value.
.. [#] Two objects may be adjacent in memory because they are adjacent elements of a larger array or
  adjacent members of a structure with no padding between them, or because the implementation chose
  to place them so, even though they are unrelated. If prior invalid pointer operations (such as accesses
  outside array bounds) produced undefined behavior, subsequent comparisons also produce undefined
  behavior.

.. index::
   pair: operators; bitwise AND

.. _4.5.10:

Bitwise AND operator
--------------------
**Constraints**

Each of the operands shall have integer type.

**Semantics**

The usual arithmetic conversions are performed on the operands.

The result of the binary ``&`` operator is the bitwise AND of the operands (that is, each bit in
the result is set if and only if each of the corresponding bits in the converted operands is
set).

.. index::
   pair: operators; bitwise EX-OR

.. _4.5.11:

Bitwise exclusive OR operator
-----------------------------
**Constraints**

Each of the operands shall have integer type.

**Semantics**

The usual arithmetic conversions are performed on the operands.
The result of the ``^`` operator is the bitwise exclusive OR of the operands (that is, each bit
in the result is set if and only if exactly one of the corresponding bits in the converted
operands is set).

.. index::
   pair: operators; bitwise OR

.. _4.5.12:

Bitwise inclusive OR operator
-----------------------------
**Constraints**

Each of the operands shall have integer type.

**Semantics**

The usual arithmetic conversions are performed on the operands.
The result of the ``|`` operator is the bitwise inclusive OR of the operands (that is, each bit in
the result is set if and only if at least one of the corresponding bits in the converted
operands is set).

.. index::
   pair: operators; logical AND

.. _4.5.13:

Logical AND operator
--------------------
**Constraints**

Each of the operands shall have scalar type.

**Semantics**

The ``&&`` operator shall yield 1 if both of its operands compare unequal to 0; otherwise, it
yields 0. The result has type ``int``.

Unlike the bitwise binary ``&`` operator, the `&&`` operator guarantees left-to-right evaluation;
there is a sequence point after the evaluation of the first operand. If the first operand
compares equal to 0, the second operand is not evaluated.

.. index::
   pair: operators; logical OR

.. _4.5.14:

Logical OR operator
-------------------
**Constraints**

Each of the operands shall have scalar type.

**Semantics**

The ``||`` operator shall yield 1 if either of its operands compare unequal to 0; otherwise, it
yields 0. The result has type ``int``.

Unlike the bitwise ``|`` operator, the ``||`` operator guarantees left-to-right evaluation; there is
a sequence point after the evaluation of the first operand. If the first operand compares
unequal to 0, the second operand is not evaluated.

.. index::
   pair: operators; conditional

.. _4.5.15:

Conditional operator
--------------------
**Constraints**

The first operand shall have scalar type.
One of the following shall hold for the second and third operands:

* both operands have arithmetic type;
* both operands have the same structure or union type;
* both operands have void type;
* both operands are pointers to qualified or unqualified versions of compatible types;
* one operand is a pointer and the other is a null pointer constant; or
* one operand is a pointer to an object or incomplete type and the other is a pointer to a
  qualified or unqualified version of void.

**Semantics**

The first operand is evaluated; there is a sequence point after its evaluation. The second
operand is evaluated only if the first compares unequal to 0; the third operand is evaluated
only if the first compares equal to 0; the result is the value of the second or third operand
(whichever is evaluated), converted to the type described below. [#]_ If an attempt is made
to modify the result of a conditional operator or to access it after the next sequence point,
the behavior is undefined.

If both the second and third operands have arithmetic type, the result type that would be
determined by the usual arithmetic conversions, were they applied to those two operands,
is the type of the result. If both the operands have structure or union type, the result has
that type. If both operands have void type, the result has ``void`` type.

If both the second and third operands are pointers or one is a null pointer constant and the
other is a pointer, the result type is a pointer to a type qualified with all the type qualifiers
of the types pointed-to by both operands. Furthermore, if both operands are pointers to
compatible types or to differently qualified versions of compatible types, the result type is
a pointer to an appropriately qualified version of the composite type; if one operand is a
null pointer constant, the result has the type of the other operand; otherwise, one operand
is a pointer to ``void`` or a qualified version of ``void``, in which case the result type is a
pointer to an appropriately qualified version of ``void``.

EXAMPLE The common type that results when the second and third operands are pointers is determined
in two independent stages. The appropriate qualifiers, for example, do not depend on whether the two
pointers have compatible types.

Given the declarations

.. code-block:: c

  const void *c_vp;
  void *vp;
  const int *c_ip;
  volatile int *v_ip;
  int *ip;
  const char *c_cp;

the third column in the following table is the common type that is the result of a conditional expression in
which the first two columns are the second and third operands (in either order):

.. code-block:: c

  c_vp c_ip const void *
  v_ip 0    volatile int *
  c_ip v_ip const volatile int *
  vp   c_cp const void *
  ip   c_ip const int *
  vp   ip   void *

.. [#] A conditional expression does not yield an lvalue.

.. index::
   pair: operators; assignment

.. _4.5.16:

Assignment operators
--------------------
**Constraints**

An assignment operator shall have a modifiable lvalue as its left operand.

**Semantics**

An assignment operator stores a value in the object designated by the left operand. An
assignment expression has the value of the left operand after the assignment, but is not an
lvalue. The type of an assignment expression is the type of the left operand unless the
left operand has qualified type, in which case it is the unqualified version of the type of
the left operand. The side effect of updating the stored value of the left operand shall
occur between the previous and the next sequence point.

The order of evaluation of the operands is unspecified. If an attempt is made to modify
the result of an assignment operator or to access it after the next sequence point, the
behavior is undefined.

.. _4.5.16.1:

Simple assignment
^^^^^^^^^^^^^^^^^
**Constraints**

One of the following shall hold: [#]_

* the left operand has qualified or unqualified arithmetic type and the right has
  arithmetic type;
* the left operand has a qualified or unqualified version of a structure or union type
  compatible with the type of the right;
* both operands are pointers to qualified or unqualified versions of compatible types,
  and the type pointed to by the left has all the qualifiers of the type pointed to by the
  right;
* one operand is a pointer to an object or incomplete type and the other is a pointer to a
  qualified or unqualified version of void, and the type pointed to by the left has all
  the qualifiers of the type pointed to by the right;
* the left operand is a pointer and the right is a null pointer constant; or
* the left operand has type ``_Bool`` and the right is a pointer.

**Semantics**

In simple assignment ``(=)``, the value of the right operand is converted to the type of the
assignment expression and replaces the value stored in the object designated by the left
operand.

If the value being stored in an object is read from another object that overlaps in any way
the storage of the first object, then the overlap shall be exact and the two objects shall
have qualified or unqualified versions of a compatible type; otherwise, the behavior is
undefined.

EXAMPLE 1 In the program fragment

.. code-block:: c

  int f(void);
  char c;
  /* ... */
  if ((c = f()) == -1)
  /* ... */

the ``int`` value returned by the function may be truncated when stored in the ``char``, and then converted back
to ``int`` width prior to the comparison. In an implementation in which "plain" ``char`` has the same range of
values as ``unsigned char`` (and ``char`` is narrower than ``int``), the result of the conversion cannot be
negative, so the operands of the comparison can never compare equal. Therefore, for full portability, the
variable ``c`` should be declared as ``int``.

EXAMPLE 2 In the fragment:

.. code-block:: c

  char c;
  int i;
  long l;
  l = (c = i);

the value of ``i`` is converted to the type of the assignment expression ``c = i``, that is, ``char`` type. The value
of the expression enclosed in parentheses is then converted to the type of the outer assignment expression,
that is, ``long int`` type.

EXAMPLE 3 Consider the fragment:

.. code-block:: c

  const char **cpp;
  char *p;
  const char c = 'A';
  cpp = &p;   // constraint violation
  *cpp = &c;  // valid
  *p = 0;     // valid

The first assignment is unsafe because it would allow the following valid code to attempt to change the
value of the ``const`` object ``c``.


.. [#] The asymmetric appearance of these constraints with respect to type qualifiers is due to the conversion
  (specified in :ref:`4.3.2.1`) that changes lvalues to "the value of the expression" and thus removes any type
  qualifiers that were applied to the type category of the expression (for example, it removes ``const`` but
  not ``volatile`` from the type ``int volatile * const``).

.. _4.5.16.2:

Compound assignment
^^^^^^^^^^^^^^^^^^^
**Constraints**

For the operators ``+=`` and ``-=`` only, either the left operand shall be a pointer to an object
type and the right shall have integer type, or the left operand shall have qualified or
unqualified arithmetic type and the right shall have arithmetic type.

For the other operators, each operand shall have arithmetic type consistent with those
allowed by the corresponding binary operator.

**Semantics**

A compound assignment of the form ``E1 op = E2`` differs from the simple assignment
expression ``E1 = E1 op (E2)`` only in that the lvalue ``E1`` is evaluated only once.

.. _4.5.17:

Comma operator
--------------
**Semantics**

The left operand of a comma operator is evaluated as a void expression; there is a
sequence point after its evaluation. Then the right operand is evaluated; the result has its
type and value. [#]_ If an attempt is made to modify the result of a comma operator or to
access it after the next sequence point, the behavior is undefined.

EXAMPLE As indicated by the syntax, the comma operator (as described in this subclause) cannot
appear in contexts where a comma is used to separate items in a list (such as arguments to functions or lists
of initializers). On the other hand, it can be used within a parenthesized expression or within the second
expression of a conditional operator in such contexts. In the function call::

  f(a, (t=3, t+2), c)

the function has three arguments, the second of which has the value 5.

**Forward references:** initialization (:ref:`4.7.8`).

.. [#] A comma operator does not yield an lvalue.

.. index::
   pair: expressions; constant

.. _4.6:

Constant expressions
====================
**Description**

A constant expression can be evaluated during translation rather than runtime, and
accordingly may be used in any place that a constant may be.

**Constraints**
Constant expressions shall not contain assignment, increment, decrement, function-call,
or comma operators, except when they are contained within a subexpression that is not
evaluated. [#]_

Each constant expression shall evaluate to a constant that is in the range of representable
values for its type.

**Semantics**

An expression that evaluates to a constant is required in several contexts. If a floating
expression is evaluated in the translation environment, the arithmetic precision and range
shall be at least as great as if the expression were being evaluated in the execution
environment.

An *integer constant expression* [#]_ shall have integer type and shall only have operands
that are integer constants, enumeration constants, character constants, ``sizeof``
expressions whose results are integer constants, and floating constants that are the
immediate operands of casts. Cast operators in an integer constant expression shall only
convert arithmetic types to integer types, except as part of an operand to the ``sizeof``
operator.

More latitude is permitted for constant expressions in initializers. Such a constant
expression shall be, or evaluate to, one of the following:

* an arithmetic constant expression,
* a null pointer constant,
* an address constant, or
* an address constant for an object type plus or minus an integer constant expression.

An *arithmetic constant expression* shall have arithmetic type and shall only have
operands that are integer constants, floating constants, enumeration constants, character
constants, and ``sizeof`` expressions. Cast operators in an arithmetic constant expression
shall only convert arithmetic types to arithmetic types, except as part of an operand to a
``sizeof`` operator whose result is an integer constant.

An *address constant* is a null pointer, a pointer to an lvalue designating an object of static
storage duration, or a pointer to a function designator; it shall be created explicitly using
the unary ``&`` operator or an integer constant cast to pointer type, or implicitly by the use of
an expression of array or function type. The array-subscript ``[]`` and member-access .
and ``->`` operators, the address ``&`` and indirection ``*`` unary operators, and pointer casts may
be used in the creation of an address constant, but the value of an object shall not be
accessed by use of these operators.

An implementation may accept other forms of constant expressions.

The semantic rules for the evaluation of a constant expression are the same as for
nonconstant expressions. [#]_

**Forward references:** array declarators (:ref:`4.7.5.2`), initialization (:ref:`4.7.8`).


.. [#] The operand of a sizeof operator is usually not evaluated (:ref:`4.5.3.4`).
.. [#] An integer constant expression is used to specify the size of a bit-field member of a structure, the
  value of an enumeration constant, the size of an array, or the value of a ``case`` constant. Further
  constraints that apply to the integer constant expressions used in conditional-inclusion preprocessing
  directives are discussed in :ref:`12.1`.
.. [#] Thus, in the following initialization, ``static int i = 2 || 1 / 0;`` 
  the expression is a valid integer constant expression with value one.

.. index::
   single: declarations

.. _4.7:

Declarations
============
**Constraints**

A declaration shall declare at least a declarator (other than the parameters of a function or
the members of a structure or union), a tag, or the members of an enumeration.

If an identifier has no linkage, there shall be no more than one declaration of the identifier
(in a declarator or type specifier) with the same scope and in the same name space, except
for tags as specified in :ref:`4.7.2.3`.

All declarations in the same scope that refer to the same object or function shall specify
compatible types.

**Semantics**

A declaration specifies the interpretation and attributes of a set of identifiers. A *definition*
of an identifier is a declaration for that identifier that:

* for an object, causes storage to be reserved for that object;
* for a function, includes the function body; [#]_
* for an enumeration constant or typedef name, is the (only) declaration of the
  identifier.

The declaration specifiers consist of a sequence of specifiers that indicate the linkage,
storage duration, and part of the type of the entities that the declarators denote. The init-
declarator-list is a comma-separated sequence of declarators, each of which may have
additional type information, or an initializer, or both. The declarators contain the
identifiers (if any) being declared.

If an identifier for an object is declared with no linkage, the type for the object shall be
complete by the end of its declarator, or by the end of its init-declarator if it has an
initializer; in the case of function parameters (including in prototypes), it is the adjusted
type (see :ref:`4.7.5.3`) that is required to be complete.

**Forward references:** declarators (:ref:`4.7.5`), enumeration specifiers (:ref:`4.7.2.2`),
initialization (:ref:`4.7.8`).

.. [#] Function definitions have a different syntax, described in :ref:`4.9.1`.

.. index::
   pair: specifiers; storage-class

.. _4.7.1:

Storage-class specifiers
------------------------
**Constraints**

At most, one storage-class specifier may be given in the declaration specifiers in a
declaration. [#]_

**Semantics**

The ``typedef`` specifier is called a "storage-class specifier" for syntactic convenience
only; it is discussed in :ref:`4.7.7`. The meanings of the various linkages and storage durations
were discussed in :ref:`4.2.2` and :ref:`4.2.4`.

A declaration of an identifier for an object with storage-class specifier ``register``
suggests that access to the object be as fast as possible. The extent to which such
suggestions are effective is implementation-defined. [#]_

The declaration of an identifier for a function that has block scope shall have no explicit
storage-class specifier other than ``extern``.

If an aggregate or union object is declared with a storage-class specifier other than
``typedef``, the properties resulting from the storage-class specifier, except with respect to
linkage, also apply to the members of the object, and so on recursively for any aggregate
or union member objects.

**Forward references:** type definitions (:ref:`4.7.7`).

.. [#] See "future language directions" (:ref:`4.11.5`).
.. [#] The implementation may treat any ``register`` declaration simply as an ``auto`` declaration. However,
  whether or not addressable storage is actually used, the address of any part of an object declared with
  storage-class specifier register cannot be computed, either explicitly (by use of the unary ``&``
  operator as discussed in :ref:`4.5.3.2`) or implicitly (by converting an array name to a pointer as discussed in
  :ref:14.3.2.1`). Thus, the only operator that can be applied to an array declared with storage-class specifier
  ``register`` is ``sizeof``.

.. index::
   pair: specifiers; type

.. _4.7.2:

Type specifiers
---------------
**Constraints**

At least one type specifier shall be given in the declaration specifiers in each declaration,
and in the specifier-qualifier list in each struct declaration and type name. Each list of
type specifiers shall be one of the following sets (delimited by commas, when there is
more than one set on a line); the type specifiers may occur in any order, possibly
intermixed with the other declaration specifiers.

* ``void``
* ``char``
* ``signed char``
* ``unsigned char``
* ``short, signed short, short int`` or ``signed short int``
* ``unsigned short`` or ``unsigned short int``
* ``int, signed`` or ``signed int``
* ``unsigned`` or ``unsigned int``
* ``long, signed long, long int`` or `signed long int``
* ``unsigned long`` or ``unsigned long int``
* ``long long, signed long long, long long int`` or ``signed long long int``
* ``unsigned long long`` or ``unsigned long long int``
* ``float``
* ``double``
* ``long double``
* ``_Bool``
* ``float _Complex``
* ``double _Complex``
* ``long double _Complex``
* ``struct`` or ``union`` specifier
* ``enum`` specifier
* ``typedef`` name

The type specifier ``_Complex`` shall not be used if the implementation does not provide
complex types. [#]_

**Semantics**

Specifiers for structures, unions, and enumerations are discussed in :ref:`4.7.2.1` through
:ref:`4.7.2.3`. Declarations of ``typedef`` names are discussed in :ref:`4.7.7`. The characteristics of the
other types are discussed in :ref:`4.2.5`.

Each of the comma-separated sets designates the same type, except that for bit-fields, it is
implementation-defined whether the specifier int designates the same type as ``signed
int`` or the same type as ``unsigned int``.

**Forward references:** enumeration specifiers (:ref:`4.7.2.2`), structure and union specifiers
(:ref:`4.7.2.1`), tags (:ref:`4.7.2.3`), type definitions (:ref:`4.7.7`).

.. [#] Freestanding implementations are not required to provide complex types.

.. index::
   pair: specifiers; structure
   pair: specifiers; union

.. _4.7.2.1:

Structure and union specifiers
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

A structure or union shall not contain a member with incomplete or function type (hence,
a structure shall not contain an instance of itself, but may contain a pointer to an instance
of itself), except that the last member of a structure with more than one named member
may have incomplete array type; such a structure (and any union containing, possibly
recursively, a member that is such a structure) shall not be a member of a structure or an
element of an array.

The expression that specifies the width of a bit-field shall be an integer constant
expression with a nonnegative value that does not exceed the width of an object of the
type that would be specified were the colon and expression omitted. If the value is zero,
the declaration shall have no declarator.

A bit-field shall have a type that is a qualified or unqualified version of ``_Bool, signed
int, unsigned int`` or some other implementation-defined type.

**Semantics**

As discussed in :ref:`4.2.5`, a structure is a type consisting of a sequence of members, whose
storage is allocated in an ordered sequence, and a union is a type consisting of a sequence
of members whose storage overlap.

Structure and union specifiers have the same form.

The presence of a struct-declaration-list in a struct-or-union-specifier declares a new type,
within a translation unit. The struct-declaration-list is a sequence of declarations for the
members of the structure or union. If the struct-declaration-list contains no named
members, the behavior is undefined. The type is incomplete until after the ``}`` that
terminates the list.

A member of a structure or union may have any object type other than a variably
modified type. [#]_ In addition, a member may be declared to consist of a specified
number of bits (including a sign bit, if any). Such a member is called a *bit-field*; [#]_ its
width is preceded by a colon.

A bit-field is interpreted as a signed or unsigned integer type consisting of the specified
number of bits. [#]_ If the value 0 or 1 is stored into a nonzero-width bit-field of type
``_Bool``, the value of the bit-field shall compare equal to the value stored.

An implementation may allocate any addressable storage unit large enough to hold a bit-
field. If enough space remains, a bit-field that immediately follows another bit-field in a
structure shall be packed into adjacent bits of the same unit. If insufficient space remains,
whether a bit-field that does not fit is put into the next unit or overlaps adjacent units is
implementation-defined. The order of allocation of bit-fields within a unit (high-order to
low-order or low-order to high-order) is implementation-defined. The alignment of the
addressable storage unit is unspecified.

A bit-field declaration with no declarator, but only a colon and a width, indicates an
unnamed bit-field. [#]_ As a special case, a bit-field structure member with a width of 0
indicates that no further bit-field is to be packed into the unit in which the previous bit-
field, if any, was placed.

Each non-bit-field member of a structure or union object is aligned in an implementation-
defined manner appropriate to its type.

Within a structure object, the non-bit-field members and the units in which bit-fields
reside have addresses that increase in the order in which they are declared. A pointer to a
structure object, suitably converted, points to its initial member (or if that member is a
bit-field, then to the unit in which it resides), and vice versa. There may be unnamed
padding within a structure object, but not at its beginning.

The size of a union is sufficient to contain the largest of its members. The value of at
most one of the members can be stored in a union object at any time. A pointer to a
union object, suitably converted, points to each of its members (or if a member is a bit-
field, then to the unit in which it resides), and vice versa.

There may be unnamed padding at the end of a structure or union.

As a special case, the last element of a structure with more than one named member may
have an incomplete array type; this is called a *flexible array member*. In most situations,
the flexible array member is ignored. In particular, the size of the structure is as if the
flexible array member were omitted except that it may have more trailing padding than
the omission would imply. However, when a ``.`` (or ``->``) operator has a left operand that is
(a pointer to) a structure with a flexible array member and the right operand names that
member, it behaves as if that member were replaced with the longest array (with the same
element type) that would not make the structure larger than the object being accessed; the
offset of the array shall remain that of the flexible array member, even if this would differ
from that of the replacement array. If this array would have no elements, it behaves as if
it had one element but the behavior is undefined if any attempt is made to access that
element or to generate a pointer one past it.

EXAMPLE After the declaration:

.. code-block:: c

  struct s { int n; double d[]; };

the structure struct ``s`` has a flexible array member ``d``. A typical way to use this is:

.. code-block:: c

  int m = /* some value */;
  struct s *p = malloc(sizeof (struct s) + sizeof (double [m]));

and assuming that the call to malloc succeeds, the object pointed to by ``p`` behaves, for most
purposes, as if ``p`` had been declared as:

.. code-block:: c

  struct { int n; double d[m]; } *p;

(there are circumstances in which this equivalence is broken; in particular, the offsets of
member ``d`` might not be the same).

Following the above declaration:

.. code-block:: c

  struct s t1 = { 0 };         // valid
  struct s t2 = { 1, { 4.2 }}; // valid
  t1.n = 4;                    // valid
  t1.d[0] = 4.2;               // might be undefined behavior

The initialization of ``t2`` is invalid (and violates a constraint) because
``struct s`` is treated as if it did not contain member ``d``. The assignment
to ``t1.d[0]`` is probably undefined behavior, but it is possible that

.. code-block:: c

  sizeof (struct s) >= offsetof(struct s, d) + sizeof (double)

in which case the assignment would be legitimate. Nevertheless, it cannot appear in
strictly conforming code.

After the further declaration:

.. code-block:: c

  struct ss { int n; };
  the expressions:
  sizeof (struct s) >= sizeof (struct ss)
  sizeof (struct s) >= offsetof(struct s, d)

are always equal to 1.

If ``sizeof (double)`` is 8, then after the following code is executed:

.. code-block:: c

  struct s *s1;
  struct s *s2;
  s1 = malloc(sizeof (struct s) + 64);
  s2 = malloc(sizeof (struct s) + 46);

and assuming that the calls to ``malloc`` succeed, the objects pointed to by
``s1`` and ``s2`` behave, for most purposes, as if the identifiers had been 
declared as:

.. code-block:: c

  struct { int n; double d[8]; } *s1;
  struct { int n; double d[5]; } *s2;

Following the further successful assignments:

.. code-block:: c

  s1 = malloc(sizeof (struct s) + 10);
  s2 = malloc(sizeof (struct s) + 6);

they then behave as if the declarations were:

.. code-block:: c

  struct { int n; double d[1]; } *s1, *s2;

and:

.. code-block:: c

  double *dp;       
  dp = &(s1->d[0]); // valid
  *dp = 42;         // valid
  dp = &(s2->d[0]); // valid
  *dp = 42;         // undefined behavior

The assignment::

  *s1 = *s2;

only copies the member ``n;`` if any of the array elements are within the first
``sizeof (struct s)`` bytes of the structure, they might be copied or simply
overwritten with indeterminate values.

**Forward references:** tags (:ref:`4.7.2.3`).


.. [#] A structure or union can not contain a member with a variably modified type
  because member names are not ordinary identifiers as defined in :ref:`4.2.3`.
.. [#] The unary ``&`` (address-of) operator cannot be applied to a bit-field object; thus,
  there are no pointers to or arrays of bit-field objects.
.. [#] As specified in :ref:`4.7.2` above, if the actual type specifier used is ``int`` or a
  typedef-name defined as ``int``, then it is implementation-defined whether the bit-field is
  signed or unsigned.
.. [#] An unnamed bit-field structure member is useful for padding to conform to externally imposed
  layouts.

.. index::
   pair: specifiers; enumerations

.. _4.7.2.2:

Enumeration specifiers
^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

The expression that defines the value of an enumeration constant shall be an integer
constant expression that has a value representable as an ``int``.

**Semantics**

The identifiers in an enumerator list are declared as constants that have type int and
may appear wherever such are permitted. [#]_ An enumerator with = defines its
enumeration constant as the value of the constant expression. If the first enumerator has
no =, the value of its enumeration constant is 0. Each subsequent enumerator with no =
defines its enumeration constant as the value of the constant expression obtained by
adding 1 to the value of the previous enumeration constant. (The use of enumerators with
= may produce enumeration constants with values that duplicate other values in the same
enumeration.) The enumerators of an enumeration are also known as its members.

Each enumerated type shall be compatible with char, a signed integer type, or an
unsigned integer type. The choice of type is implementation-defined, [#]_ but shall be
capable of representing the values of all the members of the enumeration. The
enumerated type is incomplete until after the } that terminates the list of enumerator
declarations.

The following fragment:

.. code-block:: c

  enum hue { chartreuse, burgundy, claret=20, winedark };
  enum hue col, *cp;
  col = claret;
  cp = &col;
  if (*cp != burgundy)
  /* ... */

makes hue the tag of an enumeration, and then declares col as an object that has that type and ``cp`` as a
pointer to an object that has that type. The enumerated values are in the set ``{ 0, 1, 20, 21 }``.
Forward references: tags (:ref:`4.7.2.3`).

.. [#] Thus, the identifiers of enumeration constants declared in the same scope shall
  all be distinct from each other and from other identifiers declared in ordinary declarators.
.. [#] An implementation may delay the choice of which integer type until all
  enumeration constants have been seen.

.. index::
   single: tags

.. _4.7.2.3:

Tags
^^^^
**Constraints**

A specific type shall have its content defined at most once.

A type specifier of the form::

  enum *identifier*

without an enumerator list shall only appear after the type it specifies is complete.

**Semantics**

All declarations of structure, union, or enumerated types that have the same scope and
use the same tag declare the same type. The type is incomplete [#]_ until the closing brace
of the list defining the content, and complete thereafter.

Two declarations of structure, union, or enumerated types which are in different scopes or
use different tags declare distinct types. Each declaration of a structure, union, or
enumerated type which does not include a tag declares a distinct type.

A type specifier of the form::

  struct-or-union identifier(optional) { struct-declaration-list }

or::

  enum identifier { enumerator-list }

or::

  enum identifier { enumerator-list , }

declares a structure, union, or enumerated type. The list defines the *structure content,
union content* or *enumeration content*. If an identifier is provided, [#]_ the type specifier
also declares the identifier to be the tag of that type.

A declaration of the form::

  struct-or-union identifier ;

specifies a structure or union type and declares the identifier as a tag of that type. [#]_

If a type specifier of the form::

  struct-or-union identifier

occurs other than as part of one of the above forms, and no other declaration of the
identifier as a tag is visible, then it declares an incomplete structure or union type, and
declares the identifier as the tag of that type. [88]_

If a type specifier of the form::

  struct-or-union identifier

or::

  enum identifier

occurs other than as part of one of the above forms, and a declaration of the identifier as a
tag is visible, then it specifies the same type as that other declaration, and does not
redeclare the tag.

EXAMPLE 1 This mechanism allows declaration of a self-referential structure.

.. code-block:: c

  struct tnode {
  int count;
  struct tnode *left, *right;
  };

specifies a structure that contains an integer and two pointers to objects of the same type. Once this
declaration has been given, the declaration

.. code-block:: c

  struct tnode s, *sp;

declares ``s`` to be an object of the given type and sp to be a pointer to an object of the given type. With
these declarations, the expression ``sp->left`` refers to the left struct tnode pointer of the object to
which sp points; the expression ``s.right->count`` designates the count member of the right struct
tnode pointed to from ``s``.

The following alternative formulation uses the typedef mechanism:

.. code-block:: c

  typedef struct tnode TNODE;
  struct tnode {
    int count;
    TNODE *left, *right;
  };
  TNODE s, *sp;

EXAMPLE 2 To illustrate the use of prior declaration of a tag to specify a pair of mutually referential
structures, the declarations

.. code-block:: c

  struct s1 { struct s2 *s2p; /* ... */ }; // D1
  struct s2 { struct s1 *s1p; /* ... */ }; // D2

specify a pair of structures that contain pointers to each other. Note, however, that if ``s2`` were already
declared as a tag in an enclosing scope, the declaration ``D1`` would refer to it, not to the tag ``s2`` declared in
``D2``. To eliminate this context sensitivity, the declaration

.. code-block:: c

  struct s2;

may be inserted ahead of ``D1``. This declares a new tag ``s2`` in the inner scope; the declaration ``D2`` then
completes the specification of the new type.

**Forward references:** declarators (:ref:`4.7.5`), array declarators (:ref:`4.7.5.2`), type definitions
(:ref:`4.7.7`).


.. [#] An incomplete type may only by used when the size of an object of that type is not needed. It is not
  needed, for example, when a typedef name is declared to be a specifier for a structure or union, or
  when a pointer to or a function returning a structure or union is being declared. (See incomplete types
  in :ref:`4.2.5`.) The specification has to be complete before such a function is called or defined.
.. [#] If there is no identifier, the type can, within the translation unit, only be referred to by the declaration
  of which it is a part. Of course, when the declaration is of a typedef name, subsequent declarations
  can make use of that typedef name to declare objects having the specified structure, union, or
  enumerated type.
.. [#] A similar construction with ``enum`` does not exist.

.. index::
   pair: qualifiers; type

.. _4.7.3:

Type qualifiers
---------------
**Constraints**

Types other than pointer types derived from object or incomplete types shall not be
restrict-qualified.

**Semantics**

The properties associated with qualified types are meaningful only for expressions that
are lvalues. [#]_

If the same qualifier appears more than once in the same *specifier-qualifier-list*, either
directly or via one or more typedefs, the behavior is the same as if it appeared only
once.

If an attempt is made to modify an object defined with a const-qualified type through use
of an lvalue with non-const-qualified type, the behavior is undefined. If an attempt is
made to refer to an object defined with a volatile-qualified type through use of an lvalue
with non-volatile-qualified type, the behavior is undefined. [#]_

An object that has volatile-qualified type may be modified in ways unknown to the
implementation or have other unknown side effects. Therefore any expression referring
to such an object shall be evaluated strictly according to the rules of the abstract machine,
as described in :ref:`3.1.2.3`. Furthermore, at every sequence point the value last stored in the
object shall agree with that prescribed by the abstract machine, except as modified by the
unknown factors mentioned previously. [#]_ What constitutes an access to an object that
has volatile-qualified type is implementation-defined.

An object that is accessed through a restrict-qualified pointer has a special association
with that pointer. This association, defined in :ref:`4.7.3.1` below, requires that all accesses to
that object use, directly or indirectly, the value of that particular pointer. [#]_ The intended
use of the ``restrict`` qualifier (like the ``register`` storage class) is to promote
optimization, and deleting all instances of the qualifier from all preprocessing translation
units composing a conforming program does not change its meaning (i.e., observable
behavior).

If the specification of an array type includes any type qualifiers, the element type is so-
qualified, not the array type. If the specification of a function type includes any type
qualifiers, the behavior is undefined. [#]_

For two qualified types to be compatible, both shall have the identically qualified version
of a compatible type; the order of type qualifiers within a list of specifiers or qualifiers
does not affect the specified type.

EXAMPLE 1 An object declared

.. code-block:: c

  extern const volatile int real_time_clock;

may be modifiable by hardware, but cannot be assigned to, incremented, or decremented.

EXAMPLE 2 The following declarations and expressions illustrate the behavior when type qualifiers
modify an aggregate type:

.. code-block:: c

  const struct s { int mem; } cs = { 1 };
  struct s ncs; // the object ncs is modifiable
  typedef int A[2][3];
  const A a = {{4, 5, 6}, {7, 8, 9}}; // array of array of const int
  int *pi;
  const int *pci;

  ncs = cs;       // valid
  cs = ncs;       // violates modifiable lvalue constraint for =
  pi = &ncs.mem;  // valid
  pi = &cs.mem;   // violates type constraints for =
  pci = &cs.mem;  // valid
  pi = a[0];      // nvalid: a[0] has type ‘‘const int *’’

.. [#] The implementation may place a ``const`` object that is not ``volatile`` in a read-only region of
  storage. Moreover, the implementation need not allocate storage for such an object if its address is
  never used.
.. [#] This applies to those objects that behave as if they were defined with qualified types, even
  if they are never actually defined as objects in the program (such as an object at a memory-mapped
  input/output address).
.. [#] A ``volatile`` declaration may be used to describe an object corresponding to a memory-mapped
  input/output port or an object accessed by an asynchronously interrupting function. Actions on
  objects so declared shall not be "optimized out" by an implementation or reordered except as
  permitted by the rules for evaluating expressions.
.. [#] For example, a statement that assigns a value returned by ``malloc`` to a single pointer
  establishes this association between the allocated object and the pointer.
.. [#] Both of these can occur through the use of typedefs.

.. index::
   pair: restrict; formal definition

.. _4.7.3.1:

Formal definition of ``restrict``
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Let ``D`` be a declaration of an ordinary identifier that provides a means of designating an
object ``P`` as a restrict-qualified pointer to type ``T``.

If ``D`` appears inside a block and does not have storage class ``extern``, let ``B`` denote the
block. If ``D`` appears in the list of parameter declarations of a function definition, let ``B``
denote the associated block. Otherwise, let ``B`` denote the block of main (or the block of
whatever function is called at program startup in a freestanding environment).

In what follows, a pointer expression ``E`` is said to be based on object ``P`` if (at some
sequence point in the execution of ``B`` prior to the evaluation of ``E``) modifying ``P`` to point to
a copy of the array object into which it formerly pointed would change the value of E. [#]_
Note that "based" is defined only for expressions with pointer types.

During each execution of ``B``, let ``L`` be any lvalue that has ``&L`` based on `P``. If ``L`` is used to
access the value of the object ``X`` that it designates, and ``X`` is also modified (by any means),
then the following requirements apply: ``T`` shall not be const-qualified. Every other lvalue
used to access the value of ``X`` shall also have its address based on ``P``. Every access that
modifies ``X`` shall be considered also to modify ``P``, for the purposes of this subclause. If ``P``
is assigned the value of a pointer expression ``E`` that is based on another restricted pointer
object ``P2``, associated with block ``B2``, then either the execution of ``B2`` shall begin before
the execution of ``B``, or the execution of ``B2`` shall end prior to the assignment. If these
requirements are not met, then the behavior is undefined.

Here an execution of ``B`` means that portion of the execution of the program that would
correspond to the lifetime of an object with scalar type and automatic storage duration
ssociated with B.

A translator is free to ignore any or all aliasing implications of uses of ``restrict``.

EXAMPLE 1 The file scope declarations

.. code-block:: c

  int * restrict a;
  int * restrict b;
  extern int c[];

assert that if an object is accessed using one of ``a, b`` or ``c``, and that object is modified anywhere in the
program, then it is never accessed using either of the other two.

EXAMPLE 2 The function parameter declarations in the following example

.. code-block:: c

  void f(int n, int * restrict p, int * restrict q)
  {
    while (n-- > 0)
    *p++ = *q++;
  }

assert that, during each execution of the function, if an object is accessed through one of the pointer
parameters, then it is not also accessed through the other.

The benefit of the restrict qualifiers is that they enable a translator to make an effective dependence
analysis of function f without examining any of the calls of ``f`` in the program. The cost is that the
programmer has to examine all of those calls to ensure that none give undefined behavior. For example, the
second call of ``f`` in ``g`` has undefined behavior because each of ``d[1]`` through ``d[49]`` is accessed through
both ``p`` and ``q``.

.. code-block:: c

  void g(void)
  {
    extern int d[100];
    f(50, d + 50, d); // valid
    f(50, d + 1, d); // undefined behavior
  }

EXAMPLE 3 The function parameter declarations

.. code-block:: c

  void h(int n, int * restrict p, int * restrict q, int * restrict r)
  {
    int i;
    for (i = 0; i < n; i++)
    p[i] = q[i] + r[i];
  }

illustrate how an unmodified object can be aliased through two restricted pointers. In particular, if ``a`` and ``b``
are disjoint arrays, a call of the form ``h(100, a, b, b)`` has defined behavior, because array ``b`` is not
modified within function ``h``.

EXAMPLE 4 The rule limiting assignments between restricted pointers does not distinguish between a
function call and an equivalent nested block. With one exception, only "outer-to-inner" assignments
between restricted pointers declared in nested blocks have defined behavior.

.. code-block:: c

  {
    int * restrict p1;
    int * restrict q1;
    p1 = q1; // undefined behavior
    {
      int * restrict p2 = p1; // valid
      int * restrict q2 = q1; // valid
      p1 = q2;                // undefined behavior
      p2 = q2;                // undefined behavior
    }
  }

The one exception allows the value of a restricted pointer to be carried out of the block in which it (or, more
precisely, the ordinary identifier used to designate it) is declared when that block finishes execution. For
example, this permits new_vector to return a vector.

.. code-block:: c

  typedef struct { int n; float * restrict v; } vector;
  vector new_vector(int n)
  {
    vector t;
    t.n = n;
    t.v = malloc(n * sizeof (float));
    return t;
  }

.. [#] In other words, ``E`` depends on the value of ``P`` itself rather than on the value of an object referenced
  indirectly through ``P``. For example, if identifier ``p`` has type (``int **restrict`), then the pointer
  expressions ``p`` and ``p+1`` are based on the restricted pointer object designated by ``p``, but the pointer
  expressions ``*p`` and ``p[1]`` are not.

.. index::
   pair: specifiers; function

.. _4.7.4:

Function specifiers
-------------------
**Constraints**

Function specifiers shall be used only in the declaration of an identifier for a function.

An inline definition of a function with external linkage shall not contain a definition of a
modifiable object with static storage duration, and shall not contain a reference to an
identifier with internal linkage.

In a hosted environment, the ``inline`` function specifier shall not appear in a declaration
of ``main``.

**Semantics**

A function declared with an ``inline`` function specifier is an *inline function*. The
function specifier may appear more than once; the behavior is the same as if it appeared
only once. Making a function an inline function suggests that calls to the function be as
fast as possible. [#]_ The extent to which such suggestions are effective is
implementation-defined. [#]_

Any function with internal linkage can be an inline function. For a function with external
linkage, the following restrictions apply: If a function is declared with an ``inline``
function specifier, then it shall also be defined in the same translation unit. If all of the
file scope declarations for a function in a translation unit include the ``inline` function
specifier without ``extern``, then the definition in that translation unit is an *inline
definition*. An inline definition does not provide an external definition for the function,
and does not forbid an external definition in another translation unit. An inline definition
provides an alternative to an external definition, which a translator may use to implement
any call to the function in the same translation unit. It is unspecified whether a call to the
function uses the inline definition or the external definition. [#]_

EXAMPLE The declaration of an inline function with external linkage can result in either an external
definition, or a definition available for use only within the translation unit. A file scope declaration with
extern creates an external definition. The following example shows an entire translation unit.

.. code-block:: c

  inline double fahr(double t)
  {
    return (9.0 * t) / 5.0 + 32.0;
  }
  inline double cels(double t)
  {
    return (5.0 * (t - 32.0)) / 9.0;
  }
  extern double fahr(double);
  // creates an external definition
  double convert(int is_fahr, double temp)
  {
    /* A translator may perform inline substitutions */
    return is_fahr ? cels(temp) : fahr(temp);
  }

Note that the definition of ``fahr`` is an external definition because ``fahr`` is also declared with extern, but
the definition of ``cels`` is an inline definition. Because ``cels`` has external linkage and is referenced, an
external definition has to appear in another translation unit (see :ref:`4.9`); the inline definition and the external
definition are distinct and either may be used for the call.

**Forward references:** function definitions (:ref:`4.9.1`).

.. [#] By using, for example, an alternative to the usual function call mechanism, such as "inline
  substitution". Inline substitution is not textual substitution, nor does it create a new function.
  Therefore, for example, the expansion of a macro used within the body of the function uses the
  definition it had at the point the function body appears, and not where the function is called; and
  identifiers refer to the declarations in scope where the body occurs. Likewise, the function has a
  single address, regardless of the number of inline definitions that occur in addition to the external
  definition.
.. [#] For example, an implementation might never perform inline substitution, or might only perform inline
  substitutions to calls in the scope of an ``inline`` declaration.
.. [#] Since an inline definition is distinct from the corresponding external definition and from any other
  corresponding inline definitions in other translation units, all corresponding objects with static storage
  duration are also distinct in each of the definitions.

.. index::
   single: declarators

.. _4.7.5:

Declarators
-----------
**Semantics**

Each declarator declares one identifier, and asserts that when an operand of the same
form as the declarator appears in an expression, it designates a function or object with the
scope, storage duration, and type indicated by the declaration specifiers.

A *full declarator* is a declarator that is not part of another declarator. The end of a full
declarator is a sequence point. If the nested sequence of declarators in a full declarator
contains a variable length array type, the type specified by the full declarator is said to be
*variably modified*.

In the following subclauses, consider a declaration::

  T D1

where ``T`` contains the declaration specifiers that specify a type *T* (such as ``int``) and ``D1`` is
a declarator that contains an identifier ident. The type specified for the identifier ident in
the various forms of declarator is described inductively using this notation.

If, in the declaration ``"T D1", D1`` has the form::

  identifier

then the type specified for ident is ``T``.

If, in the declaration ``"T D1", D1`` has the form::

  ( D )

then ident has the type specified by the declaration "T D". Thus, a declarator in
parentheses is identical to the unparenthesized declarator, but the binding of complicated
declarators may be altered by parentheses.

**Implementation limits**

As discussed in :ref:`3.2.4.1`, an implementation may limit the number of pointer, array, and
function declarators that modify an arithmetic, structure, union, or incomplete type, either
directly or via one or more typedefs.

**Forward references:** array declarators (:ref:`4.7.5.2`), type definitions (:ref:`4.7.7`).

.. index::
   pair: qualifiers; pointer

.. _4.7.5.1:

Pointer declarators
^^^^^^^^^^^^^^^^^^^
**Semantics**

If, in the declaration ``"T D1", D1`` has the form::

  * type-qualifier-listopt D

and the type specified for ident in the declaration ``"T D"`` is "derived-declarator-type-list
T", then the type specified for ident is "derived-declarator-type-list type-qualifier-list
pointer to T". For each type qualifier in the list, ident is a so-qualified pointer.

For two pointer types to be compatible, both shall be identically qualified and both shall
be pointers to compatible types.

EXAMPLE The following pair of declarations demonstrates the difference between a "variable pointer
to a constant value" and a "constant pointer to a variable value".

.. code-block:: c

  const int *ptr_to_constant;
  int *const constant_ptr;

The contents of any object pointed to by ``ptr_to_constant`` shall not be modified through that pointer,
but ``ptr_to_constant`` itself may be changed to point to another object. Similarly, the contents of the
int pointed to by ``constant_ptr`` may be modified, but constant_ptr itself shall always point to the
same location.

The declaration of the constant pointer constant_ptr may be clarified by including a definition for the
type "pointer to int".

.. code-block:: c

  typedef int *int_ptr;
  const int_ptr constant_ptr;

declares constant_ptr as an object that has type "const-qualified pointer to ``int``".

.. index::
   pair: declarators; array

.. _4.7.5.2:

Array declarators
^^^^^^^^^^^^^^^^^
**Constraints**

1 In addition to optional type qualifiers and the keyword static, the [ and ] may delimit
  an expression or ``*``. If they delimit an expression (which specifies the size of an array), the
  expression shall have an integer type. If the expression is a constant expression, it shall
  have a value greater than zero. The element type shall not be an incomplete or function
  type. The optional type qualifiers and the keyword static shall appear only in a
  declaration of a function parameter with an array type, and then only in the outermost
  array type derivation.
2 Only an ordinary identifier (as defined in 6.2.3) with both block scope or function
  prototype scope and no linkage shall have a variably modified type. If an identifier is
  declared to be an object with static storage duration, it shall not have a variable length
  array type.

**Semantics**

If, in the declaration ‘‘T D1’’, D1 has one of the forms::

  D[ type-qualifier-listopt assignment-expressionopt ]
  D[ static type-qualifier-list(opt) assignment-expression ]
  D[ type-qualifier-list static assignment-expression ]
  D[ type-qualifier-listopt * ]

and the type specified for ident in the declaration ``"T D"`` is "derived-declarator-type-list
T", then the type specified for ident is "derived-declarator-type-list array of T". [#]_
(See :ref:`4.7.5.3` for the meaning of the optional type qualifiers and the keyword ``static``.)

If the size is not present, the array type is an incomplete type. If the size is ``*`` instead of
being an expression, the array type is a variable length array type of unspecified size,
which can only be used in declarations with function prototype scope; [#]_ such arrays are
nonetheless complete types. If the size is an integer constant expression and the element
type has a known constant size, the array type is not a variable length array type;
otherwise, the array type is a variable length array type.

If the size is an expression that is not an integer constant expression: if it occurs in a
declaration at function prototype scope, it is treated as if it were replaced by ``*``; otherwise,
each time it is evaluated it shall have a value greater than zero. The size of each instance
of a variable length array type does not change during its lifetime. Where a size
expression is part of the operand of a ``sizeof`` operator and changing the value of the
size expression would not affect the result of the operator, it is unspecified whether or not
the size expression is evaluated.

For two array types to be compatible, both shall have compatible element types, and if
both size specifiers are present, and are integer constant expressions, then both size
specifiers shall have the same constant value. If the two array types are used in a context
which requires them to be compatible, it is undefined behavior if the two size specifiers
evaluate to unequal values.

EXAMPLE 1

.. code-block:: c

  float fa[11], *afp[17];

declares an array of ``float`` numbers and an array of pointers to float numbers.

EXAMPLE 2 Note the distinction between the declarations

.. code-block:: c

  extern int *x;
  extern int y[];

The first declares ``x`` to be a pointer to ``int``; the second declares y to be an array of int of unspecified size
(an incomplete type), the storage for which is defined elsewhere.

EXAMPLE 3
The following declarations demonstrate the compatibility rules for variably modified types.

.. code-block:: c

  extern int n;
  extern int m;
  void fcompat(void)
  {
    int a[n][6][m];
    int (*p)[4][n+1];
    int c[n][n][6][m];
    int (*r)[n][n][n+1];
    p = a;               // invalid: not compatible because 4 != 6
    r = c;               // compatible, but defined behavior only if
                         // n == 6 and m == n+1
  }

EXAMPLE 4 All declarations of variably modified (VM) types have to be at either block scope or
function prototype scope. Array objects declared with the ``static`` or ``extern`` storage-class specifier
cannot have a variable length array (VLA) type. However, an object declared with the ``static`` storage-
class specifier can have a VM type (that is, a pointer to a VLA type). Finally, all identifiers declared with a
VM type have to be ordinary identifiers and cannot, therefore, be members of structures or unions.

.. code-block:: c

  extern int n;                  // invalid: file scope VLA
  int A[n];                      // invalid: file scope VM
  extern int (*p2)[n];           // valid: file scope but not VM
  int B[100]; 
  void fvla(int m, int C[m][m]); // valid: VLA with prototype scope
  void fvla(int m, int C[m][m])  // valid: adjusted to auto pointer to VLA
  { 
    typedef int VLA[m][m];         // valid: block scope typedef VLA

    struct tag {
      int (*y)[n];                   // invalid: y not ordinary identifier
      int z[n];                      // invalid: z not ordinary identifier
    };
    int D[m];                      // valid: auto VLA
    static int E[m];               // invalid: static block scope VLA
    extern int F[m];               // invalid: F has linkage and is VLA
    int (*s)[m];                   // valid: auto pointer to VLA
    extern int (*r)[m];            // invalid: r has linkage and points to VLA
    static int (*q)[m] = &B;       // valid: q is a static block pointer to VLA
  }

**Forward references:** function declarators (:ref:`4.7.5.3`), function definitions (:ref:`4.9.1`),
initialization (:ref:`4.7.8`).

.. [#] When several "array of" specifications are adjacent, a multidimensional array is declared.
.. [#] Thus, ``*`` can be used only in function declarations that are not definitions (see :ref:`4.7.5.3`).

.. index::
   pair: declarators; function

.. _4.7.5.3:

Function declarators (including prototypes)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

A function declarator shall not specify a return type that is a function type or an array
type.

The only storage-class specifier that shall occur in a parameter declaration is **register**.

An identifier list in a function declarator that is not part of a definition of that function
shall be empty.

After adjustment, the parameters in a parameter type list in a function declarator that is
part of a definition of that function shall not have incomplete type.
Semantics

If, in the declaration ``"T D1", D1`` has the form::

  D( parameter-type-list )

or::

  D( identifier-listopt )

and the type specified for *ident* in the declaration ``"T D"`` is *"derived-declarator-type-list
T"*, then the type specified for *ident* is "*derived-declarator-type-list* function returning
T".

A parameter type list specifies the types of, and may declare identifiers for, the
parameters of the function.

A declaration of a parameter as "array of type" shall be adjusted to "qualified pointer to
type", where the type qualifiers (if any) are those specified within the ``[`` and ``]`` of the
array type derivation. If the keyword ``static`` also appears within the ``[`` and ``]`` of the
array type derivation, then for each call to the function, the value of the corresponding
actual argument shall provide access to the first element of an array with at least as many
elements as specified by the size expression.

A declaration of a parameter as "function returning type" shall be adjusted to "pointer to
function returning type", as in :ref:`4.3.2.1`.

If the list terminates with an ellipsis ``(, ...)``, no information about the number or types
of the parameters after the comma is supplied. [#]_

The special case of an unnamed parameter of type ``void`` as the only item in the list
specifies that the function has no parameters.

If, in a parameter declaration, an identifier can be treated either as a typedef name or as a
parameter name, it shall be taken as a typedef name.

If the function declarator is not part of a definition of that function, parameters may have
incomplete type and may use the ``[*]`` notation in their sequences of declarator specifiers
to specify variable length array types.

The storage-class specifier in the declaration specifiers for a parameter declaration, if
present, is ignored unless the declared parameter is one of the members of the parameter
type list for a function definition.

An identifier list declares only the identifiers of the parameters of the function. An empty
list in a function declarator that is part of a definition of that function specifies that the
function has no parameters. The empty list in a function declarator that is not part of a
definition of that function specifies that no information about the number or types of the
parameters is supplied. [#]_

For two function types to be compatible, both shall specify compatible return types. [#]_
Moreover, the parameter type lists, if both are present, shall agree in the number of
parameters and in use of the ellipsis terminator; corresponding parameters shall have
compatible types. If one type has a parameter type list and the other type is specified by a
function declarator that is not part of a function definition and that contains an empty
identifier list, the parameter list shall not have an ellipsis terminator and the type of each
parameter shall be compatible with the type that results from the application of the
default argument promotions. If one type has a parameter type list and the other type is
specified by a function definition that contains a (possibly empty) identifier list, both shall
agree in the number of parameters, and the type of each prototype parameter shall be
compatible with the type that results from the application of the default argument
promotions to the type of the corresponding identifier. (In the determination of type
compatibility and of a composite type, each parameter declared with function or array
type is taken as having the adjusted type and each parameter declared with qualified type
is taken as having the unqualified version of its declared type.)

EXAMPLE 1 The declaration

.. code-block:: c

  int f(void), *fip(), (*pfi)();

declares a function ``f`` with no parameters returning an ``int``, a function ``fip`` with no parameter specification
returning a pointer to an ``int``, and a pointer ``pfi`` to a function with no parameter specification returning an
``int``. It is especially useful to compare the last two. The binding of ``*fip()`` is ``*(fip())``, so that the
declaration suggests, and the same construction in an expression requires, the calling of a function ``fip``,
and then using indirection through the pointer result to yield an ``int``. In the declarator ``(*pfi)()``, the
extra parentheses are necessary to indicate that indirection through a pointer to a function yields a function
designator, which is then used to call the function; it returns an ``int``.

If the declaration occurs outside of any function, the identifiers have file scope and external linkage. If the
declaration occurs inside a function, the identifiers of the functions ``f`` and ``fip`` have block scope and either
internal or external linkage (depending on what file scope declarations for these identifiers are visible), and
the identifier of the pointer pfi has block scope and no linkage.

EXAMPLE 2 The declaration

.. code-block:: c

  int (*apfi[3])(int *x, int *y);

declares an array ``apfi`` of three pointers to functions returning ``int``. Each of these functions has two
parameters that are pointers to ``int``. The identifiers ``x`` and ``y`` are declared for descriptive purposes only and
go out of scope at the end of the declaration of ``apfi``.


EXAMPLE 3 The declaration

.. code-block:: c

  int (*fpfi(int (*)(long), int))(int, ...);

declares a function ``fpfi`` that returns a pointer to a function returning an ``int``. The function ``fpfi`` has two
parameters: a pointer to a function returning an int (with one parameter of type ``long int``), and an ``int``.
The pointer returned by ``fpfi`` points to a function that has one int parameter and accepts zero or more
additional arguments of any type.

EXAMPEL 4 The following prototype has a variably modified parameter.

.. code-block:: c

  void addscalar(int n, int m,
  double a[n][n*m+300], double x);
  int main()
  {
    double b[4][308];
    addscalar(4, 2, b, 2.17);
    return 0;
  }
  void addscalar(int n, int m, double a[n][n*m+300], double x)
  {
    for (int i = 0; i < n; i++)
      for (int j = 0, k = n*m+300; j < k; j++)
       // a is a pointer to a VLA with n*m+300 elements
       a[i][j] += x;
  }

EXAMPLE 5 The following are all compatible function prototype declarators.

.. code-block:: c

  double maximum(int n, int m, double a[n][m]);
  double maximum(int n, int m, double a[*][*]);
  double maximum(int n, int m, double a[ ][*]);
  double maximum(int n, int m, double a[*][m]);

as are:

.. code-block:: c

  void f(double (*restrict a)[5]);
  void f(double  a[restrict][5]);
  void f(double  a[restrict 3][5]);
  void f(double  a[restrict static 3][5]);

(Note that the last declaration also specifies that the argument corresponding to ``a`` in any call to ``f`` must be a
non-null pointer to the first of at least three arrays of 5 doubles, which the others do not.)

**Forward references:** function definitions (:ref:`4.9.1`), type names (:ref:`4.7.6`).


.. [#] The macros defined in the ``<stdarg.h>`` header (:ref:`stdarg`) may be used to access arguments that
  correspond to the ellipsis.
.. [#] See "future language directions" (:ref:`4.11.6`).
.. [#] If both function types are "old style", parameter types are not compared.

.. index::
   pair: type; names

.. _4.7.6:

Type names
----------
**Semantics**

In several contexts, it is necessary to specify a type. This is accomplished using a *type
name*, which is syntactically a declaration for a function or an object of that type that
omits the identifier. [#]_

EXAMPLE The constructions::

  (a) int 
  (b) int *
  (c) int *[3]
  (d) int (*)[3]
  (e) int (*)[*]
  (f) int *()
  (g) int(*)(void)
  (h) int (*const [])(unsigned int, ...)

name respectively the types (a) ``int``, (b) pointer to ``int``, (c) array of three pointers to ``int``, (d) pointer to an
array of three ``ints``, (e) pointer to a variable length array of an unspecified number of ``ints``, (f) function
with no parameter specification returning a pointer to ``int``, (g) pointer to function with no parameters
returning an ``int``, and (h) array of an unspecified number of constant pointers to functions, each with one
parameter that has type ``unsigned int`` and an unspecified number of other parameters, returning an
``int``.

.. [#] As indicated by the syntax, empty parentheses in a type name are interpreted as "function with no
  parameter specification", rather than redundant parentheses around the omitted identifier.

.. index::
   pair: type; definitions

.. _4.7.7:

Type definitions
----------------
**Constraints**

If a typedef name specifies a variably modified type then it shall have block scope.

**Semantics**

In a declaration whose storage-class specifier is ``typedef``, each declarator defines an
identifier to be a typedef name that denotes the type specified for the identifier in the way
described in :ref:`4.7.5`. Any array size expressions associated with variable length array
declarators are evaluated each time the declaration of the typedef name is reached in the
order of execution. A ``typedef`` declaration does not introduce a new type, only a
synonym for the type so specified. That is, in the following declarations:

.. code-block:: c

  typedef T type_ident;
  type_ident D;

``type_ident`` is defined as a typedef name with the type specified by the declaration
specifiers in ``T`` (known as ``T`` ), and the identifier in ``D`` has the type *"derived-declarator-
type-list T"* where the derived-declarator-type-list is specified by the declarators of ``D``. A
typedef name shares the same name space as other identifiers declared in ordinary
declarators.

EXAMPLE 1 After

.. code-block:: c

  typedef int MILES, KLICKSP();
  typedef struct { double hi, lo; } range;

the constructions

.. code-block:: c

  MILES distance;
  extern KLICKSP *metricp;
  range x;
  range z, *zp;

are all valid declarations. The type of ``distance`` is ``int``, that of ``metricp`` is "pointer to function with no
parameter specification returning ``int``", and that of ``x`` and ``z`` is the specified structure; ``zp`` is a pointer to
such a structure. The object ``distance`` has a type compatible with any other ``int`` object.

EXAMPLE 2 After the declarations

.. code-block:: c

  typedef struct s1 { int x; } t1, *tp1;
  typedef struct s2 { int x; } t2, *tp2;

type ``t1`` and the type pointed to by ``tp1`` are compatible. Type ``t1`` is also compatible with type ``struct
s1``, but not compatible with the types ``struct s2, t2`` the type pointed to by ``tp2`` or ``int``.

The following obscure constructions

.. code-block:: c

  typedef signed int t;
  typedef int plain;
  struct tag {
    unsigned t:4;
    const t:5;
    plain r:5;
  };

declare a typedef name ``t`` with type ``signed int``, a typedef name plain with type ``int`` and a structure
with three bit-field members, one named `t`` that contains values in the range ``[0, 15]``, an unnamed const-
qualified bit-field which (if it could be accessed) would contain values in either the range ``[-15, +15]`` or
``[-16, +15]``, and one named ``r`` that contains values in one of the ranges ``[0, 31], [-15, +15]`` or ``[-16, +15]``.
(The choice of range is implementation-defined.) The first two bit-field declarations differ in that
unsigned is a type specifier (which forces t to be the name of a structure member), while ``const`` is a
type qualifier (which modifies ``t`` which is still visible as a typedef name). If these declarations are followed
in an inner scope by

.. code-block:: c

  t f(t (t));
  long t;

then a function ``f`` is declared with type "function returning ``signed int`` with one unnamed parameter
with type pointer to function returning ``signed int`` with one unnamed parameter with type ``signed
int``", and an identifier t with type ``long int``.

EXAMPLE 4 On the other hand, typedef names can be used to improve code readability. All three of the
following declarations of the ``signal`` function specify exactly the same type, the first without making use
of any typedef names.

.. code-block:: c

  typedef void fv(int), (*pfv)(int);
  void (*signal(int, void (*)(int)))(int);
  fv *signal(int, fv *);
  pfv signal(int, pfv);

EXAMPLE 5 If a typedef name denotes a variable length array type, the length of the array is fixed at the
time the typedef name is defined, not each time it is used:

.. code-block:: c

  void copyt(int n)
  {
    typedef int B[n];      // B is n ints, n evaluated now

    n += 1;
    B a;                   // a is n ints, n without += 1
    int b[n];              // a and b are different sizes
    for (int i = 1; i < n;
      a[i-1] = b[i];
  }

.. index::
   single: initialization

.. _4.7.8:

Initialization
--------------
**Constraints**

No initializer shall attempt to provide a value for an object not contained within the entity
being initialized.

The type of the entity to be initialized shall be an array of unknown size or an object type
that is not a variable length array type.

All the expressions in an initializer for an object that has static storage duration shall be
constant expressions or string literals.

If the declaration of an identifier has block scope, and the identifier has external or
internal linkage, the declaration shall have no initializer for the identifier.

If a designator has the form

  :math:`[ constant-expression ]`

then the current object (defined below) shall have array type and the expression shall be
an integer constant expression. If the array is of unknown size, any nonnegative value is
valid.

If a designator has the form

  :math:`. identifier`

then the current object (defined below) shall have structure or union type and the
identifier shall be the name of a member of that type.

**Semantics**

An initializer specifies the initial value stored in an object.

Except where explicitly stated otherwise, for the purposes of this subclause unnamed
members of objects of structure and union type do not participate in initialization.
Unnamed members of structure objects have indeterminate value even after initialization.

If an object that has automatic storage duration is not initialized explicitly, its value is
indeterminate. If an object that has static storage duration is not initialized explicitly,
then:

* if it has pointer type, it is initialized to a null pointer;
* if it has arithmetic type, it is initialized to (positive or unsigned) zero;
* if it is an aggregate, every member is initialized (recursively) according to these rules;
* if it is a union, the first named member is initialized (recursively) according to these
  rules.

The initializer for a scalar shall be a single expression, optionally enclosed in braces. The
initial value of the object is that of the expression (after conversion); the same type
constraints and conversions as for simple assignment apply, taking the type of the scalar
to be the unqualified version of its declared type.

The rest of this subclause deals with initializers for objects that have aggregate or union
type.

The initializer for a structure or union object that has automatic storage duration shall be
either an initializer list as described below, or a single expression that has compatible
structure or union type. In the latter case, the initial value of the object, including
unnamed members, is that of the expression.

An array of character type may be initialized by a character string literal, optionally
enclosed in braces. Successive characters of the character string literal (including the
terminating null character if there is room or if the array is of unknown size) initialize the
elements of the array.

An array with element type compatible with ``wchar_t`` may be initialized by a wide
string literal, optionally enclosed in braces. Successive wide characters of the wide string
literal (including the terminating null wide character if there is room or if the array is of
unknown size) initialize the elements of the array.

Otherwise, the initializer for an object that has aggregate or union type shall be a brace-
enclosed list of initializers for the elements or named members.

Each brace-enclosed initializer list has an associated *current object*. When no
designations are present, subobjects of the current object are initialized in order according
to the type of the current object: array elements in increasing subscript order, structure
members in declaration order, and the first named member of a union. [#]_ In contrast, a
designation causes the following initializer to begin initialization of the subobject
described by the designator. Initialization then continues forward in order, beginning
with the next subobject after that described by the designator. [#]_

Each designator list begins its description with the current object associated with the
closest surrounding brace pair. Each item in the designator list (in order) specifies a
particular member of its current object and changes the current object for the next
designator (if any) to be that member. [#]_ The current object that results at the end of the
designator list is the subobject to be initialized by the following initializer.

The initialization shall occur in initializer list order, each initializer provided for a
particular subobject overriding any previously listed initializer for the same subobject; [#]_
all subobjects that are not initialized explicitly shall be initialized implicitly the same as
objects that have static storage duration.

If the aggregate or union contains elements or members that are aggregates or unions,
these rules apply recursively to the subaggregates or contained unions. If the initializer of
a subaggregate or contained union begins with a left brace, the initializers enclosed by
that brace and its matching right brace initialize the elements or members of the
subaggregate or the contained union. Otherwise, only enough initializers from the list are
taken to account for the elements or members of the subaggregate or the first member of
the contained union; any remaining initializers are left to initialize the next element or
member of the aggregate of which the current subaggregate or contained union is a part.

If there are fewer initializers in a brace-enclosed list than there are elements or members
of an aggregate, or fewer characters in a string literal used to initialize an array of known
size than there are elements in the array, the remainder of the aggregate shall be
initialized implicitly the same as objects that have static storage duration.
22 If an array of unknown size is initialized, its size is determined by the largest indexed
element with an explicit initializer. At the end of its initializer list, the array no longer
has incomplete type.


The order in which any side effects occur among the initialization list expressions is
unspecified. [#]_

EXAMPLE 1 Provided that ``<complex.h>`` has been ``#included``, the declarations

.. code-block:: c

  int i = 3.5;
  double complex c = 5 + 3 * I;

define and initialize ``i`` with the value 3 and ``c`` with the value 5. 0 + i3. 0.

EXAMPLE 2 The declaration

.. code-block:: c

  int x[] = { 1, 3, 5 };

defines and initializes ``x`` as a one-dimensional array object that has three elements, as no size was specified
and there are three initializers.

EXAMPLE 3 The declaration

.. code-block:: c

  int y[4][3] = {
        { 1, 3, 5 },
        { 2, 4, 6 },
        { 3, 5, 7 },
  };

is a definition with a fully bracketed initialization: 1, 3, and 5 initialize the first row of ``y`` (the array object
``y[0]``), namely ``y[0][0], y[0][1]`` and ``y[0][2]``. Likewise the next two lines initialize ``y[1]`` and
``y[2]``. The initializer ends early, so ``y[3]`` is initialized with zeros. Precisely the same effect could have
been achieved by

.. code-block:: c

  int y[4][3] = {
        1, 3, 5, 2, 4, 6, 3, 5, 7
  };

The initializer for ``y[0]`` does not begin with a left brace, so three items from the list are used. Likewise the
next three are taken successively for ``y[1]`` and ``y[2]``.

EXAMPLE 4 The declaration

.. code-block:: c

  int z[4][3] = {
        { 1 }, { 2 }, { 3 }, { 4 }
  };

initializes the first column of ``z`` as specified and initializes the rest with zeros.

EXAMPLE 5 The declaration

  struct { int a[3], b; } w[] = { { 1 }, 2 };

is a definition with an inconsistently bracketed initialization. It defines an array with two element
structures: ``w[0].a[0]`` is 1 and ``w[1].a[0]`` is 2; all the other elements are zero.

EXAMPLE 6 The declaration

.. code-block:: c

  short q[4][3][2] = {
          { 1 },
          { 2, 3 },
          { 4, 5, 6 }
  };

contains an incompletely but consistently bracketed initialization. It defines a three-dimensional array
object: ``q[0][0][0]`` is 1, ``q[1][0][0]`` is 2, ``q[1][0][1]`` is 3, and 4, 5, and 6 initialize
``q[2][0][0], q[2][0][1]`` and ``q[2][1][0]``, respectively; all the rest are zero. The initializer for
``q[0][0]`` does not begin with a left brace, so up to six items from the current list may be used. There is
only one, so the values for the remaining five elements are initialized with zero. Likewise, the initializers
for ``q[1][0]`` and q[2][0] do not begin with a left brace, so each uses up to six items, initializing their
respective two-dimensional subaggregates. If there had been more than six items in any of the lists, a
diagnostic message would have been issued. The same initialization result could have been achieved by:

.. code-block:: c

  short q[4][3][2] = {
          1, 0, 0, 0, 0, 0,
          2, 3, 0, 0, 0, 0,
          4, 5, 6
  };

or by:

.. code-block:: c

  short q[4][3][2] = {
        {
         { 1 },
        },
        {
         { 2, 3 },
        },
        {
         { 4, 5 },
         { 6 },
        }
  };

in a fully bracketed form.

Note that the fully bracketed and minimally bracketed forms of initialization are, in general, less likely to
cause confusion.

EXAMPLE 7 One form of initialization that completes array types involves typedef names. Given the
declaration

.. code-block:: c

  typedef int A[]; // OK - declared with block scope

the declaration

.. code-block:: c

  A a = { 1, 2 }, b = { 3, 4, 5 };

is identical to

.. code-block:: c

  int a[] = { 1, 2 }, b[] = { 3, 4, 5 };

due to the rules for incomplete types.

EXAMPLE 8 The declaration

.. code-block:: c

  char s[] = "abc", t[3] = "abc";

defines "plain" char array objects ``s`` and ``t`` whose elements are initialized with character string literals.

This declaration is identical to

.. code-block:: c

  char s[] = { 'a', 'b', 'c', '\0' },
  t[] = { 'a', 'b', 'c' };

The contents of the arrays are modifiable. On the other hand, the declaration

.. code-block:: c

  char *p = "abc";

defines ``p`` with type "pointer to ``char``" and initializes it to point to an object with type "array of ``char``"
with length 4 whose elements are initialized with a character string literal. If an attempt is made to use ``p`` to
modify the contents of the array, the behavior is undefined.

EXAMPLE 9 Arrays can be initialized to correspond to the elements of an enumeration by using
designators:

.. code-block:: c

  enum { member_one, member_two };
  const char *nm[] = {
    [member_two] = "member two",
    [ember_one] = "member one",
  };

EXAMPLE 10 Structure members can be initialized to nonzero values without depending on their order:

.. code-block:: c

  div_t answer = { .quot = 2, .rem = -1 };

EXAMPLE 11 Designators can be used to provide explicit initialization when unadorned initializer lists
might be misunderstood:

.. code-block:: c

  struct { int a[3], b; } w[] =
           { [0].a = {1}, [1].a[0] = 2 };

EXAMPLE 12 Space can be "allocated" from both ends of an array by using a single designator:

.. code-block:: c

  int a[MAX] = {
        1, 3, 5, 7, 9, [MAX-5] = 8, 6, 4, 2, 0
  };

In the above, if ``MAX`` is greater than ten, there will be some zero-valued elements in the middle; if it is less
than ten, some of the values provided by the first five initializers will be overridden by the second five.

EXAMPLE 13 Any member of a union can be initialized:

.. code-block:: c

  union { /* ... */ } u = { .any_member = 42 };

**Forward references:** common definitions ``<stddef.h>`` (:ref:`stddef`).


.. [#] If the initializer list for a subaggregate or contained union does not begin with a left brace, its
  subobjects are initialized as usual, but the subaggregate or contained union does not become the
  current object: current objects are associated only with brace-enclosed initializer lists.
.. [#] After a union member is initialized, the next object is not the next member of the union; instead, it is
  the next subobject of an object containing the union.
.. [#] Thus, a designator can only specify a strict subobject of the aggregate or union that is associated with
  the surrounding brace pair. Note, too, that each separate designator list is independent.
.. [#] Any initializer for the subobject which is overridden and so not used to initialize that subobject might
  not be evaluated at all.
.. [#] In particular, the evaluation order need not be the same as the order of subobject initialization.

.. index::
   single: statement
   single: blocks

.. _4.8:

Statements and blocks
=====================
**Semantics**

A *statement* specifies an action to be performed. Except as indicated, statements are
executed in sequence.

A *block* allows a set of declarations and statements to be grouped into one syntactic unit.
The initializers of objects that have automatic storage duration, and the variable length
array declarators of ordinary identifiers with block scope, are evaluated and the values are
stored in the objects (including storing an indeterminate value in objects without an
initializer) each time the declaration is reached in the order of execution, as if it were a
statement, and within each declaration in the order that declarators appear.

A *full expression* is an expression that is not part of another expression or of a declarator.
Each of the following is a full expression: an initializer; the expression in an expression
statement; the controlling expression of a selection statement (``if`` or ``switch``); the
controlling expression of a ``while`` or ``do`` statement; each of the (optional) expressions of
a ``for`` statement; the (optional) expression in a ``return`` statement. The end of a full
expression is a sequence point.

**Forward references:** expression and null statements (:ref:`4.8.3`), selection statements
(:ref:`4.8.4`), iteration statements (:ref:`4.8.5`), the ``return`` statement (:ref:`4.8.6.4`).

.. index::
   pair: statement; labeled

.. _4.8.1:

Labeled statements
------------------
**Constraints**

A ``case`` or ``default`` label shall appear only in a ``switch`` statement. Further
constraints on such labels are discussed under the switch statement.

Label names shall be unique within a function.

**Semantics**

Any statement may be preceded by a prefix that declares an identifier as a label name.
Labels in themselves do not alter the flow of control, which continues unimpeded across
them.

**Forward references:** the ``goto`` statement (:ref:`4.8.6.1`), the ``switch`` statement (:ref:`4.8.4.2`).

.. index::
   pair: statement; compund

.. _4.8.2:

Compound statement
------------------
**Semantics**

A *compound statement* is a block.


.. index::
   pair: statement; expression
   pair: statement; null

.. _4.8.3:

Expression and null statements
------------------------------
**Semantics**

The expression in an expression statement is evaluated as a void expression for its side
effects. [#]_

A *null statement* (consisting of just a semicolon) performs no operations.

EXAMPLE 1 If a function call is evaluated as an expression statement for its side effects only, the
discarding of its value may be made explicit by converting the expression to a void expression by means of
a cast:

.. code-block:: c

  int p(int);
  /* ... */
  (void)p(0);

EXAMPLE 2 In the program fragment

.. code-block:: c

  char *s;
  /* ... */
  while (*s++ != '\0')
  ;

a null statement is used to supply an empty loop body to the iteration statement.

EXAMPLE 3 A null statement may also be used to carry a label just before the closing ``}`` of a compound
statement.

.. code-block:: c

  while (loop1) {
    /* ... */
    while (loop2) {
      /* ... */
      if (want_out)
      goto end_loop1;
      /* ... */
    }
    /* ... */
    end_loop1: ;
  }

**Forward references:** iteration statements (:ref:`4.8.5`).

.. [#] Such as assignments, and function calls which have side effects.

.. index::
   pair: statement; selection

.. _4.8.4:

Selection statements
--------------------
**Semantics**

A selection statement selects among a set of statements depending on the value of a
controlling expression.

A selection statement is a block whose scope is a strict subset of the scope of its
enclosing block. Each associated substatement is also a block whose scope is a strict
subset of the scope of the selection statement.

.. index::
   pair: statement; if

.. _4.8.4.1:

The ``if`` statement
^^^^^^^^^^^^^^^^^^^^
**Constraints**

The controlling expression of an ``if`` statement shall have scalar type.

**Semantics**

In both forms, the first substatement is executed if the expression compares unequal to 0.
In the ``else`` form, the second substatement is executed if the expression compares equal
to 0. If the first substatement is reached via a label, the second substatement is not
executed.

An ``else`` is associated with the lexically nearest preceding if that is allowed by the
syntax.

.. index::
   pair: statement; switch

.. _4.8.4.2:

The ``switch`` statement
------------------------
**Constraints**

The controlling expression of a ``switch`` statement shall have integer type.

If a ``switch`` statement has an associated ``case`` or ``default`` label within the scope of an
identifier with a variably modified type, the entire switch statement shall be within the
scope of that identifier. [#]_

The expression of each ``case`` label shall be an integer constant expression and no two of
the case constant expressions in the same switch statement shall have the same value
after conversion. There may be at most one ``default`` label in a ``switch`` statement.
(Any enclosed ``switch`` statement may have a ``default`` label or ``case`` constant
expressions with values that duplicate case constant expressions in the enclosing
switch statement.)

**Semantics**

A ``switch`` statement causes control to jump to, into, or past the statement that is the
*switch body*, depending on the value of a controlling expression, and on the presence of a
``default`` label and the values of any case labels on or in the switch body. A ``case`` or
``default`` label is accessible only within the closest enclosing ``switch`` statement.

The integer promotions are performed on the controlling expression. The constant
expression in each ``case`` label is converted to the promoted type of the controlling
expression. If a converted value matches that of the promoted controlling expression,
control jumps to the statement following the matched ``case`` label. Otherwise, if there is
a ``default`` label, control jumps to the labeled statement. If no converted ``case`` constant
expression matches and there is no ``default`` label, no part of the switch body is
executed.

**Implementation limits**

As discussed in :ref:`3.2.4.1`, the implementation may limit the number of case values in a
``switch`` statement.

EXAMPLE In the artificial program fragment

.. code-block:: c

  switch (expr)
  {
    int i = 4;
      f(i);
    case 0:
      i = 17;
      /* falls through into default code */
    default:
      printf("%d\n", i);
  }

the object whose identifier is i exists with automatic storage duration (within the block) but is never
initialized, and thus if the controlling expression has a nonzero value, the call to the ``printf`` function will
access an indeterminate value. Similarly, the call to the function f cannot be reached.

.. [#] That is, the declaration either precedes the ``switch`` statement, or it follows the last ``case`` or
  ``default`` label associated with the switch that is in the block containing the declaration.

.. index::
   pair: statement; iteration

.. _4.8.5:

Iteration statements
--------------------
**Constraints**

The controlling expression of an iteration statement shall have scalar type.

The declaration part of a for statement shall only declare identifiers for objects having
storage class ``auto`` or ``register``.

**Semantics**

An iteration statement causes a statement called the loop body to be executed repeatedly
until the controlling expression compares equal to 0.

An iteration statement is a block whose scope is a strict subset of the scope of its
enclosing block. The loop body is also a block whose scope is a strict subset of the scope
of the iteration statement.

.. index::
   pair: statement; while

.. _4.8.5.1:

The ``while`` statement
^^^^^^^^^^^^^^^^^^^^^^^
The evaluation of the controlling expression takes place before each execution of the loop
body.

.. index::
   pair: statement; do

.. _4.8.5.2:

The ``do`` statement
^^^^^^^^^^^^^^^^^^^^
The evaluation of the controlling expression takes place after each execution of the loop
body.

.. index::
   pair: statement; for

.. _4.8.5.3:

The ``for`` statement
^^^^^^^^^^^^^^^^^^^^^
The statement::

  for ( clause-1 ; expression-2 ; expression-3 ) statement

behaves as follows: The expression *expression-2* is the controlling expression that is
evaluated before each execution of the loop body. The expression *expression-3* is
evaluated as a void expression after each execution of the loop body. If *clause-1* is a
declaration, the scope of any variables it declares is the remainder of the declaration and
the entire loop, including the other two expressions; it is reached in the order of execution
before the first evaluation of the controlling expression. If *clause-1* is an expression, it is
evaluated as a void expression before the first evaluation of the controlling expression. [#]_

Both *clause-1* and *expression-3* can be omitted. An omitted *expression-2* is replaced by a
nonzero constant.

.. [#] Thus, *clause-1* specifies initialization for the loop, possibly declaring one or more variables for use in
  the loop; the controlling expression, *expression-2*, specifies an evaluation made before each iteration,
  such that execution of the loop continues until the expression compares equal to 0; and expression-3
  specifies an operation (such as incrementing) that is performed after each iteration.

.. index::
   pair: statement; jump

.. _4.8.6:

Jump statements
---------------
**Semantics**

A jump statement causes an unconditional jump to another place.

.. index::
   pair: statement; goto

.. _4.8.6.1:

The ``goto`` statement
^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

The identifier in a ``goto`` statement shall name a label located somewhere in the enclosing
function. A ``goto`` statement shall not jump from outside the scope of an identifier having
a variably modified type to inside the scope of that identifier.

**Semantics**

A ``goto`` statement causes an unconditional jump to the statement prefixed by the named
label in the enclosing function.

EXAMPLE 1 It is sometimes convenient to jump into the middle of a complicated set of statements. The
following outline presents one possible approach to a problem based on these three assumptions:

1. The general initialization code accesses objects only visible to the current function.
2. The general initialization code is too large to warrant duplication.
3. The code to determine the next operation is at the head of the loop. (To allow it to be reached by
   continue statements, for example.)

.. code-block:: c

  /* ... */
  goto first_time;
  for (;;) {
    // determine next operation
    /* ... */
    if (need to reinitialize) {
      // reinitialize-only code
      /* ... */
      first_time:
      // general initialization code
      /* ... */
      continue;
    }
    // handle other operations
    /* ... */
  }

EXAMPLE 2 A ``goto`` statement is not allowed to jump past any declarations of objects with variably
modified types. A jump within the scope, however, is permitted.

.. code-block:: c

  goto lab3; // invalid: going INTO scope of VLA.
  {
    double a[n];
    a[j] = 4.4;
  lab3:
    a[j] = 3.3;
  goto lab4; // valid: going WITHIN scope of VLA.
    a[j] = 5.5;
  lab4:
    a[j] = 6.6;
  }
  goto lab4; // invalid: going INTO scope of VLA.

.. index::
   pair: statement; continue

.. _4.8.6.2:

The ``continue`` statement
^^^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

A ``continue`` statement shall appear only in or as a loop body.

**Semantics**

A ``continue`` statement causes a jump to the loop-continuation portion of the smallest
enclosing iteration statement; that is, to the end of the loop body. More precisely, in each
of the statements

.. code-block:: c

  while (/* ... */) {
    /* ... */
    continue;
    /* ... */
    contin: ;
  }
  do {
    /* ... */
    continue;
    /* ... */
    contin: ;
  } while (/* ... */);
  for (/* ... */) {
    /* ... */
    continue;
    /* ... */
    contin: ;
  }

unless the continue statement shown is in an enclosed iteration statement (in which
case it is interpreted within that statement), it is equivalent to ``goto contin;``. [#]_

.. [#] Following the ``contin:`` label is a null statement.

.. index::
   pair: statement; break

.. _4.8.6.3:

The ``break`` statement
^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

A ``break`` statement shall appear only in or as a switch body or loop body.

**Semantics**

A ``break`` statement terminates execution of the smallest enclosing ``switch`` or iteration
statement.

.. index::
   pair: statement; return

.. _4.8.6.4:

The ``return`` statement
^^^^^^^^^^^^^^^^^^^^^^^^
**Constraints**

A ``return`` statement with an expression shall not appear in a function whose return type
is void. A return statement without an expression shall only appear in a function
whose return type is ``void``.

**Semantics**

A ``return`` statement terminates execution of the current function and returns control to
its caller. A function may have any number of ``return`` statements.

If a ``return`` statement with an expression is executed, the value of the expression is
returned to the caller as the value of the function call expression. If the expression has a
type different from the return type of the function in which it appears, the value is
converted as if by assignment to an object having the return type of the function. [#]_

EXAMPLE In:

.. code-block:: c

  struct s { double i; } f(void);
  union {
    struct {
      int f1;
      struct s f2;
    } u1;
    struct {
      struct s f3;
      int f4;
    } u2;
  } g;
  struct s f(void)
  {
    return g.u1.f2;
  }
  /* ... */
  g.u2.f3 = f();

there is no undefined behavior, although there would be if the assignment were done directly (without using
a function call to fetch the value).

.. [#] The ``return`` statement is not an assignment. The overlap restriction of subclause 6.5.16.1 does not
  apply to the case of function return.

.. index::
   pair: definitions; external

.. _4.9:

External definitions
====================
**Constraints**

The storage-class specifiers ``auto`` and ``register`` shall not appear in the declaration
specifiers in an external declaration.

There shall be no more than one external definition for each identifier declared with
internal linkage in a translation unit. Moreover, if an identifier declared with internal
linkage is used in an expression (other than as a part of the operand of a ``sizeof``
operator whose result is an integer constant), there shall be exactly one external definition
for the identifier in the translation unit.

**Semantics**

As discussed in :ref:`3.1.1.1`, the unit of program text after preprocessing is a translation unit,
which consists of a sequence of external declarations. These are described as ``external``
because they appear outside any function (and hence have file scope). As discussed in
:ref:`4.7`, a declaration that also causes storage to be reserved for an object or a function named
by the identifier is a definition.

An *external definition* is an external declaration that is also a definition of a function
(other than an inline definition) or an object. If an identifier declared with external
linkage is used in an expression (other than as part of the operand of a ``sizeof`` operator
whose result is an integer constant), somewhere in the entire program there shall be
exactly one external definition for the identifier; otherwise, there shall be no more than
one. [#]_

.. [#] Thus, if an identifier declared with external linkage is not used in an expression, there need be no
  external definition for it.

.. index::
   pair: definitions; funciton

.. _4.9.1:

Function definitions
--------------------
**Constraints**

The identifier declared in a function definition (which is the name of the function) shall
have a function type, as specified by the declarator portion of the function definition.

The intent is that the type category in a function definition cannot be inherited from a typedef:

.. code-block:: c

   typedef int F(void);                  // type F is ‘‘function with no parameters
		                         // returning int’’
   F f, g;                               // fand g both have type compatible with F
   F f { /* ... */ }                     // WRONG: syntax/constraint error
   F g() { /* ... */ }                   // WRONG: declares that g returns a function
   int f(void) { /* ... */ }             // RIGHT: f has type compatible with F
   int g() { /* ... */ }                 // RIGHT: g has type compatible with F
   F *e(void) { /* ... */ }              // e returns a pointer to a function
   F *((e))(void) { /* ... */ }          // same: parentheses irrelevant
   int (*fp)(void);                      // fp points to a function that has type F
   F*Fp;                                 //Fp points to a function that has type F

The return type of a function shall be void or an object type other than array type.

The storage-class specifier, if any, in the declaration specifiers shall be either ``extern`` or
``static``.

If the declarator includes a parameter type list, the declaration of each parameter shall
include an identifier, except for the special case of a parameter list consisting of a single
parameter of type ``void``, in which case there shall not be an identifier. No declaration list
shall follow.

If the declarator includes an identifier list, each declaration in the declaration list shall
have at least one declarator, those declarators shall declare only identifiers from the
identifier list, and every identifier in the identifier list shall be declared. An identifier
declared as a typedef name shall not be redeclared as a parameter. The declarations in the
declaration list shall contain no storage-class specifier other than ``register`` and no
initializations.

**Semantics**

The declarator in a function definition specifies the name of the function being defined
and the identifiers of its parameters. If the declarator includes a parameter type list, the
list also specifies the types of all the parameters; such a declarator also serves as a
function prototype for later calls to the same function in the same translation unit. If the
declarator includes an identifier list, [#]_ the types of the parameters shall be declared in a
following declaration list. In either case, the type of each parameter is adjusted as
described in :ref:`4.7.5.3` for a parameter type list; the resulting type shall be an object type.

If a function that accepts a variable number of arguments is defined without a parameter
type list that ends with the ellipsis notation, the behavior is undefined.

Each parameter has automatic storage duration. Its identifier is an lvalue, which is in
effect declared at the head of the compound statement that constitutes the function body
(and therefore cannot be redeclared in the function body except in an enclosed block).
The layout of the storage for parameters is unspecified.
10 On entry to the function, the size expressions of each variably modified parameter are
evaluated and the value of each argument expression is converted to the type of the
corresponding parameter as if by assignment. (Array expressions and function
designators as arguments were converted to pointers before the call.)

After all parameters have been assigned, the compound statement that constitutes the
body of the function definition is executed.

If the ``}`` that terminates a function is reached, and the value of the function call is used by
the caller, the behavior is undefined.

EXAMPLE 1 In the following:

.. code-block:: c

   extern int max(int a, int b)
   {
     return a > b ? a : b;
   }

``extern`` is the storage-class specifier and ``int`` is the type specifier;`` max(int a, int b)`` is the
function declarator; and

.. code-block:: c

   { return a > b ? a : b; }

is the function body. The following similar definition uses the identifier-list form for the parameter
declarations:

.. code-block:: c

   extern int max(a, b)
   int a, b;
   {
     return a > b ? a : b;
   }

Here ``int a, b;`` is the declaration list for the parameters. The difference between these two definitions is
that the first form acts as a prototype declaration that forces conversion of the arguments of subsequent calls
to the function, whereas the second form does not.

EXAMPLE 2 To pass one function to another, one might say

.. code-block:: c

   int f(void);
   /* ... */
   g(f);

Then the definition of g might read

.. code-block:: c

   void g(int (*funcp)(void))
   {
     /* ... */
     (*funcp)() /* or funcp() ... */
   }

or, equivalently,

.. code-block:: c

   void g(int func(void))
   {
     /* ... */
     func() /* or (*func)() ... */
   }

.. [#] See "future language directions" (:ref:`4.11.7`).

.. index::
   pair: definitions; external object

.. _4.9.2:

External object definitions
---------------------------
**Semantics**

If the declaration of an identifier for an object has file scope and an initializer, the
declaration is an external definition for the identifier.

A declaration of an identifier for an object that has file scope without an initializer, and
without a storage-class specifier or with the storage-class specifier ``static``, constitutes a
*tentative definition*. If a translation unit contains one or more tentative definitions for an
identifier, and the translation unit contains no external definition for that identifier, then
the behavior is exactly as if the translation unit contains a file scope declaration of that
identifier, with the composite type as of the end of the translation unit, with an initializer
equal to 0.

If the declaration of an identifier for an object is a tentative definition and has internal
linkage, the declared type shall not be an incomplete type.

EXAMPLE 1

.. code-block:: c

   int i1 = 1;        // definition, external linkage
   static int i2 = 2; // definition, internal linkage
   extern int i3 = 3; // definition, external linkage
   int i4;            // tentative definition, external linkage
   static int i5;     // tentative definition, internal linkage
   int i1;            // valid tentative definition, refers to pre vious
   int i2;            // 4.2.2 renders undefined, linkage disagreement
   int i3;            // valid tentative definition, refers to pre vious
   int i4;            // valid tentative definition, refers to pre vious
   int i5;            // 4.2.2 renders undefined, linkage disagreement
   extern int i1;     // refers to pre vious, whose linkage is external
   extern int i2;     // refers to pre vious, whose linkage is internal
   extern int i3;     // refers to pre vious, whose linkage is external
   extern int i4;     // refers to pre vious, whose linkage is external
   extern int i5;     // refers to pre vious, whose linkage is internal

5 EXAMPLE 2 If at the end of the translation unit containing

.. code-block:: c

   int i[];

the array ``i`` still has incomplete type, the implicit initializer causes it to have one element, which is set to
zero on program startup.

Preprocessing directives
========================
This is dicussed in chapter :ref:`macros`.

.. index::
   single: future language directions

.. 4.11:

Future language directions
==========================

.. _4.11.1:

Floating types
--------------
Future standardization may include additional floating-point types, including those with
greater range, precision, or both than ``long double``.

.. _4.11.2:

Linkages of identifiers
-----------------------
Declaring an identifier with internal linkage at file scope without the ``static`` storage-class
specifier is an obsolescent feature.

.. _4.11.3:

External names
--------------
Restriction of the significance of an external name to fewer than 255 characters
(considering each universal character name or extended source character as a single
character) is an obsolescent feature that is a concession to existing implementations.

.. _4.11.4:

Character escape sequences
--------------------------
Lowercase letters as escape sequences are reserved for future standardization. Other
characters may be used in extensions.

.. _4.11.5:

Storage-class specifiers
------------------------
The placement of a storage-class specifier other than at the beginning of the declaration
specifiers in a declaration is an obsolescent feature.

.. _4.11.6:

Function declarators
--------------------
The use of function declarators with empty parentheses (not prototype-format parameter
type declarators) is an obsolescent feature.

.. _4.11.7:

Function definitions
--------------------
The use of function definitions with separate parameter identifier and declaration lists
(not prototype-format parameter type and identifier declarators) is an obsolescent feature.

.. _4.11.8:

Pragma directives
-----------------
Pragmas whose first preprocessing token is ``STDC`` are reserved for future standardization.

.. _4.11.9:

Predefined macro names
----------------------
Macro names beginning with ``__STDC_`` are reserved for future standardization.
