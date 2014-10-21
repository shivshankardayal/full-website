Control Flow
************
There are three things you will learn in this chapter. Switching the path of 
execution in program depending upon program variables or states using control 
statements. Repeating a set of instructions using loops. Bypassing certain set
of instructions in a loop and jump around. Collectively, these elements of C
allow or enable you to take driver's seat over the control over a C program.
You will spend much of your programming time even in future using these basic
elements. Let us begin with if-else without spending much time over boring stuff.
Before we proceed I would like to tell you about storage classes of array and
their scope. I could have covered it in second chapter but I did not want to
scare you with too many things in itself.

.. index:: storage-class, auto, register, static, extern

Storage Classes
===============
In C99 variables can be declared at any point in class without breaking an
expression. This was not possible in older C and you could only declare at
startof function. There is ``auto, register, static`` and ``extern``.

auto is the default storage class for local variables. Local variables are those
that are inside any function or any control-flow statement block. You will
perhaps never use auto explicitly. For examle, ``auto int i;``
``register`` is the storage class which tell the compiler that this variable will
be stored in a CPU register instead of RAM. It is mostly used for loop counters
and to store small 32-bit or 64-bit variables in CPU register. For example,
``register int i;``

``static`` is the default storage class for global variables though local
variables can also be made ``static``. local static variables persist across
function calls that is their values do not change.

``extern`` keyword allows global variables to become visible in other modules
than itself.

There are two more modifiers: ``const`` and ``volatile``. As their names specify
``const`` makes a variable constant. That is you cannot change value of a
variable declared as ``const``. ``volatile`` is kind of opposite but not really
opposite. What it does is that the programs other than the program itself where
it has been declared are allowed to change it. This means that a variable can be
a ``const`` as well as ``volatile`` at the same time.

.. index::
   pair: if; statement
   pair: else; statement

if-else Statement
=================
An if-else statement may consist of only ``if`` or both ``if`` and ``else`` or
``if`` and ``else if`` or ``if, else if`` and ``else``. An if-else statement must
have if at the beginning, one or more ``else if`` must come after if or before
``else`` and ``else`` must come at end. ``else if`` and ``else`` are optional and
may not come. Consider the following program:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description : Demo of if-else statements.

  #include <stdio.h>

  int main()
  {
    int i = 0, j= 0;
 
    printf("Please enter two integers i and j:\n");
    scanf("%d%d", &i , &j);
 
    if(i==4)
      printf("you entered 4 for i.\n");

    if(i==7)
    {
      printf("you entered 7 for i.\n");
      printf("I am happy for you.\n");
    }
    else
    {
      printf("You did not enter 7 for i.\n");
    }
    if(i==7)
    {
      printf("you entered 7 for i.\n");
      printf("I am happy for you.\n");
    }
    else if(j==8)
      printf("You entered 8 for i.\n");
 
    if(i==7)
      printf("you entered my lucky number.\n");
    else if((i==7) &&(j==8))
      printf("May god bless you!\n");
    else
      printf("You entered bad number.\n");
 
    return 0;
  }

and the output is::

  Please enter two integers i and j:
  4
  6
  you entered 4 for i.
  You did not enter 7 for i.
  You entered bad number.

As you can see from first if sttatement that if you enter the value of i as 4
then the printf will be executed and you will be able to see it. Note that if
there are multiple lines below if which you want to execute then you must put
them in a block using curly braces. If you just want to execute one line then
these curly braces are optional. Note that how you must use curly braces if you
have more than one line and you want to execute them. Also, see the syntax for
missing else and missing else if. One if-else can be nested inside another for
example see the following code:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description : Demo of if-else statements.
 
  #include <stdio.h>
  #include <string.h>
 
  int main()
  {
    char fName[128]={0}, lName[128]={0};
 
    printf("Enter your first name and last name in that order:\n");
    gets(fName);
    gets(lName);
 
    if(strcmp(fName, "Shiv") == 0)
    {
      if(strcmp(lName, "Dayal") == 0)
        printf("Your name is Shiv Dayal.\n");
    }
    else
    {
      printf("Your name is %s %s.\n", fName, lName);
    }
 
    return 0;
  }

and the output is::

  Enter your first name and last name in that order:
  Shiv
  Dayal
  Your name is Shiv Dayal.

another run::

  Enter your first name and last name in that order:
  Richard
  Stallman
  Your name is Richard Stallman.

when first if matches but else does not::

  Enter your first name and last name in that order:
  Shiv
  Stallman

Note the usage of nested if-else. Also, note how ``strcmp`` has been used to
compare two strings and ``gets`` to read the input. ``gets`` is dangerous but it
is simple that is why has been used here. You can read about it at the link of
opengroup. We will see this in more detail towards the end when we deal with
chapter named C Standard Library.

**WARNING:** Always remember the expression inside if evaluates to a boolean so
you should never do an ASSIGNMENT inside if and else if as it will always
evaluate to what is assigned. It can render all your logic meaningless. C is not
Python, where assignment inside if is not allowed. However, if you assign 0 to
some variable it will evaluate to false

.. index::
   single: dangling else

Dangling Else Problem
---------------------
The ``else`` part has a property that it will cling to closest ``if``. So the
following piece of code may give you surprise:

.. code-block:: c

  if(x==1)
    if(y>2)
      printf("foo\n");
  else
    printf("bar\n");

Now consider ``x!=1`` then you may think that ``bar`` will be printed. However,
that will not be the case. The ``else`` part clings to inner ``if``. This can be
fixed by using curly braces. 

.. index::
   pair: switch; statement

switch Statement
================
``switch`` statement is kind of if-else replacement to simplify it. Usage of
``switch`` statement is to compare one expression with others, and then execute
a series of sub-statements inside ``case`` and ``default`` based on the result of
the comparisons. Note that ``switch`` statement takes only integers or integreal
type as its argument and same is valid for its cases. Consider the following
example:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description : Demo of if-else statements.
 
  #include <stdio.h>
 
  int main()
  {
    int i  = 65;
 
    switch(i)
    {
      case 'A':
        printf("Value of i is 'A'.\n");
        break;
      case 'B':
        printf("Value of i is 'B'.\n");
        break;
      default:
        break;
    }
 
    return 0;
  }

and the output is::

  Value of i is 'A'.

Notice the usage of ``break``. It is used to terminate execution once a match has
been found for a particular case else what will happen is shown below:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description : Demo of switch statement.
 
  #include <stdio.h>
 
  int main()
  {
    int i  = 65;
 
    switch(i)
    {
      case 'A':
        printf("Value of i is 'A'.\n");
      case 'B':
        printf("Value of i is 'B'.\n");
      default:
        printf("Value of i is %c.\n", i);
        break;
      }
 
    return 0;
  }

and the output is::

  Value of i is 'A'.
  Value of i is 'B'.
  Value of i is A.

This is also known as fall through of a ``switch`` statement. Notice, the use of
``default`` that how it is analogous to ``else`` statement. ``switch`` statements
can also be nested inside each other. However, node that lots of nesting is not
good. At most 2-3 levels are more than enough else you should look at alternative
ways of writing code.

.. index::
   pair: while; statement

while Loop
==========
Of three loops I am first going to cover ``while`` loop. It is simplest of three.
I will just give an example for you to understand.

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description : Demo of while statement.
 
  #include <stdio.h>
 
  int main()
  {
    int i = 0;
 
    while(i<=10)
    {
      printf("%d * %2d = %4d\n", 2, i, 2*i);
      i++;
    }
 
    return 0;
  }

and the output is::

  2 *  0 =    0
  2 *  1 =    2
  2 *  2 =    4
  2 *  3 =    6
  2 *  4 =    8
  2 *  5 =   10
  2 *  6 =   12
  2 *  7 =   14
  2 *  8 =   16
  2 *  9 =   18
  2 * 10 =   20

``while`` loop just has one expression which is its terminating condition. We
have written ``i<=10`` which is terminating condition for our loop. The moment
``i`` will become greater than that the loop will terminated. We are
initializing our loop index to 0 and incrementing within ``while`` loop. Note
that you must use curly braces for body of block of loop. If you have only one
statement as body of loop then braces are optional.

.. index::
   pair: do-while; statement

do while Loop
=============
It is very much similar to ``while`` loop but with a very subtle difference.
Consider the following code:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description : Demo of do while statement.
 
  #include <stdio.h>

  int main()
  {
    int i = 0;
 
    do {
      printf("I am Shiv.\n");
      i++;
    }while(i<5);
 
    return 0;
  }

and the output is::

  I am Shiv.
  I am Shiv.
  I am Shiv.
  I am Shiv.
  I am Shiv.

Notice the semicolon at the end of while. Now time for that subtle difference:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description : Demo of do while statement.
 
  #include <stdio.h>
 
  int main()
  {
    int i = 10;
 
    do {
      printf("2 * 10 = 20\n");
      i++;
    }while(i<5);
 
    return 0;
  }

and the output is::

  2 * 10 = 20

Notice how ``do while`` loop executes once even if the loop index is more than
the terminating condition in the ``while`` part.

.. index::
   pair: for; statement

for Loop
========
``for`` loop is the last of loops and most versatile. It has three parts:
initialization of loop counters, terminating condition, and loop index
modification. If you declare a variable in the initialization part then that
variable has just loop scope while for while and do while loop indices have at
least outer block scope. This makes for loop better. Consider the following
example for computing squares of numbers:

.. code-block:: c

  //Author: Shiv S. Dayal
  //Description : Demo of for statement.
 
  #include <stdio.h>
 
  int main()
  {
    for(int i=1, j=1; i<=10||j<=10; i++, j++)
      printf("%2d * %2d = %4d\n", i, j, i*j);
 
    return 0;
  }

and the output is::

   1 *  1 =    1
   2 *  2 =    4
   3 *  3 =    9
   4 *  4 =   16
   5 *  5 =   25
   6 *  6 =   36
   7 *  7 =   49
   8 *  8 =   64
   9 *  9 =   81
   10 * 10 =  100

Notice how various things are coming in picture here: initialization, terminating
conditions loop counter incrementation and output formatting. Here is how you can
write an infinite ``for`` loop ``for(;;)``. You can write an infinite loop
anywhere if your loop index counters are not getting incremented/decremented
properly or your termination condition is incorrect. Also, always make sure that
loop indices are initialized. As an exercise you can try to implement this
program using ``while`` and ``do while`` loop. Last line of the above output is
not having first space properly.

.. index::
   pair: break; statement
   pair: continue; statement

break and continue Statements
=============================
``break`` statement breaks out of innermost ``for, do, while`` and ``switch``
statements. It terminates that loop. Consider for example:

.. code-block:: c

 //Author: Shiv S. Dayal
 //Description : Demo of break statement.
 
 #include <stdio.h>
 
 int main()
 {
 
   for(int i = 0;;i +=10)
   {
     if(i>100)
       break;
     printf("%d\n", i);
   }
 
   return 0;
 }

and the output is::

  0
  10
  20
  30
  40
  50
  60
  70
  80
  90
  100

Notice how the ``for`` loop is terminated once ``i`` goes beyond 100 even though
there is no terminating condition. Try the same in ``while`` and ``do while``
loop and produce the same result.

``continue`` statement is slightly different than ``break`` in the sense that it
does not stop the execution of that loop but simply does not execute remaining
instructions of that block. Consider for example:

.. code-block:: c

 //Author: Shiv S. Dayal
 //Description : Demo of continue statement.
 
 #include <stdio.h>
 
 int main()
 {
 
   for(int i = 0;i<=100;i +=10)
   {
     if(i==50)
       continue;
     printf("%d\n", i);
   }
 
   return 0;
 }

and the output is::

  0
  10
  20
  30
  40
  60
  70
  80
  90
  100

Notice how 50 is missing from output.

.. index::
   pair: typedef; statement
   pair: return; statement

typedef and return Statements
=============================
``typedef`` statement is used to define new types from existing types. For
example:

.. code-block:: c

  typedef char s8;
  typedef unsigned char s8;
  typedef short int s16;
  typedef unsigned short int u16;

You will be seeing its usage in function pointers, structures and unions heavily.

``return`` statement is used to return from function. Optionally you can return a value.
