.. meta::
   :author: Shiv Shankar Dayal
   :title: Binomial Theorem
   :description: Algebra
   :keywords: Algebra, ratio, proportions, variations, complex numbers,
              arithmetic progressions, geometric progressions, harmonic
              progressions, series, sequence, quadratic equations,
              permutations, combinations, lograithms, binomial theorem,
              determinant, matrices

Binomials, Multinomials and Expansions Solutions Part 1
*******************************************************
1. :math:`\left(x + \frac{1}{x}\right)^5`

   :math:`= {}^5C_0x^5 + {}^5C_1x^4\frac{1}{x} + {}^5C_2x^3\frac{1}{x^2} +
   {}^5C_3x^2\frac{1}{x^3} + {}^5C_4x\frac{1}{x^4} + {}^5C_5\frac{1}{x^5}`

   :math:`= x^5 + 5x^3 + 10x + \frac{10}{x} + \frac{5}{x^3} + \frac{1}{x^5}`

2. :math:`(10.1)^5 = (10 + 0.1)^5`

   :math:`= 10^5 + {}^5C_110^4(0.1) + {}^5C_210^3(0.1)^2 + {}^5C_310^2(0.1)^3 +
   {}^5C_410(0.1)^4 + (0.1)^5`

   :math:`= 100000 + 5000 + 100 + 1 + 0.0005 + 0.00001`

   :math:`= 105101.000501`

3. Let :math:`\sqrt{x - 1} = a`

   :math:`(x + \sqrt{x - 1})^6 = (x + a)^6`

   :math:`= x^6 + {}^6C_1x^5a + {}^6C_2x^4a^2 + {}^6C_3x^3a^3 + {}^6C_4x^2a^4 +
   {}^6C_5xa^5 + a^6`

   :math:`(x - \sqrt{x - 1})^6 = (x - a)^6`

   :math:`= x^6 - {}^6C_1x^5a + {}^6C_2x^4a^2 - {}^6C_3x^3a^3 + {}^6C_4x^2a^4 -
   {}^6C_5xa^5 + a^6`

   :math:`\therefore (x + \sqrt{x - 1})^6 + (x - \sqrt{x - 1})^6 = 2x^6 +
   2{}^6C_2x^4a^2 + 2{}^6C_4x^2a^4 + 2a^6`

   :math:`= 2[x^6 + 15x^5 - 29x^3 + 12x^2 + 3x - 1]`

4. Clearly :math:`(x + a)^n = A + B` and :math:`(x - a)^n = A - B`

   Thus, :math:`A^2 - B^2 = (x^2 - a^2)^n`

5. Let us solve these two parts one by one

   i. Given :math:`(7 + 4\sqrt{3})^n = \alpha + \beta`

      :math:`7 - 4\sqrt{3} = \frac{49 - 48}{7 + 4\sqrt{3}} = \frac{1}{7 +
      4\sqrt{3}} < 1`

      :math:`\therefore (7 - 4\sqrt{3})^n = \beta_1 < 1`

      :math:`\alpha + \beta + \beta_1 = 2[7^n + {}^nC_27^{n - 2}48 + \ldots]`

      :math:`=~\text{an even integer}`

      :math:`\beta + \beta_1 =~\text{an even integer - a positive integer = an
      integer}`

      :math:`\because 0 < \beta < 1` and :math:`0 < \beta_1 < 1`

      :math:`\therefore 0 < \beta + \beta_1 < 2`

      :math:`\therefore \beta + \beta_1 = 1`

      :math:`\alpha + 1 =~\text{an even number}~\therefore \alpha =~\text{an odd number}`

   ii. :math:`(\alpha + \beta)(1 - \beta) = (\alpha + \beta)\beta_1`

       :math:`= (7 + 4\sqrt{3})^n(7 - 4\sqrt{3})^n = 1`

6. Let :math:`r^{th}` term contain :math:`\frac{1}{y^2}`

   :math:`t_r = {}^{10}C_{r - 1}y^{10 - r + 1}\left(\frac{c^3}{y^2}\right)^{r -
   1}`

   :math:`={}^{10}C_{r - 1}y^{13 - 3r}c^{3r - 3}`

   :math:`\therefore 13 -3r - =2\Rightarrow r = 5`

   :math:`\therefore` Coefficient of :math:`y^-2 = {}^{210}c^{12}`

7. :math:`(1 + 3x + 3x^2 + x^3)^{15} = [(1 + x)^3]^{15} = (1 + x)^{45}`

   :math:`\therefore` Coefficient of :math:`x^9 = {}^{45}C_9 =
   \frac{45!}{9!36!}`

8. Let :math:`r^{th}` term be independent of :math:`x`

   :math:`t_r = {}^9C_{r -1}\left(\frac{3}{2}x^2\right){10 -
   r}\left(-\frac{1}{3x}\right)^{r - 1}`

   :math:`= (-1)^{r - 1}{}^9C_{r - 1}\left(\frac{3}{2}\right)^{10 -
   r}\frac{1}{3^{r - 1}}x^{21 - 3r}`

   :math:`\therefore 21 - 3r = 0 \Rightarrow r = 7`

   :math:`\therefore` Coefficient :math:`= \frac{7}{18}`

9. :math:`(1 + x)^m\left(x + \frac{1}{x}\right)n = x^{-n}(1 + x)^{m + n}`

   Thus, the term which will have :math:`x^n` in :math:`(1 + x)^{m + n}` will
   be independent of :math:`x.`

   :math:`\therefore` Coefficient of :math:`x^n` in :math:`(1 + x)^{m + n} =
   {}^{m + n}C_n = \frac{(m + n)!}{m!n!}`

10. Coefficient of :math:`x^{-1}` in :math:`(1 + 3x^2 + x^4)\left(1 +
    \frac{1}{x}\right)^8 =` coefficient of :math:`x^{-1}` in :math:`\left(1 +
    \frac{1}{x}\right)^8` + :math:`3 *` coefficient of :math:`x^{-3}` in
    :math:`\left(1 + \frac{1}{x}\right)^8` + coefficient of :math:`x^{-5}` in
    :math:`\left(1 + \frac{1}{x}\right)^8`

    :math:`r^{th}` term in the expansion of :math:`\left(1 +
    \frac{1}{x}\right)^8` is given by :math:`t_r = {}^8C_{r - 1}x^{1 - r}`

    When :math:`1 - r = 1, r = 2,` coefficient :math:`= {}^8C_1`

    When :math:`1 - r = -3, r = 4,` coefficient :math:`= {}^8C_3`

    When :math:`1 - r = -5, r = 6` coefficient :math:`= {}^8C_5`

    Required coefficient :math:`= {}^8C_1 + {}^8C_3 + {}^8C_5 = 222`

11. :math:`a_{r - 1} = {}^{2n - 1}C_{r - 1}(-1)^{r - 1}`

    :math:`a_{2n - r} = {}^{2n - 1}C_{r - 1}(-1)^{r}`

    :math:`a_{r - 1} + a_{2n - r} = 0`

12. :math:`t_r = {}^{10}C_{r - 1}x^{\frac{15 - 5r}{2}}k^{r - 1}`

    Since the term is independent of :math:`x, \therefore 15 - 5r = 0
    \Rightarrow r = 3`

    :math:`t_3 = {}^{10}C_2k^2 = 405 \therefore k = \pm 3`

13. :math:`t_k = {}^{n - 3}C_{k - 1}x^{n - 3k}`

    Since :math:`t_k` should contains :math:`x^{2r}, \therefore 2k = n - 3k`

    :math:`k = \frac{n - 2r}{3}`

    If :math:`n - 2r` is not divisible by :math:`3` then the expansion will
    have no term with :math:`x^{2r}`

14. :math:`t_r = {}^nC_{r - 1}x^{an - (a + b)(r - 1)}`

    Since the term has to be independent of :math:`x, \Rightarrow an - (a +
    b)(r - 1) = 0`

    :math:`r = 1 + \frac{an}{a + b}`

    Thus, for :math:`r` to be an integer :math:`an` must be a multiple of
    :math:`a + b`

15. :math:`\left(x + \frac{1}{x}\right)^7 = x^7 + {}^7C_1x^5 + {}^7C_2x^3 +
    {}^7C_3x + {}^7C_4x^{-1} + {}^7C_5x^{-3} + {}^7C_6x^{-5} + x^{-7}`

    :math:`= x^7 + 7x^5 + 21x^3 + 35x + 35x^{-1} + 21x^{-3} + 7x^{-5} + x^{-7}`

16. This problem is simple and has been left as an exercise.

17. :math:`(1 + ax)^n = 1 + 8x + 24x^2 + \ldots = 1 + {}^nC_1ax + {}^nC_2a^2x^2
    + \ldots`

    Comparing coefficients of :math:`x, an = 8`

    Comparing coefficients of :math:`x^2, \frac{n(n - 1)}{2}a^2 = 24`

    :math:`\Rightarrow \frac{64 - 8a}{2} = 24, \Rightarrow a = 2, n = 4`

18. This problem is simple and similar to 3 and has been left as an exercise.

19. :math:`t_7 =
    {}^9C_6\left(\frac{4x}{5}\right)^3\left(-\frac{5}{2x}\right)^6`

    :math:`= \frac{10500}{x^3}`

20. This problem is simple and similar to 3 and 18 and has been left as an
    exercise.

21. :math:`(0.99)^{15} = (1 - 0.01)^15`

    Since we have to evaluate only for :math:`4` decimal places considering
    first four terms will do.

    First three terms :math:`= {}^{15}C_0 - {}^15C_1(.01) + {}^{15}C_2(.01)^2 +
    {}^{15}C_3(.01)^3 =
    1 - .15 + .0105 - .000455 = 0.8600`

22. :math:`(999)^3 = (1000 - 1)^3 = 1000^3 - 3. \frac{1000^2}{2} +
    3.\frac{1000}{2} - 1`

    :math:`= 99700299`

23. :math:`(0.99)^{10} = (1 - 0.01)^{10}`

    Since we have to evaluate only for :math:`4` decimal places considering
    first four terms will do.

    First three terms :math:`= {}^{10}C_0 - {}^10C_1(.01) + {}^{10}C_2(.01)^2 -
    {}^{10}C_3(.01)^3 = 10 - .1 + 0.0045 - .000105 = .9044`

24. This problem is simple and similar to 21 and 23 and has been left as an
    exercise.

25. :math:`A = {}^nC_0x^n + {}^nC_2x^{n - 2}a^2 + {}^nC_4x^{n - 4}a^4 + \ldots`

    :math:`B = {}^nC_1x^{n - 1}a + {}^nC_3x^{n - 3}a^3 + {}^nC_5x^{n - 5}a^5 +
    \ldots`

    :math:`(x + a)^{2n} - (x - a)^{2n} = 2[{}^{2n}C_1x^{2n - 1}a +
    {}^2nC_3x^{2n - 3}a^3]`

    :math:`4AB = 4{}^nC_0{}^nC_1x^{2n - 1}a + 4x^{2n - 3}a^3[{}^nC_0{}^nC_3 +
    {}^nC_1{}^nC_2 + \ldots]`

    Thus, we see that :math:`4AM = (x + a)^n - (x - a)^n`

26. Let :math:`(5 + 2\sqrt{6})^n = \alpha + \beta` where :math:`\alpha` is a
    positive integer and :math:`beta` is a proper fracttion.

    Also let, :math:`\gamma = (5 - 2\sqrt{6})^n`

    Now, :math:`5 - 2\sqrt{6} = \frac{5^2 - 4*6}{5 + 2\sqrt{6}} = \frac{1}{5 +
    2\sqrt{6}} < 1`

    :math:`\therefore \gamma^n < 1`

    :math:`\alpha + \beta + \gamma = 2[5^n + {}^nC_25^{n - 2}6^2 + \ldots] =`
    An even number

    :math:`\beta + \gamma =` An even number :math:`-` An interger = An integer

    :math:`0 < \beta < 1` and :math:`0 < \gamma < 1`

    :math:`\therefore \beta + \gamma = 1`

    :math:`\therefore \alpha` is an off number.

27. This problem is simple and similar to 5. It has been left as an exercise.

28. :math:`t_r = {}^9C_{r - 1}(2x)^{9 - r + 1}\left(-\frac{3}{x}\right)^{r -
    1}`

    :math:`= {}^9C_{r - 1}2^{9 -r + 1}(-3)^{r - 1}x^{9 - r + 1 - r + 1}`

    Now the power of :math:`x` should be :math:`1, \therefore 11 - 2r = 1
    \Rightarrow r = 5`

    Coefficients  of :math:`x` is :math:`= {}^9C_42^{5}(-3)^{4} = 2592{}^9C_4`

29. :math:`t_r = {}^{11}C_{r - 1}(3x^2)^{11 - r + 1}(5x)^{1 - r}`

    :math:`= {}^{11}C_{r- 1}3^{12 - r}(5)^{r - 1}x^{24 - 2r + 1 - r}`

    :math:`7 = 25 - 3r \Rightarrow r = 6`

    :math:`\therefore` Coefficients of :math:`t_6 = {}^{11}C_53^65^5`

30. :math:`t_r = {}^{20}C_{r - 1}(2x^2)^{20 - r + 1}(-x)^{1 - r}`

    :math:`= {-1}^{r - 1}{}^{20}C_{r - 1}2^{21 - r}x^{42 - 2r + 1 - r}`

    Since we need coefficients of :math:`x^9, \therefore 9 = 43 - 3r,
    \Rightarrow r = \frac{34}{3}`

    Since :math:`r` is not an integer, there is no term containing :math:`x^9`
    leading coefficient to be :math:`0.`

31. :math:`t_r = {}^{15}C_{r - 1}(x^2)^{15 -r + 1}(3ax^{-1}){r - 1}`

    :math:`t-r = {}^{15}C_{r - 1}.(3a)^{r - 1}x^{32 - 2r + 1 - r}`

    Since we need coefficients of :math:`x^{24}, \therefore 24 = 33 - 3r`

    :math:`\Rightarrow r = 3`

    :math:`\therefore` Coefficient of :math:`x^{24} = 9a^2{}^{15}C_2`

32. :math:`t_r = {}^9C_{r - 1}(x^2)^{9 - r + 1}(-3x^{-1})^{r - 1}`

    :math:`= {}^9C_{r - 1}(-3)^{r - 1}x^{20 - 2r + 1 - r}`

    Since we need coefficients of :math:`x^{9}, \therefore 9 = 21 - 3r,
    \Rightarrow r = 4`

    :math:`\therefore` Coefficent of :math:`x^9, = 27.{}^9C_3`

33. :math:`t_r = {}^{11}C_{r - 1}(2x)^{11 -r + 1}\left(\frac{1}{3x^2}\right)^{r
    - 1}`

    :math:`= {}^{11}C_{r - 1}2^{12 - r}\frac{1}{3^{r - 1}}x^{12 - r + 2 - 2r}`

    Since we need coefficients of :math:`x^{-7}, \therefore -7 = 14 - 3r,
    \Rightarrow r = 7`

    :math:`\therefore` Coefficients of :math:`x^{-7}, =
    {}^{11}C_62^6\frac{1}{3^5}`

34. :math:`r^{th}` term in the expansion of :math:`\left(ax^2 +
    \frac{1}{bx}\right)^{11}` is given by :math:`t_r = {}^{11}C_{r -
    1}(ax^2)^{12 - r}\frac{1}{(bx)^{r - 1}}`

    :math:`t_r = {}^{11}C_{r - 1}a^{12 - r}b^{1 - r}x^{24 - 2r + 1 - r}`

    Since we need coefficient of :math:`x^7, 7 = 25 -3r, \Rightarrow r = 6`

    Coefficient of :math:`x^7, = {}^{11}C_5a^6b^{-5}`

    :math:`r^{th}` term in the expansion of :math:`\left(ax +
    \frac{1}{bx^2}\right)^{11}` is given by :math:`t_r = (-1)^{r - 1}.{}^{11}C_{r -
    1}(ax)^{12 - r}\frac{1}{(bx^2)^{r - 1}}`

    :math:`t_r = (-1)^{r- 1}.{}^{11}C_{r - 1}a^{12 -r}b^{1 - r}x^{12 - r + 2 - 2r}`

    Since we need coefficient of :math:`x^{-7}, -7 = 14 -3r, \Rightarrow r = 7`

    Cofficient of :math:`x^{-7} = {}^{11}C_6a^5b^{-6}`

    Equating the coefficients we get :math:`ab = 1 \because {}^{11}C_5 =
    {}^{11}C_6`

35. :math:`t_r = {}^{2n}C_{r - 1}x^{4n - 2r + 2}\frac{1}{x^{r - 1}}`

    :math:`t_r = {}^{2n}C_{r - 1}x^{4n - 3r + 3}`

    Since it is the term containing :math:`x^p, p = 4n - 3r + 3, \Rightarrow
    r = \frac{4n - p + 3}{3}`

    :math:`\therefore` Coefficients of :math:`x^p, = {}^{2n}C_{\frac{4n -
    p}{3}}`

    :math:`= \frac{2n!}{\left(\frac{4n -p}{3}\right)!\left(\frac{2n +
    p}{3}\right)}`

36. Let us solve these one by one:

    i. :math:`t_r = {}^{2n}C_{r - 1}x^{2n - r + 1}\frac{1}{x^{r - 1}}`

       Since the term has to be independent of :math:`x \Rightarrow 2n + 2 - 2r
       = 0 \Rightarrow r = n + 1`

       :math:`t_{n + 1} = {}^{2n}C_n = \frac{2n!}{n!n!}`

    ii. :math:`t_r = {}^{15}C_{r - 1}(2x^2){16 - r}\frac{1}{x^{r - 1}}`

        :math:`\Rightarrow 33 - 3r = 0 \Rightarrow r = 11`

        :math:`t_{11} = {}^{15}C_10.2^5`

    iii. :math:`t_r = {}^{10}C_{r - 1}\left(\sqrt{\frac{x}{3}}\right)^{10 - r +
         1}\left(\frac{3}{2x^2}\right)^{r - 1}`

         :math:`\Rightarrow \frac{11 - r}{2} + 2 - 2r = 0 \Rightarrow r = 3`

         :math:`t_3 = {}^{10}C_2\frac{1}{3^4}\frac{3^2}{2^2} =
         {}^{10}C_2\frac{1}{6^2}`

    iv. :math:`t_r = (-1)^{r - 1}.{}^{12}C_{r - 1}(2x^2)^{13 -
        r}\frac{1}{x^{r - 1}}`

        :math:`= (-1)^{r - 1}.{}^{12}C_{r - 1}2^{13 - r}x^{27 - 3r}`

        :math:`\Rightarrow 27 - 3r = 0 \Rightarrow r = 9`

        :math:`t_9 = {}^12C_82^4`

        5, 6, 7 and 8 are left as exercises.

37. :math:`t_r = {}^nC_{r - 1}x^{n - r + 1}\frac{1}{x^{2r - 21}}`

    :math:`= {}^nC_{r - 1}x^{n - 3r + 3}`

    For a term to be independent of :math:`x \Rightarrow r = \frac{n + 3}{3}`

    :math:`\therefore` Coefficient is :math:`{}^nC_{\frac{n}{3}}`

    :math:`= \frac{n!}{\left(\frac{n}{3}\right)!\left(\frac{2n}{3}\right)!}`

38. Coeff. of :math:`x^m` in :math:`(1 + x)^{m + n} = {}^{m + n}C_m`

    Coeff. of :math:`x^n` in :math:`(1 + x)^{m + n} = {}^{m + n}C_n`

    Clearly, both the coefficients are equal.

39. :math:`t_4 = {}^nC_3(px)^{n - 3}\frac{1}{x^3} = \frac{5}{2}`

    Since :math:`\frac{5}{2}` independent of :math:`x, n - 6 = 0 \Rightarrow n
    = 6`

    :math:`{}^6C_3p^3 = \frac{5}{2} \Rightarrow p = \frac{1}{2}`

40. Here :math:`n = 12,` which is even, therefore, :math:`\frac{12}{2} + 1`
    i.e. :math:`7{th}` term will be middle term.

    :math:`t_7 = {}^{12}C_6x^6\left(-\frac{1}{2x}\right)^6 = \frac{231}{16}`

41. Here :math:`n = 7,` which is odd, therefore, :math:`\frac{7 + 1}{2}` and
    :math:`\frac{7 + 3}{2}` i.e. :math:`4^{th}` and :math:`5^{th}` terms will
    be middle terms.

    :math:`t_4 = {}^7C_3(2x^2){7 - 3}\left(-\frac{1}{x}\right)^3 = -560x^3`

    :math:`t_5 = {}^7C_4(2x^2)^{7 - 4}\left(-\frac{1}{x}\right)^2 = 280x^2`

42. :math:`(1 - 2x + x^2)^n = (1 - x)^{2n}`

    Since :math:`2n` is even, therefore the middle term would be :math:`(n +
    1)^{th}` term.

    :math:`t_{n + 1} = {}^{2n}C_n1^{2n - n}(-x)^n = \frac{2n!}{n!n!}(-1)^nx^n`

43. :math:`\because 2n` is even, the middle term would be :math:`(n + 1)^{th}`
    term.

    :math:`t_{n + 1} = {}^{2n}C_nx^{2n - n}\frac{1}{x^n} = \frac{2n!}{n!n!}`

    :math:`= \frac{1.2.3.4\ldots 2n}{1.2.3\ldots n.(n!)}`

    :math:`= \frac{1.3.5\ ldots (2n - 1).2^{n}.1.2.3\ldots n}{1.2.3\ldots
    n.(n!)}`

    :math:`= \frac{1.3.5\ldots (2n - 1)}{n!}2^n`

45. Clearly, middle term will have greatest coefficient which has been found
    in 44.

45. We have already found coefficient of middle term of :math:`(1 + x)^{2n}`
    which is :math:`{}^{2n}C_n\frac{2n!}{n!n!}`

    Since :math:`2n - 1` is odd number we will have two middle terms for
    :math:`(1 + x)^{2n - 1},` which will be :math:`n^{th}` and :math:`(n +
    1)^{th}` terms of the expansion.

    Coefficient of :math:`t_n` in :math:`(1 + x)^{2n - 1} = {}^{2n - 1}C_{n -
    1}`

    Coefficient of :math:`t_{n + 1} = {}^{2n - 1}C_n`

    Clearly, :math:`{}^{2n - 1}C_n + {}^{2n - 1}C_{n - 1} = {}^{2n}C_n` by
    invoking properties of combinations.

46. Let us find these:

    i. Since :math:`n = 20,` which is an even number, the middle term would be
       :math:`11^{th}` term.

       :math:`t_{11} = {}^{20}C_{10}\left(\frac{2x}{3}\right)^{10}
       \left(-\frac{3}{2x}\right)^{10}`

       :math:`= {}^{20}C_{10}x^{10}y^{10}`

    ii. Since :math:`n = 6,` an even number, the middle term would be
        :math:`4^{th}` term.

        :math:`t_4 =
        {}^6C_3\left(\frac{2x}{3}\right)^3 \left(-\frac{3}{2x}\right)^3`

        :math:`= -20`

    iii. Since :math:`n = 7,` an odd number, the middle terms would be
         :math:`4^{th}` and :math:`5^{th}` terms.

         :math:`t_4 = {}^7C_3\frac{x^4}{y^4}.(-1)^3\frac{y^3}{x^3} =
         -35\frac{x}{y}`

         :math:`t_5 = {}^7C_4\frac{x^3}{y^3}.(-1)^4\frac{y^4}{x^3} =
         25\frac{y}{x}`

    iv. Since power of the expansion is :math:`2n,` which is an even number so
        :math:`(n + 1)^{th}` term would be middle term.

        :math:`t_{n + 1} = {}^{2n}C_nx^n`

    v. :math:`(1 - 2x + x^2)^n = (1 - x)^{2n}` and like previous exercise
       :math:`t_{n + 1} = (-1)^n{}^{2n}C_nx^n` would be middle term.

47. Let :math:`(r + 1)^{th}` term be middle term then :math:`t_{r + 1} = {}^{2n
    + 1}C_r\frac{x^{2n - r + 1}}{y^{2n - r + 1}}\frac{y^r}{x^r}`

    :math:`t_{r + 1} = {}^{2n + 1}C_r\frac{x^{2n - 2r + 1}}{y^{2n - 2r + 1}}`

    Since :math:`2n + 1` is an odd number, therefore there will be two middle
    terms, :math:`(n + 1)^{th}` and :math:`(n + 2)^{th}`

    :math:`t_{n + 1} = {}^{2n + 1}C_n\frac{x}{y}`

    :math:`t_{n + 2} = {}^{2n + 1}C_n\frac{y}{x}`

    :math:`2n - 2r + 1,` which is power of :math:`x` and :math:`y` in general
    term, cannot be zero as both :math:`n` and :math:`r` are
    positive integers. Thus, no term is independent of :math:`x` and
    :math:`y.`

48. Since exponent of expansion is :math:`2n` which is an even number, there
    will be one middle term and that term would be :math:`(n + 1)^{th}` term.

    :math:`t_{n + 1} = {}^{2n}C_n(-1)^{n}\frac{x^n}{x^n}`

    :math:`= \frac{2n!}{n!n!} = \frac{2^n(1.2.3\ldots n)(1.3.5\ldots (2n -
    1))}{n!n!}`

    :math:`= (-2^n)\frac{1.3.5\ldots (2n- 1)}{n!}`

49. Coefficient of :math:`t_{2n + 1} = {}^{43}C_{2r}`

    Coefficient of :math:`t_{r + 2} = {}^{43}C_{r + 1}`

    Given :math:`{}^{43}C_{2r} = {}^{43}C_{r + 1}`

    :math:`\therefore 2r + r + 1 = 43 \Rightarrow r = 14`

50. Coefficient of :math:`r^{th}` term :math:`t_r = {}^{2n}C_{r - 1}`

    Coefficient of :math:`(r + 4)^{th}` term :math:`t_r = {}^{2n}C_{r + 3}`

    :math:`\Rightarrow 2n = r - 1 + r + 3 \Rightarrow r = n - 1`

    **2nd Method** Equal coefficient will be equidistant from mid term. In this
    case there is only one which is :math:`(n + 1)^{th}` term. So
    :math:`\frac{r + r + 4}{2} = n + 1 \Rightarrow r = n - 1`
