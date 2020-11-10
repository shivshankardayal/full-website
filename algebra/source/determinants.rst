Determinants
************
Let :math:`a, b, c, d` be any four numbers, real or complex, the symbol

.. math::
   \begin{vmatrix}
   a & b\\
   c & d\\
   \end{vmatrix}

denotes :math:`ad - bc` and is called a determinant of second order. :math:`a, b, c, d` are
called elements of the determinant and :math:`ad - bc` is called value of the determinant.

As you can see, the elements of a determinant are positioned in the form of a square in its
designation. The diagonal on which elements :math:`a` and :math:`d` lie is called the principal
or primary diagonal of the determinant and the diagonal which is formed on the line of :math:`b`
and :math:`c` is called the secondary diagonal.

A row is constituted by elements lying in the same horizontal line and a column is constituted
by elements lying in the same vertical line.

Clearly, determinant of second order has two rows and two columns and its value is equal to the
products of elements along primary diagonal minus the product of elements along the secondary
diagonal. Thus, by definition

.. math::
   \begin{vmatrix}
   2 & 4\\
   3 & 9\\
   \end{vmatrix} = 18 - 12 = 6

Let :math:`a_1, a_2, a_3, b_1, b_2, b_3, c_1, c_2, c_3` be any nine numbers, then the symbol

.. math::
   \begin{vmatrix}
   a_1 & a_2 & a_3\\
   b_1 & b_2 & b_3\\
   c_1 & c_2 & c_3\\
   \end{vmatrix}

is another way of saying

.. math::

   a_1\begin{vmatrix}
   b_2 & b_3\\
   c_2 & c_3\\
   \end{vmatrix}
   - a_2\begin{vmatrix}
     b_1 & b_3\\
     c_1 & c_3
   \end{vmatrix}
   + a_3\begin{vmatrix}
     b_1 & b_2\\
     c_1 & c_2
   \end{vmatrix}

i.e. :math:`a_1(b_2c_3 - b_3c_2)-a_2(b_1c_3-b_3c_1) + a_3(b_1c_2-b_2c_1)`

**Rule to put + or - before any element:** Find the sum of
number of rows and columns in which the considered element occus. If the sum is
even put a :math:`+` sign before the element and if the sum is odd, put a
:math:`-` sign before the element. Since :math:`a_1` occurs in first row and
first column whose sum is :math:`1 + 1 = 2` which is an even number, therefore
:math:`+` sign occurs for it. Since :math:`a_2` occurs in first row and second
column whose sum is :math:`1+ 2 = 3` which is an odd number, therefore :math:`-`
sign occurs before it.

We have expanded the determinant along first row in previous case. The value of
determinant does not change no matter which row or column we expand it along.

Expanding the determinant along second row, we get

.. math::

   \begin{vmatrix}
   a_1 & a_2 & a_3\\
   b_1 & b_2 & b_3\\
   c_1 & c_2 & c_3
   \end{vmatrix}
   = -b_1\begin{vmatrix}
   a_2 & a_3\\
   c_2 & c_3
   \end{vmatrix}
   + b_2\begin{vmatrix}
   a_1 & a_3\\
   c_1 & c_3
   \end{vmatrix}
   - b_3\begin{vmatrix}
   a_1 & a_2\\
   c_1 & c_2
   \end{vmatrix}

:math:`= -b_1(a_2c_3 - a_3c_2) + b_2(a_1c_3 - a_3c_1) - b_3(a_1c_2 - a_2c_1)`

:math:`= a_1(b_2c_3 - b_3c_2)-a_2(b_1c_3-b_3c_1) + a_3(b_1c_2-b_2c_1)`

Thus, we see that value of determinant remains unchanged irrespective of the
change of row and column against which it is expanded.

Usually, an element of a determinant is denoted by a letter with two suffices,
first one indicating the row and second one indicating the column in which
the element occcur. Thus, :math:`a_{ij}` element indicates that it has occurred
in ith row and jth column.

We also denote the rows by :math:`R_1, R_2, R_3` and so on. :math:`R_i` denotes
the ith row of determinant while :math:`R_j` denotes jth row. Columns are
denoted by :math:`C_, C_2, C_3` and so on. :math:`C_i` and :math:`C_j` denote
ith and jth column of determinant.

:math:`\Delta` is the usual symbol for a determinant. Another way of denoting
the determinant :math:`\begin{vmatrix}a_1&b_1&c_1\\a_2&b^2&c_2\\a_3&b_3&c_3
\end{vmatrix}` is (:math:`a_1b_2c_3`).

The expanded form of determinant has :math:`n!` terms where :math:`n` is the
number of rows or columns.

**Ex 1.** Find the value of the determinant

..  math::

    \Delta = \begin{vmatrix}
    1 & 2 & 4\\
    3 & 4 & 9\\
    2 & 1 & 6
    \end{vmatrix}

Expanding the determinant along the first row

.. math::

   \Delta = 1\begin{vmatrix}
   4 & 9\\
   1 & 6
   \end{vmatrix}
   -2\begin{vmatrix}
   3 & 9\\
   2 & 6
   \end{vmatrix}
   + 4\begin{vmatrix}
   3 & 4\\
   2 & 1
   \end{vmatrix}

Expanding the determinant along first row
:math:`= 1(24 -9) - 2(18 - 18) + 4(3 - 8) = -5`

**Ex 2.** Find the value of the determinant

.. math::

   \Delta = \begin{vmatrix}
   3 & 1 & 7\\
   5 & 0 & 2\\
   2 & 5 & 3
   \end{vmatrix}

Expanding the determinant along second row,

.. math::

   \Delta = -5\begin{vmatrix}
   1 & 7\\
   5 & 3
   \end{vmatrix}
   + 0\begin{vmatrix}
   3 & 7\\
   2 & 3
   \end{vmatrix}
   -2\begin{vmatrix}
   3 & 1\\
   2 & 5
   \end{vmatrix}

:math:`= -5(3 - 35) -2(15 -2) = 134`

Minors
======
Consider the determinant

.. math::

   \Delta = \begin{vmatrix}
   a_{11} & a_{12} & a_{13}\\
   a_{21} & a_{22} & a_{23}\\
   a_{31} & a_{31} & a_{33}
   \end{vmatrix}

If we leave the elements belonging to row and column of a particular element
:math:`a_{ij}` then we will obtain a second order determinant. The determinant
thus obtained is called minor of :math:`a_{ij}` and it is denoted by
:math:`M_{ij},` since there are :math:`9` elements in the above determinant
we will have :math:`9` minors.

For example, the minor of element :math:`a_{21}=\begin{vmatrix}a_{12} & a_{13}\\
a_{32} & a_{33}\end{vmatrix} = M_{21}`

The minor of element :math:`a_{32} = \begin{vmatrix}a_{11} & a_{13}\\a_{21} &
a_{23}\end{vmatrix} = M_{32}`

If we want to write the determinant in terms of minors then following is the
expression obtained if we expand it along first row

:math:`\Delta = (-1)^{1+1}a_{11}M_{11} + (-1)^{1 + 2}a_{12}M_{12} + (-1)^{1 + 3}
a_{13}M_{13}`

:math:`=a_{11}M_{11} - a_{12}M_{12} + a_{13}M_{13}`

Cofactors
=========
The minor :math:`M_{ij}` multiplied with :math:`(-1)^{i+j}` is known as cofactor
of the element :math:`a_{ij}` and is denoted like :math:`A_{ij}`.

Thus, we can say that, :math:`\Delta = a_{11}A_{11} + a_{12}A_{12} +
a_{13}A_{13}`

Theorems on Determinants
========================
**Theorem I.** The value of a determinant is not changed when rows are changed
into corresponsing columns.

**Proof:** Let :math:`\Delta = \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2\\ a_3 & b_3 &
c_3\end{vmatrix}`

Expanding the determinant along first row, :math:`\Delta = a_1(b_2c_3 -
b_3c_2) - b_1(a_2c_3 - a_3c_2) + c_1(a_2b_3 - a_3b_2)`

If :math:`\Delta^{\prime}` be the value of the determinant when rows of
determinant :math:`\Delta` are changed into corresponding columns then

:math:`\Delta^{\prime} = \begin{vmatrix}a_1&a_2&a_3\\b_2&b_2 & b_3\\ c_1 & c_2 &
c_3\end{vmatrix}`

:math:`= a_1(b_2c_3 - b_3c_2) - a_2(b_1c_3 - b_3c_1) + a_3(b_1c_2 - b_2c_1)`

:math:`= a_1(b_2c_3 - b_3c_2) - a_2b_1c_3 + a_2b_3c_1 + a_3b_1c_2 - a_3b_2c_1`

:math:`= a_1(b_2c_3 - b_3c_2) - b_1(a_2c_3 - a_3c_2) + c_1(a_2b_3 - a_3b_2)`

Thus, we see that :math:`\Delta = \Delta^{\prime}`

**Theorem II.** If any two rows or columns of a determinant are interchanged,
the sign of determinant is changed, but its value remains the same.

**Proof:** Let :math:`\Delta = \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2\\ a_3 & b_3 &
c_3\end{vmatrix},`

Expanding the determinant along first row, :math:`\Delta = a_1(b_2c_3 -
b_3c_2) - b_1(a_2c_3 - a_3c_2) + c_1(a_2b_3 - a_3b_2)`

Now :math:`\Delta^{\prime} = \begin{vmatrix}a_3 & b_3 & c_3\\a_2 & b_2 & c_2\\
a_1 & b_1 & c_1\end{vmatrix} [R_1 \leftrightarrow R_3]`

:math:`= a_3(b_2c_1 - b_1c_2) - b_3(a_2c_1 - a_1c_2) + c_3(a_2b_1 - a_1b_2)`

:math:`= a_3b_2c_1 - a_3b_1c_2 - b_3a_2c_2 + b_3a_1c_2 + c_3a_2b_1 - c_3a_1b_2`

:math:`= -a_1(b_2c_3 - b_3c_2) + b_1(a_2c_3 - a_3c_2) - c_1(a_2b_3 - a_3b_2)`

:math:`= -\Delta`

**Theroem III.** The value of a determinant is zero if any two rows or columns
are identical.

**Proof:** Let :math:`\Delta = \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2
\\ a_1 & b_1 & c_1\end{vmatrix}`

Then :math:`\Delta = \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2 \\ a_1 &
b_1 & c_1\end{vmatrix} = - \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2 \\
a_1 & b_1 & c_1\end{vmatrix} = -\Delta [R_1\leftrightarrow R_3]`

Thus, :math:`\Delta = -\Delta \Rightarrow 2\Delta = 0 \Rightarrow \Delta = 0`

**Theorem IV.** A common factor of all elements of any row(or of any column)
may be taken outside the sign of the determinant. In other owrds, if all the
elements of the same row(or the same column) are multiplies by a constant, then
the determinant becomes multiplied by that number.

**Proof:** Let :math:`\Delta = \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2
\\ a_3 & b_3 & c_3\end{vmatrix}`

Expanding the determinant along first row, :math:`\Delta = a_1(b_2c_3 -
b_3c_2) - b_1(a_2c_3 - a_3c_2) + c_1(a_2b_3 - a_3b_2)`

and :math:`\Delta^{\prime} = \begin{vmatrix}ma_1 & mb_1 & mc_1\\a_2 & b_2 & c_2
\\ a_3 & b_3 & c_3\end{vmatrix}`

:math:`= ma_1(b_2c_3 - b_3c_2) - mb_1(a_2c_3 - a_3c_2) + mc_1(a_2b_3 - a_3b_2)`

:math:`= m\Delta`

**Theorem V.** If every element of some row or column is the the sum of two
terms, then the determinant is equal to the sum of two determinants; one
containing only the first term in place of each term, the other only the second
term. The remaining elements of both the determinants are the same as in the
given determinant.

**Proof:** We have to prove that

:math:`\begin{vmatrix}a_1 + \alpha_1 & b_1 & c_1\\a_2 + \alpha_2 & b_2 & c_2\\
a_3 + \alpha_3 & b_3 & c_3\end{vmatrix} = \begin{vmatrix}a_1 & b_1 & c_1\\a_2 &
b_2 & c_2 \\ a_3 & b_3 & c_3\end{vmatrix} + \begin{vmatrix}\alpha_1 & b_1 & c_1\\\alpha_2 &
b_2 & c_2 \\ \alpha_3 & b_3 & c_3\end{vmatrix}`

Let :math:`\Delta = \begin{vmatrix}a_1 + \alpha_1 & b_1 & c_1\\a_2 + \alpha_2 &
b_2 & c_2\\ a_3 + \alpha_3 & b_3 & c_3\end{vmatrix}`

Then, :math:`\Delta = (a_1 + \alpha_1)\begin{vmatrix}b_2 & c_2 \\ b_3 &
c_3\end{vmatrix} - (a_2 + \alpha_2)\begin{vmatrix}b_1 & c_1\\b_3 &
c_3\end{vmatrix} + (a_3 + \alpha_3)\begin{vmatrix}b_1 & c_1\\b_2 &
c_2\end{vmatrix}`

:math:`= a_1\begin{vmatrix}b_2 & c_2 \\ b_3 & c_3\end{vmatrix} -
a_2\begin{vmatrix}b_1 & c_1\\b_3 & c_3\end{vmatrix} + a_3\begin{vmatrix}b_1 & c_1\\b_2 &
c_2\end{vmatrix} + \alpha_1\begin{vmatrix}b_2 & c_2 \\ b_3 & c_3\end{vmatrix} -
\alpha_2\begin{vmatrix}b_1 & c_1\\b_3 & c_3\end{vmatrix} + \alpha_3\begin{vmatrix}b_1 & c_1\\b_2 &
c_2\end{vmatrix}`

:math:`= \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2 \\ a_3 & b_3 &
c_3\end{vmatrix} + \begin{vmatrix}\alpha_1 & b_1 & c_1\\\alpha_2 &
b_2 & c_2 \\ \alpha_3 & b_3 & c_3\end{vmatrix}` 

Hence, proven.

**Theorem VI.** The value of a determinant does not change when any row or
column is multiplied by a number or an expression and is then added to or
subtracted from any other row or column.

**Proof:** We have to prove that

:math:`\begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2 \\ a_3 & b_3 &
c_3\end{vmatrix} = \begin{vmatrix}a_1 + mb_1 & b_1 & c_1\\a_2 + mb_2 & b_2 & c_2
\\ a_3 + mb_3 & b_3 & c_3\end{vmatrix}`

Let :math:`\Delta = \begin{vmatrix}a_1 + mb_1 & b_1 & c_1\\a_2 + mb_2 & b_2 & c_2
\\ a_3 + mb_3 & b_3 & c_3\end{vmatrix}`

then :math:`\Delta = \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2 \\ a_3 & b_3 &
c_3\end{vmatrix} + \begin{vmatrix}mb_1 & b_1 & c_1\\mb_2 & b_2 & c_2
\\mb_3 & b_3 & c_3\end{vmatrix}`

:math:`= \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2 \\ a_3 & b_3 &
c_3\end{vmatrix} + m \begin{vmatrix}b_1 & b_1 & c_1\\b_2 & b_2 & c_2 \\ b_3 & b_3 &
c_3\end{vmatrix}`

:math:`= \begin{vmatrix}a_1 & b_1 & c_1\\a_2 & b_2 & c_2 \\ a_3 & b_3 &
c_3\end{vmatrix} + m.0 = \Delta`

System of Linear Equations
==========================
Consistent Linear Equations
---------------------------
A system of linear equations is said to be consistent if it has at least one
solution.

**Example:** (i) System of equations :math:`x + y = 2` and :math:`2x + 2y = 7`
is inconsistent because it has no solution i.e. no values of :math:`x` and
:math:`y` exit which can satisfy the pair of equations. (ii) On the other hand
equations :math:`x + y = 2` and :math:`x - y = 0` has a solution :math:`x = 1,
y = 1` which satisfies the pair of equation making it a consistent system of
linear equations.

Cramer's Rule
=============
Cramer's rule is used to solve system of linear equations using determinants.
Consider two equations :math:`a_x + b_1y + c_1 = 0` and :math:`a_2x + b_2y + c_2
= 0` where :math:`\frac{a_1}{a_2}\neq \frac{b_1}{b_2}`

Solving this by cross multiplication, we have,

:math:`\frac{x}{b_1c_2 - b_2c_1} = \frac{-y}{a_1c_2 - a_2c_1} = \frac{1}{a_1b_2
- a_2b_1}`

:math:`\frac{x}{\begin{vmatrix}b_1 & c_1\\b_2 & c_2\end{vmatrix}} =
\frac{-y}{\begin{vmatrix}a_1& c_1\\a_2 & c_2\end{vmatrix}} =
\frac{1}{\begin{vmatrix}a_1&b_1\\a_2 & b_2\end{vmatrix}}`

System of Linear Equations in Three Variables
---------------------------------------------
Let the given system of linear equations given in :math:`x, y` and :math:`z` be

:math:`a_1x + b_1y + c_1z = d_1`

:math:`a_2x + b_2y + c_2z = d_2`

:math:`a_3x + b_3y + c_3z = d_3`

Let :math:`\Delta =
\begin{vmatrix}a_1&b_1&c_1\\a_2&b_2&c_2\\a_3&b_3&c_3\end{vmatrix}`

:math:`\Delta_1 =
\begin{vmatrix}d_1&b_1&c_1\\d_2&b_2&c_2\\d_3&b_3&c_3\end{vmatrix}`

:math:`\Delta_2 =
\begin{vmatrix}a_1&d_1&c_1\\a_2&d_2&c_2\\a_3&d_3&c_3\end{vmatrix}`

:math:`\Delta_2 =
\begin{vmatrix}a_1&b_1&d_1\\a_2&b_2&d_2\\a_3&b_3&d_3\end{vmatrix}`

Let :math:`\Delta \neq 0`

Now :math:`\Delta_1 =
\begin{vmatrix}d_1&b_1&c_1\\d_2&b_2&c_2\\d_3&b_3&c_3\end{vmatrix} =
\begin{vmatrix}a_1x + b_1y + c_1z& b_1 & c_1\\a_2x + b_2y + c_2z & b_2 & c_2
\\a_3x + b_3y + c_3z & b_3 & c_3\end{vmatrix}`

:math:`= \begin{vmatrix}a_1x & b_1 & c_1\\a_2x & b_2 & c_2 \\a_3x & b_3 &
c_3\end{vmatrix}[C_1\rightarrow C_1 - yC_2 -zC_3]`

:math:`= x\begin{vmatrix}a_1&b_1&c_1\\a_2&b_2&c_2\\a_3&b_3&c_3\end{vmatrix} =
x\Delta`

:math:`x = \frac{\Delta_1}{\Delta}`

Similalry, :math:`y = \frac{\Delta_2}{\Delta}, z = \frac{\Delta_3}{\Delta}`

This rule which gives the values of :math:`x, y` and :math:`z` is known as
Cramer's rule.

Nature of Solution of System of Linear Equations
------------------------------------------------
From previous section we have arrived at the fact that :math:`x\Delta =
\Delta_1, y\Delta = \Delta_2, z\Delta = \Delta_3`

**Case I.** When :math:`\Delta \neq 0`

In this case unique values of :math:`x, y, z` will be obtained and the system
of equations will have a unique solution.

**Case II.** When :math:`\Delta = 0`

**Sub Case I.** When at least one of :math:`\Delta_1, \Delta_2, \Delta_3` is
non-zero.

Let :math:`\Delta_1 \neq 0` then :math:`\Delta_1 = x\Delta` will not be
satisfied for any value of :math:`x` because :math:`\Delta = 0` and hence no
value is possible in this case. Same is the case for :math:`y` and :math:`z`.

Thus, no solution is feasible and system of equations become inconsistent.

**Sub Case II.** When :math:`\Delta_1 = \Delta_2 = \Delta_3 = 0`

In this case infinite number of solutions are possible.

Condition for Consistency of Three Linear Equations in Two Unknonws
-------------------------------------------------------------------
Consider a system of linear equations in :math:`x` and :math:`y` :math:`a_1x +
b_1y + c_1 = 0` :math:`a_2x + b_2y + c_2 = 0` and :math:`a_3x+ b_3y + c_3 = 0`

will be consistent if the values of :math:`x` and :math:`y` obtained from any
two equations satisfy the third equations.

Solving first two equations by Cramer's rule, we have

:math:`\frac{x}{\begin{vmatrix}b_1 & c_1\\b_2 & c_2\end{vmatrix}} =
\frac{-y}{\begin{vmatrix}a_1 & c_1\\a_2 & c_2\end{vmatrix}} =
\frac{1}{\begin{vmatrix}a_1 & b_1\\a_2 & b_2\end{vmatrix}} = k(\text{say})`

Substituting these in third equation we get,

:math:`k[a_3(b_1c_2 - b_2c_1) - b_3(a_1c_2 - a_2c_1) + c_3(a_1b_2 - a_2b_1)] =
0`

:math:`a_3(b_1c_2 - b_2c_1) - b_3(a_1c_2 - a_2c_1) + c_3(a_1b_2 - a_2b_1) = 0`

:math:`\begin{vmatrix}a_1&b_1&c_1\\a_2&b_2&c_2\\a_3&b_3&c_3\end{vmatrix} = 0`

This is the required condition for consistency of three linear equations in two
variables. If such a system of equations is consistent then number of solution
is one i.e. a unique solution exists.

System of Homogeneous Linear Equations
--------------------------------------
A system of linear equations is said to be homogeneous if the sum of powers of
the variables in each term is one.

Let the three homogeneous equations in three unknowns :math:`x, y, z` be

:math:`a_1x + b_1y + c_1z = 0`

:math:`a_2x + b_2y + c_2z = 0`

:math:`a_3x + b_3y + c_3z = 0`

Clearly, :math:`x = 0, y = 0, z= 0` is a solution of above system of
equations. This solution is called trivial solution and any other solution is
called non-triivial solution. Let the above system of equations has a
non-trivial solution.

Let :math:`\Delta =
\begin{vmatrix}a_1&b_1&c_1\\a_2&b_2&c_2\\a_3&b_3&c_3\end{vmatrix}`

From first two we have

:math:`\frac{x}{\begin{vmatrix}b_1 & c_1\\b_2 & c_2\end{vmatrix}} =
\frac{-y}{\begin{vmatrix}a_1 & c_1\\a_2 & c_2\end{vmatrix}} =
\frac{z}{\begin{vmatrix}a_1 & b_1\\a_2 & b_2\end{vmatrix}} = k(\text{say})`

Substituting these in third equation we get

:math:`k[a_3(b_1c_2 - b_2c_1) - b_3(a_1c_2 - a_2c_1) + c_3(a_1b_2 - a_2b_1)] =
0`

:math:`a_3(b_1c_2 - b_2c_1) - b_3(a_1c_2 - a_2c_1) + c_3(a_1b_2 - a_2b_1) = 0`

:math:`\begin{vmatrix}a_1&b_1&c_1\\a_2&b_2&c_2\\a_3&b_3&c_3\end{vmatrix} = 0`

This is the condition for system of equation to have non-trivial solutions.

Use of Determinants in Coordinate Geometry
==========================================
Are of a Triangle
-----------------
The area of a triangle whose vertices are :math:`(x_1, y_1), (x_2, y_2)` and
:math:`(x_3, y_3)` is

:math:`\frac{1}{2}\begin{vmatrix}x_1 & y_1 & 1\\x_2 & y_2 & 1\\x_3 & y_3 &
1\end{vmatrix}`
      
Condition of Concurrency of Three Lines
---------------------------------------
Three lines are said to be concurrent if they pass through a common point
i.e. they meet at a point.

Let :math:`a_1x + b_1y + c_1 = 0` :math:`a_2x + b_2y + c_2 = 0` and
:math:`a_3x+ b_3y + c_3 = 0` be three lines. 

These lines will be concurrent if
:math:`\begin{vmatrix}a_1&b_1&c_1\\a_2&b_2&c_2\\a_3&b_3&c_3\end{vmatrix} = 0`

Condition for General Equation in Second Degree to Represent a Pair of Straight Lines
-------------------------------------------------------------------------------------
The general second degree equation :math:`ax^2 + 2hxy + by^2 + 2gx + 2fy + c =
0` represent a pair of straight lines if

:math:`\begin{vmatrix}a & h & g\\h & b & f\\g & f & c\end{vmatrix} = 0`

Product of Two Determinants
===========================
Let :math:`\Delta_1 = \begin{vmatrix}a_1 & a_2 & a_3\\b_1 & b_2 & b_3\\c_1 &
c_2 & c_3\end{vmatrix}` and :math:`\Delta_2 = \begin{vmatrix}x_1 & x_2 &
x_3\\y_1 & y_2 & y_3\\z_1 & z_2 & z_3\end{vmatrix}` then
:math:`\Delta_1\Delta_2` is defined as

:math:`\Delta_1\Delta_2 = \begin{vmatrix}a_1x_1 + a_2x_2 + a_3x_3 & a_1y_1 +
a_2y_2 + a_3y_3 & a_1z_1 + a_2z_2 + a_3z_3\\b_1x_1 + b_2x_2 + b_3x_3 & b_1y_1 +
b_2y_2 + b_3y_3 & b_1z_1 + b_2z_2 + b_3z_3 \\ c_1x_1 + c_2x_2 + c_3x_3 &
c_1y_1 + c_2y_2 + c_3y_3 & c_1z_1 + c_2z_2 + c_3z_3\end{vmatrix}`

An Important Result
===================
If :math:`\Delta = \begin{vmatrix}a_1 & a_2 & a_3\\b_1 & b_2 & b_3\\c_1 &
c_2 & c_3\end{vmatrix}` then :math:`\begin{vmatrix}A_1 & A_2 & A_3\\B_1 & B_2 &
B_3\\C_1 & C_2 & C_3\end{vmatrix} = \Delta^2`

where capital letters denote the cofactors of corresponding small letters in
:math:`\Delta` i.e. :math:`A_i =` cofactor of :math:`a_i, B_i =` cofactor of
:math:`b_i` and :math:`C_i =` cofactor of :math:`c_i` in the determinant
:math:`\Delta`

We know that,

:math:`a_1A_1 + a_2A_2 + a_3A_3 = \Delta,` :math:`b_1B_1 + b_2B_2 + b_3C_3 =
\Delta,` :math:`c_1C_1 + c_2C_2 + c_3C_3 = \Delta` and :math:`a_1B_1 + a_2B_2 +
a_3B_3 = 0,` :math:`b_1A_1 + b_2A_2 + b_3A_3 = 0,` :math:`a_1C_1 + a_2C_2 +
a_3C_3 = 0,` :math:`c_1A_1 + c_2A_2 + c_3A_3 = 0,` :math:`b_1C_1 + b_2C_2 +
b_3C_3 = 0,` :math:`c_1B_1 + c_2B_2 + c_3B_3 = 0`

Let :math:`\Delta_1 = \begin{vmatrix}A_1 & A_2 & A_3\\B_1 & B_2 &
B_3\\C_1 & C_2 & C_3\end{vmatrix}`

Now, :math:`\Delta\Delta_1 = \begin{vmatrix}a_1 & a_2 & a_3\\b_1 & b_2 &
b_3\\c_1 & c_2 & c_3\end{vmatrix}\begin{vmatrix}A_1 & A_2 & A_3\\B_1 & B_2 &
B_3\\C_1 & C_2 & C_3\end{vmatrix}`

:math:`= \begin{vmatrix}a_1A_1 + a_2A_2 + a_3A_3 & a_1B_1 + a_2B_2 + a_3B_3 &
a_1C_1 + a_2C_2 + a_3C_3\\b_1A_1 + b_2A_2 + b_3A_3 & b_1B_1 + b_2B_2 + b_3C_3 &
b_1C_1 + b_2C_2 + b_3C_3\\c_1A_1 + c_2A_2 + c_3A_3 & c_1B_1 + c_2B_2 + c_3B_3 &
c_1C_1 + c_2C_2 + c_3C_3\end{vmatrix}`

:math:`= \begin{vmatrix}\Delta & 0 & 0\\0 & \Delta & 0\\0 & 0 &
\Delta\end{vmatrix}`

:math:`\Delta\Delta_1= \Delta^3`

:math:`\Delta_1 = \Delta^2`

Differential Coefficient of Determinant
=======================================
Let :math:`y = \begin{vmatrix}f_1(x) & f_2(x) & f_3(x)]\\g_1(x) & g_2(x) &
g_3(x)\\h_1(x) & h_2(x) & h_3(x)\end{vmatrix}` where :math:`f_i(x), g_i(x),
h_i(x), i= 1, 2, 3` are differentiable functions of :math:`x.`

Now, :math:`y = f_1(x)[g_2(x)h_3(x) - g_3(x)h_2(x)] - f_2(x)[g_1(x)h_3(x) -
g_3(x)h_1(x)] +` :math:`f_3(x)[g_1(x)h_2(x) - g_2(x)h_1(x)]`

:math:`\therefore \frac{dy}{dx} = f_1^{\prime}(x)[g_2(x)h_3(x) -
g_3(x)h_2(x)] + f_1(x)[g_2^{\prime}(x)h_3(x) - g_3^{\prime}(x)h_2(x)` +
:math:`g_2(x)h_3^{\prime}(x) - g_3(x)h_2^{\prime}(x)]` +
:math:`-f_2^{\prime}(x)[g_1(x)h_3(x) - g_3(x)h_1(x)]` +
:math:`-f_2(x)[g_1^{\prime}(x)h_3(x) - g_1(x)h_3^{\prime}(x)` +
:math:`g_1(x)h_3^{\prime}(x) - g_3(x)h_3^{\prime}(x)]` +
:math:`f_3^{\prime}(x)[g_1(x)h_2(x) - g_2(x)h_1(x)]` +
:math:`f_3(x)[g_1^{\prime}(x)h_2(x) - g_2^{\prime}(x)h_1(x)` +
:math:`g_1(x)h_2^{\prime}(x) - g_2(x)h_1^{\prime}(x)]`

:math:`= \begin{vmatrix}f_1^{\prime}(x) & f_2^{\prime}(x) &
f_1^{\prime}(x)\\g_1(x) & g_2(x) & g_3(x)\\h_1(x) & h_2(x) &
h_3(x)\end{vmatrix} + \begin{vmatrix}f_1(x) & f_2(x) & f_3(x)\\g_1^{\prime}(x)
& g_2^{\prime}(x) & g_3^{\prime}(x) \\h_1(x) & h_2(x) & h_3(x) \end{vmatrix} +
\begin{vmatrix}f_(x) & f_2(x) & f_3(x)\\g_1(x) & g_2(x) &
g_3(x)\\h_1^{\prime}(x) & h_2^{\prime}(x) & h_3^{\prime}(x)\end{vmatrix}`
