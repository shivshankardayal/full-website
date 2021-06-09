Mathematical Induction Solutions Part 1
***************************************
1. Let :math:`P(n) =1^2 + 2^2 + \ldots + n^2 = \frac{n(n + 1)(2n + 1)}{6}`

   :math:`P(1) = 1^2 = \frac{1.2.3}{6} = 1`

   Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is true for
   :math:`n= m.` For :math:`n = m + 1`

   :math:`P(m + 1) = 1^2 + 2^2 + \ldots + (m + 1)^2`

   :math:`= \frac{m(m + 1)(2m + 1)}{6} + (m + 1)^2`

   :math:`= \frac{(m +1)(2m^2 + m + 6m + 6)}{6}`

   :math:`= \frac{(m + 1)(2m^2 + 3m + 4m + 6)}{6}`

   :math:`= \frac{(m + 1)(m+ 2)(2m + 3)}{6}`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.
2. Let :math:`P(n) = \frac{1}{1.2} + \frac{1}{2.3} + \ldots + \frac{1}{n(n +
   1)} = \frac{n}{n + 1}`

   :math:`P(1) = \frac{1}{1.2} = \frac{1}{1.(1 + 1)}`

   Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is true for
   :math:`n = m.` For :math:`n = m + 1`

   :math:`P(m + 1) = \frac{1}{1.2} + \frac{1}{2.3} + \ldots + \frac{1}{m(m +
   1)} + \frac{1}{(m + 1)(m + 2)}`

   :math:`= \frac{m}{m + 1} + \frac{1}{(m + 1)(m + 2)}`

   :math:`= \frac{m(m + 2) + 1}{(m + 1)(m + 2)} = \frac{m+ 1}{m + 2}`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.

3. Let :math:`P(n) = 1^3 + 2^3 + \ldots + n^3 = \left(\frac{n(n +
   1)}{2}\right)^2`

   :math:`P(1) = 1^3 = \left(\frac{1.2}{2}\right)^2 = 1`

   Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is true for
   :math:`n = m.` For :math:`n= m + 1`

   :math:`P(m + 1) = 1^3 + 2^3 + \ldots + (m + 1)^3`

   :math:`= \left(\frac{m(m + 1)}{2}\right)^2 + (m + 1)^3`

   :math:`= \frac{(m + 1)^2(m^2 + 4m + 4)}{4}`

   :math:`= \left(\frac{(m + 1)(m + 2)}{2}\right)^2`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.

4. Let :math:`P(n) = 1.3 + 2.3^2 + \ldots + n.3^n = \frac{(2n - 1)3^{n + 1} +
   3}{4}`

   :math:`P(1) = 2 = \frac{1.3^2 + 3}{4} = 3`

   Thus, :math:`P(n)` is true for :math:`n= 1.` Assume that it is true for
   :math:`n = m.` For :math:`n= m + 1`

   :math:`P(m + 1) = \frac{(2m - 1)3^{m + 1} + 3}{4} + (m + 1)3^{m + 1}`

   :math:`= \frac{3^{m + 1}(2m - 1 + 4(m + 1) + 3)}{4}`

   :math:`= \frac{(2m + 1)3^{m + 2} + 3}{4}`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.

5. Let :math:`P(n) = \cos\alpha + \cos 2\alpha + \ldots + \cos n\alpha = \sin
   \frac{n\alpha}{2}\text{cosec}\frac{\alpha}{2}\cos\frac{(n + 1)\alpha}{2}`

   :math:`P(1) = \cos\alpha = \sin\frac{\alpha}{2}
   \frac{1}{\sin\frac{\alpha}{2}} \cos\alpha`

   Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is true for
   :math:`n = m.` For :math:`n= m + 1`

   :math:`P(m + 1) = \cos\alpha + \cos 2\alpha + \ldots + \cos (m + 1)\alpha =
   \sin \frac{(m + 1)\alpha}{2}\text{cosec}\frac{\alpha}{2}\cos\frac{(m +
   2)\alpha}{2}`

   :math:`= \sin \frac{m\alpha}{2}\text{cosec}\frac{\alpha}{2}
   \cos\frac{(m + 1)\alpha}{2} + cos(m + 1)\alpha`

   :math:`=\text{cosec} \frac{\alpha}{2} \left[\sin\frac{m\alpha}{2}
   \cos\frac{(m + 1)\alpha}{2} + \cos(m + 1)\alpha \sin\frac{\alpha}{2}\right]`

   :math:`= \frac{1}{2}\text{cosec} \frac{\alpha}{2} \left[ \sin \frac{(2m +
   1)\alpha}{2} - \sin\frac{\alpha}{2} + \sin\frac{(2m+ 3)\alpha}{2} -\sin
   \frac{(2m + 1)\alpha}{2}\right]`

   :math:`= \frac{1}{2} \text{cosec} \frac{\alpha}{2} \left[2\cos\frac{(2m + 3
   + 2)\alpha}{2}\sin\frac{(2m + 2)\alpha}{4}\right]`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.
6. Let :math:`P(n) = \tan^{-1}\frac{1}{3} + \tan^{-1}\frac{1}{7} + \ldots +
   \tan^{-1}\frac{1}{n^2 + n + 1} = \tan^{-1}\frac{n}{n + 2}`

   :math:`P(1) = \tan^{-1}\frac{1}{3} = \tan^{-1}\frac{1}{1 + 2}`

   Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
   true for :math:`n = m.` For :math:`n= m + 1`

   :math:`P(m + 1) = \tan^{-1}\frac{1}{3} + \tan^{-1}\frac{1}{7} + \ldots +
   \tan^{-1}\frac{1}{m^2 + m + 1} + \tan^{-1}\frac{1}{(m + 1)^2 + m + 1 + 1} =
   tan^{-1}\frac{m + 1}{m + 3}`

   :math:`= \tan^{-1}\frac{m}{m + 1} + \tan^{-1}\frac{1}{m^2 + 3m + 3}`

   :math:`= \tan^{-1}\left[\frac{\frac{m}{m + 2} + \frac{1}{m^2 + 3m + 3}}{1 -
   \frac{m}{m + 2}\frac{1}{m^2 + 3m + 3}}\right]`

   :math:`= \tan^{-1}\left(\frac{m + 1}{m + 3}\right)`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.

7. Let :math:`P(n) = {}^nC_1 + 2.{}^nC_2 + \ldots + n.{}^nC_n = n.2^{n - 1}`

   :math:`P(1) = {}^1C_1 = 1 = 1.2^{1 - 1} = 0`

   Thus, :math:`P(1n)` is true for :math:`n = 1.` Assume that it is
   true for :math:`n = m.` For :math:`n= m + 1`

   :math:`P(m + 1) = {}^{m + 1}C_1 + 2.{}^{m + 1}C_2 + \ldots + (m + 1){}^{m +
   1}C_{m + 1} = (m + 1)2^m`

   :math:`= ({}^mC_0 + {}^mC_1) + 2({}^mC_1 + {}^mC_2) + \ldots + m({}^mC_{m -
   1} + {}^mC_m) + (m + 1)({}^mC_m + 0)`

   :math:`= ({}^mC_0 + 2.{}^mC_1 + \ldots + m^{}mC_{m - 1} + (m + 1)/{}^mC_m) +
   ({}^mC_1 + 2.{}^mC_2 + \ldots + m.{}^mC_m)`

   :math:`= ({}^mC_0 + 2.{}^mC_1 + \ldots + m^{}mC_{m - 1} + (m + 1)/{}^mC_m) +
   m.2^{m - 1}`

   :math:`=2^m + m.2^{m - 1} + m.2^{m - 1} = (m + 1)2^m`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.
8. Let :math:`P(n) = u_n = \frac{1}{\sqrt{5}}\left[\left(\frac{1 +
   \sqrt{5}}{2}\right)^n - \left(\frac{1 +-
   \sqrt{5}}{2}\right)^n\right]`

   :math:`P(1) = u_1 = 1 = \frac{1}{\sqrt{5}}\left[\left(\frac{1 +
   \sqrt{5}}{2}\right) - \left(\frac{1 - \sqrt{5}}{2}\right)\right] = 1`

   Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
   true for :math:`n = m` and :math:`n = m + 1` For :math:`n= m + 2`

   :math:`P(m + 2) = u_{m + 2} = u_{m} + u_{m + 1}`

   :math:`= \frac{1}{\sqrt{5}} \left[\left(\frac{1 + \sqrt{5}}{2}\right)^m
   \left(\frac{1 + \sqrt{5}}{2} + 1\right) - \left(\frac{1 -
   \sqrt{5}}{2}\right)^m \left(\frac{1 - \sqrt{5}}{2} + 1\right)\right]`

   :math:`= \frac{1}{\sqrt{5}}\left[\left(\frac{1 + \sqrt{5}}{2}\right)^{m + 2}
   - \left(\frac{1 - \sqrt{5}}{2}\right)^{m + 2}\right]`

   Thus, :math:`P(n)` is true for :math:`n = m + 2.` Henece, we have proven the
   equation by mathematical induction.
9. Let :math:`P(n) = 11^{n + 2} + 12^{2n + 1}`

   :math:`P(1) = 11^3 + 12^3 = (11 + 12)(121 - 11*12 + 144) = 23 * 233` which
   is divisible by :math:`133`

   Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
   true for :math:`n = m` For :math:`n= m + 1`

   :math:`P(m + 1) = 11^{m + 3} + 12^{2m + 3}`

   :math:`= 11.11^{m + 2} + 144.12^{2m + 1}`

   Dividing :math:`P(m + 1)` by :math:`P(m)`

   :math:`P(m + 1) = 11.P(m) + 133.12^{2m + 1} = 11.133k + 133.12^{2m + 1}`
   where :math:`k` is an inetger.

   :math:`P(m + 1)` is divisible by :math:`133`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.
10. Let :math:`P(n) = p^{n + 1} + (p + 1)^{2n - 1}`

    :math:`P(1) = p^2 + (p + 1)^{2.1 - 1} = p^2 + p + 1` which is divisible by
    :math:`p^2 + p + 1`

   Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
   true for :math:`n = m` For :math:`n= m + 1`

   :math:`P(m + 1) = p^{m + 2} + (p + 1)^{2m + 1}`

   Dividing :math:`P(m + 1)` by :math:`P(m),` we get

   :math:`P(m + 1) = p.P(m) + (p^2 + p + 1)p^{2m - 1}`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.

11. Let :math:`P(n) = 2^n > 2n + 1,~\forall~n>2`

    :math:`P(3) = 2^3 > 2*3 + 1`

    Thus, :math:`P(n)` is true for :math:`n = 3.` Assume that it is
    true for :math:`n = m~\forall~m\geq 3` For :math:`n= m + 1`

    :math:`P(m + 1) = 2^{m + 1} > 2m + 3 = \alpha`

    Multiplying :math:`P(m)` with :math:`2`, we get

    :math:`2^{m + 1} > 4m + 2 = \beta`

    Subtracting the two formulas we have

    :math:`\beta - \alpha = 4m + 2 - 2m - 3 = 2m - 1 > 0`

    :math:`\therefore \beta > \alpha`

    :math:`2^{m + 1} > \alpha` i.e. :math:`2^{m + 1} > 2m + 3`

   Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
   equation by mathematical induction.

12. Let :math:`P(n) = n^4 < 10^n,~\forall~n \geq 2`

    :math:`P(2) = 2^4 < 10^2`

    Thus, :math:`P(n)` is true for :math:`n = 2.` Assume that it is
    true for :math:`n = m~\forall~m\geq 2` For :math:`n= m + 1`

    :math:`P(m + 1) = (m + 1)^4 < 10^{m + 1} = \alpha`

    :math:`10^{m + 1} > 10^m = \beta`

    :math:`\frac{\beta}{\alpha} = \frac{10m^4}{(m + 1)^4}`

    :math:`\because m\geq 2 \therefore m + 1\geq 3\Rightarrow \frac{1}{m + 1} \leq \frac{1}{2}`

    :math:`\frac{m}{m + 1}\geq \frac{2}{3}`

    :math:`\Rightarrow \left(\frac{m}{m + 1}\right)^4 \geq \left(\frac{2}{3}\right)^4`

    :math:`10\left(\frac{m}{m + 1}\right)^4 \geq 10\frac{16}{81} > 1`

    :math:`\frac{\beta}{\alpha} > 1 \Rightarrow \beta > \alpha`

    :math:`\Rightarrow 10^{m + 1}> \alpha \Rightarrow 10^{m + 1} > (m + 1)^4`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

13. Let :math:`P(n) = 1^3 + 3^3 + \ldots + (2n - 1)^3 = n^2(2n^2 - 1)`

    :math:`P(1) = 1 = 1^2(2.1^2 - 1) = 1`

    Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = 1^3 + 3^3 + \ldots + (2m - 1)^3 + (2m + 1)^3`

    :math:`= m^2(2m^2 - 1) + (2m + 1)^3`

    :math:`= 2m^4 - m^2 + 8m^3 + 12m^2 + 6m + 1`

    :math:`= 2m^4 + 8m^3 + 11m^2 + 6m + 1`

    :math:`= (m + 1)^2[2(m + 1)^2 - 1]`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

14. Let :math:`P(n) = 3.2^2 + 3^2.2^3 + \ldots + 3^n.2^{n + 1} =
    \frac{12}{5}(6^n - 1)`

    :math:`P(1) = 3.2^2 = 12 = \frac{12}{5}(6 - 1) = 12`

    Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m~\forall~m\geq 3` For :math:`n= m + 1`

    :math:`P(m + 1) = 3.2^2 + 3^2.2^3 + \ldots + 3^m.2^{m + 1} + 3^{m +
    1}2^{m + 2}`

    :math:`= \frac{12}{5}(6^m - 1) + 3^{m + 1}2^{m + 2}`

    :math:`= \frac{12}{5}(6^m - 1) + 12.3^m2^m`

    :math:`= \frac{12}{5}[6^m - 1 + 5.6^m]`

    :math:`= \frac{12}{6}(6^{m + 1} - 1)`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

15. Let :math:`P(n) = \frac{1}{1.4} + \frac{1}{4.7} + \ldots + \frac{1}{(3n -
    2)(3n + 1)} = \frac{n}{3n + 1}` 

    :math:`P(1) = \frac{1}{4} = \frac{1}{3 + 1} = \frac{1}{4}`

    Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = \frac{1}{1.4} + \frac{1}{4.7} + \ldots + \frac{1}{(3m -
    2)(3m + 1)} + \frac{1}{(3m + 1)(3m + 4)}`

    :math:`= \frac{m}{3m + 1} + \frac{1}{(3m + 1)(3m + 4)}`

    :math:`= \frac{m(3m + 4) + 1}{(3m + 1)(3m + 4)}`

    :math:`= \frac{(3m + 1)(m + 1)}{(3m + 1)(3m + 4)}`

    :math:`= \frac{m + 1}{3m + 4}`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

16. Let :math:`P(n) = (\cos\theta + i\sin\theta)^n = \cos n\theta + i\sin
    n\theta`

    :math:`P(1) = (\cos\theta + i\sin\theta)^1 = \cos\theta + i\sin\theta`

    Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = (\cos\theta + i\sin\theta)^{m + 1}`

    Substituting the value of :math:`P(m)`

    :math:`P(m + 1) = (\cos m\theta + i\sin m\theta)(\cos\theta + i\sin\theta)`

    :math:`=\cos m\theta\cos\theta - \sin m\theta\sin\theta + i(\sin
    m\theta\cos\theta + \cos m\theta\sin\theta)`

    :math:`= \cos(m + 1)\theta + i\sin(m + 1)\theta`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

17. Let :math:`P(n) = \cos\theta.\cos 2\theta \ldots \cos 2^{n - 1}\theta =
    \frac{\sin 2^n\theta}{2^n\sin\theta}`

    :math:`P(1) = \cos\theta = \frac{\sin 2\theta}{2\sin\theta} = \cos\theta`

    Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = \cos\theta.\cos 2\theta \ldots \cos 2^{m - 1}\theta.\cos
    2^m\theta`

    Substituting the value of :math:`P(m)`

    :math:`P(m + 1) = \frac{\sin 2^m\theta}{2^m\sin\theta}\cos 2^m\theta`

    :math:`= \frac{2\sin 2^m\theta\cos 2^m\theta}{2^{m + 1}\sin\theta}`

    :math:`= \frac{\sin 2^{m + 1}\theta}{2^{m + 1}\sin\theta}`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

18. Let :math:`P(n) = \sin\alpha + \sin 2\alpha + \ldots + \sin n\alpha =
    \frac{\sin \frac{n\alpha}{2}}{\sin \frac{\alpha}{2}}\sin \frac{n +
    1}{2}\alpha`

    :math:`P(1) = \sin\alpha =
    \frac{\sin\frac{\alpha}{2}}{\sin\frac{\alpha}{2}}\sin\frac{1 +
    1}{2}\alpha = \sin\alpha` 

    Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = \sin\alpha + \sin 2\alpha + \ldots + \sin m\alpha +
    \sin(m + 1)\alpha`

    Substituting the value of :math:`P(m)`

    :math:`P(m + 1) = \frac{\sin \frac{m\alpha}{2}}{\sin \frac{\alpha}{2}}\sin
    \frac{m + 1}{2}\alpha + \sin(m + 1)\alpha`

    :math:`= \frac{1}{2\sin\frac{\alpha}{2}}\left[2\sin\frac{m\alpha}{2}
    \sin\frac{(m + 1)\alpha}{2} + 2\sin(m + 1)\alpha
    \sin\frac{\alpha}{2}\right]`

    We will use the idenity :math:`2\sin A\sin B = \cos(A - B) - \cos(A + B)`

    :math:`= \frac{1}{2\sin\frac{\alpha}{2}}\left[\cos\frac{\alpha}{2} -
    \cos\frac{(2m + 1)\alpha}{2} + \cos\frac{(2m + 1)\alpha}{2} - \cos
    \frac{(2m + 3)\alpha}{2}\right]`

    :math:`= \frac{1}{2\sin\frac{\alpha}{2}}\left[\cos\frac{\alpha}{2} - \cos
    \frac{(2m + 3)\alpha}{2}\right]`

    Using the same identity we used earlier

    :math:`= \frac{1}{2\sin\frac{\alpha}{2}}2\sin\frac{(m + 1)\alpha}{2}
    \sin\frac{(m + 1)\alpha}{2}`

    :math:`= \frac{\sin\frac{(m + 1)\alpha}{2} \sin \frac{(m + 1)\alpha}{2}}
    {\sin\frac{\alpha}{2}}`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

19. Let :math:`P(n + 1) = a_{n + 1} = \frac{1}{(n + 1)!}`

    :math:`P(1) = \frac{1}{1!} = 1`

    :math:`P(2) = a_2 = \frac{a_1}{1 + 1} = \frac{1}{2} = \frac{1}{2!}`

    Assume that :math:`P(m)` is true i.e. :math:`P(m) = \frac{1}{(m - 1)!}.`
    For :math:`n = m + 1`

    :math:`a_{m + 1} = \frac{a_m}{(m + 1)}`

    Substituting the value of :math:`P(m)`

    :math:`a_{m + 1} = \frac{1}{m!(m + 1)} = \frac{1}{(m + 1)!}`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

20. Let :math:`P(n + 2) = a_{n + 2} = 5a_{n + 1} - 6a_n, n\geq 1`

    For :math:`n = 3`

    :math:`P(3) = 5a_2 - 6a_1 = 25 - 6 = 19 = 3^3 - 2^3 = 19`

    Assume that :math:`P(m)` and :math:`P(m + 1)` is true i.e. :math:`P(m) =
    3^m - 2^m, P(m + 1) = 3^{m + 1} - 2^{m + 1}`

    For :math:`n = m + 2.`

    :math:`a_{m + 1} = 5a_{m + 1} - 6a_m`

    :math:`= 5(3^{m + 1} - 2^{m + 1}) - 6{3^m - 2^m}`

    :math:`= 5(3^{m + 1} - 2^{m + 1}) - 2.3^{m + 1} + 3.2^{m + 1}`

    :math:`= 3.3^{m + 1} - 2.2^{m + 1}`

    :math:`= 3^{m + 2} - 2^{m + 2}`

    Thus, :math:`P(n)` is true for :math:`n = m + 2.` Henece, we have proven the
    equation by mathematical induction.

21. Let :math:`P(n) = u_n = 2^n + 1, n\in N`

    For :math:`n = 2, P(2) = 3u_1 - 2u_0 = 3.3 - 2.2 = 5 = 2^2 + 1 = 5`

    Assume that :math:`P(m)` and :math:`P(m + 1)` is true i.e. :math:`P(m) =
    2^m + 1` and :math:`P(m + 1) = 2^{m + 1} + 1`

    For :math:`n = m + 2.`

    :math:`u_{m + 2} = 3u_{m + 1} - 2u_m`

    :math:`= 3(2^{m + 1} + 1) - 2(2^m + 1)`

    :math:`= 2.2^{m + 1} + 1 = 2^{m + 2} + 1`

    Thus, :math:`P(n)` is true for :math:`n = m + 2.` Henece, we have proven the
    equation by mathematical induction.

22. Let :math:`P(n) = a_n = 2^n - 1`

    For :math:`n = 2, P(2) = 3a_1 - 2a_0 = 3.1 - 2.0 = 3 = 2^2 - 1 = 3`

    Assume that :math:`P(m)` and :math:`P(m + 1)` is true i.e. :math:`P(m) =
    2^m - 1` and :math:`P(m + 1) = 2^{m + 1} - 1`

    For :math:`n = m + 2,`

    :math:`a_{m + 2} = 3a_{m + 1} - 2a_{m}`

    :math:`= 3(2^{m + 1} - 3) -2(2^m + 1)`

    :math:`= 2^{m + 2} - 1`

    Thus, :math:`P(n)` is true for :math:`n = m + 2.` Henece, we have proven the
    equation by mathematical induction.

23. Let :math:`P(n) = \cos n\theta, n > 2`

    For :math:`n = 3, P(3) = 2A_2\cos\theta - A_1 = 2\cos 2\theta\cos\theta -
    \cos\theta`

    :math:`= \cos\theta(2\cos^2\theta - 2\sin^2\theta - 1)`

    :math:`= \cos\theta(\cos2\theta - 2\sin^2\theta)`

    :math:`=\cos2\theta\cos2\theta - 2\sin2\theta\sin\theta = \cos3\theta`

    Assume that :math:`P(m)` and :math:`P(m + 1)` is true i.e. :math:`P(m) =
    \cos m\theta` and :math:`P(m + 1) = \cos(m + 1)\theta`

    For :math:`n = m + 2,`

    :math:`P(m + 2) = 2A_{m + 1}\cos\theta - A_m`

    :math:`= 2\cos(m + 1)\theta\cos\theta - \cos m\theta`

    We know that :math:`2\cos A\cos B = \cos(A + B) + \cos(A - B)`

    :math:`P(m + 2) = \cos(m + 2)\theta + \cos m\theta - \cos m\theta`

    :math:`P(m + 2) = \cos(m + 2)\theta`

    Thus, :math:`P(n)` is true for :math:`n = m + 2.` Henece, we have proven the
    equation by mathematical induction.

24. Let :math:`P(n) = (2\cos\theta - 1)(2\cos 2\theta - 1)\ldots(2\cos 2^{n -
    1}\theta - 1) = \frac{2\cos 2^n\theta + 1}{2\cos\theta + 1}`

    For :math:`n = 1, P(1) = 2\cos\theta - 1 = \frac{2\cos 2\theta +
    1}{2\cos\theta + 1} = \frac{4\cos^2\theta - 1}{2\cos\theta + 1} =
    2\cos\theta - 1`

    Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = (2\cos\theta - 1)(2\cos 2\theta - 1)\ldots(2\cos 2^{m -
    1}\theta - 1)(2\cos 2^m\theta - 1)`

    Substituting the value of :math:`P(m)`

    :math:`P(m + 1) = \frac{2\cos 2^m\theta + 1}{2\cos\theta + 1}(2\cos
    2^m\theta - 1)`

    :math:`= \frac{4\cos 2^m\theta)^2 - 1}{2\cos\theta + 1}`

    :math:`= \frac{2\cos2^{m + 1}\theta + 1}{2\cos\theta + 1}`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

25. Let :math:`P(n) = \tan^{-1}\frac{x}{1.2 + x^2} + \tan^{-1}\frac{x}{2.3 + x^2}
    + \ldots + \tan^{-1}\frac{x}{n(n + 1) + x^2} = \tan^{-1}x -
    \tan^{-1}\frac{x}{n + 1}`

    We know that :math:`\tan^{-1}x - \tan^{-1}y = \tan^{-1}\frac{x - y}{1 +
    xy}`

    For :math:`n = 1, P(1) = \tan^{-1}\frac{x}{1.2 + x^2} = \tan^{-1}x -
    \tan^{-1} \frac{x}{2} = \tan^{-1}\frac{x - \frac{x}{2}}{1 + \frac{x^2}{2}}`

    :math:`= \tan^{-1}\frac{x}{2 + x^2}`

    Thus, :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = \tan^{-1}\frac{x}{1.2 + x^2} + \tan^{-1}\frac{x}{2.3 + x^2}
    + \ldots + \tan^{-1}\frac{x}{m(m + 1) + x^2} + \tan^{-1}\frac{x}{(m +1)(m +
    2) + x^2}`

    Substituting the value of :math:`P(m)`

    :math:`P(m + 1) = \tan^{-1}x - \tan^{-1}\frac{x}{m + 1} +
    \tan^{-1}\frac{x}{(m + 1)(m +2) + x^2}`

    :math:`P(m + 1) = \tan^{-1}x - \tan^{-1}\frac{x}{m + 1} +
    \tan^{-1}\frac{x}{m + 1} - \tan^{-1}\frac{x}{m + 2}`

    :math:`P(m + 1) = \tan^{-1}x - \tan^{-1}\frac{x}{m + 2}`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

26. Let :math:`P(n) = 3 + 33 + \ldots + \frac{33\ldots3}{n~\text{digits}} =
    \frac{10^{n + 1} - 9n -10}{27}`

    For :math:`n = 1, P(1) = 3 = \frac{10^2 - 9 -10}{27} = \frac{81}{27} = 3`

    First term is :math:`3 = \frac{10^1 - 1}{3}`

    Second terms is :math:`33 = \frac{10^2 - 1}{3}`

    ...

    :math:`m{th}` term is :math:`= \frac{10^m - 1}{3}`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is
    true for :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = 3 + 33 + \ldots + \frac{33\ldots3}{m~\text{digits}} +
    \frac{33\ldots 3}{(m + 1)~\text{digits}}`

    :math:`= \frac{10^{m + 1} - 9m -10}{27} + \frac{10^{m + 1} - 1}{3}`

    :math:`= \frac{10^{m + 1} - 9m -10 + 9.10^{m + 1} - 9}{27}`

    :math:`= \frac{10^{m + 1} - 9m -10 + (10 - 1).10^{m + 1} - 9}{27}`

    :math:`= \frac{10^{m + 2} - 9(m + 1) - 10}{27}`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

27. Let :math:`P(n) = \int_{0}^{\pi}\frac{\sin(2n + 1)x}{\sin x}dx = \pi`

    For :math:`n = 1, P(1) = \int_{0}^{\pi}\frac{\sin(2 + 1)x}{\sin x}dx`

    :math:`= \int_{0}^{\pi} \frac{3\sin x - 4\sin^3x}{\sin x}dx`

    :math:`= 3\int_{0}^{\pi}dx - 2\int_{0}^{\pi}dx + \int_{0}^{\pi}\cos 2xdx =
    \pi`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = \int_{0}^{\pi}\frac{\sin(2m + 3)x}{\sin x}dx`

    :math:`P(m + 1) - P(m) = \int_{0}^{\pi}\frac{\sin(2m + 3)x - \sin(2m +
    1)x}{\sin x}dx`

    :math:`= \int_{0}^{\pi}\frac{2\cos(2m + 2)x\sin x}{\sin x}dx`

    :math:`= \int_{0}^{\pi}2\cos(2m + 2)xdx = 0`

    :math:`P(m + 1) = P(m) = \pi`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

28. Let :math:`P(n) = \int_{0}^{\pi}\frac{\sin^2 nx}{\sin^2x}dx = n\pi`

    For :math:`n = 1, P(1) = \int_{0}^{\pi}\frac{\sin^2x}{\sin^2x}dx = \pi`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m` For :math:`n= m + 1`

    :math:`P(m + 1) = \int_{0}^{\pi}\frac{\sin^2(m + 1)x}{\sin^2x}dx`

    :math:`P(m + 1) - P(m) = \int_{0}^{\pi}\frac{\sin^2(m + 1)x -
    \sin^2mx}{\sin^2x}dx`

    :math:`= \frac{1}{2}\int_{0}^{\pi}\frac{1 - \cos(2m + 2)x -1 + \cos
    2mx}{\sin^2x}dx`

    :math:`= \frac{1}{2}\int_{0}^{\pi}\frac{\cos 2mx - \cos (2m +
    2)x}{\sin^x}dx`

    :math:`= \int_{0}^{\pi}\frac{2\sin(2m + 1)x\sin x}{\sin^2x}dx`

    We have proven above to be :math:`\pi` in previous example, therefore

    :math:`P(m + 1) = \pi + m\pi = (m + 1)\pi`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

29. This problem has been left as an exercise.

30. Let :math:`P(n) = n(n + 1)(n + 5)`

    For :math:`n = 1, p(1) = 1.2.6` which is divisible by :math:`6`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m` i.e. :math:`m(m + 1)(m + 5) = 6k` where :math:`k\in N`

    :math:`P(m + 1) = (m + 1)(m + 2)(m + 6) = (m + 1)(m + 2)(m + 6)`

    :math:`P(m + 1) - P(m) = (m + 1)\left\{(m + 6)(m + 2) - m(m + 5)\right\}`

    :math:`= (m + 1)(3m + 12) = 3(m + 1)(m + 4)`

    Clearly, either :math:`m + 1` or :math:`m + 4` will be an even number
    making difference divisvible by :math:`6.`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

31. Let :math:`P(n) = n^3 + (n + 1)^3 + (n + 2)^3, n\in N`

    For :math:`n = 1, P(1) = 1^3 + 2^3 + 3^3 = 36` which is divisible by :math:`9`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) - P(m) = (m + 3)^3 - m^3 = 9m^2 + 27m + 27` which is
    divisible by :math:`9`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.
    
32. Let :math:`P(n) = n(n^2 + 20), n=2m, m\in N`

    For :math:`n = 2, P(2) = 2(2^2 + 20)` which is divisible by :math:`48`

    :math:`P(n)` is true for :math:`n = 2.` Assume that it is  true for
    :math:`n = 2m.` For :math:`n = 2m + 2`

    :math:`P(2m + 2) = (2m + 2)\left[(2m + 2)^2 + 20\right]`

    :math:`P(2m + 2) - P(2m) = (2m + 2)^3 + (2m + 2)20 - (2m)^3 - 40m`

    :math:`= 24m(m + 1)+ 48`

    Clearly, either :math:`m` or :math:`m + 1` will be even making above
    expression divisible by :math:`48`

    Thus, :math:`P(n)` is true for :math:`n = 2m + 2.` Henece, we have proven the
    equation by mathematical induction.

33. Let :math:`P(n) = 4^n - 3n - 1, n\in N`

    For :math:`n = 1, P(1) = 4^1 - 3.1 -1 = 0` which is divisible by :math:`9`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) = 4^{m + 1} -3(m + 1) - 1`

    :math:`P(m + 1) - P(m) = 4^{m + 1} - 3(m + 1) - 1 - 4^m + 3m + 1`

    :math:`= 3.4^m - 3 = 3(4^m - 1^m) = 3.(4 - 1)(4^{m - 1} + \ldots)`

    Clearly, the above expression is divisible by :math:`9`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

34. Let :math:`P(n) = 3^{2n} - 1, n\in N`

    For :math:`n = 1, P(1) = 3^2 - 1 = 8` which is divisible by :math:`8`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) - P(m) = 3^{2m + 2} - 1 - 3^2m + 1`

    :math:`= 3^2m(3^2 - 1)` which is divisible by :math:`8`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

35. Let :math:`P(n) = 5.2^{3n - 2} + 3^{3n - 1}, n\in N`

    For :math:`n = 1, P(1) = 5.2^{3.1 - 2} + 3^{3 - 1} = 19` which is
    divisible by :math:`19`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) - P(m) = 5.2^{3m + 1} + 3^{3m + 2} - 5.2^{3m - 2} - 3^{3m -
    1}`

    :math:`= 5.2^{3m - 2}.7 + 3^{3m - 1}.26 = 7P(m) + 10.3^{3m - 1}`

    which is divisible by :math:`19`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

36. Let :math:`P(n) = 7^{2n} + 2^{3n - 3}.3^{n - 1}, n\in N`

    For :math:`n = 1, P(1) = 7^{2.1} + 2^{3.1 - 3}.3^{1 - 1} = 49 + 1 =  50`
    which is divisible by :math:`25`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) - P(m) = 7^{2m + 2} + 2^{3m}.3^{m} - 7^{2m} - 2^{3m -
    3}.3^{m - 1}`

    :math:`= 48.7^{2m} + 2^{3m - 3}.3^{m - 1}(8.3 - 1)`

    :math:`= 23.P(m) + 25.7^{2m}` which is divisible by :math:`25`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

37. Let :math:`P(n) = 10^n+ 3.4^{n + 2} + 5, n\in N`

    For :math:`n = 1, P(1) = 10^1 + 3.4^{1 + 2} + 5 = 207` which is divisibleby
    :math:`9`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) - P(m) = 10^{m + 1} + 3.4^{m + 3} + 5 - 10^{m} - 3.4^{m + 2} - 5`

    :math:`= 9.10^m + 9.4^{m + 2}` which is divisible by :math:`9`

    Thus, :math:`P(n)` is true for :math:`n = m + 1.` Henece, we have proven the
    equation by mathematical induction.

38. Let :math:`P(n) = 3^{4n + 2} + 5^{2n + 1}, n\in N`

    For :math:`n = 1, P(1) = 3^{6} + 5^3 = 854` which is divisible by :math:`14`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) - P(m) = 3^{4m + 6} + 5^{2m + 3} - 3^{4m + 2} - 5^{2m + 1}`

    :math:`= 80.3^{4m + 2} + 24.5^{2m + 1} = 24P(m) + 56.3^{4m + 2}` which is
    divisible by :math:`14`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

39. Let :math:`P(n) = 3^{2n + 2} - 8n - 9, n\in N`

    For :math:`n = 1, P(1) = 3^{4} - 8 - 9 = 64` which is divisible by :math:`64`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) - P(m) = 3^{2m + 4} - 8(m + 1) - 9 - 3^{2m + 2} + 8m + 9`

    :math:`= 8.3^{2m + 2} - 8 = 64.3^{2m}` which is divisible by :math:`64`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

40. Let :math:`P(n) = n^7 - n, n\in N`

    For :math:`n = 1, P(1) = 1 - 1 = 0` which is a multiple of :math:`7`

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

    :math:`P(m + 1) - P(m) = (m + 1)^7 - m - 1 - m^7 + m`

    :math:`= {}^7C_1m^6 + {}^7C_2m^5 + \ldots + {}^7C_6m` which is a multiple
    of :math:`7` [This uses binomial expansion which is next chapter.]

    :math:`P(n)` is true for :math:`n = 1.` Assume that it is  true for
    :math:`n = m.` For :math:`n = m + 1`

Rest of the problems are left as exercises.
