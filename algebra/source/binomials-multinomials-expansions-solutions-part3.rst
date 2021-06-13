.. meta::
   :author: Shiv Shankar Dayal
   :title: Binomial Theorem
   :description: Algebra
   :keywords: Algebra, ratio, proportions, variations, complex numbers,
              arithmetic progressions, geometric progressions, harmonic
              progressions, series, sequence, quadratic equations,
              permutations, combinations, lograithms, binomial theorem,
              determinant, matrices

Binomials, Multinomials and Expansions Solutions Part 3
*******************************************************
101. :math:`\frac{2^{4n}}{15} = \frac{16^n}{15} = \frac{(1 + 15)^n}{15}`

     :math:`= \frac{1 + {}^nC_1.15 + {}^nC_2.15^2 + \ldots + {}^nC_n.15^n}{15}`

     Except first term all others are mutliple of :math:`15` so clearly
     fractional part :math:`= \frac{1}{15}`

102. Let :math:`(\sqrt{3} + 1)^{2n} = p + f,` where :math:`p` is the integral
     part and :math:`f` is the fractional part i.e. :math:`0<f<1`

     Integer just above :math:`(\sqrt{3} + 1)^{2n} = p + 1`

     Now :math:`(\sqrt{3} + 1)^{2n} = [(\sqrt{3} + 1)^2]^n = 2^n(2 +
     \sqrt{3})^n`

     :math:`p + f = 2^n(2 + \sqrt{3})^n`

     Also, :math:`0 < \sqrt{3} - 1 < 1 \Rightarrow 0 < (\sqrt{3} - 1)^{2n} < 1`

     Let :math:`f_1 = \sqrt{3} - 1)^{2n} = 2^n(2 - \sqrt{3})^n, \Rightarrow 0 <
     f_1 < 0`

     :math:`p + f + f_1 = 2^n.2[2^n + {}^nC_22^{n - 2}.3 + \dots]`

     :math:`= 2^{n + 1}.` an integer = an even integer

     :math:`f + f_1 =` Even integer `- p =` an odd integer`

     Also, :math:`0 < f + f_1 < 2`

     Clearly, :math:`f + f_1 = 1`

     :math:`\Rightarrow p + 1 = 2^{n + 1}.` an integer

     Thus, integer next to :math:`(\sqrt{3} + 1)^{2n}` is divisible by
     :math:`2^{n + 1}`

103. Let :math:`p` be the integral part of :math:`R,` then :math:`[R] = p`

     Since :math:`f = R - [R] = R - p \therefore 0 < f < 1`

     and :math:`R = p  + f`

     :math:`p + f = (5\sqrt{5} + 11)^{2n + 1}`

     Let :math:`f_1 = (5\sqrt{5} - 11)^{2n + 1}`

     We observe that :math:`5\sqrt{5} - 11 = \frac{4}{5\sqrt{5} + 11}`

     :math:`\therefore 0 < f_1 < 1`

     :math:`p + f - f_1 = 2[{2n + 1}C_1.(5\sqrt{5})^{2n}.11 + {2n +
     1}C_3.(5\sqrt{5})^{2n - 2}.11^3 + \ldots]`

     :math:`=` an even number

     :math:`f - f_1 =` en even number :math:`- p =` an integer

     :math:`-1 < f - f_1 < 1`

     Thus, we can say that :math:`f - f_1 = 0 \Rightarrow f = f_1`

     :math:`\therefore Rf = Rf_1 = r^{2n + 1}`

104. Let :math:`x = 101^{50}` and :math:`y = 100^{50} + 99^{50}`

     :math:`101^{50} - 99^{50} = 100^{50} + 2[{}^{50}C_3.100^{47} + \ldots +
     {}^{50}C_{49}100]`

     :math:`= 100^{50} +` a positive number

     :math:`101^{50} - 99^{50} > 100^{50}`

     :math:`101^{50} > 100^{50} + 99^{50}`

105. :math:`t_1 = \sum_{r = 0}^n (-1)^r{}^nC_r\left(\frac{1}{2}\right) =
     \left(1 - \frac{1}{2}\right)^n = \frac{1}{2^n}`

     Similarly, :math:`t_2 = \frac{1}{2^{2n}}`

     and :math:`t_r = \frac{1}{2^{3n}}`

     :math:`\therefore` required sum :math:`= \frac{1 - \frac{1}{2^{mn}}}{2^n -
     1}`

106. :math:`32^{32} = (2 + 30)^{32} = 2^{32} + 30k,` where :math:`k \in N`

     Therefore last digits in :math:`32^{32} =` last digits in :math:`2^{32}`

     :math:`2^{32} = (2^5)^6.2^2 = 32^6.4 = (2^6 + 30r)4, r\in N`

     Last digit in :math:`2^6.4 =` last digit in :math:`64.4 = 6`

     :math:`\therefore` last digit in :math:`32^{32} = 6`

107. Let :math:`n = 2m,` where :math:`m` is a positive integer, then :math:`k =
     3m`

     L.H.S. :math:`= \sum_{r = 1}^{3m}(-3)^{r - 1}.{}^{6m}C_{2r - 1}`

     :math:`={}^{6m}C_1 - {}^{6m}C_3.3 + {}^{6m}C_5.3^2 + \ldots + (-1)^{3m -
     1}{}^{6m}C_{6m - 1}.3^{3m - 1}`

     :math:`= \frac{1}{\sqrt{3}}[{}^{6m}C_1.\sqrt{3} -
     {}^{6m}C_3.(\sqrt{3})^3 + {}^{6m}C_5(\sqrt{5})^5 - \ldots + (-1)^{3m
     - 1}.{}^{6m}C_{6m - 1}(\sqrt{3})^{6m - 1}]`

     Also, :math:`(-1)^{3m - 1} = -i(i)^{6m - 1}`

     :math:`(1 + \sqrt{3}i)^{6m} = [1 - {}^6mC_2(\sqrt{3})^2 +
     {}^{6m}C4(\sqrt{3})^4 + \ldots] + i[{}^{6m}C_1.\sqrt{3} -
     {}^{6m}C_3(\sqrt{3})^3 + \ldots + {}^{6m}C_{6m -1}(i)^{6m -
     2}(\sqrt{3})^{6m - 1}]`

     However, :math:`(1 + \sqrt{3}i)^6m = \left[2\left(\cos \frac{\pi}{3} +
     i\sin\frac{\pi}{3}\right)\right]^{6m} = 2^{6m}[\cos 2m\pi + \sin 2m\pi]`

     :math:`= 2^{6m}(1 + 0) = 2^{6m}`

     Thus, coefficient of imaginary part is :math:`0,` which proves the desired
     result.

108. :math:`t_0 = a^n, t_1 = {}^nC_1a^{n - 1}x, t_2 = {}^nC_2a^{n - 2}x^2, ...`

     Substituting :math:`x = ix,` we get

     :math:`(a + ix)^n = a^n + {}^nC1a^{n - 1}.(ix) + {}nC_2a^{n - 2}(ix)^2 +
     \ldots + {}^nC_n(ix)^n`

     :math:`=(t_0 - t_2 + t_4 - \ldots) + i(t_1 - t_3 + t_5 - \ldots)`

     Taking modulus and then squaring, we get

     :math:`(t_0 - t_2 + t_4 - \ldots)^2 + (t_1 - t_3 + t_5 - \ldots)^2 =
     (a^2 + x^2)^n`

109. Putting :math:`x = 1,` we get

     :math:`3^n = a_0 + a_1 + a_2 + a_3 + \ldots + a_{2n}`

110. Putting :math:`x = -1,` we get

     :math:`1^n = a_0 - a_1 + a_2 - a_3 + \ldots +(-1)^{2n}a_2n`

     :math:`1^n = a_0 - a_1 + a_2 - a_3 + \ldots +a_2n`

111. Substituting :math:`x = 1, \omega, \omega^2` and adding them we get the
     desired result.

112. :math:`S_n = \frac{1 - q^{n + 1}}{1 - q}`

     :math:`S_n^{'} = \frac{2^{n + 1} - (q + 1)^{n + 1}}{(1 - q).2^n}`

     Now, :math:`{}^{n + 1}C_1 + {}^{n + 1}C_2.S_1 + {}^{n + 1}C_3.S_2 +
     \ldots + {}^{n + 1}C_{n + 1}.S_n`

     :math:`= {}^{n + 1}C_1\frac{1 - q}{1 - q} + {}^{n + 1}C_2\left(\frac{1 -
     q^2}{1 - q}\right) + {}^{n + 1}C_3\left(\frac{1 - q^3}{1 - q}\right) +
     \ldots + {}^{n + 1}C_{n + 1}\left(\frac{1 - q^{n + 1}}{1 - q}\right)`

     :math:`= \frac{1}{1 - q}[({}^{n + 1}C_1 + {}^{n + 1}C_2 + \ldots + {}^{n +
     1}C_{n + 1}) -({}^{n + 1}C_1.q + {}^{n + 1}C_2.q^2 + \ldots + {}^{n +
     1}C_{n + 1}.q^{n + 1})]`

     :math:`= \frac{1}{1 - q}[2^{n + 1}- (1 + q)^{n + 1}] = 2^nS_n^{'}`

113. :math:`(\sqrt[4]{9} + \sqrt[6]{8})^{1000} = (\sqrt{3} + \sqrt{2})^{1000}`

     Clearly, terms :math:`0, 2, 4, \ldots, 1000` will be rational. Thus, total
     no. of rational terms is :math:`501.`

114. Clearly, terms which are divisible by L.C.M. of :math:`3` and :math:`5`
     i.e. :math:`15` will be rational numbers. Such terms are first and last
     term.

     Sum of rational terms :math:`= {}^{15}C_02^5 + {}^{15}C_03^3 = 59`

115. :math:`t_3 = {}^5C_2x^4(\log_{10}x)^2 = 1000,000`

     Clearly :math:`x = 10`

116. :math:`x^3 + 3x^2 - 5 + \frac{3}{x^2} - \frac{1}{x^3}`

117. Since coefficients of second, third and fourth terms are in A.P., we can write

     :math:`2{}^mC_2 = {}^mC_1 + {}^mC_3`

     :math:`m(m - 1) = m + \frac{m(m - 1)(m - 2)}{6}`

     :math:`\Rightarrow m^2 - 9m + 14 = 0 \Rightarrow m = 2, 7` but since we
     are dealing with sixth term :math:`m` will be 7 and we will need to
     discard :math:`2.`

     :math:`t_6 = {}7C_5(2^{\log(10 - 3^x)}).2^{(x - 2)\log 3} = 21`

     :math:`\Rightarrow 2^{\log(10 - 3^x) + (x - 2)\log 3} = 1`

     :math:`\log [10 - 3^x + (x - 2)\log 3] = 2`

     :math:`10 - 3^x + (x - 2)\log 3 = 100`

     Solving this yields

     :math:`\Rightarrow x = 0, 2`

118. This problem is similar to previous one and has been left as an exercise.

119. Given :math:`\frac{1}{(81)^n} - \frac{10}{(81)^n}{}^{2n}C_1 +
     \frac{10^2}{(81)^n}{}^{2n}C_2 - \frac{10^3}{(81)^n}{}^{2n}C_3 + \ldots +
     \frac{10^{2n}}{(81)^n} = 1`

     L.H.S. :math:`= \frac{1}{81^n}(1 - 10)^{2n}`

     :math:`= \frac{1}{81^n}(-9^2)^n = \frac{1}{81^n}81^n = 1`

120. :math:`\because {}^nC_r = {}^nC){n - r}`

     :math:`\therefore S_n = {}^nC_0 - {}^nC_1\frac{2}{3} +
     {}^nC_2\left(\frac{2}{3}\right)^2 - \ldots +
     (-1)^n\left(\frac{2}{3}\right){}^nC_n`

     :math:`= \left(1 - \frac{2}{3}\right)^n = \frac{1}{3^n}`

     :math:`\therefore \lim_{n \to \infty}S_n = 0`

121. This problem can be solved like 103 and has been left as an exercise.

122. :math:`\sum_{r = 0}^n(-1)^r.{}^nC_r\left[\frac{1}{2^r} +
     \frac{3^r}{2^{2r}} + \frac{7^r}{w^{3r}} + \ldots~\text{up
     to}~n~\text{terms}\right]`

     :math:`= \left(1 - \frac{1}{2}\right)^n + \left(1 - \frac{1}{4}\right)^n +
     \left(1 - \frac{1}{8}\right)^n + \ldots n` terms

     :math:`= \frac{1}{2^n} + \frac{1}{2^{2n}} + \frac{1}{2^{3n}} + \ldots n`
     terms

     Summing this G.P. yields

     :math:`= \frac{1}{2^n - 1} - \frac{1}{2^{n^2}(2^n - 1)}`

123. :math:`17^{256} = 289^{128} = (290)^{128}`

     :math:`= 1000m + {}^{128}C_{126}290^2 - {}^{128}C_{127}290 + 1 [m \in I]`

     :math:`= 1000(m + 683527) + 681`

     Thus the digits are :math:`6, 8` and :math:`1.`

124. :math:`(n + 1)^n = n^n\left(1 + \frac{1}{n}\right)^n`

     Upon expansion(as shown in following problem) you will find that
     :math:`\left(1 + \frac{1}{n}\right)^n < n`

     Thus, :math:`n^{n + 1} > (n + 1)^n`

125. :math:`\left(1 + \frac{1}{n}\right)^n = 1 + 1 + \frac{1}{2!}\left(1 -
     \frac{1}{n}\right) + \frac{1}{3!}\left(1 - \frac{1}{n}\right)\left(1 -
     \frac{2}{n}\right) + \ldots`

     :math:`< 1 + 1 + \frac{1}{2!} + \frac{1}{3!} + \ldots + \frac{1}{n!}`

     :math:`< 1 + 1 + \frac{1}{2} + \frac{1}{2^2} + \ldots + \frac{1}{2^{n -
     1}}`

     :math:`= 3 - \frac{1}{2^{n - 1}}`

     Thus, we have proven the desired inequality.

126. We will make
     use of the fact that :math:`x^n - y^n` is divisible by :math:`x - y`

     :math:`(1992^{1998} - 1955^{1998}) - (1938^{1998} - 1901^{1998})` is
     divisible by :math:`37`

     :math:`(1992^{1998} - 1938^{1998}) - (1955^{1998} - 1901^{1998})` is
     divisible by :math:`54`

     :math:`\therefore 1992^{1998} - 1955^{1998} - 1938^{1998} + 1901^{1998}`
     is divisible by :math:`37*54` i.e. :math:`1998`

127. Given expression is :math:`(50 + 3)^{53} - {30+ 3}^{33}`

     :math:`= 50p + {}^{53}C_{53}3^{53} - 30q - {}^{33}C_{33}3^{33}, p, q \in
     I`

     Thus, now we have to prove that :math:`3^{53} - 3^{33}` is divisible by
     :math:`10`

     :math:`3^{33}(3^{20} - 1)` now if you see carefully :math:`3^{20} =
     81^{5}` which will awlays have last digit as 1. Thus, :math:`3^{20} - 1`
     will be always divisible by :math:`10` making out original expression also
     divisible by 10.

128. :math:`(1 + x)^{m + 1} = {}^{m + 1}C_0 + {}^{m + 1}C_1x + {}^{m + 1}C_2x^2
     + \ldots + {}^{m + 1}C_mx^m + {}{m + 1}C_{m + 1}x^{m + 1}`

     :math:`(1 + x)^{m + 1} - 1 - x^{m + 1} = {}^{m + 1}C_1x + {}^{m + 1}C_2x^2
     + \ldots + {}^{m + 1}C_mx^m`

     Substituting :math:`x = 1, 2, 3, 4, \ldots, n` in the above expression and
     adding, we get

     :math:`= (n + 1)^{m + 1} - (n + 1)`

129. :math:`\sum_{i = 1}^k\sum_{k = 1}^n{}^nC_k{}^kC_i`

     :math:`= \sum_{k = 1}^n({}^nC_k).({}^kC_1) + \sum_{k =
     1}^n({}^nC_k).({}^kC_2) + \ldots + {}^nC_n.{}^nC_n`

     :math:`= {}^nC_1.{}^1C_1 + {}^nC_2({}^2C_1 + {}^2C_2) + \ldots +
     {}^nC_n({}^nC_1 + {}^nC_2 + \ldots + {}^nc_n)`

     :math:`= {}^nC_1(2 - 1) + {}^nC_2.(2^2 - 1) + \ldots + {}^nC_n(2^n - 1)`

     :math:`= {2 + 1}^n - 1 + {1 + 1}^n - 1 = 3^n - 2^n`

130. Though it may appear that this problem is dependent on logarithmic
     manipulation but sych is not the case. We will prove it for general value
     :math:`z` rather than :math:`10`

     :math:`\sum_{r=0}^n{(-1)^r\binom{n}{r}\frac{1+r\log
     z}{(1+\log z^n)^r}}`

     :math:`=\sum_{r=0}^n(-1)^r\binom{n}{r}\frac{1}{\left(1+\log z^n\right)^r}
     +\sum_{r=1}^n(-1)^r\binom{n-1}{r-1}\frac{n\log z}{\left(1+\log
     z^n\right)^r}`

     :math:`=1+\sum_{r=1}^{n-1}(-1)^r\left(\binom{n-1}{r}+\binom{n-1}{r-1}\right)\frac{1}{\left(1+\log
     z^n\right)^r} +(-1)^n\frac{1}{(1+\log
     z^n)^r}-\sum_{r=0}^{n-1}(-1)^r\binom{n-1}{r}\frac{\log z^n}{\left(1+\log
     z^n\right)^{r+1}}`

     :math:`=1+\sum_{r=1}^{n-1}(-1)^r\binom{n-1}{r}\frac{1}{\left(1+\log
     z^n\right)^r} -\sum_{r=0}^{n-2}(-1)^r\binom{n-1}{r}\frac{1}{\left(1+\log
     z^n\right)^{r+1}} +(-1)^n\frac{1}{(1+\log
     z^n)^r}-\sum_{r=0}^{n-1}(-1)^r\binom{n-1}{r}\frac{\log z^n}{\left(1+\log
     z^n\right)^{r+1}}`

     :math:`=1+\sum_{r=1}^{n-1}(-1)^r\binom{n-1}{r}\frac{1}{\left(1+\log
     z^n\right)^r}+(-1)^n\frac{1}{(1+\log z^n)^r}
     -\sum_{r=0}^{n-2}(-1)^r\binom{n-1}{r}\frac{1}{\left(1+\log
     z^n\right)^{r}}+(-1)^n\frac{\log z^n}{(1+\log z^n)^n}`

     :math:`=1+(-1)^{n-1}\frac{1}{(1+\log z^n)^{n-1}}+(-1)^n\frac{1}{(1+\log
     z^n)^{n-1}}-1+(-1)^n\frac{\log z}{(1+\log z^n)^n}`

     :math:`{=0}`

131. :math:`32^{32} = (2^5)^{32} = 2^{160} = {3 - 1}^{160} = 3m + 1, m \in N`

     :math:`{32}^{32^{32}} = 32^{3m + 1} = 2^{15m + 5} = 2^{3{5m + 1}}.2^2`

     :math:`=8^{5m + 1}.4 = 32.8^{5m} = 32(1 + 7)^{5m}`

     :math:`=32(1 + 7k), k \in N = 4 + 28 + 7(32k) = 4 + 7r, r \in N`

     Thus, remainder is :math:`4` when divided by :math:`7`

132. Let :math:`t = x - 3,` then :math:`x - 2 = 1 + t`

     :math:`\sum_{r=0}^{2n}a_r(x - 2)^r = \sum_{r=0}^{2n}b_r(x - r)^r`

     :math:`\Rightarrow \sum_{r=0}^{2n}a_r(1 + t)^r = \sum_{r=0}^{2n}b_rt^r`

     Equating coefficients of :math:`t^n` we obtain desired result.

133. Given expression is :math:`= (1 + x)^{1000}\left[1 + 2\frac{x}{1 + x} +
     3\left(\frac{x}{1 + x}\right)^2 + \ldots + 1001\left(\frac{x}{1 +
     x}\right)^{1000}\right]`

     The series is arithmetico-geometric series. Solving it yields

     :math:`= (1 + x)^1002 - x^{1001}(1 + x) - 1001.x^{1001}`

     Required coefficient of :math:`x^{50} = {}^{1000}C_50`

134. L.H.S. = coeff. of :math:`x^n` in :math:`(1 + x)^n + (1 + x)^{n + 1} +
     \ldots + (1 + x)^{n + k}`

     :math:`(1 + x)^n + (1 + x)^{n + 1} + \ldots + (1 + x)^{n + k}`

     :math:`= (1 + x)^n\left[\frac{1 + x}^{k + 1 - 1}{x}\right]`

     :math:`= \frac{1}{x}(1 + x)^{n + k + 1} - \frac{1}{x}(1 + x)^n`

     Coeff. of :math:`x^n = {}^{n + k + 1}C_{n + 1}`

     Hence, we have proved the desired equation.

135. Let :math:`S = (x + 2x^2 + 3x^3 + \ldots + nx^n)`

     :math:`xS = x^2 + 2x^3 + \ldots + (n - 1)x^n + nx^{n + 1}`

     :math:`S = x\frac{1 - x^n}{(1 - x)^2} - n\frac{x^{n + 1}}{1 - x}`

     :math:`(1 + x + 2x^2 + 3x^3 + \ldots + nx^n)^2 = \left[1 + \frac{x(1 -
     x^n)}{1 - x}^2 - \frac{nx^{n + 1}}{1 - x}\right]^2`

     Required coeff. of :math:`x^n` = coeff. of :math:`x^n` in :math:`\left(1 +
     \frac{x}{(1 - x)^2}\right)^2` [leaving terms containing powers of
     :math:`x` greater than :math:`n`]

     :math:`=` coeff. of :math:`x^n` in :math:`\left[1 + \frac{2x}{(1 - x)^2} +
     \frac{x^2}{(1 - x)^4}\right]`

     Solving this yields answer as :math:`\frac{n(n ^2 + 11)}{6}`

136. Let :math:`S = 1 + (1 + x) + (1 + x)^2 + \ldots + (1 + x)^n`

     :math:`(1 + x)S = (1 + x) + (1 + x)^2 + \ldots + (1 + x)^n + (1 + x)^{n +
     1}`

     Subtracting, we get

     :math:`xS = (1 + x)^{n + 1} - 1`

     :math:`\therefore ` coff. of :math:`x^k` in :math:`S = {}^{n + 1}C_{k + 1}`

137. Let the expression be :math:`E = (x + 1)^n + (x + 1)^{n - 1}(x + 2) + (x +
     1)^{n - 2}(x + 2)^2 + \ldots + (x + 2)^n`

     We know that :math:`(x - y)(x^{n - 1} + x^{n - 2}y + \ldots + y) = x^n -
     y^n`

     Thus, :math:`E(x + 2 - x - 1) = (x + 2)^{n + 1} - (x + 1)^{n + 1}`

     Coeff. of :math:`x^3` in :math:`(x + 2)^{n + 1} - (x + 1)^{n + 1}` is

     :math:`= {}^{n + 1}C_3.2^{n - 2} - {}^{n + 1}C_3`

138. :math:`\left(\frac{a + 1}{a^{\frac{2}{3}} - a^{\frac{1}{3}} + 1} - \frac{a -
     1}{a - a^{\frac{1}{2}}}\right)^{10}`

     :math:`= (\sqrt[3]{a} - \frac{1}{\sqrt{a}})^{10}`

     :math:`t_{r + 1} = {}^{10}C_r a^{\frac{10 - r}{3}}a^{-\frac{r}{2}}`

     Since the term has to be independent of :math:`a, \Rightarrow \frac{10 -
     r}{3} - \frac{r}{2} \Rightarrow r = 4`

     Thus :math:`t_5 = {}^{10}C_4 = 210`

139. Coeff. of :math:`x^2` in :math:`\left(x + \frac{1}{x}\right)^{10}(1 - x +
     2x^2) =` coeff. of :math:`x^2` in :math:`\left(x +
     \frac{1}{x}\right)^{10}` - coeff. of :math:`x` in :math:`\left(x +
     \frac{1}{x}\right)^{10}` - 2 * coeff. of term independent of :math:`x` in
     :math:`\left(x + \frac{1}{x}\right)^{10}`

     :math:`(r + 1)^{th}` term in :math:`\left(x + \frac{1}{x}\right)^{10} =
     {}^{10}C_rx^{10 - r}x^{-r} = {}^{10}C_rx^{10 - 2r}`

     Coeff. of :math:`x^2` means :math:`10 - 2r = 2 \Rightarrow r = 4.` Thus,
     coeff. :math:`= {}^10C_4 = 210`

     Coeff. of :math:`x` means :math:`10 - 2r = 1` which makes :math:`r` a
     fraction. Thus, coeff. :math:`= 0`

     Coeff. of term indepdent of :math:`x` means :math:`10 -2r = 0 \Rightarrow
     r = 5.` Thus, coeff. :math:`= 2.{}^10C_5 = 504`

     Thus, final coeff. :math:`= 210 + 504 = 714`

140. Coeff. of :math:`x^4` in :math:`(1 + x - 2x^2)^6 =` coeff. of :math:`x^r`
     in :math:`(1 + x(1 - 2x))^6`

     Thus coefficient of :math:`x^4` will occur in :math:`3^{rd}` terms onward.

     Adding coefficients we get :math:`-45` as our answer.

141. We have :math:`(1 + x + 2x^3)\left(\frac{3}{2}x^2 - \frac{1}{3x}\right)^9`

     :math:`= (1 + x + 2x^3)\left[\left(\frac{3}{2}x^2\right)^9 -
     {}^9C_1\left(\frac{2}{2}x^2\right)^8\frac{1}{3x} + \ldots +
     (-1)^9\left(\frac{1}{3x}\right)^9\right]`

     Thus, the term independent of :math:`x` in the expansion is :math:`1a_0 +
     1a_1 + 2a_3` where :math:`a_m` is the coefficient of :math:`x^m` in the
     second bracket :math:`[]` of previous equation. Now, :math:`(r + 1)^{th}`
     term in :math:`[]` of previous equation is

     :math:`{}^9C_r\left(\frac{3}{2}x^2\right)^{9 -
     r}\left(-\frac{1}{3x}\right)^r =
     (-1)^r{}^9C_r\left(\frac{3}{2}\right)^{9 -
     r}\left(\frac{1}{3^r}\right)x^{18 -r}`

     :math:`\therefore a_{18 - 3r} =` coeff. of :math:`x^{18 - 3r}`

     For :math:`a_0, 18 - 3r = 0 \Rightarrow r = 6 \Rightarrow a_0 = {}^9C_6
     \frac{3^3}{2^3}\frac{1}{3^6} = \frac{7}{18}`

     For :math:`a_1, 18 - 3s = 1, \Rightarrow r = \frac{19}{3}` which is
     fractional. :math:`\therefore a_1 = 0`

     For :math:`a_3, 18 - 3r = 3 \Rightarrow r - 7 \Rightarrow a_3 =
     -{}^9C_7\left(\frac{3}{2}\right)^2\frac{1}{3^7} = -\frac{1}{27}`

     Thus, required term :math:`= 1.\frac{7}{18} + .0 + 2.\frac{-1}{27} =
     \frac{17}{52}`

142. Given :math:`\left(x^2 + \frac{1}{x^3}\right)^7(2 - x)^{10}` and we have
     to find term independent of :math:`x` in this.

     Coeff of term independent of :math:`x` to be found in
     :math:`\frac{1}{x^{21}}(x^5 + 1)^7(2 - x)^{10}` i.e. coeff. of
     :math:`x^{21}` in :math:`(x^5 + 1)^7(2 - x)^{10}`

     :math:`(x^5 + 1)^7` will have coeff. of powers of :math:`x` where powers
     will be :math:`35, 30, 25, 20, \ldots, 0` while :math:`(2 - x)^{10}` will
     have powers of :math:`1, 2, 3, \ldots, 10`

     Clearly, combinations of :math:`20` and :math:`1` and :math:`15` and
     :math:`6` satisfy our needs.

     Thus, computing these terms leads to answer of :math:`-61600`

143. We have to find term independent of :math:`x` in :math:`(1 + x + x^{-2} +
     x^{-3})^{10}`

     Coeff. of term independent of :math:`x` in :math:`\frac{1}{x^30}(1 +
     x)^{10}(1 + x^3)^{10}`

     :math:`(1 + x)^{10}` will have powers of :math:`x` in :math:`0, 1, 2, 3,
     \ldots, 10` while :math:`(1 + x^3)^{10}` will have powers of :math:`x` in
     :math:`0, 3, 6, 9, \ldots, 30`

     Thus, combinaions of :math:`(0, 30), (3, 27), (6, 24), (9, 21)` are the
     combinations which will satisfy our needs, where first number is power of
     :math:`x` in :math:`(1 + x)^{10}` and second number is power of :math:`x`
     in :math:`(1 + x^3)^{10}`

     Thus coeff. is :math:`= {}^{10}C_1.{}^{30}C_{30} +
     {}^{10}C_3.{}^{30}C_{27} + {}^{10}C_6.{}^{30}C_{24} +
     {}^{10}C_9.{}^{30}C_{21}`

144. Given :math:`(1 + x^2)^2(1 + x)^n = \sum_{k = 0}^{n + 4}a_kx^k`

     :math:`a_1, a_2, a_3` are coefficients of :math:`x, x^2, x^3`
     respectively.

     Thus, we can find :math:`a_1, a_2, a_3` like we did in 143 and then apply
     arithmetic progression confition :math:`2a_2 = a_1 + a_3` to find
     :math:`n`

145. We have to prove that :math:`{}^mC_1 + {}^{m + 1}C_2 + {}^{m + 2}C_3 +
     \ldots + {}^{m + n - 1}C_n = {}^nC_1 + {}^{n + 1}C_2 + {}^{n + 2}C_3 +
     \ldots + {}^{n + m - 1}C_n`

     Keep in mind that :math:`{}^mC_0 = {}^nC_0`

     Adding :math:`{}^mC_0` to L.H.S., we get :math:`{}^mC_0 + {}^mC_1 +
     {}^{m + 1}C_2 + {}^{m + 2}C_3 + \ldots + {}^{m + n - 1}C_n`

     Now we know that :math:`{}^nC_r + {}^nC_{r - 1} = {}^{n + 1}C_r` applying
     the repeatedly we obtain L.H.S. as :math:`{}^{m + n}C_n`

     Similarly adding :math:`{}^nC_0` to R.H.S. and applying above formula
     repeatedly we obtain R.H.S. as :math:`{}^{m + n}C_m`

     Clearly, :math:`{}^{m + n}C_m = {}^{m + n}C_n`

146. Let us solve these one by one.

     1. We observe that :math:`1 + x + x^2 = (x + \omega)(x + \overline{\omega})`
        where :math:`\omega` and :math:`\overline{\omega}` are cube root of unity
        not equal to :math:`-1`

        :math:`\sum_{r=0}^{2n}c_rx^r=(x^2+x+1)^n=(x+w)^n(x+\overline{w})^n=\sum_{k=0}^n\binom{n}{k}x^kw^{n-k}\cdot
        \sum_{l=0}^n\binom{n}{\ell}x^l \overline{w}^{n-l}`

        Thus,
        :math:`a_r=\sum_{j=0}^r\binom{n}{j}\binom{n}{r-j}w^{n-j}\overline{w}^{\,n-(r-j)}=\sum_{j=0}^r\binom{n}{j}\binom{n}{r-j}w^{r-2j}`

        Thus, :math:`a_r = a_{2n - r}`

    2. :math:`a_r = a_{2n - r}` from previous part.

       Substituting :math:`x = 1`

       :math:`a_0 + a_1 + \ldots + a_2n = 2(a_0) + 2(a _1)  + \ldots +
       2a_{n - 1} + a_n = 3^n`

       :math:`\Rightarrow a_0 + a_1 + a_2 + \ldots + a_{n - 1} = \frac{1}{2}(3^n - a_n)`

    3. Differentiating and using result obtained in part 1 we can prove this.

147. Given :math:`\frac{(1 - x^3)^n}{(1 - x)^{3n}} = \sum_{r =
     0}^na_r\frac{x^r}{(1 - x)^{2r}}`

     :math:`\Rightarrow \left(\frac{1 + x + x^2}{(1 - x)^2}\right)^n = \sum_{r
     = 0}^na_r\alpha^r,` where :math:`\alpha = \frac{x}{(1 - x)^2}`

     :math:`(1 + 3\alpha)^n = \sum_{r = 0}^na_r\alpha^r`

     Coeff of :math:`\alpha^r = a_r = {}^nC_r3^r`

148. Coeff. of middle term of :math:`(1+ x)^{2n} = {}^{2n}C_n`

     Coeff. of :math:`x^n` in :math:`(1 + x)^{2n - 1} = {}^{2n - 1}C_n`

     Clearly, :math:`2.{}^{2n - 1}C_n = {}^{2n}C_n`

149. Coeff. of terms in the expansion of :math:`(x + y)^{200}` are
     :math:`{}^{200}C_1, {}^{200}C_2, {}^{200}C_3, \ldots, {}^{200}C_{200}`

     Since middle term has greatest coefficient, therefore :math:`r = 100`

150. Let committees of :math:`r` persons be made out of :math:`20`
     persons. Then number of committees :math:`= {}^20C_r`

     Since middle term has greatest coefficient therefore :math:`{}^{20}C_r`
     will be maximum when :math:`r = 10`

     Therefore, :math:`10` persons should be chosen for maximum no. of
     committees.
