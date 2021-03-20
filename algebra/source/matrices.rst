Matrices
********
Introduction
============
Matrices are an important concept which has numerous real life usage in various
mathematical branches. Also, it has huge importance in modern computer
science. It has its applications in computer graphics, AI, data structures
leading to various clever algorithms. Thus, it is of paramount importance that
the reader understand this particular concept in a sound manner.

Definition
==========
A matrix is a rectangular array of real or complex numbers. This rectangular
array is made up of rows and columns much like determinants. Let us consider a
matrix of :math:`m\times n` symbols, where :math:`m` is number of rows and
:math:`n` is the number of columns.

:math:`A = \begin{bmatrix}a_{11} & a_{12} & \ldots & a_{1n} \\ a_{21} & a_{22} &
\ldots & a_{2n} \\ \vdots & \vdots & \vdots & \vdots \\ a_{m1} & a_{m2} &
\ldots & a_{mn}\end{bmatrix}`

Such a matrix is called :math:`m` by :math:`n` matrix or a matrix of order
:math:`m\times n.` Sometimes a matrix is shown with parenthese instead of
square brackets as shown in last example.

:math:`A = \begin{pmatrix}a_{11} & a_{12} & \ldots & a_{1n} \\ a_{21} & a_{22} &
\ldots & a_{2n} \\ \vdots & \vdots & \vdots & \vdots \\ a_{m1} & a_{m2} &
\ldots & a_{mn}\end{pmatrix}`

A compact way to write a matrix is :math:`A = [a_{ij}], 1\leq i \leq m; 1\leq j
\leq n` or simply :math:`[a_{ij}]_{m\times n}`

:math:`a_{ij}` is an element located at :math:`i^{th}` row and :math:`j^{th}`
column and is called :math:`(i, j)^{th}` element of the matrix.

A matrix is just a rectangular array of numbers and unlike determinants it does
not have a value.

Equal Matrices
--------------
Two matrices are said to be equal if they have same order and each
corresponding element is equal.

Classification of Matrices
==========================
Row Matrix
----------
A matrix having a single row is called a row matrix. For example, :math:`[1,2
3, 4]`

Column Matrix
-------------
A matrix having a single column is called a coliuns matrix. For example,

:math:`\begin{bmatrix}1\\2\\3\\4\end{bmatrix}`

Square Matrix
-------------
If :math:`m = n` i.e number of rows and columns are equal then the matrix is
called a square matrix. For example,

:math:`\begin{bmatrix}1 & 2 & 3 \\ 4 & 5 & 6 \\ 7 & 8 & 9\end{bmatrix}` is a
:math:`3\times 3` matrix.

Diagonal Matrix
---------------
The diagonal from left-hand side upper corner to right-hand side lower corner
is known as leading diagonal or principal diagonal. In the example of square
matrix the elements of diagonal are :math:`1, 5, 9`

When a matrix has all elements as zero except those belonging to its diagonal
thne it is called a diagonal matrix. Equivalently, We can say that a matrix
:math:`[a_{ij}]_{m\times n}` is a diagonal matrix if :math:`a_{ij} =
0~\forall~i\neq j` For example, the square matrix example can be converted to a
diagonal matrix like below:

:math:`\begin{bmatrix}1 & 0 & 0 \\ 0 & 5 & 0 \\ 0 & 0 & 9\end{bmatrix}`

For an :math:`n\times n` matrix the diagonal elements are represented as
:math:`[d_1, d_2 \ldots, d_n]` This diagonal is also written with a *diag*
prefix like :math:`diag [d_1, d_2 \ldots, d_n]`

Scalar Matrix
-------------
A diagonal matrix whose elements of the diagonal are equal is called scalar
matrix. For example:

:math:`\begin{bmatrix}5 & 0 & 0 \\ 0 & 5 & 0 \\ 0 & 0 & 5\end{bmatrix}`

For a square matrix :math:`[a_{ij}]_{m\times n}` to be a scalar matrix

:math:`a_{ij} = \begin{cases}0, & i\neq j \\ m,& i = j\end{cases}~\forall~m\neq 0`

Unit Matrix or Identity Matrix
------------------------------
A diagonal matrix of order :math:`n,` which has all elements of its diagonal as
one, is called a unit or identity matrix. It is also denoted by :math:`I_n`

We can rewrite it in concise way like we did for scalar matrix as

:math:`a_{ij} = \begin{cases}0, & i\neq j \\ 1,& i = j\end{cases}`

Horizontal Matrix
-----------------
An :math:`m\times n` matrix is called a horizontal matrix if :math:`m < n.` For
example:

:math:`\begin{bmatrix}1 & 2 & 3\\4 & 5 & 6\end{bmatrix}`

Vertical Matrix
---------------
An :math:`m\times n` matrix is called a vertical matrix if :math:`m > n.` For
example:

:math:`\begin{bmatrix}1 & 2 \\ 3 & 4 \\ 5 & 6\end{bmatrix}`

Triangular Matrix
-----------------
A sqaure matrix in which all the elements below the diagonal are zero is called
upper triangular matrix. Conversely, a sqaure matrix in which all the elements
above the diagonal matrix is called lower triangular matrix. Thus, for a lower
triangular matrix :math:`a_{ij} = 0` when :math:`i < j` and for an upper
triangular matrix :math:`a_{ij} = 0` when :math:`i > j`

Clearly, a diagonal matrix is both lower and upper triangular matrix. A
triangular matrix is called strictly triangular if :math:`a_{ii} =
0~\forall~1\leq i \leq n`

Example of upper triangular matrix:

:math:`\begin{bmatrix}1 & 2 & 3\\0 & 5 & 6\\0 & 0 & 9\end{bmatrix}`

Example of lower triangular matrix:

:math:`\begin{bmatrix}1 & 0 & 0\\4 & 5 & 0\\7 & 8 & 9\end{bmatrix}`

Null or Zero Matrix
-------------------
If all elements of a matrix is zero then it is a null or zero matrix.

Trace of Matrix
---------------
If sum of the elements of a sqaure matrix :math:`A` lying along the principal
diagonal is called the trace of :math:`A,` i.e. :math:`tr(A).` Thus, if
:math:`A = [a_{ij}]_{n\times n},` then

:math:`tr(A) = \sum_{i = 1}^n a_{ii}`

Properties of Trace of a Matrix
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
To prove the second and third properties of a trace of matrix we will have to
use properties given further below on algebraic operations on a matrix.

If :math:`A = [a_{ii}]_{n\times n}` and :math:`B = [b_{ii}]_{n\times n}` and
:math:`\lambda` is a scalar then

i. :math:`tr(\lambda A) = \lambda tr(A)`
ii. :math:`tr(A + B) = tr(A) + tr(B)`
iii. :math:`tr(AB) = tr(BA)`

Determinant of a Matrix
-----------------------
Every square matrix :math:`A` has a determinant associated with it. This is
written as :math:`det(A)` or :math:`|A|` or :math:`\Delta`

Notes:

* If :math:`A_1, A_2, \ldots, A_n` are square matrices of the same order then
  :math:`|A_1A_2\ldots A_n| = |A_1||A_2|\ldots|A_n|`
* If :math:`k` is a scalar, then :math:`|kA| = k^n|A|,` where :math:`n` is the
  order of matrix.
* If :math:`A` and :math:`B` are two matrices of equal order then :math:`|AB| =
  |BA|` even though :math:`AB\neq BA`

Singular and Non-Singular Matrix
--------------------------------
A matrix is said to be non-singular if :math:`|A|\neq 0` and singular if
:math:`|A| = 0`

Algebra of Matrices
===================
Addition of Matrices
--------------------
If any two matrices are of same order then addition of those can be
performed. The result is a matrix of same order with corresponding elements
added. For example, consider two :math:`3\times 3` matrices as given below:

:math:`A = \begin{bmatrix}a_1 & a_2 & a_3\\a_4 & a_5 & a_6\\a_7 & a_8 &
a_9\end{bmatrix}, B = \begin{bmatrix}b_1 & b_2 & b_3\\b_4 & b_5 & b_6\\b_7 & b_8 &
b_9\end{bmatrix}`

then,

:math:`A + B = \begin{bmatrix}a_1 + b_1 & a_2 + b_2 & a_3 + b_3\\a_4 + b_4 &
a_5 + b_5 & a_6 + b_6\\a_7 + b_7 & a_8 + b_8 & a_9 + b_9\end{bmatrix}`

Subtraction of Matrices
-----------------------
The conditions are same for subtraction to happen i.e. order of the matrices
must be same. The result is like that of addition with resulting elements being
the difference of original matrices. For example,

:math:`A - B = \begin{bmatrix}a_1 - b_1 & a_2 - b_2 & a_3 - b_3\\a_4 - b_4 &
a_5 - b_5 & a_6 - b_6\\a_7 - b_7 & a_8 - b_8 & a_9 - b_9\end{bmatrix}`

where :math:`A` and :math:`B` are matrices from previous example.

Note:

* Addition of matrices is commutative i.e. :math:`A + B = B + A` as well as
  associative i.e. :math:`(A + B) + C = A + (B + C)`
* Cancellation laws are true in case of addition.
* The equation :math:`A + B = O` has a unique solution in the set of all
  :math:`m\times n` matrices(where :math:`O` is null matrix)
  
Scalar Multiplication
---------------------
The scalar multiplication of a matrix :math:`A` with a scalar :math:`\lambda`
is defined as :math:`\lambda A = [\lambda a_{ij}]`

Multiplication of two Matrices
------------------------------
The prerequisite for matrix multiplication is that number of columns of first
matrix must be equal to number of rows of second matrix. The product is defined
as

:math:`A_{m\times n}B_{n\times p} = \sum_{r = 1}^na_{mr}b_{rp}`

As you can clearly examine the resulting matrix will have :math:`m` rows and
:math:`p` columns.

Properties of Matrix Multiplication
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
* Commutative laws does not hold always for matrices
* If :math:`AB = BA,` then they are called commutative matrices
* If :math:`AB = -BA,` then they are called anti-commutative matrices
* Matrix multiplication is associative i.e. :math:`(AB)C = A(BC)`
  Proof of this has been left as an exercise.
* Matrix mulplication is distributive wrt addition and subtraction
  i.e. :math:`A(B\pm C) = AB \pm AC`

Transpose of a Matrix
---------------------
Let :math:`A` be any matrix then its transpose can be obtained by ecxchanging
rows and columns. It is denoted by :math:`A'` or :math:`A^T` and clearly, if
order of :math:`A` is :math:`m\times n` then :math:`A'` will have order of
:math:`n\times m`

Properties of Transpose Matrices
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
* :math:`(A + B)' = A' + B'`
* :math:`(A')' = A`
* :math:`(kA)' = kA'` where :math:`k` is a constant.
* :math:`(AB)' = B'A'`

Proofs of these properties are simple and have been left as an exercise.

Symmetric Matrix
----------------
A sqaure matrix :math:`A = [a_{ij}]` is called a symmetric matrix if
:math:`a_{ij} = a_{ji}~\forall~i,j`

We can also say thet a matrix is symmetric if and only if :math:`A = A'`

Skew Symmetric Matrix
---------------------
A square matrix :math:`A` is said to be a skew symmetric matrix if
:math:`a_{ij} = -a_{ji}~\forall i, j`

Clearly, if a matrix is skew symmetric then elements of its diagonal are all
zeros.

Orthogonal Matrix
-----------------
A matrix is said to be orthogonal if :math:`AA'=1`.

Notes:

* If :math:`A` is a square matrix then :math:`A + A'` is a symmetric matrix and
  :math:`A-A'` is a skew symmetric matrix.

  **Proof:**

  :math:`(A + A')' = A' + (A')' = A' + A`

  Hence, :math:`A + A'` is a symmetric matrix.

  :math:`(A - A')' = A' - A = -(A - A')`

  Hence, :math:`A- A'` is a skew symmetric matrix.

* Every square matrix can be shown as sum of a symetric matrix and a skew
  symmetric matrix.

  **Proof:**

  Let :math:`A` be any square matrix.

  :math:`\frac{1}{2}(A + A') + \frac{1}{2}(A - A') = A`

  Thus, the matrix :math:`A` is a sum of symmetrix matrix :math:`A + A'` and a
  skew symmetric matrix :math:`A - A'`

Adjoint of a Matrix
-------------------
Let :math:`A= [a_{ij}]` be a square matrix.

Let :math:`B = [A_{ij}]` where :math:`A_{ij}` is the cofactor of the element
:math:`a_{ij}` in the det. :math:`A`. The transpose :math:`B'` of the matrix
:math:`B` is called the adjoint of the matrix :math:`A` and is written by
:math:`adj. A.` For example,

Let :math:`A = \begin{bmatrix}1 & 2& 5\\2 & 3 & 4\\2& 0 & 5\end{bmatrix},` then
:math:`B = \begin{bmatrix}15 & -2 & -6\\-10 & -1 & 4\\-1 & 2 & -1\end{bmatrix}`

:math:`adj. A = B' = \begin{bmatrix}15& -10 & -1\\-2 & -1 & 2\\-6 & -4 &
-1\end{bmatrix}`

* :math:`A.adj(A) = adj(A).A = |A|I_n`

Inverse of a Matrix
-------------------
Following from above, inverse of a matrix is :math:`\frac{adj(A)}{|A|}`

Hermitian and Skew Hermitian Matrix
-----------------------------------
A sqaure matrix :math:`A = [a_{ij}]` is said to be a Hermitian matrix if
:math:`a_{ij} = \overline{a_{ij}}~\forall~i, j` i.e. :math:`A =
A^{\theta}`. For example,

:math:`\begin{bmatrix}a & b += ic \\ b - ic & d\end{bmatrix}` is a Hermitian
matrix.

Similarly, a sqaure matrix :math:`A = [a_{ij}]` is said to be a skew Hermitian
matrix if :math:`a_{ij} = \overline{a_{ji}}~\forall~i, j` i.e. :math:`A =
-A^{\theta}`. For example,

:math:`\begin{bmatrix}0 & -b + ic \\ b + ic & 0\end{bmatrix}` is a skew
Hermitian matrix.

Notes:

i. If :math:`A` is a hermitian matrix, then :math:`a_{ii} = \overline{a_{ii}}
   \Rightarrow a_{ii}` is real, :math:`\forall~i.` Thus, members of diagonal of
   a Hermitian matrix are all real.
ii. A Hermitian matrix over the set of real numbers is actually a real
    symmetric matrix.
iii. If :math:`A` is a skew Hermitian matrix, then :math:`a_{ii} =
     -\overline{(a_{ii})} \Rightarrow a_{ii} = 0` i.e. :math:`a_{ii}` must be
     purely imaginary or zero.
iv. A skew Hermitian matrix over the set of real numbers is acually a real
    skew-symmetric matrix.

Idempotent Matrix
-----------------
A square matrix :math:`A` is said to be idempotent if :math:`A^2 = A`
i.e. multiplication of the matrix with itself yields itself.

Involuntary Matrix
------------------
A sqaure matrix :math:`A` is said to be involuntary if :math:`A^2 = I`
i.e. multiplication of the matrix with itself yields an indetity matrix.

Nilpotent Matrix
----------------
For a positive integer :math:`i` if a square matrix satisfied the relationship
:math:`A^i = O` then it is called a nilpotent matrix. Such smallest integer is
called index of the nilpotent matrix.

Properties of adjoint and inverse matrices
==========================================
1. If :math:`A` is a sqaure matrix of order :math:`n,` then :math:`A(adj(A)) =
   |A|I_n = (adj(A))A`

   **Proof:** Let :math:`A= [a_{ij}],` and let :math:`C_{ij}` be a cofactor of
   :math:`a_{ij}` in :math:`A.` Then,

   :math:`(adj(A)) = C_{ji}~\forall~1\leq i, j\leq n.` Now,

   :math:`(A~adj(A)) = \sum_{r = 1}^n (A)_{ir}(adj(A))_{rj}`

   :math:`= \sum_{r = 1}^n a_{ir}C_{rj} = \begin{cases} |A|, & \text{if}~i = j
   \\ 0, & \text{if}~i \neq j\end{cases}`

   :math:`\Rightarrow = \begin{bmatrix} |A| & 0 & 0 & \ldots & 0 \\ 0 & |A| & 0
   \ldots & 0 \\ \vdots & \vdots & \vdots & \vdots & \vdots \\ 0 & 0 & 0 &
   \ldots & |A|\end{bmatrix}`

   :math:`= |A|I_n`

   Similarly, :math:`(adj(A) A)_{ij} = \sum_{r = 1}^n (adj(A))_{ir}A_{rj}`

   :math:`= \sum_{r = 1}^n C_{ri}a_{rj}= \begin{cases} |A|, & \text{if}~i = j
   \\ 0, & \text{if}~i \neq j\end{cases}`

2. Every invertible matrix possesses a unique matrix.

   **Proof:** Let :math:`A` be a sqaure matrix of order :math:`n\times n.` Let
   :math:`B` and :math:`C` be two inverses of :math:`A.` Then,

   :math:`AB = BA = I_n` and :math:`AC = CA = I_n`

   Now, :math:`AB = I_n\Rightarrow C(AB) = CI_n\Rightarrow (CA)B=CI_n\Rightarrow
   I_nB = CI_n`

   :math:`\Rightarrow B = C`

3. Reversal law: If :math:`A` and :math:`B` are invertible matrices of same oreder, then
   :math:`AB` is invertible and :math:`(AB)^{-1} = B^{-1}A^{-1}.` In general,
   if :math:`A,B, C, ...` are invertible matrices then :math:`(ABC\ldots)^n =
   \ldots C^{-1}B^{-1}A^{-1}`

   **Proof:** If the given matrices are invertible :math:`|A|\neq 0` and
   :math:`|B|\neq 0 \Rightarrow |A||B|\neq 0` Hence, :math:`AB` is an
   invertible matrix. Now,

   :math:`(AB)(B^{-1}A^{-1}) = A(BB^{-1})A^{-1}` [by associativity]

   :math:`= A(I_n)A^{-1} = AA^{-1} = I_n`

   Similarly, :math:`(B^{-1}A^{-1})(AB) = I_n`

4. If :math:`A` is an invertible matrix, then :math:`A'` is also invertible and
   :math:`(A')^{-1} = (A^{-1})'`

   **Proof:** :math:`A` is an invertible matrix :math:`\therefore |A| \neq 0`

   :math:`\Rightarrow |A'|\neq 0 [\because |A'| = |A|]`

   Hence, :math:`A'` is also invertible. Now,

   :math:`AA^{-1} = I_n = A^{-1}A`

   :math:`(AA^{-1})' = (A^{-1}A)'`

   :math:`(A^{-1})'A' = I_n = A'(A^{-1})'` [by reversal law for transpose]

   :math:`\Rightarrow (A')^{-1} = (A^{-1})'` [by definition for inverse]

5. If :math:`A` is a non-singular square matrix of order :math:`n,` then
   :math:`|adj A| = |A|^{n - 1}`

   **Proof:** We have :math:`A(adj(A)) = |A|I_n`

   :math:`A(adj(A)) = \begin{bmatrix}|A| & 0 & 0 & \ldots & 0 \\ 0 & |A| & 0 &
   \ldots & 0 \\ \vdots & \vdots & \vdots \\ 0 & 0 & 0 & \ldots &
   |A|\end{bmatrix}`

   :math:`|A(adj(A))| = |A|^n`

   :math:`|adj(A)| = |A|^{n - 1}`

6. Reversal law for adjoint: If :math:`A` and :math:`B` are non-singular
   sqaure matrices of the same order, then

   :math:`adj(AB) = adj(B)adj(A)` using :math:`(AB)^{-1} = B^{-1}A^{-1}`

7. If :math:`A` is an invertible square matrix, then :math:`adj(A') =
   (adj(a))'`

8. If :math:`A` is a sqaure non-singular matrix, then :math:`adj(adj(A)) = A^{n
   - 2}A`

   **Proof:** We know that :math:`B(adj(B)) = |B|I_n` for every sqaure matrix
   of order :math:`n.` Replacing :math:`B` by :math:`adj(A),` we get

   :math:`(adj(A))[adj(adj(A))] = |adj(A)|I_n = |A|^{n - 1}I_n`

   Multiplying both sides by :math:`A`

   :math:`(A~adj(A))[adj(adj(A))] = A\{|A|^{n - 1}I_n\}`

   :math:`|A|I_n (adj(adj(A))) = |A^{n - 1}|(AI_n)`

   :math:`adj(adj(A)) = |A^{n - 2}|A`

9. If :math:`A` is a non-singular matrix then :math:`|A^{-1}| = = |A|^{-1}`
   i.e. :math:`|A^{-1}| = \frac{I}{A}`

   **Proof:** Since :math:`|A|\neq 0, \therefore AA^{-1} = I`

   :math:`|AA^{-1}| = |A|\Rightarrow |A||A^{-1}| = 1`

10. Inverse of :math:`k^{th}` power of :math:`A` is :math:`k^{th}` power of the
    inverse of :math:`A`.

Solution of Simultaneous Linear Equations
=========================================
Consider the system of equations given below:

:math:`\begin{cases}a_{11}x_1 + a_{12}x_2 + \ldots + a_{1n} = b_1\\a_{21}x_1 +
a_{22}x_2 + \ldots + a_{2n} = b_2\\\vdots\\a_{n1}x_1 + a_{n2}x_2 + \ldots +
a_{nn} = b_n\end{cases}`

Let :math:`A = \begin{bmatrix}a_{11} & a_{12} & \ldots &a_{1n}\\a_{21} & a_{22}
& \ldots &a_{2n}\\\vdots & \vdots & \ldots & \vdots\\a_{n1} & a_{n2} & \ldots
&a_{nn}\end{bmatrix}, X= \begin{bmatrix}x_1\\x_2\\\vdots\\x_n\end{bmatrix}, B =
\begin{bmatrix}b_1 \\ b_2 \\ \ldots\\ b_n\end{bmatrix}`

The system of equations can be written as :math:`AX = B\Rightarrow X=A^{-1}B`

If :math:`|A|\neq 0,` the system of equations has only trivial solution and the
number of solutions is finite.

If :math:`|A|=0,` the system of equations has non-trivial solution and the
number of solutions is infintite.

If the number of equations is less than the number of unknonwns then it has
non-trivial solutions.

Elementary Operations/Transformations of a Matrix
=================================================
Following are elementary operations of a matrix:

i. The interchange of any two rows or columns.
ii. The multiplication of any row or column with a non-zero number.
iii. The addition to the elements of any row or columns the corresponding
     elements of any other row or column multiplied with any non-zero number.

Elementary operations are also called row or column operation.

Equivalent Matrices
-------------------
If a matrix :math:`B` can be obtained from a matrix :math:`A` by elementary
transformations, then they are called equivalent matrices and are written as
:math:`A\text{~} B`

Theorem 1
---------
Every elementary row or column transformation of :math:`m\times n` matrix(not
identiry matrix) can be obtained by pre-multiplcation or post-multiplication
with the corresponding elementary matrix obtained from the identity matrix
:math:`I_m(I_n)` by subjecting it to the same elementary row or column
transformation.
      
Theorem 2
---------
Let :math:`C = AB` be a product of two matrices. Any elementray row or column
transformation of :math:`AB` can be obained by subjecting the pre-factor
:math:`A` or post-factor :math:`B` to the same elementary row or column
transformation.

Method of Finding Inverse of a Matrix by Elementary Transformation
------------------------------------------------------------------
Let :math:`A` be a non-singular matrix of order :math:`n`. Then :math:`A` can
be reduced to the identity matrix :math:`I_n` by a sequence of elementary
transformations only. As we have discussed every elementary row transformation
of a matrix is equivalent top pre-multiplication by the corresponding
elementary matrix. Therefore, there exists elementary matrices :math:`E_1,
E_2,\ldots, E_k` such that

:math:`(E_1,E_2,\ldots, E_k)A = I_n`

:math:`(E_1,E_2,\ldots, E_k)AA^{-1} = I_nA^{-1}`

:math:`(E_1,E_2,\ldots, E_k)I_n = A^{-1}`
      
Echelon Form of a Matrix
========================
A matrix is said to be in echelon form if

i. Every row of :math:`A` which has all its elements :math:`0,` occurs below
   row which has a non-zero element.
ii. The first non-zero element in each non-zero row is :math:`1`
iii. The number of zeros before the first non-zero element in a row is less
     than the number of such zeros in the next row.

Rank of a Matrix
================
Let :math:`A` be a matrix of order :math:`m\times n.` If at least one of its
minors of order :math:`r` is different from zero and all minors of order
:math:`r + 1` are zero, then the number :math:`r` is called the rank of the
matrix :math:`A` and is denoted by :math:`\rho(A).`

Notes:

i. The rank of a zero matrix is zero and rank of an identity matrix of order
   :math:`n` is :math:`n`
ii. The rank of a non-singular matrix of order :math:`n` is :math:`n.`
iii. The rank of a matrix in echelon form is equal to the number of non-zero
     rows of the matrix.

Application of Matrices to Geometry or Computer Graphics
========================================================
As said earlier matrices are very useful to represent many operaion in computer
graphics or geometry. It will require some knowledge of coordinate geometry.

Reflection Matrix
-----------------
Consider a point :math:`P(x, y)` and its reflection :math:`Q(x_1, y_1)` along
x-axis.

.. tikz:: Reflection of a point along x-axis

   \draw[->] (-.5,0) -- (3,0);
   \draw[->] (0, -0.5) -- (0,3);

   \draw (2, 2) -- (2, -2);
   \draw (2, 2.2) node{$P(x, y)$};
   \draw (2, -2.2) node{$Q(x_1, y_1)$};
   \draw[dashed] (2, 2) -- (2, -2);
   \draw  (0, 3.2) node{$x$};
   \draw  (3.2, 0) node{$y$};

This may be written as :math:`x_1 = x + 0; y_1 = 0 - y`

This system of equation can be written in matrix form as

:math:`\begin{bmatrix}x_1\\y_1\end{bmatrix} = \begin{bmatrix}1 & 0 \\ 0 &
-1\end{bmatrix} \begin{bmatrix}x \\ y\end{bmatrix}`

Thus the matrix :math:`\begin{bmatrix}1 & 0 \\ 0 & -1\end{bmatrix}` is
reflection matrix of a point along x-axis. Similarly, :math:`\begin{bmatrix}-1
& 0 \\ 0 & 1\end{bmatrix}` is reflection matrix along y-axis.

Similarly, the reflection matrix through origin is :math:`\begin{bmatrix}-1
& 0 \\ 0 & -1\end{bmatrix}`

Similarly, reflection along the line :math:`y = x` is :math:`\begin{bmatrix}0 &
1 \\ 1 & 0\end{bmatrix}`


Similarly, reflection along the line :math:`y = x\tan\theta` is
:math:`\begin{bmatrix}\cos 2\theta & \sin 2\theta \\ \sin 2\theta & -\cos
2\theta\end{bmatrix}`

Rotation Through an Angle
-------------------------
The rotation matrix in such a form would be :math:`\begin{bmatrix}\cos\theta &
-\sin\theta \\ \sin\theta & \cos\theta\end{bmatrix}` for anti-clockwise
rotation.

