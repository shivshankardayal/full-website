Problems
********
This chapter contains all the problems at one place. Please try to solve these to
gain a better understanding of language. Note that these are not categorized in any
way but I have tried to maintain a certain order.

All programs should have function prototypes, global declarations, inline function.
constants and macros(never use these) radius as input find out its area and perimeter and print them.

1.   Try to find which of the following characters are invalid in a variable name
     and which can be used as the first character.

.. hlist::
   :columns: 5

   * i
   * c
   * a
   * ~
   * \*
   * $
   * 3
   * )
   * ^
   * _
   * ,

2.   Which of the following variable names are valid? Refer to previous problem to find
     the answer.

.. hlist::
   :columns: 5

   * counter
   * my_age
   * 1record
   * five$
   * %_of_principal
   * _application
   * __try
   * Alpha_value\_
   * int
   * integer
   * switch
   * keyword
   * volatile
   * printf

3.   Write a program which takes a number and prints it. If the number is 1 then
     it prints "One" if it is 2 then it prints "Two". Do it for up to 10.
4.   Given a radius as input find out its area and perimeter and print them.
5.   Write a program to print Pascal's triangle. Details of Pascal's triangle can
     be found at http://en.wikipedia.org/wiki/Pascal%27s_triangle
6.   Given a number in decimal compute its hex, octal and binary values and print them.
7.   Given a number in hex compute its decimal, octal and binary values and print them.
8.   Given an MxN matrix find its inverse and traspose.
9.   Given an LxM and an MxN matrix find their product.
10.  Given N find the total number of square on NxN chessboard.
11.  Given x in degress find Sine, Cosine and Tangent of x using Taylor's expansion upto
     an accuracy of 10 places after decimal.
12.  Take a female's name, age and color of dress as input. If she is below 16 and
     wearing blue then print "She is young and she is wearing blue dress" else print
     "She is grown up and wearing blue dress". If she is wearing any other color dress
     then print that color. Try to minimise number of comparisons. Also, try to avoid
     lots of if-else. Try this using switch.
13.  What would be appropriate data type for previous problem?
14.  Optimize the Fibinacci program given in the book.
15.  Take a string as input. The string can be of any length then print the string.
16.  Find out what is the problem with strcpy and strlen functions of standard library.
17.  Write a pseudo random generator using modular arithmetic.
18.  Consider a company which has lots of employees. An employee can have name, age,
     address line1, line2, salary, tax cut percentage and take home salary. As input any
     number of employees can be entered with all the data. Find the take home salary
     and display all data for all employees.
19.  Write signal handlers for kill, terminate and interrupt signals. When program
     receives those signals print the signal number and exit.
20.  Write a bignum data structure. This structure should be able to take any integral number
     only limited by memory. Perform addition, subtraction, multiplication and division.
     Also write modulus, nth root and nth power functions.
21.  Given a number upto trillions print its textual form.
22.  Implement a loop without using any of the loop constructs. Proved two methods. Note
     that procesor does not have any instructions for looping.
23.  Optimize an m*n iteration single loop for speed.
24.  Given two strings find out whether second is a substring of first.
25.  Given a string which has only words, numbers, spaces and final period split the string
     on the basis of spaces. Print all tokens. Print final token without period. Write
     two programs one using strtok library function and one without it.
26.  Given an array of integers print all duplicates.
27.  Given an array of integers find the max subarray sum.
28.  Given a complex number find its square root without using csqrt library function.
29.  Write a complex number class and implement all functions of complex.h header file.
30.  Implement strcpy, strlen, strcat, strcmp, strncpy, strncat and strncmp.
31.  Implement printf. For printing to screen use fprintf.
32.  Read a text file and print its statistics. Number of alphabets, frequency of alphabets,
     number of words, frequency of words and number of sentences.
33.  Append "C is cool." to a text file.
34.  Write a program which will have a function func. It can do anything or nothing. Depending
     on compilation command argument for -D switch the function should be included or discarded while
     compilation.
35.  Write a program where you malloc an integer pointer. Do not free it. Check
     your code with valgrind for possible memory leak.
36.  Generate a core of a program. You will need a SIGSEGV or other signals which generate
     a core.
37.  Use gdb to put a breakpoint, watch (variable, array, pointer, structure members),
     passing command line arguments, examine core, listing source, stepping into a function,
     stepping over and backtrace.
38.  Learn various functionalities of valgrind.
39.  Use clang's static analyzer for all programs written till now to check your code.
40.  Traverse a matrix in spiral form. Both going in and out.
41.  Given a two dimensional array with all values set to 0. You will be given n cells column and
     row number as input. Try to draw a straight line by making all values 1 to construct a
     polygon in best possible fashion. Hint: Use Bresenham's line drawing algorithm. You can find
     the details at http://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
42.  Write a program to parse XML and json files.
43.  Write a program which will give similar output when run against a filename.c as given by
     "gcc -E filename.c". Essentially you are supposed to write preprocessor.
44.  What is the problem with following code?
     
.. code-block:: c

   #include <stdio.h>

   int main()
   {
     float f = 0.0;

     for(int i=0; i<10; i++)
     {
       f += 0.1;
     }

     printf("%f\n", f);

     if(f == 1.0)
       printf("%f\n", f);

     return 0;
   }

45.  What is the problem with following code?

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     int i = 0;

     if(i == 0);
     {
       print("Hello there\n");
     }

     return 0;
   }

46.  What is the problem with following code?

.. code-block:: c

   #include <stdio.h>

   int main()
   {
     for(int i = 0; i < 10; i--)
       continue;

     for(int i = 0; i < 10; i--)
       i = 0;

     return 0;
   }

47.  Consider a sorted array. How would you search a value in it?
48.  Print reversed Pascal triangle.
49.  Print following without using loops.

.. code-block:: c

        *
       ***
      *****
     *******
      *****
       ***
        *

50.  Use two files as data. Store parity in third file. Then use one of the data
     files and parity to generate third.
51.  Find your local time then go back by 5 hrs 20 mins and 36 seconds and print
     that time.
52.  Take an year as input and generate its calendar.
53.  Given two dates as input in following format MMDDYYYY find the no. of days
     between them.
54.  Open a file, fseek it past end and see what happens to its file size.
55.  Implement tower of Hanoi using iterative and recursive methods. Details of
     tower of Hanoi can be found at http://en.wikipedia.org/wiki/Tower_of_Hanoi
56.  Compute value of :math:`\pi` using various formulas described at http://mathworld.wolfram.com/PiFormulas.html
     upto a given precision.
57.  Write a parser for BNF grammar and use it to validate input. Use C99's grammar
     as sample. Details of BNF grammar can be found at http://en.wikipedia.org/wiki/Backus%E2%80%93Naur_Form
     Hint: Look up Bison and Flex.
58.  Given an input find that in a given text file. Input can be any valid POSIX regex.

Please find more problems at SPOJ and Valladolid programming championship and practice them.
