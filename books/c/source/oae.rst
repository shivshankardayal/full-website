***************************
Operators and Expressions
***************************
Operators and expressions are in the core of every programming language. They
form the major part of BNF grammar. They also decide how the syntax will look
like. You as a programmer will spend considerable time using C operators. C has
sevral type of operators like arithmetic operators, relational operators,
bitwise operators, unary operators, logical operators to name some of them.
Since C was first of very poopular structured general-pupose lnguages therefore
many modern language use almost all the operators and supplement with their own.
It is needless to say that to become a good programmar you must know all the
operators of C and know where to use which one as it may decide performance,
readability, simplicity of your code. Whenever you see array and pointer in
following sections just plow through them. All will be clear soon.

Whenever operators and expressions come in picture you may have a set of mixed
data then to perform opration data is converted from one type to another. This
is known as "Usual Arithmetic Conversion", which I am going to tell you next.

.. index::
   pair: arithmetic; conversions

================================
Usual Arithmetic Conversions
================================
Many operators that expect operands of arithmetic type cause conversions and
yield result types in a similar way. The purpose is to determine a common real
type for the operands and result. For the specified operands, each operand is
converted, without change of type domain, to a type whose corresponding real
type is the common real type. Unless explicitly stated otherwise, the common
real type is alo the corresponding real type of the result, whose type domain is
the type domian of the operands if they are the same, and complex otherwise.
This pattern is called the usual *arithmetic convresions*:

* First, if the corresponding real type of either operand is ``long double``,
  the other operand is converted, without change of type domain, to a type
  whose coresponding real type is ``long double``.
* Otherwise, if the corresponding real type of either operand is ``double``, the
  other operand is converted, without change of type domain, to a type whose
  coreesponding real type is ``double``.
* Otherwise, if the corresponding real type of either operand is ``float``, the
  other operand is converted, without change of type domain, to a type whose
  coreesponding real type is ``float``.
* Otherwise, the integer promotions are performed on both operands. Then the
  following rules are applied to the promoted operands: 
  
  * If both operands have the same type, then no further conversion is needed.
  * Otherwise, if both operands have signed integer types or both have unsigned
    integer types, the operand with the type of lesser integer conversion rank
    is converted to the type of the operand with greater rank.
  * Otherwise, if the operand that has unsigned integer type has rank greater
    or equal to the rank of the type of the other operand, then the operand with
    signed integer type is converted to the type of the operand with unsigned
    integer type.
  * Otherwise, if the type of the operand with signed integer type can represent
    all of the values of the type of the operand with unsigned integer type,
    then the operand with unsigned integer type is converted to the type of the
    operand with signed integer type.
  * Otherwise, both operands are converted to the unsigned integer type
    corresponding to the type of the operand with signed integer type.

* The values of floating operands and of the results of floating expressions may
  be represented in greater precision and range than that required by the type;
  the types are not changed thereby.

.. index::
   single: expressions

============
Expressions
============
Majority of this comes from specification n1124.pdf. It can be found at
http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1124.pdf. An expression is a
sequence of operators and operands. This sequence of operators and operands will
lead to some computation; needless to say, however, it may designate an object
or a function or it may generate a side effect or a combination. The value
computations of the operands of an operator are sequenced before the value
computation of the result of the operator.

Consider the following where ``++`` is used as prefix and postfix increment
unary operator, which should increment the value of operand after evaluating the
operand:

  i = ++i + 1;

  a[i++] = i;

however, this is an undefined bahavior because if a side effect on a scalar
(all arithmetic and pointer types are scalar) object is unsequenced relative to
either a different side effect on the same scalar onject or a value computation
using the value of the same scalar object,  the behavior is undefined. If there 
are multiple allowable orderings of the subexpression of an expression, the
behavior is undefined if such an unsequenced side effect occurs in any of the
orderings.

The groupings of operators and operands is indicated by the syntax. The syntax
specifies the precedence of operators in the evaluation, highest precedence
first. The table is given later. The exceptions are cast expressions as operands
of unary operators, and an operand contained between any of the following pairs
of operators: grouping parentheses (), subscripting brackets[], function call
parentheses (), and the conditional operator ?:. Except as specified later,
side effects and value computations of subexpressions are unsequenced. In an
expression that is evaluated more than once during the execution of a program,
unsequenced and indeterminately sequenced evaluations of its subexpressions
need not be performed consistently in different evaluations.

Some operators (the unary operator ~, and the binary operators <<, >>, &, ^,
and \|, collectively described as bitwise opearators) are required to have
operands that have integer types. These operators yield values that depend on
the internal representation of intergers, and have implementation-defined and
undefined aspects for signed types.

If an exceptional condition occurs during the evaluation of an expression (that
is, if the result is not mathematicslly defined or not in the range of
representable values for its type), the behavior is undefined.

The effective type of an object for an access to its stored value is the
declared type of the object, if any. Note that allocated objects have no
declared type. If a value is stored into an object having no declared type
through an lvalue (a value whose address can be taken) having a type that is not
a character type, then the type of the lvalue becomes the effective type of the
object for that access and for subsequent accesses that do not modify the stored
value. If a value is copied into an object having no declared type using
``memcpy`` or ``memmove``, or is copied as an array of character type, then the
effective type of the modified object for that access and for subsequent
accesses that do not modify the value is the effective type of the object from
which the value is copied, if it has one. For all other accesses to an object
having no declared type, the effective type of the object is simply the type of
the lvalue used for the access.

An object will have its stored value accessed only by an lvalue expression that
has one of the following types:

* a type compatible with the effective type of the object,
* a qualified version of a type compatible with the effective type of the
  object,
* a type that is the signed or unsigned type corresponding to the effective type
  of the object,
* a type that is the signed or unsigned type corresponding to a qualified
* version of the effective type of the object,
* an aggregate or union type that includes one of the aforementioned types among
  its members (including, recursively, a member of a subaggregate or contained
  union), or a character type.

A floating expression may be contracted, that is, evaluated as though it were
an atomic operation, thereby omitting rounding errors implied by the source code
and the expression evaluation method. A contracted expression might also omit
raising of floating-point exceptions. The ``FP_CONTRACT`` pragma in provides a
way to disallow contracted expressions. Otherwise, whether and how expressions
are contracted is implementation-defined. 

.. index::
   pair: primary; expressions

---------------------
Primary Expressions
---------------------
An identifer is a primary expression, provided it has been decared as
designating an object (in which case it is an lvalue) or a function (in which
case it is a function designator). Thus, an undeclared identifire is a violation
of syntax.

A constant is a primary expression. Its type depends on its form and lvalue (A
value whose memory address can be taken. All variables except addresses
themselves fall in this category).

A string literal is a primary expression. It is an lvalue.

A parenthesized expression is a primary expression. Its type and value are
identical to those of upparenthesized expression. It is an lvalue, a function
designator, or a void expression if the unparenthesized expression is,
respectively, an lvalue, a function designator, or a void expression.

===============
Operators
===============
C is very rich in operators considering the fact that it is so old. So what I
will do is that divide them in groups and then study them. Each operator is
given in its own section to ease the navigation. After describing the operators
example programs are also given with their output and brief description as
always.

.. index::
   pair: additive; operators

===================
Additive Operators
===================
There are two operators in this category. One you have seen in second chapter.
These are + and -.

For addition, either both the operands will have arithmetic type, or one operand
will be a pointer to an object type and the other will have integer type.
(Incrementing is equivalent to adding 1.) We will see pointer arithmetic in the
chapter dealing with pointers and arrays.

For subtraction following will hold:

* both operands have arithmetic type;
* both operands are pointers to qualified or unqualified versions of compatible
  object types; or
* the left operand is a pointer to an object type and the right operand has
  integer type. (Decrementing is equivalent to subtracting 1.)

If both operands have arithmetic type, the usual arithmetic conversions are
performed on them. The result of the binary + operator is the sum of the
operands. The result of the binary - operator is the difference resulting from
the subtraction of the second operand from the first. There is also something
called pointer arithmetic which we will see in Chapter 6 describing pointers and
arrays.

.. index::
   pair: multiplicative; operators

=========================
Multiplicative Operators
=========================

There are three multiplicative operators. These are \*, / and %. Each of the
operands for these operands will have arithmetic type. That is character string
cannot participate. The operands of % will have interger type. The usual
arithmetic conversion are performed on the operands. The result of binary *
operator is the product of operands. The result of the / operator is the
quotient from the division; the result of the % operator is the remainder. In
both the operations, if denominator is zero, the behavior is undefined. When
integers are divided, the result of / operator is the algebraic quotient with
any fractional parts discarded. This is often called "truncation towards zero".
Let us see a small program demonstrating these five arithmetic operators:

.. code-block:: c

  // Arithmetic operators
  // Author: Shiv S. Dayal
  // Description: Demo of arithmetic operators

  #include <stdio.h>

  int main()
  {
    int i = 10;
    float f= 6.45;
    char c = 'A';
    int iResult = 0;
    float fResult = 0.0;
    char cResult = '\0';

    cResult = c + i;
    printf("cResult = %c\n", cResult);
    cResult = cResult - 5;
    printf("cResult = %c\n", cResult);

    iResult = i - 10;
    printf("iResult = %d\n", iResult);
    iResult = i * c;
    printf("iResult = %d\n", iResult);
    iResult = (i + c)/3;
    printf("Result = %d\n", iResult);
    iResult = (i + c)%2;
    printf("iesult = %d\n", iResult);

    fResult = f * 2.12;
    printf("fesult = %f\n", fResult);
    fResult = f - i;
    printf("fesult = %f\n", fResult);  
    fResult = f / 1.12;
    printf("fesult = %f\n", fResult);
    fResult = 1 % 3;
    printf("fesult = %f\n", fResult);

    return 0;
  }



and the output is::

  cResult = K
  cResult = F
  iResult = 0
  iResult = 650
  Result = 25
  iesult = 1
  fesult = 13.674000
  fesult = -3.550000
  fesult = 5.758928
  fesult = 1.000000

First cResult is sumof ``'A' + i`` which is ``'K'`` as ``'K'`` comes ten
positions after ``A`` in ASCII table. Then we subtract five and go back to
``F``.

First iReasult is ``10 - i`` where value of ``i`` is ``10`` hence result is
``0``. Next we multiply it with ``c`` which contains ``'A'`` who has got ASCII
value of ``65`` and result becomes ``650``. Then We take sum of ``'A'`` and
``i`` and divide by ``3`` so the result is ``25`` as it is a division of ``75``
by ``3``. Next we use modulus operator and remainder is ``1``. Note that in case
of / and % if denominator is zero the behavior is undefined.

Same way you can udnerstand floating-point operations. Note that you cannot use
modulus operator if either of the operands are floating-point numbers as it will
make no sense because of data type promotion rules. Here data type promotion
rule says smaller data types will be converted to bigger data types. Also, if
there is a data type on left side of assignment the result of applying the
operator to operands will be converted to the type of that. chars are promoted
to ints, ints are promoted to floats anf floats to double. The point is that
conversion will try to keep as much data as possible.

.. index::
   pair: relational; operators

=====================
Relational Operators
=====================

There are four relational operators: <, >, <= and >=. One of the following will
be true for these operators:

* both operands have real type;
* both operands are pointers to qualified or unqualified versions of compatible
  object types (types that fully describe onjects; we will see pointers later);
  or
* both operands are pointers to qualified or unqualified versions of compatible
  incomplete types (types that describe onjects but lack information needed to
  determine their size).
* If both the operands have arithmetic type, the usual arithmetic convrsions are
  performed.

* For the purposes of these operators, a pointer to an object that is not an
  element of an array behaves the same as a pointer to the first element of an
  array of length onr with the type of the object as its element type.

* When two pointers are compared, the result depends on the relative locations
  in the address space of the objects pointed to. If two pointers to object or
  incomplete types both point to the same object, or both point one past the
  last element of the same array object, they compare equal. If the objects
  pointed to are members of the same aggregate object, pointers to structure
  members declared later compare greater than pointers to members declared
  earlier in the structure, and pointers to array elements with larger
  subscript values compare greater than pointers to elements of the same array
  with lower subscript values. All pointers to members of the same union object
  compare equal. If the expression ``P`` points to an element of an array object
  and the expression ``Q`` points to the last element of the same array object,
  the pointer expression ``Q+1`` compares greater than ``P``. In all other
  cases, the behavior is undefined.

* Each of the operators ``<`` (less than), ``>`` (greater than), ``<=`` (less
  than or equal to), and ``>=`` (greater than or equal to) will yield 1 if the
  specified relation is true and 0 if it is false. The expression a<b<c is not
  implemented as in ordinary mathematics. As the syntax indicates, it means
  (a<b)<c. The result has type int.

.. code-block:: c

    // Author : Shiv S. Dayal
    // Description : Demo of relational operator

    #include <stdio.h>
    #include <stdbool.h>

    int main()
    {
      int i = 4, j = 5;
      _Bool result = 0;
     
      result = i < j;
      printf("%d\n", result);

      result = i > j;
      printf("%d\n", result);

      result = i <= j;
      printf("%d\n", result);

      result = i >= j;
      printf("%d\n", result);

      return 0;
    }



and the output is::

  1
  0
  1
  0

Note that you should not apply these to floating-point data types as they may
not be represented correctly and two different entities have the same internal
representation.

.. index::
   pair: equality; operators

===================
Equality Operators
===================

There are two equlity operators == and !=. Following contraints apply to these:

* both operands have arithmetic type;
* both operands are pointers to qualified or unqualified versions of compatible
  types; or
* one operand is a pointer to an object or incomplete type and the other is a
* pointer to a qualified or unqualified version of void; or
* one operand is a pointer and the other is a null pointer constant.

Given below are semantics of these operators.

* The == (equal to) and != (not equal to) operators are analogous to the
  relational operators except for their lower precedence. Because of the
  precedences, a<b == c<d is 1 whenever a<b and c<d have the same truth-value.
  Each of the operators yields 1 if the specified relation is true and 0 if it
  is false. The result has type int. For any pair of operands, exactly one of
  the relations is true.
* If both of the operands have arithmetic type, the usual arithmetic conversions
  are performed. Values of complex types are equal if and only if both their
  real parts are equal and also their imaginary parts are equal. Any two values
  of arithmetic types from different type domains are equal if and only if the
  results of their conversions to the (complex) result type determined by the
  usual arithmetic conversions are equal.
* Otherwise, at least one operand is a pointer. If one operand is a pointer and
  the other is a null pointer constant, the null pointer constant is converted
  to the type of the pointer. If one operand is a pointer to an object or
  incomplete type and the other is a pointer to a qualified or unqualified
  version of void, the former is converted to the type of the latter.
* Two pointers compare equal if and only if both are null pointers, both are
  pointers to the same object (including a pointer to an object and a subobject   
  at its beginning) or function, both are pointers to one past the last element
  of the same array object, or one is a pointer to one past the end of one array
  object and the other is a pointer to the start of a different array object
  that happens to immediately follow the first array object in the address
  space.
* For the purposes of these operators, a pointer to an object that is not an
  element of an array behaves the same as a pointer to the first element of an
  array of length one with the type of the object as its element type.

.. code-block:: c

    // Author : Shiv S. Dayal
    // Description : Demo of equality operator

    #include <stdio.h>
    #include <stdbool.h>
    int main()
    {
      int i = 4, j = 5;
      _Bool result = 0;

      result = i == j;
      printf("%d\n", result);

      result = i != j;
      printf("%d\n", result);

      return 0;
    }



and the output is::

  0
  1

.. index::
   pair: increment; operators
   pair: decrement; operators

==================================
Increment and Decrement Operators
==================================

There is one increment and one decrement operator. ++ and ``--``. Both come
in two forms prefix and postfix. First we will see prefix versions then postfix
ones. There is only one constraint on prefix operators of these and that is the
operand of the prefix increment or decrement operator will have qualified or
unqualified real or pointer type and will be a modifiable lvalue.

The value of the operand of prefix ++ operator is incremented. The result is the
new value of the operand after incrementation. The ++E is equivalent to (E +=
1).

The prefix -- operator is analogous to the prefix ++ operator except that the
value of the operand is decremented. Now we will see postfix ones; the
constraints are the same as prefix ones.

The result of the postfix ++ operator is the value of the operand. As a side
effect, the value of the operand object is incremented (that is, the value 1 of
the appropriate type is added to it). The value computation of the result is
sequenced before the side effect of updating the stored value of the operand.
With respect to an indeterminately-sequenced function call, the operation of
postfix ++ is a single evaluation. The prefix ``--`` operator is analogous
to the prefix ++ operator except that the value of the operand is incremented.
Here is the demo:

.. code-block:: c

    // Author : Shiv S. Dayal
    // Description : Demo of increment decrement operators

    #include <stdio.h>

    int main()
    {
      float f = 7.123;

      printf("%f\n", ++f);
      printf("%f\n", --f);
      printf("%f\n", f++);
      printf("%f\n", f--);
      printf("%f\n", f);

      return 0;
    }



and the output is::

  8.123000
  7.123000
  7.123000
  8.123000
  7.123000

.. index::
   pair: logical; operators

=================
Logical Operators
=================
There are two such operators. && logical AND and || locical OR. Both the
operators have the same constraints and it is that both the operands will have
scalar type.

The && operator gives 1 if both the operands are non-zero else 0. The result type
is **int**. It is different from bitwise & operator in the sense that it
guarantess left-to-right evaluation; if the second operand is evaluated, there is
a sequence point between the evaluations of the first and second operands. If the
first operand is 0 then the second operand is not evaluated. This is known as
"short-circuit evaluation".

The || operator gives 1 if any of operands are non-zero else it gives 0. Same as 
logical AND operator and unlike bitwise | operator it guarantees left-to-right
evaluation and same goes for sequence points. If first operand is non-zero, the
second is not evaluated.

.. code-block:: c

	// Author : Shiv S. Dayal
  // Description : Demo of logical AND & OR operators

  #include <stdio.h>
  #include <stdbool.h>

  int main()
  {
    int i = 4, j = 5, k = 0;
    bool result;

    result = i&&j;
    printf("%d\n", result);

    result = i||j;
    printf("%d\n", result);

    result = k&&j;
    printf("%d\n", result);

    result = k||j;
    printf("%d\n", result);

    return 0;
  }

and the output is::

  1
  1
  0
  1

note the use of **bool** here instead of **_Bool**.

.. index::
   pair: bitwise; operators

=================
Bitwise Operators
=================
There are three bitwise operators. &, \|, and ^. AND, OR and EX-OR respectively.
OR is also called inclusive OR. These have the same contsraints and it is that
operands should be integer types. The usual arithmetic conversions are performed
on the operands.

The result of bianry & is the bitwise AND of operands (that is, each bit in the
result is set if and only if each of the corresponding bits in the operands is
set.)

The result of the ^ operator is the bitwise exclusive OR of the operands (that
is, each bit in the result is set if and only if exactly one of the corresponding
bits in the converted operands is set).

The result of the | operator is the bitwise inclusive OR of the operands (that
is, each bit in the result is set if and only if at least one of the
corresponding bits in the converted operands is set).

.. code-block:: c

  // Author : Shiv S. Dayal
  // Description : Demo of bitwise operators
 
  #include <stdio.h>
  #include <stdbool.h>
 
  int main()
  {
    int i = 4, j = 5;
    int result;
 
    result = i&j;
    printf("%d\n", result);
 
    result = i|j;
    printf("%d\n", result);
 
    result = i^j;
    printf("%d\n", result);
 
    return 0;
  }

and the output is::

  4
  5
  1

.. index::
   pair: bitwise shift; operators
   pair: shift; operators
   
=======================
Bitwise Shift Operators
=======================
The constraint is same as other bitwise operators that operands should be
integers. The integer promotions are performed on each of the operands. The type
of the result if that of the promoted left operand. If the value of the right
operand is negative or is greater than or equal to the width of the promoted left
operand, the behavior is undefined.

The result of E1 << E2 is E1 left-shifted E2 bit-positions; vacated
bits are filled with zeros. If E1 has an unsigned type, the value of the
result is :math:`E1 * 2^{E2}` , reduced modulo one more than the maximum value
representable in the reasult type. If E1 has a signed type and and
nonnegative value, and :math:`E1 * 2^{E2}`  is representable in the result type,
then that is the resulting value; otherwise the behavior is undefined.

The result of E1 >> E2 is E1 right-shifted E2 bit-positions. If
E1 has an unsigned type or if E1 has a signed type and a nonegative
value, the value of the result is the integral part of the quotient of
:math:`E1/2^{E2}`. If E1 has a signed type and a negative value, the
resulting value is implementation-defined.

.. code-block:: c

  // Author : Shiv S. Dayal
  // Description : Demo of shift operators
 
  #include <stdio.h>
 
  int main()
  {
    int i  = 4;
    char c ='A';
    int result;
 
    result = c<<i;
    printf("%d\n", result);
 
    result = c>>i;
    printf("%d\n", result);
 
    return 0;
  }

.. index::
   pair: assignment; operators

====================
Assignment Operators
====================
These are = \*= /= %= += -= <<= >>= &= ^= and \|= The only constraint is that
left operand should be modifiable lvalue. An assignment operator stores a value
in the object designated by the left operand. An assignment expression has the
value of the left operand after the assignment, but is not an lvalue. The type of
an assignment expression is the type of the left operand unless the left operand
has qualified type, in which case it is the unqualified version of the type of
the left operand. The side effect of updating the stored value of the left
operand is sequenced after the value computations of the left and right operands.
The evaluations of the operands are unsequenced.

.. index::
   pair: simple; assignment

-----------------
Simple Assignment
-----------------
One of the following will hold:

* the left operand has qualified or unqualified arithmetic type and the right has
  arithmetic type;
* the left operand has a qualified or unqualified version of a structure or union  type compatible with the type of the right;
* both operands are pointers to qualified or unqualified versions of compatible
  types, and the type pointed to by the left has all the qualifiers of the type
  pointed to by the right;
* one operand is a pointer to an object or incomplete type and the other is a
  pointer to a qualified or unqualified version of void, and the type pointed to
  by the left has all the qualifiers of the type pointed to by the right;
* the left operand is a pointer and the right is a null pointer constant; or
* the left operand has type _Bool and the right is a pointer.

In simple assignment (=), the value of the right operand is converted to the type
of the assignment expression and replaces the value stored in the object
designated by the left operand.

If the value being stored in an object is read from another object that overlaps
in any way the storage of the first object, then the overlap will be exact and
the two objects will have qualified or unqualified versions of a compatible type;
otherwise, the behavior is undefined.

.. index::
   pair: compound; assignment

-------------------
Compound Assignment
-------------------
For the operators += and -= only, either the left operand will be a pointer to an
object type and the right will have integer type, or the left operand will have
qualified or unqualified arithmetic type and the right will have arithmetic type.
For the other operators, each operand will have arithmetic type consistent with
those allowed by the corresponding binary operator.

A compound assignment of the form E1 op= E2 is equivalent to the simple
assignment expression E1 = E1 op (E2), except that the lvalue E1 is evaluated
only once, and with respect to an indeterminately-sequenced function call, the
operation of a compound assignment is a single evaluation.

.. code-block:: c

  // Author: Shiv S. Dayal
  // Description: Demo of compound assignments.
 
  #include <stdio.h>
 
  int main()
  {
    int i   = 3;
    int j   = 3;
    float f = 4.7;
    float result=0.0;
 
    result += i+f;
    printf("%f\n", result);
 
    result -= f;
    printf("%f\n", result);
 
    j <<= i;
    printf("%d\n", j);
 
    return 0;
  }

and the output is::

  7.700000
  3.000000
  24

.. index::
   pair: conditional; operators

---------------------
Conditoinal Operators
---------------------
It has the following form: E1 ? E2 :E3;. If E1 is true then E2 is assigned to
lvalue else E2 is assigned. It has following constraints:

* The first operand will have scalar type.
* One of the following will hold for the second and third operands:
  
  * both operands have arithmetic type;
  * both opearands have the same structure or union type;
  * both operands have void type;
  * both operands are pointers to qualified or unqualified versions of compatible
    types;
  * one operand is a pointer and the other is a null pointer constant; or
  * one operand is a pointer to an object or incomplete type and the other is a
    pointer to a qualified or unqualified version of void.

The first operand is evaluated; there is a sequence point between its evaluation 
and the evaluation of the second or third operand (whichever is evaluated). The
second operand is evaluated only if the first compares unequal to 0; the third
operand is evaluated only if the first compares equal to 0; the result is the
value of the second or third operand (whichever is evaluated), converted to the
type described below. Note that a conditional expression does not give an lvalue.

If both the second and third operands have arithmetic type, the result type that
would be determined by the usual arithmetic conversions, were they applied to
those two operands, is the type of the result. If both the operands have
structure or union type, the result has that type. If both operands have void
type, the result has void type.

If both the second and third operands are pointers or one is a null pointer
constant and the other is a pointer, the result type is a pointer to a type
qualified with all the type qualifiers of the types pointed-to by both operands.
Furthermore, if both operands are pointers to compatible types or to differently qualified versions of compatible types, the result type is a pointer to an
appropriately qualified version of the composite type; if one operand is a null
pointer constant, the result has the type of the other operand; otherwise, one
operand is a pointer to void or a qualified version of void, in which case the
result type is a pointer to an appropriately qualified version of void.

.. code-block:: c

  // Author : Shiv S. Dayal
  // Description : Demo of conditional operator

  #include <stdio.h>

  int main()
  {
    int i = (4 < 5)? 7:10;

    printf("%d\n", i);
 
    return 0;
  }

output is 7 as 4 is less than 5 which is true.

.. index::
   pair: comma; operators

---------------
Comma Operators
---------------
It is a very simple operator. The left operand of a comma operator is evaluated
as a void expression; there is a sequence point between its evaluation and that
of the right operand. Then the right operand is evaluated; the result has its
type and value. A comma operator does not give an lvalue.

.. index::
   pair: sizeof; operators

----------------
sizeof Operators
----------------
You have already see sizeof operator in second chapter when we saw sizes of data
types. However here is the constraint: the sizeof operator will not be applied to
an expression that has function type or an incomplete type, to the parenthesized
name of such a type, or to an expression that designates a bit-field member.

The sizeof operator yields the size (in bytes) of its operand, which may be an
expression or the parenthesized name of a type. The size is determined from the
type of the operand. The result is an integer. If the type of the operand is a
variable length array type, the operand is evaluated; otherwise, the operand is
not evaluated and the result is an integer constant.

When applied to an operand that has type char, unsigned char, or signed char,
(or a qualified version thereof) the result is 1. When applied to an operand that
has array type, the result is the total number of bytes in the array. When
applied to an operand that has structure or union type, the result is the total
number of bytes in such an object, including internal and trailing padding.

.. index::
   triple: unary; arithmetic; operators

--------------------------
Unary Arithmetic Operators
--------------------------
The operand of the unary + or - operator will have arithmetic type; of the ~
operator, integer type; of the ! operator, scalar type.

The result of the unary + operator is the value of its (promoted) operand. The
integer promotions are performed on the operand, and the result has the promoted
type.

The result of the unary - operator is the negative of its (promoted) operand. The
integer promotions are performed on the operand, and the result has the promoted
type.

The result of the ~ operator is the bitwise complement of its (promoted) operand
(that is, each bit in the result is set if and only if the corresponding bit in
the converted operand is not set). The integer promotions are performed on the
operand, and the result has the promoted type. If the promoted type is an
unsigned type, the expression ~E is equivalent to the maximum value representable
in that type minus E.

The result of the logical negation operator ! is 0 if the value of its operand compares
unequal to 0, 1 if the value of its operand compares equal to 0. Theresult has type
int. The expression !E is equivalent to (0==E).

We will see casting, array subscripting, function parenthes, address and
indirection operators later at appropriate time. For now I am going to tell you
about operator precedence and associativity and then about grouping parenthes.
Given below is the table for operator precedence and associativity, however, you
may not be familiar with few of them but later you will be:

.. index::
   single: operator precedence

+------------------------------------------+------------------+
| Operators                                | Associativity    |
+==========================================+==================+
| () [] . -> ++ -- (postfix)               | left-to-right    |
+------------------------------------------+------------------+
| ++ -- + - (unary) ! ~ (types) \* & sizeof| right-to-lfet    |
+------------------------------------------+------------------+
| \* / %                                   | left-to-right    |
+------------------------------------------+------------------+
| \+ - (Addition/Subtraction)              | left-to-right    |
+------------------------------------------+------------------+
| << >>                                    | left-to-right    |
+------------------------------------------+------------------+
| < > <= >=                                | left-to-right    |
+------------------------------------------+------------------+
| == !=                                    | left-to-right    |
+------------------------------------------+------------------+
| &                                        | left-to-right    |
+------------------------------------------+------------------+
| ^                                        | left-to-right    |
+------------------------------------------+------------------+
| \|                                       | left-to-right    |
+------------------------------------------+------------------+
| &&                                       | left-to-right    |
+------------------------------------------+------------------+
| ||                                       | left-to-right    |
+------------------------------------------+------------------+
| Assignement operators                    | right-to-left    |
+------------------------------------------+------------------+
| ,                                        | left-to-right    |
+------------------------------------------+------------------+

.. index::
   single: overriding precedence
   single: grouping parentheses

====================
Grouping parentheses
====================
Grouping parentheses are used to override operator precedence and group
expressions. NEVER EVER try to memorize and rely on precedence of operators.
Always use grouping parentheses. Till now I have shown very simple examples of
operators; here are some complex ones:

.. code-block:: c

  // Author: Shiv Shankar Dayal
  // Description: Demo of grouping parentheses
 
  #include <stdio.h>
 
  int main()
  {
    printf("%f\n", 5.2*(3.7+2.3));
    printf("%d\n", ((4&5)||(7^5)));
 
    return 0;
  }

This small program shows you what can go wrong if you rely on memory. It allows
you do addition first and then multiplcation. Inner parentheses are evaluated
first then inner ones. This concludes our chapter on operators and expressions.
Next we focus on control statements and flow statements.
