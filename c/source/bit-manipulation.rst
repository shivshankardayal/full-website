Bit Manipulation
****************
By now you have seen all constructs of C programming language. In this chapter
we will study bit-manipulation using operators provided by C. Bit manipulation
is considered low-level programming can result in hard to read code but can
improve performance significantly if done right. Most of the bit manipulation
involve numbers and in few cases you can apply it to characters because
characters are internally integers. The key to bit-manipulation is bitwise
operators `&, ^, |, !, ~ <<` and `>>` operators which stand for AND, XOR, OR,
NOT, bit-flipping, left-shift and right-shift operators. Given below is truth
table for AND, XOR, and OR gate for quick reference.

In C, 0 represents `false` and any non-negative value represents `true`. Note
that both are keywords.

+----+----+------+
| p  | q  |p & q |
+====+====+======+
| 0  | 0  | 0    |
+----+----+------+
| 0  | 1  | 0    |
+----+----+------+
| 1  | 0  | 0    |
+----+----+------+
| 1  | 1  | 1    |
+----+----+------+

**AND Gate's Truth Table**

+----+----+------+
| p  | q  |p | q |
+====+====+======+
| 0  | 0  | 0    |
+----+----+------+
| 0  | 1  | 1    |
+----+----+------+
| 1  | 0  | 1    |
+----+----+------+
| 1  | 1  | 1    |
+----+----+------+

**OR Gate's Truth Table**

+----+----+------+
| p  | q  |p ^ q |
+====+====+======+
| 0  | 0  | 0    |
+----+----+------+
| 0  | 1  | 1    |
+----+----+------+
| 1  | 0  | 1    |
+----+----+------+
| 1  | 1  | 0    |
+----+----+------+

**EXOR(known as XOR as well) Gate's Truth Table**

As you may know there are two gates NAND and NOR which are universal gates
i.e. all other gates can be constructed by using only NAND or only NOR gates. C
does not have any operators but that can be easily constructed using NOT
operator(!) with AND and OR operator. NOT gate which is implemented by NOT
operator makes true to false and false to true. Given below are their truth
tables:

+----+----+--------+
| p  | q  | !(p&q) |
+====+====+========+
| 0  | 0  | 1      |
+----+----+--------+
| 0  | 1  | 1      |
+----+----+--------+
| 1  | 0  | 1      |
+----+----+--------+
| 1  | 1  | 0      |
+----+----+--------+

**NAND Gate's Truth Table**

+----+----+--------+
| p  | q  | !(p|q) |
+====+====+========+
| 0  | 0  | 1      |
+----+----+--------+
| 0  | 1  | 0      |
+----+----+--------+
| 1  | 0  | 0      |
+----+----+--------+
| 1  | 1  | 0      |
+----+----+--------+

**NOR Gate's Truth Table**

The shift operators shift bits to left or right. For example, 1<<2 means
:math:`1^2`. Similarly, 23>>3 means :math:`\frac{23}{2^3}`. How this works is
that say we have a number 1 represented by 8 bits then it would be
00000001 and when we say 1<< then bits are shifted to left and right side
is filled with 0 thus it becomes 00000010 or 2 which is as good as
multiplying by 2. If we say 1<<2 then bits are shifted to left by 2
position which means the sequence will become 00000100 i.e. which is
multiplication with 4.

Basics
======
We have discussed this briefly in chapter of "Structures and Unions". I would
like to present that here as well. If the bytes for any data type occupy
multiple bytes and bytes start with least significant byte on lower address
then it is a little endian machine and reverse ordering means it is a big
endian machine. Consider the 32-bit number ``0x04030201`` whose address is ``0xX``
then it would look like following in memory.

.. code-block:: text

   adr: 0xX 0xX+1 0xX+2 0xX+3
   mem: 0x4 0x3   0x2   0x1    // big endian
   mem: 0x1 0x2   0x3   0x4    // little endian

The difference becomes evident if you want to cast it to some lower type. Let
us say above value is ``V`` and we cast it to a ``char c`` as ``char c =
*(char*)&V;`` then for big endian machines it will be ``0x1`` and for little
endian machine it will be ``0x4``. Note that nowadays popular architecture like
x86 are little endian but network bytes are big endian thus to write portable
code people generally transfer bytes from host to network by calling functions
``hton``. Discussion of such functions is out of scope of this book but this
should give you a hint.

Shifts and division
===================
We have studied that right shift and division are same but that is not entirely
true. Consider the following code:

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     int i = 0xffffffff; // all bit one
     unsigned int ui = 0xffffffff; // again all bits one

     printf("%d %u\n", i>>1, ui>> 1);

	   return 0;
   }

we compile it to object code using the command ``$gcc -c test.c`` where
``test.c`` is the filename to which we saved the source. Now we see assembly
source using the command ``objdump -d -M gas -S test.o`` and we have the
following:

.. code-block:: assembly

   test.o:     file format elf64-x86-64


   Disassembly of section .text:

   0000000000000000 <;main>:
       0:	55                   	push   %rbp
       1:	48 89 e5             	mov    %rsp,%rbp
       4:	48 83 ec 10          	sub    $0x10,%rsp
       8:	c7 45 f8 ff ff ff ff 	movl   $0xffffffff,-0x8(%rbp)
       f:	c7 45 fc ff ff ff ff 	movl   $0xffffffff,-0x4(%rbp)
       16:	8b 45 fc             	mov    -0x4(%rbp),%eax
       19:	d1 e8                	shr    %eax
       1b:	89 c2                	mov    %eax,%edx
       1d:	8b 45 f8             	mov    -0x8(%rbp),%eax
       20:	d1 f8                	sar    %eax
       22:	89 c6                	mov    %eax,%esi
       24:	bf 00 00 00 00       	mov    $0x0,%edi
       29:	b8 00 00 00 00       	mov    $0x0,%eax
       2e:	e8 00 00 00 00       	callq  33 <main+0x33>
       33:	b8 00 00 00 00       	mov    $0x0,%eax
       38:	c9                   	leaveq 
       39:	c3                   	retq


