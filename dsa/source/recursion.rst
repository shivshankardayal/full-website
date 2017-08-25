Recursion
*********
In this chapter we will study recursion. Recursion is such a powerful concept that it requires its own chapter. Usually,
beginners find it hard to understand recursion. We will study several problems and their solutions to foster the concept
of recursion. We will also study advantages and disadvantages of recursion. I have already discussed recursion in small
detail `here`_. Usually, beginners do not understand recursion because they do not understand how the stack(not the data
structure but the stack of a process in memory) works. Once you understand how it works, it is very easy to understand
recursion. I will treat recursion in much greater depth here than what was presented in C programming book.

.. _here: http://localhost/c/func/#idp51865936

The power of recursion can be understood by following quote by great computer scientist Nicklaus Wirth:

| The power of recursion evidently lies in the possibility of defining an infinite set of objects by a finite
| statement. In the same manner, an infinite number of computations can be described by a finite recursive program, even
| if this program contains no explicit repetitions.


Formally, we can say that a definition, which defines an object in terms of simpler case of itself is recursive
definition. In C or any other programming language for that matter, recursion is the concept of a function calling
itself. When a repeated operation has to be preformed over a variable, recursion can be used. Recursion simplifies the
code a lot. Typically, there is always a more effective iterative solutions are available but there are certain cases
where recursion is always better than iteration. For example, traversal of trees where iteration is not so effective as
compared to recursion. For beginners it is hard to understand recursion but once you understand it then it is not that
hard to understand. A classic example is that of factorial calculation which would serve as base of the entire
concept. The formula for factorial is given by :math:`n! = \prod_{k = 1}^nk` and recursive definition of factorial is
given by: :math:`n! = 1` if :math:`n = 0 n!=(n - 1)! * n~~\forall~~n > 0`

In case you do not understand the formula given below is expansion:

:math:`0! = 1! = 1`

:math:`n! = \prod_{k=1}^n = n \times (n - 1) \times (n - 2) \times ... 3 \times 2 \times 1`

However, note that last two equations are not recursive. Rather, the one given in terms of :math:`(n-1)!` is recursive
because it defines factorial in terms of a factorial in a simplified form.

A recursive definition usually have one or more base cases, which produce result without causing recurrence for one or
more set of inputs in a trivial fashion. Obviously, recursive algorithm also have recursive cases, where the algorithm
recurs i.e. calls itself. For example, for factorial definition the base case would be :math:`0!=1`. The recursive case
for factorial is :math:`(n-1)!` Note that you have to be very careful when writing recursive algorithms in any
structured language because the stack is limited and deep recursion will cause stack overflow. However, there are
techniques like tail recursion described below which allows you to do deep recursion. Usually, base cases are when the
recursive algorithm terminates and thus, these are called *terminating cases*.

Sometimes you may not really have a terminating or base case. For example, evaluation of :math:`e^x = 1 + x +
\frac{x^2}{2!} + \frac{x^3}{3!} + ...` or :math:`\cos(x) = 1 - x + \frac{x^2}{2!} - \frac{x^3}{3!} + ...` does not
really have a base case. For evaluation of such infinite series you have to settle on an error constant usually denoted
by :math:`\epsilon` up to which you compute the series and then you stop. Usually if the constant :math:`\epsilon` is
below six significant digits for ``float`` and twelve for ``double`` then you should stop calculation as that is the
maximum resolution you will get. The constant factor :math:`\epsilon` will determine the terminating case for such a
series.

Types of Recursion
==================
Single and Multiple Recursions
------------------------------
Recursions involving single references are known as *single recursion* and those involving multiple references are known
as *multiple recursion*. For example, the factorial definition which we have seen is a case of single recursion. An
example of multiple recursion is Fibonacci sequence. Mathematically an nth Fibonacci number in sequence is given by
:math:`F_n + F_{n - 1} + F_{n - 1}` while the first two numbers are given by :math:`F_1 = F_2 = 1`. Since the recursion
involves two simpler references that is why we call it multiple reference. Another such example would be Ackermann's
function. Ackermann's function is given by

.. math::

   A(m, n) =
   \begin{cases}
   n + 1       & \quad \text{if } n = 0\\
   A(m - 1, 1)  & \quad \text{if } m > 0 \text{ and } n = 1\\
   A(m- 1, A(m, n - 1)) & \quad \text{if } m > 0 \text{ and } n > 0
   \end{cases}

Clearly, second and third cases of Ackermann's function show that it is a function having multiple recursion. One more
important example of multiple recursion is traversal of binary tree in all three ways i.e. in-order, pre-order and
post-order. Similarly, depth-first traversal of a graph is also a classic example of recursion. We will not see these
last two here but rather in their own respective chapters of trees and graphs.

Sometimes, it is possible to convert a multiple recursion algorithm to single recursion version. For example, a naive
implementation of Fibonacci sequence shown above will be a case of multiple recursion but we can save two numbers and
generate next Fibonacci number and pass it along with the previous number to the next iteration which will cause
multiple recursion to become single recursion and will also allow us to do tail recursion. When we do this it becomes a
case of *corecursion*. Similarly, binary tree can be traversed using extra storage iteratively or you can use threaded
binary tree to eliminate the need of that extra storage.

Indirect Recursion
------------------
The examples which we have seen are cases of *direct recursion*. In direct recursion a function calls itself. However,
if is quite possible for two functions to call each other. When such calls happen then the functions are known as
demonstrating *indirect recursion* or *mutual recursion*. It is quite possible that a function ``f`` calls another
function ``g`` and then ``g`` calls ``f`` again. Chains of more than 2 functions is also possible. For example, a
function ``f1`` calls functions ``f2`` which in turn calls ``f3`` and then it calls ``f1``.

Two very good examples of indirect or mutual recursion are recursive descent parsers and finite state machine
implementation. For a recursive descent parser each rule of the grammar can be implemented as a function and these
functions can call each other. A finite state machine's individual states can be implemented by a separate function and
while the states keep changing these functions can call each other forming a case of indirect recursion i.e. mutual
recursion.

Anonymous Recursion
-------------------
Our programming language is C and in ISO C11(as of this writing. It may be part of a future specification with something
like block of Obj-C.) this does not happen but I am giving this for the sake of completeness of discussion of
recursion. Usually functions recurse by calling themselves by name. But in certain languages there are functions known
as anonymous functions or lambdas which do not have a name. When such functions recurse then it is known as *anonymous
recursion*. However, untill I give C++ examples you will not see this in action in this book.

Structured and Generative Recursion
-----------------------------------
A classification has been made by authors on how a piece of data is generated and used by certain authors. There are two
types of such categorization. First is structured and second is generative.

| [Functions that consume structured data] typically decompose their arguments into their immediate structural
| components and then process those components. If one of the immediate components belongs to the same class of data as
| the input, the function is recursive. For that reason, we refer to these functions as (STRUCTURALLY) RECURSIVE
| FUNCTIONS.

Thus a critical observation which we can have from this definition is that the type of argument is a simpler form of
original input following our original definition of recursion. For example, parsing an XML document or a JSON document,
any kind of tree traversal will fall in this category. Even factorial or single recursive version of Fibonacci sequence
generation will fall in this category.

The second category is defined as:

| Many well-known recursive algorithms generate an entirely new piece of data from the given data and recur on it. HtDP
| (How To Design Programs) refers to this kind as generative recursion. Examples of generative recursion include: gcd,
| quicksort, binary search, mergesort, Newton's method, fractals, and adaptive integration.

The critical difference between these two types of recursion is how they terminate. Where it is very easy to prove the
termination of structurally recursive functions, it is much harder to do so for generative recursions. The guarantees of
simplification of data in generative recursion is harder to guess. When you want to give a mathematical proof for
structurally recursive function the proof is easier to give because the complexity decreases uniformly, usually but it
may be non-uniform for generative recursion and thus, making it harder to give a proof.

Tail Recursion
==============
Functional languages usually do not have loops. In such languages a loop is written using recursion. For example,
consider the following loop which prints all positive integers for data type ``unsigned long``.

.. code-block:: c

   #include <stdio.h>
   #include <limits.h>

   int main()
   {
     for(unsigned long i=0; i<=ULONG_MAX; ++i)
     printf("%lu\n", i);

     return 0;
   }

If you observe this simple program then it start printing the sequence 0, 1 ,2 till ``ULONG_MAX`` is reached and then it
will wrap around and ``i`` will become zero and loop will terminate. This simple loop can be implemented using recursion
as shown below:

.. code-block:: c

   void f(unsigned long i)
   {
     if(i == ULONG_MAX) {
       printf("%lu\n", i);
       return;
     }

     printf("%lu\n", i);
     f(i + 1);
   }

   int main()
   {
     f(0);

     return 0;
   }

If I compile this program using the command ``gcc -Wall -std=c11 -pedantic test.c`` then it causes stack overflow and
terminates at a value of 261938 for ``i``. The reason is simple is and that is it creates a lot of stack frames which is
limited by ``ulimit``. I can make my stack size more than its current valeu of 8MB but that is not the solution because
even with all the RAM i.e. 8GB on my computer that willl be exhausted by this code. Now, the question is how do we
overcome this problem. The short answer is that you add ``-O2`` to compiler for compilation making the command
``gcc -Wall -std=c11 -pedantic test.c``. This will make code work. The long answer is that when you pass ``-O2`` flag to
compiler then it does tail recursion optimization. Before we go in detail about tail recursion optimization let us look
at assembly produced by the steps ``gcc -Wall -std=c11 -pedantic -c test.c`` and ``objdump -d test.o`` respectively:

.. code-block:: text

   test.o:     file format elf64-x86-64


   Disassembly of section .text:

   0000000000000000 <f>:
     0: 55                    push   %rbp
     1: 48 89 e5              mov    %rsp,%rbp
     4: 48 83 ec 10           sub    $0x10,%rsp
     8: 48 89 7d f8           mov    %rdi,-0x8(%rbp)
     c: 48 83 7d f8 ff        cmpq   $0xffffffffffffffff,-0x8(%rbp)
    11: 75 18                 jne    2b <f+0x2b>
    13: 48 8b 45 f8           mov    -0x8(%rbp),%rax
    17: 48 89 c6              mov    %rax,%rsi
    1a: bf 00 00 00 00        mov    $0x0,%edi
    1f: b8 00 00 00 00        mov    $0x0,%eax
    24: e8 00 00 00 00        callq  29 <f+0x29>
    29: eb 26                 jmp    51 <f+0x51>
    2b: 48 8b 45 f8           mov    -0x8(%rbp),%rax
    2f: 48 89 c6              mov    %rax,%rsi
    32: bf 00 00 00 00        mov    $0x0,%edi
    37: b8 00 00 00 00        mov    $0x0,%eax
    3c: e8 00 00 00 00        callq  41 <f+0x41>
    41: 48 8b 45 f8           mov    -0x8(%rbp),%rax
    45: 48 83 c0 01           add    $0x1,%rax
    49: 48 89 c7              mov    %rax,%rdi
    4c: e8 00 00 00 00        callq  51 <f+0x51>
    51: c9                    leaveq 
    52: c3                    retq   

   0000000000000053 <main>:
    53: 55                    push   %rbp
    54: 48 89 e5              mov    %rsp,%rbp
    57: bf 00 00 00 00        mov    $0x0,%edi
    5c: e8 00 00 00 00        callq  61 <main+0xe>
    61: b8 00 00 00 00        mov    $0x0,%eax
    66: 5d                    pop    %rbp
    67: c3                    retq

and the counterpart produced by ``gcc -Wall -std=c11 -pedantic -O2 -c test.c`` and ``objdump -d test.o`` is given below:

.. code-block:: text

   test.o:     file format elf64-x86-64


   Disassembly of section .text:

   0000000000000000 <f>:
     0: 48 83 ff ff           cmp    $0xffffffffffffffff,%rdi
     4: 53                    push   %rbx
     5: 48 89 fb              mov    %rdi,%rbx
     8: 74 24                 je     2e <f+0x2e>
     a: 66 0f 1f 44 00 00     nopw   0x0(%rax,%rax,1)
    10: 48 89 da              mov    %rbx,%rdx
    13: 31 c0                 xor    %eax,%eax
    15: be 00 00 00 00        mov    $0x0,%esi
    1a: bf 01 00 00 00        mov    $0x1,%edi
    1f: 48 83 c3 01           add    $0x1,%rbx
    23: e8 00 00 00 00        callq  28 <f+0x28>
    28: 48 83 fb ff           cmp    $0xffffffffffffffff,%rbx
    2c: 75 e2                 jne    10 <f+0x10>
    2e: 5b                    pop    %rbx
    2f: 48 c7 c2 ff ff ff ff  mov    $0xffffffffffffffff,%rdx
    36: be 00 00 00 00        mov    $0x0,%esi
    3b: bf 01 00 00 00        mov    $0x1,%edi
    40: 31 c0                 xor    %eax,%eax
    42: e9 00 00 00 00        jmpq   47 <f+0x47>

   Disassembly of section .text.startup:

   0000000000000000 <main>:
     0: 48 83 ec 08           sub    $0x8,%rsp
     4: 31 ff                 xor    %edi,%edi
     6: e8 00 00 00 00        callq  b <main+0xb>
     b: 31 c0                 xor    %eax,%eax
     d: 48 83 c4 08           add    $0x8,%rsp
    11: c3                    retq

The key is the bottom of functions at locations ``4c`` and ``42`` respectively. As you can see in the first version ``callq``
instruction is called to call the function which is our recursive call but it is simply not their in optimized
version. The question is how compiler can deduce. If you look at carefully call of function ``f(0)`` has no dependency on
the values computed by ``f(1)``, which has no further dependency on ``f(2)`` and so on. Thus the compiler can optimize in such a
way that no new stack frames need to be created for further calls. But even before we tail recursion in more detail, let
us try to capture what how recursive code is executed in terms of stack. I am giving an indicative diagram for that
below:

.. tikz::

   \draw (0, 0)--(0,-.5cm)--(6cm, -.5cm)--(6cm, 0)--cycle;
   \node[anchor=east] at (0, -.25cm){ main:};
   \draw (3cm, -.25cm) node { call f(0)};
   \draw (0, -.5cm)--(0, -1cm)--(6cm, -1cm)--(6cm, -.5cm)--cycle;
   \node[anchor=east] at (0, -.75cm){ function f(0):};
   \draw (3cm, -.75cm) node { Is i equal to UNIT\_MAX?};
   \draw (0, -1cm)--(0, -1.5cm)--(6cm, -1.5cm)--(6cm, -1cm)--cycle;
   \node at (3cm, -1.25cm){ No, print i};
   \draw (0, -1.5cm)--(0, -2cm)--(6cm, -2cm)--(6cm, -1.5cm)--cycle;
   \draw (3cm, -1.75cm) node { call f(i = 1)};
   \draw (0, -2cm)--(0, -2.5cm)--(6cm, -2.5cm)--(6cm, -2cm)--cycle;
   \node[anchor=east] at (0, -2.25cm){ function f(1):};
   \draw (3cm, -2.25cm) node { Is i equal to UNIT\_MAX?};
   \draw (0, -2.5cm)--(0, -3cm)--(6cm, -3cm)--(6cm, -2.5cm)--cycle;
   \node at (3cm, -2.75cm){ No, print i};
   \draw (0, -3cm)--(0, -3.5cm)--(6cm, -3.5cm)--(6cm, -3cm)--cycle;
   \draw (3cm, -3.25cm) node { call f(i = 2)};

As you can see when ``main`` calls ``f(0)`` a stack frame is created and again for ``f(1)`` and again for ``f(2)`` and
it will continue untill all of stack is exhausted or ``i`` becomes equal to ``ULONG_MAX``. Let us say we had infinite
stack memory available to us then when ``i`` reaches the base case of ``ULONG_MAX`` then ``f(ULONG_MAX)`` will return
and successively ``f(ULONG_MAX - 1)`` and others will follow in reverse order. This is known as *stack unwinding*.

However, since we do not have infinite space available to us we need to use tail recursion. The fundamental principal
behind tail recursion is that we should write in code in such a way that later calls of our function are not a
dependency for earlier calls i.e. caller does not have a dependency on callee. If we can ensure that then compiler will
be able to optimize that for us. This example was a trivial example. More involving recursive examples will have more
complicated versions of tail recursive functions. Note that functional languages deploy tail recursion heavily to
optimize their code execution. Tail recursion not only makes deep recursion possible but causes less consumption of
memory. For example, you can increase your stack size to 1GB if you have enough RAM available by using the command
``ulimit -s 1048576``. Then run the unoptimized version of binary and examine the memory usage which will go on
increasing till the stack space is violated. There is no computer in this world which can run the unoptimized version of
the program. The benefit is not only of memory. Even execution of a tail recursive version will be faster because it
takes time to set up stack frames however small that is. It will matter for large stack sizes and deep recursion. Even
the instruction call to call a function is expensive, relatively.

Now I will present several recursive algorithms, evaluate their complexity, give implementations for both naive version
and tail recursive version.

Recursive Algorithms
====================
Factorial Computation
---------------------
I straightaway present recursive implementation of factorial computation. First a naive version.

.. code-block:: c

   //Description: Recursive factorial.

   #include <stdio.h>

   long long fact(unsigned int input);

   int main()
   {
     unsigned int input=0;

     printf("Enter a number whose factorial has to be computed:\n");
     scanf("%u", &input);

     printf("Factorial of %u is %lld.\n", input, fact(input));

     return 0;
   }

   long long fact(unsigned int input)
   {
     if(input==0)
       return 1;
     else
       return fact(input-1)*input;
   }

The problem with this implementation can be seen from the fact that compiler cannot optimize it for tail recursion. This
can be seen from the assembly given below:

.. code-block:: text

   test.o:     file format elf64-x86-64


   Disassembly of section .text:

   0000000000000000 <fact>:
     0: 53                    push   rbx
     1: 89 fb                 mov    ebx,edi
     3: b8 01 00 00 00        mov    eax,0x1
     8: 85 db                 test   ebx,ebx
     a: 75 04                 jne    10 <fact+0x10>
     c: 5b                    pop    rbx
     d: c3                    ret    
     e: 66 90                 xchg   ax,ax
    10: 8d 7b ff              lea    edi,[rbx-0x1]
    13: e8 00 00 00 00        call   18 <fact+0x18>
    18: 48 0f af c3           imul   rax,rbx
    1c: 5b                    pop    rbx
    1d: c3                    ret

Thus we will have to modify our code in the way we have discussed so that compiler can do necessary optimization. The
improved version is given below:

.. code-block:: c

   #include <stdio.h>

   void factorial(unsigned int *index, unsigned int *input, unsigned long long *fact);

   int main()
   {
     unsigned int input = 0;
     unsigned int index = 1;
     unsigned long long fact = 1;

     printf("Enter a number whose factorial has to be computed:\n");
     scanf("%u", &input);

     factorial(&index, &input, &fact);

     printf("Factorial of %u is %llu.\n", input, fact);

     return 0;
   }

   void factorial(unsigned int *index, unsigned int *input, unsigned long long *fact)
   {
     if(*index == *input) {
       return ;
     }
     else {
       *index += 1;
       *fact *= *index;
     }
     factorial(index, input, fact);
   }

and the equivalent assembly of our function is:

.. code-block:: text

   test.o:     file format elf64-x86-64


   Disassembly of section .text:

   0000000000000000 <factorial>:
     0: 8b 07                 mov    (%rdi),%eax
     2: 3b 06                 cmp    (%rsi),%eax
     4: 74 1d                 je     23 <factorial+0x23>
     6: 48 8b 0a              mov    (%rdx),%rcx
     9: 0f 1f 80 00 00 00 00  nopl   0x0(%rax)
    10: 83 c0 01              add    $0x1,%eax
   13: 41 89 c0              mov    %eax,%r8d
   16: 89 07                 mov    %eax,(%rdi)
   18: 49 0f af c8           imul   %r8,%rcx
   1c: 39 06                 cmp    %eax,(%rsi)
   1e: 75 f0                 jne    10 <factorial+0x10>
   20: 48 89 0a              mov    %rcx,(%rdx)
   23: f3 c3                 repz retq


As you can see that ``factorial`` has been optimized for tail recursion. It may appear from above code that I have
bypassed base case but it is not so. That is hidden in the way variables are initialized. ``fact`` is initialized with 1
which guaranteed that even for ``input`` having a value 0 our result is 1 and same for ``input`` having a value 1. Thus
base cases are implicit in code.

Fibonacci Series
----------------
First I present the most naive version using multiple recursion which then I will convert quickly to single recursion
and then present a tail recursive version.

**Naive Version**

.. code-block:: c

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
     long long fib1=1, fib2=1;

     if(input==1)
     {
       return fib1;
     }
     else if(input==2)
     {
       return fib2;
     }
     else
     {
       long long fib = fibonacci(input-1)+fibonacci(input-2);
       return fib;
     }
   }


What is wrong? Well, it is terribly wrong. Consider following diagrams for function calls for different Fibonacci
numbers(number inside circles indicate the position of that number in sequence and corresponding ``fib`` call):

.. tikz:: [level/.style={sibling distance=60mm/#1}]   \node [circle,draw] (1){5}
   child {node [circle, draw] (2){4}
   child {node [circle, draw] (3){3}
   child {node [circle, draw] (5){1}}
   child {node [circle, draw] (6){2}}}
   child {node [circle, draw] (4){2}}}
   child {node [circle, draw] (7){3}
   child {node [circle, draw] (8){1}}
   child {node [circle, draw] (9){2}}};
   \node [below=5cm, align=flush center,text width=8cm] at (1)
   {Function Calls for 5th Fiboncci Number};

.. tikz:: [level/.style={sibling distance=80mm/#1}] \node [circle,draw] (1){7}
   child {node [circle, draw, xshift=0mm] (2){6}
   child {node [circle,draw] (4){5}
   child {node [circle,draw] (5){4}
   child {node [circle,draw] (7){3}
   child {node [circle,draw] (9){2}
   }
   child {node [circle,draw] (10){1}
   }
   }
   child {node [circle,draw] (8){2}
   }
   }
   child {node [circle,draw] (6){3}
   child {node [circle,draw] (9){2}
   }
   child {node [circle,draw] (10){1}
   }
   }
   }
   child {node [circle,draw] (3){4}
   child {node [circle,draw] (11){2}
   }
   child {node [circle,draw] (12){3}
   child {node [circle,draw] (13){2}
   }
   child {node [circle,draw] (14){1}
   }
   }
   }
   }
   child {node [circle, draw, xshift=0mm] (3){5}
   child {node [circle, draw] (15){3}
   child {node [circle, draw] (16){2}
   }
   child {node [circle, draw] (17){1}
   }
   }
   child {node [circle, draw] (14){4}
   child {node [circle, draw] (18){2}
   }
   child {node [circle, draw] (19){3}
   child {node [circle, draw] (20){1}
   }
   child {node [circle, draw] (21){2}
   }
   }
   }
   };
   \node [below=8cm, align=flush center,text width=8cm] at (1)
   {Function Calls for 7th Fiboncci Number};

As you can see for every next number the number of elements on left and right side of the tree will be almost
doubled. Thus, by intuition we can say that its complexity is :math:`O(2^n)`.  However, that is not a tight bound. The
tighter bound is given by :math:`O(\phi^n)` where :math:`\phi` is golden ratio i.e. :math:`\frac{1 + \sqrt{5}}{2}`.
Computing tighter bound is very easy although it require little bit of mathematics which is not difficult at
all. Fibonacci sequence can be written as two dimensional matrix of linear difference equations:

.. math::

   \begin{pmatrix}F_n\\F_{n-1}\end{pmatrix}=\begin{pmatrix}1&1\\1&0\end{pmatrix}\begin{pmatrix}F_{n-1}\\F_{n-2}\end{pmatrix}

.. math::

   {\overrightarrow F}_{k+1}=A^n{\overrightarrow F}_0

which gives,

.. math::

   {\overrightarrow F}_n=A^n{\overrightarrow F}_0

solving for nth Fibonacci number we get,

.. math::

   F_n=\frac{\phi^n-(-\phi)^{-n}}{\sqrt5}


