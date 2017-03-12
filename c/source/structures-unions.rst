Structures and Unions
*********************
So far what we have seen are data types defiend by the language itself. However,
there are times when these simple types are not enough. For this C has defined
two types which can be defined by the user or programmer. The two keywords are
struct and union. A structure or union is basically a composite type. These may
consist of one more types of C. That is they may contain one or more basic types
like ``int, char`` etc or other structures or unions. Consider following
examples:

.. index::
   single: structures
   single: unions

.. code-block:: c

  struct {
    int i;
    char c;
    int* p;
    char* s;
  } mystruct;

  struct {
    int x;
    struct mystruct S;
    } another_struct;

  union {
    int i;
    char c;
    int* p;
    char8 s;
  } myunion;

  union {
    int x;
    union myunion S;
  } another_union;

As you see from the declarations there is no difference between structures and
unions. However, there is a subtle difference. Consider following program:

.. index::
   pair: sizeof; structure
   pair: sizeof; union

.. code-block:: c

  // Author: Shiv Shankar Dayal
  // Description: Difference between strutures and unions.

  #include <stdio.h>

  typedef struct {
    int i;
    double d;
  } mystruct;

  typedef union {
    int i;
    double d;
  } myunion;

  int main()
  {
    mystruct s;
    myunion u;

    printf("Size of structure is %d\n", sizeof(s));
    printf("Size of union is %d\n", sizeof(u));

    return 0;
  }

and the output is::

  Size of structure is 12
  Size of union is 8

Before explaining the output let me tell you this that using typedef is mandatory
here to get the sizeof operator working. If you try something like
``sizeof(struct mystruct);`` then you will get this as error. invalid application
of ``sizeof`` to incomplete type ``struct mystruct``.

By using ``typedef`` we let the compiler recognize them as complete types. Now
let us see the output. Size of structure is simple. It is equal to size of an
integer plus size of a double. However, size of union is equal to size of double.
Basically, size of a structure is equal to size of all its elements. For unions
size of union is equal to size of biggest element. This means that elements for a
union overlap on the same memory area. We can use this fact to write a very
clever program. Before writing the program let me give you some background.

.. index:: endianness, little-endian, big-endian

There is something called endianness of a machine. What it means that how bytes
are stored. If a machine is little endian like most intel processors then the
bytes are stoerd in reverse order. What this means that they are not in there
natural order. On big endian machines like PPC architecture the bytes are in
natural order. In other words if the least significant byte of an integer is
stored at the lowest memory address then it is called little-endian. If the least
significant byte is stored at the highest address then it is called big-endian.
For example my machine is intel so let us see what output we get from this
program.

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of endianness,

  #include <stdio.h>

  typedef union {
    short int i;
    char c;
  } myunion;

  int main()
  {
    myunion u;

    u.i = 258;

    printf("%d\n", u.c);

    return 0;
  }

and the output is::

  2

So as you can see the extra 2 i.e. 258 - 256 is getting stored in c. Now 2 is the
high order byte. Hence we can conclude that my machine is little-endian.

More ways to initialize a structure are given below:

.. index::
   pair: initialization; structure

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Structure initialization

  #include <stdio.h>

  typedef struct {
    short int i;
    char c;
  } mystruct;

  int main()
  {
    mystruct s1 = {34, 'c'}, s2;

    s2.i = 43;
    s2.c = 'e';

    printf("%d %d %c %c\n", s1.i, s2.i, s1.c, s2.c);

    return 0;
  }

and the output is::

  34 43 c e

.. index::
   pair: pointer members; structure

Pointer members of a Structure
==============================
Sometime structures will contain pointer members. Obviously, you will have to
allocate memory to them or point them to some existing variable's address. Let us
see how this is done.

.. code-block:: c

  //Author:Shiv S. Dayal
  //Descrition: Pointer members of a structure

  #include<stdio.h>
  #include<stdlib.h>

  int main()
  {
    typedef struct {
      int* i;
      int j;
    }s;

    s* s1;

    s1 = (s*)malloc(sizeof(s));
    s1->i=(int*)4;
    s1->j=5;

    printf("s1->i=%p s1->j=%d\n", s1->i, s1->j);

    return 0;
  }

and the output is::

  s1->i=0x4 s1->j=5

You might be wondering why I have casted ``(int*)`` to 4 and used a ``%p`` format
specifier. The reason is ``*i`` is a pointer to an interger and hence ``s1->i``
is a pointer and will accept only an integer pointer. Therefore, cating is
mandatory else you will get a warning. Again, at the time of assignment I have
assigned value 4 which is an address actully. Therefore ``%p`` is needed for
conversion. However, this program is a bad, wrong program to death. The reason is
the address 4 may be out of program's segmenst and touching it in the sense of
trying to read from it or write to it may doom your day. Try to burn your hands.
Let us see the correct version.

.. code-block:: c

  //Author:Shiv S. Dayal
  //Descrition: Pointer members of a structure

  #include<stdio.h>
  #include<stdlib.h>

  int main()
  {
    typedef struct {
    int* i;
    int j;
    }s;

    s* s1;

    s1 = (s*)malloc(sizeof(s));
    s1->i = (int*)malloc(sizeof(int));
    *(s1->i) = 4;
    s1->j = 5;

    printf("s1->i = %d s1->j = %d\n", *(s1->i), s1->j);

    return 0;
  }

and the output is::

	s1->i=4 s1->j=5

Usage of Structures and Unions
==============================
A structure can be used to represent rather complex entities. For example, a car.
Consider a car. It has weight, power, cost, mileage etc. All this can be combined
and represented as a structure. Structures can be categorized in two categories.
One will be normal structures and second is seld-referential structures.
Self-referential structures contain a pointer to a structure of its own type. You
will see its usage in the book when we deal with data structures. We have already
shown you normal structures. The data members of a structure are referenced using
``.`` operator or ``->`` if they are pointer type as we have already seen. The
rule of using structures or unions is simple. When you cannot represent any
entity using provided data types then combine the basic entities and use them in
an structure or union. Union has one distiction which you already know. Consider
you know that your entity can have multiple type of values but only one at a
time. Then you can use unions.

Structures and unions can be nested as well. I will just give a simple example
and leave rest to your imagination and previously told facts.

.. code-block:: c

  #include <stdio.h>

  typedef struct {
    int j;
  }t;

  typedef struct{
    int i;
    t t1;
  }s;

  int main()
  {
    s s1;

    s1.i=4;
    s1.t1.j=5;

    printf("%d %d", s1.i, s1.t1.j);

  return 0;
  }

and the output is::

  4 5

.. index::
   pair: arrays; structures

Structures and Arrays
=====================
There are two posiibilities here. Structures containing arrays and arrays of
structure. Let us see an example which combines both:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Arrays as structure elements

  #include <stdio.h>

  typedef struct {
    int i[2];
  }ais;

  int main()
  {
    ais a[2];

    a[0].i[0] = 1;
    a[0].i[1] = 2;
    a[1].i[0] = 3;
    a[1].i[1] = 4;

    printf("%d %d %d %d\n", a[0].i[0], a[0].i[1], a[1].i[0], a[1].i[1]);

    return 0;
  }

and the output is::

  1 2 3 4

Similarly, more complex objects can be constructed.
