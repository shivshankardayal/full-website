Functions
*********
I know that you will readily agree with me if I say that humans get bored if
they have to do same things again and again. I know you get bored too and I too
get bored. We all. We as humans have this built-in nature that repititive
things are just not fit for us. Also, as a human being our capacity to
understand large things at once is difficult. We understand small-small things
and build large chunk based on those small things. Dennis Ritchie had known
this. I am saying because C has got something called functions. C functions
allow you to split a big logic into small ones and therefore facilitating
modular programming. 
They also form the basis of strutctured programming the very base which made C
popular. There is also something called recursion which is a very poewrful tool.
In this chapter we will also see how to do multifile programming. I cannot
emphasize much that how important it is that you master the technique of
functions well and not to mention function pointers which can do the magic. I
will show you the very glimpse only. I can show you the way but walking on that
is your job. It is upto you to do the actual work. I have kept things simple and
minimal with a pupose. I do not want you to get bogged down with a thick and
heavy book. All my examples are toy examples but you have seen things can get
somehwat complex.

We have already seen the special ``main()`` function.

.. index:: pass by value

Pass-by-value
=============
Here I am going to present skeleton of a function prototype and body.
Consider::

  //function prototype
  return-type function-name(argument list); //here varible names may be ommitted

  //function body
  return-type function-name(argument list) //variable names cannot be ommitted``
  {
    //your code here

    //call some other function
    function-name(arugment-list-without-type);
  
    return value-of-return-type;
  }

This might be a bit abstract but please bear it a bit. In due course of time it
will become clear. You will be able to see in its concrete forms soon. Consider
a program which adds two numbers and let us say that you may need to add lots of
them.

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of function
 
  #include <stdio.h>
 
  void add(int firstInt, int secondInt)
  {
    printf("%d+%d=%d\n", firstInt, secondInt, firstInt+secondInt);
  }
 
  int main()
  {
    int a=5, b=7;
 
    add(a, b);
 
    return 0;
  }

output::

  5+7=12

Note that you need function body before its use else you need at least a function
prototype before use. If you do not do so you will get a compiler warnign. An
example is given below:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of function
 
  #include <stdio.h>
 
  //not how argument names are not required
  void add(int, int);
 
  int main()
  {
    int a=5, b=7;
 
    add(a, b);
 
    return 0;
  }
 
  void add(int firstInt, int secondInt)
  {
    printf("%d+%d=%d\n", firstInt, secondInt, firstInt+secondInt);
  }

output is same as above.

What you have seen just above is known as pass-by-value. In this case a copy of
parameters is made and passed on to called function by caller function. So, if
called function makes a change to values then those are not reflected back in
the caller function. As an example I will use famous example of swapping values
of two variables. First, I will show how pass-by-value works. So here is the
code:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of function
 
  #include <stdio.h>
 
  void swap(int, int);
 
  int main()
  {
    int a=5, b=7;
 
    printf("Before swap a=%d and b=%d\n", a, b);
    swap(a, b);
    printf("After swap a=%d and b=%d\n", a, b);
 
    return 0;
  }
 
  void swap(int firstArg, int secondArg)
  {
    int temp=firstArg;
    firstArg=secondArg;
    secondArg=temp;
  }

output::

  Before swap a=5 and b=7
  After swap a=5 and b=7

.. index:: pass by address

Pass-by-address
===============
Not exactly what we wanted. The solution is to pass-by-address. When you the
address to a called function, it receives address in a pointer variable. Then if
it modifies the value stored at that address then it is reflected back in the
caller. Let us see an example to understand:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of function
 
  #include <stdio.h>
 
  void swap(int*, int*);
 
  int main()
  {
    int a=5, b=7;
 
    printf("Before swap a=%d and b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap a=%d and b=%d\n", a, b);
 
    return 0;
  }
 
  void swap(int* firstArg, int* secondArg)
  {
    int temp=*firstArg;
    *firstArg=*secondArg;
    *secondArg=temp;
  }

output::

  Before swap a=5 and b=7
  After swap a=7 and b=5

.. index:: recursion

Recursion
=========
In C recusion is the concept of a function calling itself. When a repeated
operation has to be preformed over a variable, recursion can be used. Recursion
simplifies the code a lot. Typically there is always a more effective iterative
solutions are available but there are certain cases where recursion is always
better than iteration. For example, traversal of trees where iteration is not so
effective as compared to recursion. The first example I am going to give is that
of factorials. The formula for factorial is given by :math:`n!=\prod_{k=1}^n k`
and recursive definition of factorial is given by:

.. index::
   pair: calculation; factorial

.. math::

  n!=\left\{\begin{array}{ll}
  1 & \quad\text{if n=0}\\
  (n-1)!*n  & \quad\text{if n>0}
  \end{array}\right.

Note that every recursion has to be written carefully in thse sense that it must
have a termination condition and that in all the cases the termination condition
must be reached. If a recursion is too deep or infinite there will be a stack
overlow and the program will terminate. First, I will show you an iterative
version with a function.

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Iterative factorial.
 
  #include <stdio.h>
 
  long long fact(int input);
 
  int main()
  {
    int input=0;
 
    printf("Enter a number whose input has to be computed:\n");
    scanf("%d", &input);
 
    printf("Factorial of %d is %lld.\n", input, fact(input));
 
    return 0;
  }
 
  long long fact(int input)
  {
    long long output=1;
    while(input!=0)
    {
      output*=input;
      input--;
    }
 
    return output;
  }

output::

  Enter a number whose factorial has to be computed:
  17
  Factorial of 17 is 355687428096000.

Now we will see recursive version:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Recursive factorial.
 
  #include <stdio.h>
 
  long long fact(int input);
 
  int main()
  {
    int input=0;
 
    printf("Enter a number whose factorial has to be computed:\n");
    scanf("%d", &input);
 
    printf("Factorial of %d is %lld.\n", input, fact(input));
 
    return 0;
  }
 
  long long fact(int input)
  {
    if(input==0)
      return 1;
    else
      return fact(input-1)*input;
  }

output::

  Enter a number whose factorial has to be computed:
  16
  Factorial of 16 is 20922789888000.

Recursion is very simple yet may be very deceptive to understand for beginners.
Let us dissect the code. Our input was 16 so if will not match and ``return
fact(15)*16;`` will be executed. Here, before ``fact(16)`` can return
``fact(15)`` has to return. And, similarly before ``fact(15)`` can return
``fact(14)`` has to return. Now, note that for ``fact(0)`` there is no such
condition and it can return 1 making it possible for ``fact(1)`` to return,
which, in turn will make it posiible for ``fact(2)`` to return and so on. So,
what is happening is function is calling itself by creating more and more
function frames and when the termination condition reaches the stack unwinds.

.. index::
   pair: calculation; Fibonacci numbers

Let us consider one more famous example for recursive function, that is of
computing Fibonacci numbers. The Fibonacci series is given by:

.. math::
  F_n = F_{n-1} + F_{n-2}

where first two numebrs are given by:

.. math::
  F_0 = 0  \text{ and }  F_1 = 1

First consider the iterative version:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Iterative Fibonacci series.
 
  #include <stdio.h>
 
  void fibonacci(int input);
 
  int main()
  {
    int input=0;
 
    printf("How many Fibonacci numbers you want?\n");
    scanf("%d", &input);
 
    fibonacci(input);
 
    return 0;
  }
 
  void fibonacci(input)
  {
    int fib0=0, fib1=1;
 
    if(input==0)
    return;
    else if(input==1)
    {
      printf("%d\n", fib0);
    }
    else if(input==2)
    {
      printf("%d %d\n", fib0, fib1);
    }
    else if(input>2)
    {
      printf("%d %d", fib0, fib1);
      while(input>1)
      {
        fib1=fib1+fib0;
        fib0=fib1-fib0;
        printf(" %d", fib1);
        input--;
      }
    }
    printf("\n");
  }

output::

  How many Fibonacci numbers you want?
  16
  0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987

Now we will see recursive version:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: iRecursive Fibonacci series.
 
  #include <stdio.h>
 
  long long fibonacci(int input);
 
  int main()
  {
    int input=0;
 
    printf("Which Fibonacci number you want?\n");
    scanf("%d", &input);
 
    printf("%lld\n", fibonacci(input));
 
    return 0;
  }
 
  long long fibonacci(int input)
  {
    long long fib0=0, fib1=1;
 
    if(input==0)
    {
      return fib0;
    }
    else if(input==1)
    {
      return fib1;
    }
    else
    {
      long long fib = fibonacci(input-1)+fibonacci(input-2);
      return fib;
    }
  }

output::

  Which Fibonacci number you want?
  32
  2178309

.. index:: funcitons like macros

Function Like Macros
====================
Functions are costly if they are very small. For example, let us say we want to
add two integers only then it does not make sense to write a function. When you
call a function a new function frame has to be created, new variables are
created, when function returns things are cleaned and return value is returned.
All this consume memory and CPU cycles so old C style was to use macros. For
example, consider following program:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of macros.
 
  #include <stdio.h>
 
  #define SUM(a, b) a+b
 
  int main()
  {
    printf("%d %d\n", SUM(5, 7), SUM(8, 9));
 
    return 0;
  }

output::

  12 17

However, such usage of macros are inappropriate, dangerous and higly advised
against. First you have to take care that you parenthesize all parameters
carefully. Even then consider following:

.. code-block:: c

  #define MIN(a,b)  ((a)<(b))?(a):(b);

If it get a call like:

.. code-block:: c
  
  int a=7, b=3;
  MIN(a,++b)//then macro will expand to
  ((a)<(++b))?(a):(++b);

Now since ``b`` is less than ``a`` it will be incremented twice otherwise it
will be incremented once. Such behavior is confusing at best. Older C
programmers had no choice but only macros. But with new C99 standard we have
something called inline functions. New C99 programmers have no excuse for
writing macros like shown above.

.. index:: inline functions

inline Functions
================
``inline`` functions are somewhat a mix of macros and functions. It is a request
to compiler to expand the code inline like macros while maintaining the
type-safety of functions. Note that it is a request not a command. Compilers may
choose to ignore the request of inline expansion of code if the inline function
is too complicated. Also, recursive functions are not inlined. You should use
inline functions to replace small functions only. The reasons are being that you
may get problems mentioned in Item 33 of "Effective C++" by Scott Meyers. For
smaller functions you have a much higher chance of getting your functions
inlined. To use the inline function you just need to prefix the function
signature and prototype declaration with keyword inline. For smaller functions
code generated for inline functions will outweigh the overhead which is there
for function calls. However, if you inline too much the size of your binary will
become bigger and bigger and it may be a problem on systems; straved for memory;
in systems like embedded systems. Typically inline functoins are declared in
headers so that all source files can benefit from it. However, this may cause
problems if functions are not inlined by compiler.

For example, the above `MAX` function can be rewritten as following:

.. code-block:: c

   inline void MAX(int a, int b)
   {
     return a > b?a:b;
   }

One of the advantages of inline functions is type safety. Macros do not care
about type safety which can cause run-time surprizes.

.. index:: function pointers

Function Pointers
=================
These are very powerful but have got somewhat complex syntax. Due to their
complex syntax programmers typically shun them. However, they are must if you
want to do certain stuff which C typically does not allow, like, object oriented
programming, generic programming, switch/if statement replacement etc. to name a
few. New programmers may wonder how can we have pointers to functions as they
are not variables. Well they are not varibles that I agree but still their
addresses can be taken. However, their addresses lie in code segment or text
segment which happens to be read-only area, hence, that address cannot be
modified. Let us consider a program of a desk calculator with four
operations. Addition, subtraction, multiplication and division. As a typical
desk calculator I will take double as data type as it has sufficient range and
precision. How would you write such a program? Well with our current knowledge
we can write four functions for four operations. Then we can use a switch for
choosing the function. Let us see it in action:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of function pointers.

  #include <stdio.h>

  int main()
  {
    char op=0;
    double op1=0.0,op2=0.0,result=0.0;

    printf("Enter operation (should be one of + - * /):");
    scanf("%c", &op);

    printf("Enter two operands separated by a space:");
    scanf("%lf %lf", &op1, &op2);

    switch(op)
    {
      case '+':
        result = op1 + op2;
        break;
      case '-':
        result = op1 - op2;
        break;
      case '*':
        result = op1 * op2;
        break;
      case '/':
        result = op1 / op2;
        break;
      default:
        break;
    }

    printf("%lf%c%lf=%lf\n", op1, op, op2, result);

    return 0;
  }

and the output is::

  Enter operation (should be one of + - * /):+
  Enter two operands separated by a space: 2.4 1.2
  2.400000+1.200000=3.600000

As you can see depending on the operation the switch statement performs the
operation on two operands. We can use function pointers to replace this swiccth
statement:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of function pointers.

  #include <stdio.h>
  /* Since there are four arithmetic operations we need four function pointers.*/

  float plus(double op1, double op2)
  {
    double result=0.0;

    result=op1+op2;
    printf("%lf+%lf=%lf\n", op1, op2, result);
  }

  float minus(double op1, double op2)
  {
    double result=0.0;

    result=op1-op2;
    printf("%lf-%lf=%lf\n", op1, op2, result);
  }

  float multiply(double op1, double op2)
  {
    double result=0.0;

    result=op1*op2;
    printf("%lf*%lf=%lf\n", op1, op2, result);
  }

  float divide(double op1, double op2)
  {
    double result=0.0;

    result=op1/op2;
    printf("%lf/%lf=%lf\n", op1, op2, result);
  }

  void call_fp(double op1, double op2, float (*pt2Func)(double, double))
  {
    pt2Func(op1, op2);
  }

  // Execute example code
  void Switch(double op1, double op2, char op)
  {
    switch(op)
    {
      case '+':
        call_fp(op1, op2, &plus);
        break;
      case '-':
        call_fp(op1, op2, &minus);
        break;
      case '*':
        call_fp(op1, op2, &multiply);
        break;
      case '/':
        call_fp(op1, op2, &divide);
        break;
      default:
        break;
    }
  }

  int main()
  {
    char op = 0;
    double op1 = 0.0, op2 = 0.0, result=0.0;

    printf("Enter operation (should be one of + - * /):");
    scanf("%c", &op);
    printf("Enter two operands separated by a space:");
    scanf("%lf %lf", &op1, &op2);

    Switch(op1, op2, op);

    return 0;
  }

output::

  Enter operation (should be one of + - * /):+
  Enter two operands separated by a space:2.4
  1.2
  2.400000+1.200000=3.600000

So you see how a ``switch`` statement can be replaced with function pointers. The
abstract declaration of a function pointer is given below::

  return_type (*function_name)(arguments);

You can call these functions in two ways::

  function_name(arguments); //shortcut call
  (*function_name)(arguments); //long and correct call

You should always prefer the second version as it is more portable across
different compilers and environments.

.. index::
   single: passing funciton pointers
   single: receiving funciton pointers

Passing and Receiving Function Pointers
=======================================
You have already seen how to pass a function pointer as an argument to a second
function in the above exercise. ``call_fp(op1,op2, &plus);`` is where you pass
a function pointer and ``void call_fp(doubleop1, double op2, float
(*pt2Func)(double, double))`` is where you receive it as an argument.

You can also return a function pointer from some function. Consider the
following:

.. code-block:: c

  return_type (*func1(arguments1))(arguments2)
  {
    return &func2;
  }

This piece of code is a function whose name is ``func1``, it takes ``arguments1``
as its arguments and returns ``float``. The return value is a function pointer
``func2`` whose arguments are ``arguments2``. However, this kind of declaration
is messy and hard to read so we have a solution which makes things easier on us.
Consider a following ``typedef`` and function signature:

.. code-block:: c

  typedef return_type (*function1)(arguments);
  function1 function2(arguments);

This is much simpler and cleaner. It is also easier to understand than above.

Similarly you can declare an array of function pointers. This offers the feature
of selection of a function using an index. For example, the menu bar of most of
the GUI programns can be accessed using this. Similarly, there are two ways again
to declare the array of function pointers. The first one is without using typedef
and second one is using ``typedef``. The choice is yours that which one you want
to use. I prefer the ``typedef`` version. The syntax is given below:

.. code-block:: c

  typedef return_type (*function1)(arguments);
  function1 array_of_fp[MAX];

  return_type (*function2[MAX])(arguments);

One of the more clever usage of function pointers can be found in the library
function ``qsort`` where you have to write the comparison function which is a
callback function. Given below os the signature of qsort function.

.. code-block:: c

  void qsort (void * a, size_t count, size_t size, int (*comp) (
              const void *, const void * ) );

The brief description is given here. Sorts the count elements of the array
pointed by ``a``, each element ``size`` bytes long, using the compa function to
determine the order.

The sorting algorithm used by this function compares pairs of values by calling
the specified comparator function with two pointers to elements of the array.

The function does not return any value, but modifies the content of the array
pointed by base reordering its elements to the newly sorted order.
Let us see an example:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description: Demo of qsort.

  #include <stdio.h>
  #include <stdlib.h>

  int values[] = { 4, 1, 4, 3, 7, 10, 9, 20, 25 };

  int compare (const void * a, const void * b)
  {
    return ( *(int*)a - *(int*)b );
  }

  int main ()
  {
    int n=0;

    qsort (values, 6, sizeof(int), compare);

    for (n=0; n<9; n++)
      printf ("%d ",values[n]);

    return 0;
  }

and the output is::

  1 3 4 4 7 10 9 20 25


Type Generic Functions
======================
C11 has introduced a new type of functions called type generic functions. If
you read clause 2 of ``tgmath.`` then you will find following.

Of the ``<math.h>`` and ``<complex.h>`` functions without an ``f`` (``float``)
or ``l`` (``long double``) suffix, several have one or more parameters whose
corresponding real type is ``double``. For each such function, except ``modf``,
there is a corresponding type-generic macro. [1]_ The parameters whose
corresponding real type is ``double`` in the function synopsis are generic
parameters. Use of the macro invokes a function whose corresponding real type
and type domain are determined by the arguments for the generic
parameters. [2]_

.. [1] Like other function-like macros in Standard libraries, each type-generic
       macro can be suppressed to make available the corresponding ordinary
       function.

.. [2] If the type of the argument is not compatible with the type of the
       parameter for the selected function, the behavior is undefined.

Since we have three different floating-point types and three different versions
of complex numbers (``float, double`` and ``long double``) therefore we have
six versions of each function which will be called based on argument type.

This is achieved through keyword ``_Generic`` which is used to create a generic
selection expression. For example, consider the following code:

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     printf("%d", _Generic((6), char: 1, int: 2, long: 3, default: 0));

     return 0;
   }

Note that you need version 4.9 of ``gcc`` or ``clang`` to compile this. I am
using ``clang`` version 3.4 to compile this program. The output is:

.. code-block:: text

   2

as you can see we are passing 6 which is an integer and value 2 is associated
with the ``int`` therefore the output is 2.

We can make a macro which will allow us to reuse the functionality. For
example:

.. code-block:: c

   #include <stdio.h>

   #define type(T) _Generic( (T), char: 1, int: 2, long: 3, default: 0)

   int main()
   {
     printf("%d", type(87364563853));

     return 0;
   }

which will output 3 because value passed is ``long``.

The grammar is given below:

*generic-selection:*
  *_Generic ( assignment-expression , generic-assoc-list )*
*generic-assoc-list:*
  *generic-association*

  *generic-assoc-list , generic-association*
*generic-association:*
  *type-name : assignment-expression*

  *default : assignment-expression*

Section 6.5.1.1 of n1570.pdf describes generic selection in great detail. To
summarize following points can be noted:

* A generic selection consists of a controlling expression (which is not
  evaluated) and one or more, comma-separated, generic associations.
* Each generic association consists of a type-name (or default) and a result
  expression separated by a colon.
* The result of the generic selection expression is the result expression of
  the corresponding compatible type provided in the matching generic
  association.
* If none of the provided types are compatible with the type of the controlling
  expression, a default selection is used if provided, otherwise the construct
  is erroneous.
* The order of the generic associations in the list is inconsequential; no more
  than one compatible type may be provided in a generic selection so there is
  never more than one case that could match.
* The type and value of a generic selection are identical to those of its
  result expression. It is an lvalue, a function designator, or a void
  expression if its result expression is, respectively, an lvalue, a function
  designator, or a void expression.

A pseudo type-polymorphism is used to provide ``_Generic`` facility. For
example, the ``acos`` macro defined in ``tgmath.h`` could be implemented as:

.. code-block:: c

   #define acos(X) _Generic((X), \
     long double complex: cacosl, \
     double complex: cacos, \
     float complex: cacosf, \
     long double: acosl, \
     float: acosf, \
     default: acos \
   )(X)

Multiple arguments are far more complex. For example,

.. code-block:: c

   #define pow(x, y) _Generic((x), \
     long double complex: cpowl, \
 
     double complex: _Generic((y), \
     long double complex: cpowl, \
     default: cpow), \
 
     float complex: _Generic((y), \
     long double complex: cpowl, \
     double complex: cpow, \
     default: cpowf), \
 
     long double: _Generic((y), \
     long double complex: cpowl, \
     double complex: cpow, \
     float complex: cpowf, \
     default: powl), \
 
     default: _Generic((y), \
     long double complex: cpowl, \
     double complex: cpow, \
     float complex: cpowf, \
     long double: powl, \
     default: pow), \
 
     float: _Generic((y), \
     long double complex: cpowl, \
     double complex: cpow, \
     float complex: cpowf, \
     long double: powl, \
     float: powf, \
     default: pow) \
   )(x, y)

Another Example
"""""""""""""""
Similar to selecting the name of a function to call based on the argument type,
we can select, for example, a printf format specifier based on type. This
allows the creation of a macro that can print any type of value that printf
supports without having to specify the type explicitly in the call:

.. code-block:: c

   #define printf_dec_format(x) _Generic((x), \
       char: "%c", \
       signed char: "%hhd", \
       unsigned char: "%hhu", \
       signed short: "%hd", \
       unsigned short: "%hu", \
       signed int: "%d", \
       unsigned int: "%u", \
       long int: "%ld", \
       unsigned long int: "%lu", \
       long long int: "%lld", \
       unsigned long long int: "%llu", \
       float: "%f", \
       double: "%f", \
       long double: "%Lf", \
       char *: "%s", \
       void *: "%p")
 
   #define print(x) printf(printf_dec_format(x), x)
   #define printnl(x) printf(printf_dec_format(x), x), printf("\n");

   printnl('a');    // prints "97" (on an ASCII system)
   printnl((char)'a');  // prints "a"
   printnl(123);    // prints "123"
   printnl(1.234);      // prints "1.234000"

Note that since 'a' is an ``int`` because characters are fundamentally integers
we have to cast it to a ``char`` if we want to print out the letter.


A string literal like ``printnl("abc")`` will produce error. The reason is that
the type of this string is ``char [4]`` while we have type as ``char*`` so we
can cast to that. However, section 6.3.1.2 clause 3 states

  Except when it is the operand of the sizeof operator, the ``_Alignof``
  operator, or the unary ``&`` operator, or is a string literal used to
  initialize an array, an expression that has type "array of type" is
  converted to an expression with type "pointer to type" that points to the
  initial element of the array object and is not an lvalue. If the array object
  has register storage class, the behavior is undefined.

This clause makes no mention of ``_Generic`` so we can assume that the
conversion should occur in this case, this may be a defect in ``clang``.

Type Compatibilty in an Expression
""""""""""""""""""""""""""""""""""
A macro can be created that evaluates to ``true`` if an expression is compatible
with the provided type: ``#define is_compatible(x, T) _Generic((x), T:1,
default: 0)``

This can be useful for determining the underlying type of a ``typedef`` or
``enum``: ``is_compatible((size_t){0}, unsigned long);``

will evaluate to ``true`` if ``size_t`` is a ``typedef`` for ``unsigned
long``. Note that we can only compare an expression with a type, we cannot
directly compare two expressions or two type names. If we want to compare two
types, we can use the C99 compound literal to create a literal of a given type
as we did above. There is no standard-conforming way to test two variables for
type compatibility with this mechanism. On a compiler that supports the common
typeof extension, something like this may work: ``is_compatible(x,
typeof(y));``

``_Generic`` is evaluated at compile-time and can be used with _Static_assert
if the result is an integer constant expression:

.. code-block:: c

   enum e { E1; };
   _Static_assert(is_compatible(E1), int);  // always true
   _Static_assert(is_compatible((enum e){E1}, int);  // not necessarily true

It is possible to define a macro to ensure that an expression, perhaps a
function argument, is of a given type:

.. code-block:: c

   #define ensure_type(p, t) _Static_assert(is_compatible(p, t), \
   "incorrect type for parameter '" #p "', expected " #t)

