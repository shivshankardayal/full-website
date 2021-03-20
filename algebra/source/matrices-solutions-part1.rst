Matrices Solutions Part 1
*************************
1. Matrices having :math:`12` elements can have order of the form
   :math:`1\times 12, 12\times 1, 2\times 6, 6\times 2, 3\times 4` and
   :math:`4\times 3.` Thus, there can be six such matrices.
2. :math:`a_{11} = 2*1 - 3*1 = -1, a_{12} = 2*1 - 3*2 = -4, a_{13} = 2*1 - 3*3
   = -7`

   :math:`a_{21} = 2*2 - 3*1 = 1, a_{22} = 2*2 - 3*2 = -2, a_{23} = 2*2 - 3*3
   = -5`

   :math:`a_{31} = 2*3 - 3*1 = 3, a_{32} = 2*3 - 3*2 = 0, a_{33} = 2*3 - 3*3
   = -3`

   Thus, :math:`A = \begin{bmatrix} -1 & -4 & -7 \\ 1 & -2 & -5 \\ 3 & 0 & -3
   \end{bmatrix}`
3. :math:`A + B \begin{bmatrix}a - a & b + b \\ -b -b & a - a\end{bmatrix}`

   :math:`= \begin{bmatrix}0 & 2b \\ -2b & 0\end{bmatrix}`
4. :math:`2X = \begin{bmatrix}1 & 0\\-3 & 2\end{bmatrix} - \begin{bmatrix}3 &
   2\\1 & 4\end{bmatrix}`

   :math:`2X = \begin{bmatrix}-2 & -2 \\ -4 & -2\end{bmatrix}`

   :math:`X = \begin{bmatrix}-1 & -1 \\ -2 & -1\end{bmatrix}`
5. :math:`x^2 - 4x = -3 \Rightarrow x = 1,3`

   :math:`x^2 = 1\Rightarrow x = \pm 1`

   :math:`x^2 = -x + 2\Rightarrow x = -2, 1`

   :math:`x^3 = 1\Rightarrow x =1, \omega, \omega^2`

   Common value of :math:`x` is :math:`1` which satisfies all equations. Thus,
   :math:`x = 1`
6. :math:`x + 3 = 0 \Rightarrow x = -3; 2y + x = -7\Rightarrow y = -2`

   :math:`z - 1 = 3\Rightarrow z = 4; 4a - 6 = 2a \Rightarrow a = 3`
7. :math:`4A - 3B = 4\begin{bmatrix}1 & 2 & 3\\-1 & 0 & 2\\1 & -3 &
   1\end{bmatrix} - 3\begin{bmatrix}4 & 5 & 6\\ -1 & 0 & 1\\ 2 & 1 & 2
   \end{bmatrix}`

   :math:`= \begin{bmatrix}4 & 8 & 12 \\ -4 & 0 & 8 \\ 4 & -12 & 4
   \end{bmatrix} - \begin{bmatrix}12 & 15 & 18 \\ -3 & 0 & 3 \\ 6 & 3 &
   6\end{bmatrix}`

   :math:`= \begin{bmatrix}-8 & -7 & -6 \\ -1 & 0 & 5 \\ -2 & -15 &
   -2\end{bmatrix}`
8. :math:`A` is :math:`2\times 3` matrix and :math:`B` is :math:`3\times 2`
   matrix. Therefore, :math:`AB` is defined and it will be a :math:`2\times 2`
   matrix.

   :math:`AB = \begin{bmatrix}2 - 8 + 6 & 3 -10 + 3 \\ -8 + 8 + 10 & -12 + 10 +
   5\end{bmatrix} = \begin{bmatrix}0 & -4 \\ 10 & 3\end{bmatrix}`

   Similarly, :math:`BA` is defined and will be a :math:`3\times 3` matrix.

   :math:`BA = \begin{bmatrix} 2 - 12 & -4 + 6 & 6 + 15 \\ 4 - 20 & -8 + 10 &
   12 + 25 \\ 2 - 4 & -4 + 2 & 6 + 5\end{bmatrix}`

   :math:`= \begin{bmatrix}-10 & 2 & 21 \\ -16 & 2 & 37 \\ -2 & -2 & 11
   \end{bmatrix}`

   Clearly, :math:`AB \neq BA`
9. :math:`BC = \begin{bmatrix}ax + hy + gz \\ hx + by + fz \\ gx + yf +
   zc\end{bmatrix}`

   :math:`ABC = \begin{bmatrix}x(ax + hy + gz) + y(hx + by + fz) + z(gx + yf +
   zc)\end{bmatrix}`

   :math:`= \begin{bmatrix}ax^2 + by^2 + cz^2 + 2hxy + 2gzx + 2fyz\end{bmatrix}`
10. :math:`A' = \begin{bmatrix}1& 0 & 2 \\ 2 & 5 & 4 \\ 3 & 0 & 3\end{bmatrix}`

    Let :math:`B` be the matrix whose elements are cofactors of the
    corresponding elements of :math:`A.` Then :math:`B = \begin{bmatrix} 15 & 0
    & -10 \\ 6 & -3 & 0 \\ -15 & 0 & 5\end{bmatrix}`

    :math:`adj(A) = B' = \begin{bmatrix}15 & 6 & -15 \\ 0 & -3 & 0 \\ -10 & 0 &
    5\end{bmatrix}`
11. Let :math:`B` be the matrix whose elements are cofactors of the
    corresponding elements of :math:`A.` Then

    :math:`B = \begin{bmatrix}-1 & 8 & -5 \\ 1 & -6 & 3 \\ -1 & 2 &
    -1\end{bmatrix} \therefore adj(A) = B' = \begin{bmatrix}-1 & 1 & -1 \\ 8 & -6
    & 2 \\ -5 & 3 & -1\end{bmatrix}`

    :math:`|A| = \begin{vmatrix}0 & 1 & 2 \\ 1 & 2 & 3 \\ 3 & 1 &
    1\end{vmatrix} = 0(-1) + 1.8 + 2(-5) = -2`

    :math:`A^{-1} = \frac{ajd(A)}{|A|} = \begin{bmatrix}\frac{1}{2} &
    -\frac{1}{2} & \frac{1}{2} \\ -4 & 3 & -1 \\ \frac{5}{2} & -\frac{3}{2} &
    \frac{1}{2} \end{bmatrix}`
12. Let :math:`B` be the matrix whose elements are cofactors of the
    corresponding elements of :math:`A.` Then

    :math:`B = \begin{bmatrix}2 & -3 & 5 \\ 3 & 5 & -3 \\ -13 & 9 &
    -1\end{bmatrix} \therefore adj(A) = B' = \begin{bmatrix}2 & 3 & -13 \\ -3 &
    6 & 9 \\ 5 & -3 & -1\end{bmatrix}`

    :math:`|A| = \begin{vmatrix}1 & 2 & 5\\2 & 3 & 1\\-1 & 1 & 1\end{vmatrix} =
    1.2 + 2(-3) + 5.5 = 21`

    :math:`\therefore A^{-1} = \frac{adj(A)}{|A|} = \begin{bmatrix}\frac{2}{21}
    & \frac{3}{21} & -\frac{13}{21} \\ -\frac{3}{21} & \frac{6}{21} &
    \frac{9}{21} \\ \frac{5}{21} & -\frac{3}{21} & -\frac{1}{21}\end{bmatrix}`

    :math:`A^{-1}A = \begin{bmatrix}\frac{2 + 6 + 13}{21} & \frac{4 + 9 -
    13}{21} & \frac{10 + 3 - 13}{21} \\ \frac{-3 + 12 - 9}{21} & \frac{-6 +
    18 + 9}{21} & \frac{-15 + 6 + 9}{21} \\ \frac{5 - 6 + 1}{21} & \frac{10 -9
    -1}{21} & \frac{25 - 3 - 1}{21}\end{bmatrix}`

    :math:`= \begin{bmatrix}1 & 0 & 0 \\ 0 & 1& 0 \\ 0 & 0 & 1\end{bmatrix}`
13. :math:`A^2 = \begin{bmatrix}9 & 8 & 8 \\ 8 &9 & 8 \\ 8 & 8 &
    9\end{bmatrix}`

    :math:`A^2 - 4A - 5I = \begin{bmatrix}9 & 8 & 8 \\ 8 &9 & 8 \\ 8 & 8 & 9
    \end{bmatrix} - \begin{bmatrix}4 & 8 & 8 \\ 8 & 4 & 8 \\ 8 & 8 &
    4\end{bmatrix} - \begin{bmatrix}5 & 0 & 0 \\ 0 & 5 & 0 \\ 0 & 0 & 5
    \end{bmatrix}`

    :math:`= \begin{bmatrix}0 & 0 & 0 \\ 0 & 0 & 0 \\ 0 & 0 & 0\end{bmatrix} =
    O` where :math:`O` is zero matrix of third order.


    :math:`A^2-4A-5I = O\Rightarrow A^{-1}A^2 - 4A^{-1}A - 5IA^{-1} = O`

    :math:`IA - 4I - 5A^{-1} = O`

    :math:`5A^{-1}  = A - 4I \Rightarrow A^{-1} = \frac{1}{5}\begin{bmatrix} -3
    & 2 & 2 \\ 2 & -3 & 2 \\ 2 & 2 & -3\end{bmatrix}`
14. Let :math:`A = \begin{bmatrix}5 & 3 & 1 \\ 2 & 1 & 3 \\ 1 & 2 & 4
    \end{bmatrix}, X = \begin{bmatrix}x \\ y \\ z\end{bmatrix}` and :math:`B =
    \begin{bmatrix}16 \\19 \\25\end{bmatrix}`

    :math:`|A| = 5(4 - 6) -3(8 - 3) + 1(4 - 1) = -22\neq 0`

    :math:`X = A^{-1}B`

    Let :math:`C` be the matrix whose elements are cofactors of the
    corresponding elements of :math:`A.` Then

    :math:`C = \begin{bmatrix}-2 & -5 & 3 \\ -10 & 19 & -7 \\ 8 & -13 & -1
    \end{bmatrix}`

    :math:`adj(A) = C' = \begin{bmatrix}-2 & -10 & 8 \\ -5 & 19 & -13 \\ 3 & -7
    & -1\end{bmatrix}`

    :math:`A^{-1} = \frac{adj(A)}{|A|}`

    :math:`\therefore X = A^{-1}B = \begin{bmatrix}\frac{2}{22} & \frac{10}{22}
    & -\frac{8}{22} \\ \frac{5}{22} & -\frac{19}{22} & \frac{13}{22} \\
    -\frac{3}{22} & \frac{7}{22} & \frac{1}{22}\end{bmatrix} \begin{bmatrix}16
    \\ 19 \\ 25\end{bmatrix}`

    :math:`\begin{bmatrix}x \\ y \\ z\end{bmatrix} = \begin{bmatrix}1 \\ 2 \\
    5\end{bmatrix}`

    :math:`\therefore, x =1, y = 2, z = 5`
15. :math:`AB = \begin{bmatrix}-5 & 1 & 3\\7 & 1 & -5\\1 & -1 & 1
    \end{bmatrix}\begin{bmatrix}1 & 1 & 2\\ 3 & 2 & 1\\ 2 & 1 & 3\end{bmatrix}`

    :math:`= \begin{bmatrix}4 & 0 & 0\\ 0 & 4 & 0 \\ 0 & 0 & 4\end{bmatrix} =
    4I_3`

    The given system of equations in matrix form is :math:`BX = C`

    where :math:`X = \begin{bmatrix}x\\y\\z\end{bmatrix}` and :math:`C =
    \begin{bmatrix}1\\7\\2\end{bmatrix}`
    
    We obtain :math:`X = B^{-1}C` by multiplying above equation with
    :math:`B^{-1}` and :math:`BB^{-1} = I`

    :math:`AB= 4I+_3\Rightarrow B^{-1} = \frac{A}{4}`

    Now solving :math:`x = 2 , y = 1, z = -1`
16. :math:`x + y = 3; x - y = 7` Adding the two equatitons :math:`2x =
    10\rightarrow x = 5`

    Substituting value of :math:`x` in first equation :math:`y = -2`
17. :math:`x - y = -1; 2x + x_1 = 5;2x - y = 0; 3x + y_1 = 13`

    Adding first equation from third equation, we have :math:`x = 1`

    Substituting this in second equation we obtain :math:`x_1 = 3`

    From third equation, we get :math:`y = 2`

    From fourth equation, we get :math:`y_1 = 10`

    :math:`PQ = \sqrt{(x - x_1)^2 + (y - y_1)^2} = \sqrt{2^2 + 8^2} =
    2\sqrt{17}`

18. Adding the two equations we get :math:`2X = \begin{bmatrix}10 & 0 \\ 2 &
    8\end{bmatrix}`

    :math:`X = \begin{bmatrix}5 & 0 \\ 1 & 4\end{bmatrix}`

    Subtracting second equation from first :math:`2Y = \begin{bmatrix}4 & 0 \\
    2 & 2\end{bmatrix}`

    :math:`Y = \begin{bmatrix}2 & 0 \\ 1 & 1\end{bmatrix}`
19. :math:`C = B - A \therefore C = \begin{bmatrix}2 & -3 & 5 \\ -1 & 2 & 3 \\
    1 & 1 & 2\end{bmatrix}`
20. :math:`X = 2A + 3B - C\Rightarrow X = \begin{bmatrix}8 & -5 & -9 \\ -10 & 6
    & 4\end{bmatrix}`
21. :math:`A -2B + 3C = \begin{bmatrix}-10 & -14 & -6 \\ -2 & 6 & 9 \\ -6 & -11
    & 3\end{bmatrix}`
22. :math:`P(x).P(y) = \begin{bmatrix}\cos x & \sin x \\ -\sin x & \cos
    x\end{bmatrix} \begin{bmatrix}\cos y & \sin y \\ -\sin y & \cos
    y\end{bmatrix}`

    :math:`= \begin{bmatrix}\cos x\cos y -\sin x\sin y & \cos x \sin y + \sin x
    \cos y \\ -\sin x \cos y - \cos x \sin y & -\sin x \sin y + \cos x \cos y
    \end{bmatrix}`

    :math:`= \begin{bmatrix}\cos(x + y) & \sin(x + y) \\ -\sin(x + y) &
    \cos(x + y)\end{bmatrix} = P(x + y)`

    To prove that it is also equal to :math:`P(y).P(x)` has been left as an
    exercise.
23. :math:`A^2 = \begin{bmatrix}1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 &
    1\end{bmatrix} = I_3`
24. :math:`A^2 = \begin{bmatrix}-1 * -1 + 1 * 3 + -1 * 5 & -1 * 1 + 1 * -3 + -1
    * -5 & -1 * -1 + 1 * 3 + -1 * 5 \\3 * -1 + -3 * 3 + 3 * 5 & 3 *
    1 + -3 * -3 + 3 * -5 & 3 * -1 + -3 * 3 + 3 * 5 \\ 5 * -1 + -5 * 3 + 5 * 5
    & 5 * 1 + -5 * -3 + 5 * -5 & 5 * -1 + -5 * 3 + 5 * 5\end{bmatrix}`

    :math:`= \begin{bmatrix}-1 & 1 & -1 \\ 3 & -3 & 3 \\ 5 & -5 &
    5\end{bmatrix}`

    :math:`B^2 = \begin{bmatrix}0 * 0 + 4 * 1 + 3 * -1 & 0 * 4 + 4 * -3 + 3 * 4
    & 0 * 3 + 4 * -3 + 3 * 4 \\ 1 * 0 + -3 * 1 + -3 * -1 & 1 * 4 + -3 * -3 + -3
    * 4 & 1 * 3 + -3 * -3 + -3 * 4 \\ -1 * 0 + 4 * 1 + 4 * -1 & -1 * 4 + 4 * -3
    + 4 * 4 & -1 * 3 + 4 * -3 + 4 * 4\end{bmatrix}`

    :math:`= \begin{bmatrix}1 * 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1\end{bmatrix} =
    I_3`

    :math:`A^2B^2 = A^2` because :math:`B^2` is an identity matrix of order
    :math:`3`
25. :math:`AB = \begin{bmatrix} 2 * 1 + 3 * -1 + 4 * 0 & 2 * 3 + 3 * 2 + 4 * 0
    & 2 * 0 + 3 * 1 + 4 * 2 \\ 1 * 1 + 2 * -1 + 3 * 0 & 1 * 3 + 2 * 2 + 3 * 0
    & 1 * 0 + 2 * 1 + 3 * 2 \\ -1 * 1 + 1 * -1 + 2 * 0 & -1 * 3 + 1 * 2 + 2 * 0
    & -1 * 0 + 1 * 1 + 2 * 2\end{bmatrix}`

    :math:`= \begin{bmatrix}-1 & 12 & 11 \\ -1 & 7 & 8 \\ -2 & -1 &
    5\end{bmatrix}`

    :math:`BA = \begin{bmatrix}1 * 2 + 3 * 1 + 0 * -1 & 1 * 3 +  3 * 2 * 0 * 1
    & 1 * 4 + 3 * 3 + 0 * 2 \\ -1 * 2 + 2 * 1 + 1 * -1 & -1 * 3 +  2 * 2 + 1 *
    1 & -1 * 4 + 2 * 3 + 1 * 2 \\ 0 * 2 + 0 * 1 + 2 * -1 & 0 * 3 + 0 * 4 + 2 *
    1 & 0 * 4 + 0 * 3 + 2 * 2\end{bmatrix}`

    :math:`= \begin{bmatrix}5 & 9 & 13 \\ -1 & 2 & 4 \\ -2 & 2 & 4 \end{bmatrix}`
    Clearly, :math:`AB \neq BA`
26. :math:`A = \begin{bmatrix}0 * a^2 + c * ab + -b * ac & 0 * ab + c * b^2 +
    -b * bc & 0 * ac + c * bc + -b * c^2 \\ -c * a^2 + 0 * ab + a * ac & -c *
    ab + 0 * b^2 + a * bc & -c * ac + 0 * bc + a * c^2 \\ b * a^2 + -a *
    ab + 0 * ac & b * ab + -a * b^2 + 0 * bc & b * ac + -a * bc + -0 *
    c^2\end{bmatrix}`

    :math:`= \begin{bmatrix}0 & 0 & 0 \\ 0 & 0 & 0 \\ 0 & 0 & 0\end{bmatrix}`
27. :math:`A^2 = \begin{bmatrix}3 & -5 \\ -4 & 2\end{bmatrix} \begin{bmatrix}3
    & -5 \\ -4 & 2\end{bmatrix}`

    :math:`= \begin{bmatrix} 3 * 3 + -5 * -4 & 3 * -5 + -5 * 2 \\ -4 * 3 +
    2 * -4 & -4 * -5 + 2 * 2\end{bmatrix}`

    :math:`= \begin{bmatrix}29 & -25 \\ -20 & 24\end{bmatrix}`

    :math:`A^2 - 4A - 14I = \begin{bmatrix}29 & -25 \\ -20 & 24\end{bmatrix} -
    \begin{bmatrix}15 & -25 \\ -20 & 10\end{bmatrix} - \begin{bmatrix} 14 & 0
    \\ 0 & 14\end{bmatrix}`

    :math:`= \begin{bmatrix} 0 & 0 \\ 0 & 0 \end{bmatrix}`

    :math:`= \begin{bmatrix}\end{bmatrix}`
28. :math:`A^3 = \begin{bmatrix}2 & 3 \\ 1 & 2\end{bmatrix}\begin{bmatrix}2 & 3
    \\ 1 & 2\end{bmatrix}\begin{bmatrix}2 & 3 \\ 1 & 2\end{bmatrix}`

    :math:`= \begin{bmatrix} 2 * 2 + 3 * 1 & 2 * 3 + 3 * 2 \\ 1 * 2 + 2 * 1 &
    1 * 3 + 2 * 2\end{bmatrix} \begin{bmatrix}2 & 3 \\ 1 & 2\end{bmatrix}`

    :math:`= \begin{bmatrix}7 & 12 \\ 4 & 7\end{bmatrix} \begin{bmatrix}2 & 3
    \\ 1 & 2\end{bmatrix}`

    :math:`= \begin{bmatrix} 7 * 2 + 12 * 1 & 7 * 3 + 12 * 2 \\ 4 * 2 + 7 * 1 &
    4 * 3 + 7 * 2\end{bmatrix}`

    :math:`= \begin{bmatrix}26 & 45 \\ 15 & 26\end{bmatrix}`

    :math:`A^3 - 4A^2 + A = \begin{bmatrix}26 & 45 \\ 15 & 26\end{bmatrix} -
    \begin{bmatrix}28 & 48 \\ 16 & 28\end{bmatrix} + \begin{bmatrix}2 & 3 \\ 1
    & 2\end{bmatrix}`

    :math:`= \begin{bmatrix} 0 & 0 \\ 0 & 0 \end{bmatrix} = O`

29. :math:`A^3 = \begin{bmatrix}0.8 & 0.6 \\ -0.6 & 0.8\end{bmatrix}
    \begin{bmatrix}0.8 & 0.6 \\ -0.6 & 0.8\end{bmatrix} \begin{bmatrix}0.8 &
    0.6 \\ -0.6 & 0.8\end{bmatrix}`

    :math:`= \begin{bmatrix}0.8 * 0.8 + 0.6 * -0.6 & 0.8 * 0.6 + 0.6 * 0.8 \\
    -0.6 * 0.8 + 0.8 * -0.6 & -0.6 * 0.6 + 0.8 * 0.8\end{bmatrix}
    \begin{bmatrix}0.8 & 0.6 \\ -0.6 & 0.8\end{bmatrix}`

    :math:`= \begin{bmatrix}0.28 & 0.96 \\ -0.96 & 0.28 \end{bmatrix}
    \begin{bmatrix}0.8 & 0.6 \\ -0.6 & 0.8\end{bmatrix}`

    :math:`= \begin{bmatrix}0.28 * 0.8 + 0.96 * -0.6 & 0.28 * 0.6 + 0.96 * 0.8
    \\ -0.96 * 0.8 + 0.28 * -.6 & -0.96 * 0.6 + 0.28 * 0.8\end{bmatrix}`

    :math:`= \begin{bmatrix}-0.352 & 0.936 \\ -0.936 & -0.352\end{bmatrix}`
30. Since :math:`f(x) = x^2 - 5x + 7I,` therefore :math:`f(A) = A^2 - 5A + 7I`

    :math:`A^2 = \begin{bmatrix}3 * 3 + 1 * - 1 & 3 * 1 + 1 * 2 \\ -1 * 3 + 2 *
    -1 & -1 * 1 + 2 * 2\end{bmatrix}`

    :math:`= \begin{bmatrix}8 * 5 \\ -5 & 3\end{bmatrix}`

    :math:`f(A) = \begin{bmatrix}8 & 5 \\ -5 & 3\end{bmatrix} -
    \begin{bmatrix}15 & 5 \\ -5 & 10\end{bmatrix} + \begin{bmatrix}7 & 0 \\ 0 &
    7\end{bmatrix}`

    :math:`= \begin{bmatrix}0 & 0 \\ 0 & 0\end{bmatrix}`
31. :math:`AB = \begin{bmatrix}\cos\theta\cos\phi + \sin\theta\sin\phi &
    \cos\theta\sin\phi + \sin\theta\cos\phi \\ \sin\theta\cos\phi + \cos\theta\sin\phi &
    \sin\theta\sin\phi + \cos\theta\cos\phi\end{bmatrix}`

    :math:`= \begin{bmatrix}\cos(\theta - \phi) & \sin(\theta + \phi) \\
    \sin(\theta + \phi) & \cos(\theta - \phi)\end{bmatrix}`

    Simirly it can be shown that :math:`BA = \begin{bmatrix}\cos(\theta - \phi)
    & \sin(\theta + \phi) \\ \sin(\theta + \phi) & \cos(\theta -
    \phi)\end{bmatrix}`
32. :math:`f(A) = A^2 -5x + 6I = \begin{bmatrix} 1 & -1 & -3 \\ -1 & -1 & 10 \\
    -5 & 4 & 4\end{bmatrix}`
33. Given :math:`A = \begin{bmatrix}5 & 3 \\ 12 & 7\end{bmatrix}`

    :math:`A^2 = \begin{bmatrix}5 * 5 + 3 * 12 & 5 * 3 + 3 * 7 \\ 12 * 5 + 7 *
    12 & 12 * 3 + 7 * 7\end{bmatrix}`

    :math:`= \begin{bmatrix}51 & 36 \\ 144 & 85\end{bmatrix}`

    :math:`A^2 - 12A - I = \begin{bmatrix}61 & 36 \\ 144 & 85\end{bmatrix} -
    \begin{bmatrix}60 & 36 \\ 144 & 84\end{bmatrix} - \begin{bmatrix}1 & 0 \\ 1
    & 0\end{bmatrix}`

    :math:`= \begin{bmatrix}0 & 0 \\ 0 & 0\end{bmatrix} = O`
34. L.H.S. = :math:`\begin{pmatrix}\begin{bmatrix}1 & \omega &
    \omega^2 \\ \omega & \omega^2 & 1 \\ \omega^2 & 1 & \omega \end{bmatrix} +
    \begin{bmatrix} \omega & \omega^2 & 1 \\ \omega^2 & 1 & \omega \\ \omega &
    \omega^2 & 1\end{bmatrix}\end{pmatrix} \begin{bmatrix}1 \\ \omega \\ \omega^2
    \end{bmatrix} = \begin{bmatrix}0 \\ 0 \\ 0\end{bmatrix}`

    :math:`= \begin{bmatrix}1 + \omega & \omega + \omega^2 & \omega^2 + 1 \\
    \omega + \omega^2 & \omega^2 + 1 & 1 + \omega \\ \omega^2 + \omega & 1 +
    \omega^2 & \omega + 1\end{bmatrix}\begin{bmatrix}1 \\ \omega \\ \omega^2
    \end{bmatrix} = \begin{bmatrix}0 \\ 0 \\ 0\end{bmatrix}`

    :math:`= \begin{bmatrix}-\omega^2 & -1 & -\omega \\ -1 & -\omega & -\omega^2
    \\ -1 & -\omega & -\omega^2\end{bmatrix} \begin{bmatrix}1 \\ \omega \\
    \omega^2 \end{bmatrix} = \begin{bmatrix}0 \\ 0 \\ 0\end{bmatrix} [\because
    1 + \omega + \omega^2 = 0]`

    :math:`= \begin{bmatrix}-(\omega^2 + \omega + \omega^3) \\ -(1 + \omega^2 +
    \omega^4) \\ -(1 + \omega^2 + \omega^4)\end{bmatrix} [\because \omega^4 =
    \omega]`

    :math:`= \begin{bmatrix}0 \\ 0 \\ 0\end{bmatrix}`
35. :math:`I + A = \begin{bmatrix}1 & 0 \\ 0 & 1\end{bmatrix} +
    \begin{bmatrix}0 & -\tan\frac{\alpha}{2} \\ \tan\frac{\alpha}{2} &
    0\end{bmatrix}`

    :math:`= \begin{bmatrix}1 & -\tan\frac{\alpha}{2} \\ \tan\frac{\alpha}{2} &
    1\end{bmatrix}`

    R.H.S. :math:`= (I - A) \begin{bmatrix} \cos\alpha & -\sin\alpha \\
    \sin\alpha & \cos\alpha\end{bmatrix}`

    :math:`= \begin{bmatrix}1 & \tan\frac{\alpha}{2} \\ -\tan\frac{\alpha}{2} &
    1\end{bmatrix}\begin{bmatrix} \cos\alpha & -\sin\alpha \\
    \sin\alpha & \cos\alpha\end{bmatrix}`

    :math:`= \begin{bmatrix}\cos\alpha + \tan\frac{\alpha}{2}\sin\alpha &
    -\sin\alpha + \tan\frac{\alpha}{2}\cos\alpha \\
    -\tan\frac{\alpha}{2}\cos\alpha + \sin\alpha &
    \tan\frac{\alpha}{2}\sin\alpha + \cos\alpha\end{bmatrix}`

    :math:`\cos\alpha + \tan\frac{\alpha}{2}\sin\alpha =
    2\cos^2\frac{\alpha}{2} - 1 + 2\sin^2\frac{\alpha}{2} = 2 - 1 = 1`

    :math:`-\sin\alpha + \tan\frac{\alpha}{2}\cos\alpha =
    -\tan\frac{\alpha}{2}\left(- \cos\alpha +
    \frac{\sin\alpha}{\tan\frac{\alpha}{2}}\right)`

    :math:`= -\tan\frac{\alpha}{2}\left(-2\cos^2\frac{\alpha}{2} + 1 +
    2\cos^2\frac{\alpha}{2} \right) = -\tan\frac{\alpha}{2}` 

    Similarly two other elements can be proved to be equal.
36. Multiplying on left hand side and comparing elements for equality, we get

    :math:`5x - 7z = -16; 5y - 7u = -6; -2x + 3z = 7; -2y + 3u = 2`

    First and third can be solved together, and second and fourth equation can
    be solved together.

    The answer is :math:`\begin{bmatrix}1 & -4 \\ 3 & -2\end{bmatrix}`
37. L.H.S. :math:`= \begin{bmatrix}1 & 5x + 6 & x + 4\end{bmatrix}
    \begin{bmatrix}1 \\ 1 \\ x\end{bmatrix} \begin{bmatrix}1 \\ 1 \\
    x\end{bmatrix}`

    :math:`= \begin{bmatrix}1 + 5x + 6 + x^2 + 4x\end{bmatrix} = O`

    :math:`\Rightarrow x^2 + 7x + 9 = 0`

    :math:`\Rightarrow x = \frac{-7 \pm \sqrt{53}}{2}`
38. Let :math:`P` be the product matrix. Then

    :math:`P = \begin{bmatrix}\cos^2\theta\cos^2\phi + \cos\theta \sin\theta
    \cos\phi \sin\phi & \cos^2\theta \cos\phi \sin\phi + \cos\theta \sin\theta
    \sin^2\phi \\ \cos\theta \sin\theta \cos^2\phi + \sin^2\theta \cos\phi
    \sin\phi & \cos\theta \sin\theta \cos\phi \sin\phi + \sin^2\theta
    \sin^2\phi\end{bmatrix}`

    For our condition to be satisfied :math:`\cos^2\theta\cos^2\phi +
    \cos\theta \sin\theta \cos\phi \sin\phi = 0`

    :math:`\Rightarrow \cos\theta\cos\phi(\cos\theta\cos\phi + \sin\theta
    \sin\phi) = 0`

    :math:`\Rightarrow \cos\theta\cos\phi\cos(\theta - \phi) = 0`

    For :math:`\cos(\theta - \phi) = 0, \theta - \phi = \frac{n\pi}{2}` where
    :math:`n` is an odd number.

    Similarly, it can be proven for other elements.
39. For this we will have to use mathematical induction. Refer to the chapter
    of mathematical induction for necessary background.

    :math:`A^2 = \begin{bmatrix}\cos\theta & -\sin\theta \\ \sin\theta &
    \cos\theta\end{bmatrix} \begin{bmatrix}\cos\theta & -\sin\theta \\
    \sin\theta & \cos\theta\end{bmatrix}`

    :math:`= \begin{bmatrix}\cos^2\theta - \sin^2\theta & -\cos\theta
    \sin\theta - \sin\theta \cos\theta \\ \sin\theta \cos\theta + \cos\theta
    \sin\theta & -\sin^2\theta + \cos^2\theta\end{bmatrix}`

    :math:`= \begin{bmatrix}\cos2\theta & -\sin2\theta \\ \sin2\theta &
    \cos2\theta\end{bmatrix}`

    So the formula is true for :math:`2`. Assume that it is true for :math:`n =
    k.` Now we wil prove it for :math:`n = k + 1`

    :math:`A^{k + 1} = \begin{bmatrix}\cos k\theta & -\sin k\theta \\ \sin
    k\theta & \cos k\theta\end{bmatrix} \begin{bmatrix}\cos\theta & -\sin\theta
    \\ \sin\theta & \cos\theta\end{bmatrix}`

    :math:`= \begin{bmatrix}\cos(k + 1)\theta & -\sin(k + 1)\theta \\ \sin(k +
    1)\theta & \cos(k + 1)\theta\end{bmatrix}`

    Thus, it is proven by mathematical induction.
40. This problem is similar to previous problem and has been left as an
    exercise.
41. This problem is similar to previous problem and has been left as an
    exercise.
42. :math:`A^2 - B^2 = (A - B)(A + B) = A^2 + AB -BA - B^2`

    Thus, they will be equal if :math:`AB - BA = 0\Rightarrow AB = BA`
43. The quantity of fruits can be written as :math:`\begin{bmatrix}8 & 10 &
    4\end{bmatrix}` and the prices can be represented as
    :math:`\begin{bmatrix}18 \\ 9 \\ 6\end{bmatrix}`

    Total price is product of the two matrices above :math:`= 8 * 18 + 10 * 9 +
    4 * 6 = 258`
44. Let the part which  gives :math:`7%` interest be :math:`x,` then the part
    which gives :math:`5%` interest will be :math:`30,000 - x`

    Thus, :math:`\begin{bmatrix}x & 30000 - x\end{bmatrix} \begin{bmatrix} 0.07
    \\ 0.05\end{bmatrix} = 2000`

    :math:`0.07x + 1500 - 0.05x = 2000\Rightarrow 0.02x = 500\Rightarrow x =
    25000`
45. The quantity matrix can be represented as :math:`\begin{bmatrix}240 & 180 &
    300\end{bmatrix}` and the price matrix can be represented as
    :math:`\begin{bmatrix} 50 & 90 & 12\end{bmatrix}`

    Total amount :math:`= \begin{bmatrix}240 & 180 & 300\end{bmatrix}
    \begin{bmatrix} 50 & 90 & 12\end{bmatrix}`

    :math:`= 12000 + 16200 + 3600 = 31,800`
46. The quantity matrix can be represented as :math:`\begin{bmatrix}120 & 96 &
    60 \end{bmatrix}` and price matrix can be written as :math:`\begin{bmatrix}
    8.3 & 3.45 & 4.5\end{bmatrix}`

    Total amount :math:`= \begin{bmatrix}120 & 96 & 60 \end{bmatrix} \begin{bmatrix}
    8.3 & 3.45 & 4.5\end{bmatrix}`

    :math:`= 996 + 331.2 + 270 = 1597.2`
47. :math:`AA' = \begin{bmatrix}\cos\alpha & \sin\alpha \\ -\sin\alpha & \cos
    \alpha\end{bmatrix} \begin{bmatrix}\cos\alpha & -\sin\alpha \\ \sin\alpha &
    \cos\alpha\end{bmatrix}`

    :math:`= \begin{bmatrix}\cos^2\alpha + \sin^2\alpha & -\cos\alpha\sin\alpha
    + \sin\alpha \cos\alpha \\ -\sin\alpha \cos\alpha & \sin^2\alpha +
    \cos^2\alpha \end{bmatrix}`

    :math:`= \begin{bmatrix}1 & 0 \\ 0 & 1\end{bmatrix} = I_2`

    Similarly, it can be proven that :math:`A'A = I_2`
48. Symmetrix matrix is :math:`\frac{1}{2}(A + A').` Let it be :math:`P`

    :math:`P = \frac{1}{2}\begin{bmatrix}1 + 1 & 2 + 6 & 4 + 3 \\ 6 + 2 & 8 + 8
    & 1 + 5 \\ 3 + 4 & 5 + 1 & 7 + 7\end{bmatrix}`

    :math:`P = \begin{bmatrix}1 & 4 & \frac{7}{2} \\ 4 & 8 * 3 \\ \frac{7}{2} &
    3 & 7\end{bmatrix}`

    Skew symmetric marix is :math:`\frac{1}{2}(A - A').` Let it be :math:`Q`

    :math:`Q = \frac{1}{2}\begin{bmatrix}1 - 1 & 2 - 6 & 4 - 3 \\ 6 - 2 & 8 - 8
    & 1 - 5 \\ 3 - 4 & 5 - 1 & 7 - 7\end{bmatrix}`

    :math:`Q = \begin{bmatrix}0 & -2 & \frac{1}{2} \\ 2 & 0 & -2 \\
    -\frac{1}{2} & 2 & 0\end{bmatrix}`

    Thus, given matrix is sum of symmetric matrix and skew symmetric matrix.
49. For the matrix to be orthogonal :math:`AA' = 1` where :math:`A` is the
    given matrix.

    :math:`AA' = \begin{bmatrix}\cos\alpha & \sin\alpha \\ -\sin\alpha &
    \cos\alpha\end{bmatrix} \begin{bmatrix}\cos\alpha & \sin\alpha \\
    -\sin\alpha & \cos\alpha\end{bmatrix}`

    Following problem :math:`47` we know that product of these two is identity
    matrix.
50. Let :math:`A = \frac{1}{3}\begin{vmatrix} -1 & 2 & 2 \\ 2 & -1 & 2 \\ 2 & 2
    & -1\end{vmatrix}`

    :math:`A' = \frac{1}{3}\begin{bmatrix}-1 & 2 & 2 \\ 2 & -1 & 2 \\ 2 & 2 &
    -1\end{bmatrix}` Note that both original matrix and its transpose are same.

    :math:`AA' = \frac{1}{9}\begin{bmatrix}-1 * -1 + 2 * 2 + 2 * 2 & -1 * 2 + 2
    * -1 + 2 * 2 & -1 * 2 + 2 * 2 + 2 * -1 \\ 2 * -1 + -1 * 2 + 2 * 2 & 2 * 2 +
    -1 * -1 + 2 * 2 & 2 * 2 + -1 * 2 + 2 * -1 \\ 2 * -1 + 2 * 2 + -1 * 2 & 2
    * 2 + 2 * -1 + -1 * 2 & 2 * 2 + 2 * 2 + -1 * -1\end{bmatrix}`

    :math:`= \frac{1}{9}\begin{bmatrix}9 & 0 & 0 \\ 0 & 9 & 0 \\ 0 & 0 &
    9\end{bmatrix}`

    :math:`= \begin{bmatrix}1 & 0 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 1\end{bmatrix} =
    I_3`
