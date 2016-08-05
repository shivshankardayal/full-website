Complex Numbers Solutions Part 6
********************************
251. This can be solved as problem no. 250.

252. Rewriting the equality of the 248 in the following way

     .. math::
        x^{2n - 2} + x^{2n - 4} + ... + x^2 + 1 = \prod_{s=1}^{n-1}\left(x^2 -
        2x \cos\frac{s\pi}{n} + 1\right)

     Putting in this identity :math:`x = 1`. We have

     .. math::
        n = \prod_{s=1}^{n-1}\left(2 - 2\cos\frac{s\pi}{n}\right) =
        \prod_{s=1}^{n-1}4\sin^2\frac{s\pi}{n} =
        2^{2(n-1)}\sin^2\frac{\pi}{n}.\sin^2\frac{2\pi}{n}
        ...\sin^2\frac{(n-1)\pi}{n}

     .. math::
        \therefore \sin\frac{\pi}{n}\sin\frac{2\pi}{n}
        ... \sin\frac{(n-1)\pi}{n} = \frac{\sqrt{n}}{2^{n-1}}

253. This is solved like 252.

254. Since :math:`\cos\alpha + i \sin\alpha` is the root of the given equation,
     we have

     .. math::
        \sum_{k=0}^n p_k(\cos\alpha + i \sin\alpha)^{n - k} = 0 (p_0 = 1)

     or

     .. math::
        (\cos\alpha + i \sin\alpha)^n\sum_{k=0}^np_k(\cos\alpha + i
        \sin\alpha)^{-k} = 0

     But :math:`(\cos\alpha + i \sin\alpha)^{-1} = \cos\alpha - i \sin\alpha`

     .. math::
        \therefore \sum_{k=0}^np_k(\cos\alpha - i \sin\alpha)^k = 0,
        \sum_{k=0}^np_k(\cos k\alpha - i \sin k\alpha)

     .. math::
        \therefore \sum_{k=0}^np_k \sin k\alpha = p_1\sin\alpha + p_2\sin
        2\alpha + ... + p_n \sin n\alpha = 0

255. The roots of the equation :math:`x^7 = 1` are

     .. math::
        \cos \frac{2k\pi}{7} + i \sin\frac{2k\pi}{7}~~~~~(k = 0, 1, 2, ..., 6)

     Therefore the roots of the equation :math:`x^6 + x^5 + x^4 + x^3 + x^2 + x
     + 1 = 0` will be
       
     .. math::
        x_k = \cos \frac{2k\pi}{7} + i \sin\frac{2k\pi}{7}~~~~~(k = 1, 2,
        ..., 6)

     Putting :math:`x + \frac{1}{x} = y`, then

     .. math::
        x^2 + \frac{1}{x^2} = y^2 - 2, x^3 - \frac{1}{x^3} = y^3 - 3

     The above equation may be rewritten in the following way

     .. math::
        \left(x^3 + \frac{1}{x^3}\right) + \left(x^2 + \frac{1}{x^2}\right) +
        \left(x + \frac{1}{x}\right) + 1 = 0

     It is clear that :math:`x_1 = \overline{x_6}, x_2=\overline{x_4}, x_3 =
     \overline{x_4}, x_k + \frac{1}{x_k} = x_k + \overline{x_k} =
     2cos\frac{2k]pi}{7}`

     Hence, we conclude that the quantities

     .. math::
        2\cos\frac{2\pi}{7}, 2cos\frac{4\pi}{7}, 2cos\frac{8\pi}{7}

     are the root of :math:`y^3 + y^2 - 2y - 1 = 0`.

     Let us set up an equation with the following roots

     .. math::
        \sqrt[3]{2\cos\frac{2\pi}{7}}, \sqrt[3]{2cos\frac{4\pi}{7}},
        \sqrt[3]{2cos\frac{8\pi}{7}}

     Let the roots of a certain cubic equation :math:`x^3 - ax^2 + bx -c = 0`
     be :math:`\alpha, \beta, \gamma`.

     We then have

     :math:`\alpha + \beta + \gamma = a, \alpha\beta + \alpha\gamma +
     \beta\gamma = b, \alpha\beta\gamma = c`.

     Let the equation, whose roots are the quantities :math:`\sqrt[3]{\alpha},
     \sqrt[3]{\beta}, \sqrt[3]{\gamma}` be :math:`x^3 - Ax^2 + Bx - C = 0`.

     Then, :math:`\sqrt[3]{\alpha} + \sqrt[3]{\beta} + \sqrt[3]{\gamma} = A`,
     :math:`\sqrt[3]{\alpha}\sqrt[3]{\beta} +
     \sqrt[3]{\alpha}\sqrt[3]{\gamma} + \sqrt[3]{beta}\sqrt[3]{\gamma} = B`,
     :math:`\sqrt[3]{\alpha\beta\gamma} = C`.


     Let us make use of the follwing identity

     .. math::
        (m + p + q)^3 = m^3 + p^3 + q^3 + 3(m + p + q)(mp + mq + pq) - 3mpq.

     Thus,

     .. math::
        A^3 = a + 3AB - 3C,  B^3 = 3AB - 5

     Multiplying these equations and putting :math:`AV = z`, we find

     .. math::
        z^3 - 9z^2 + 27z -20 = 0, (z - 3)^3 + 7 = 0, z = 3 - \sqrt[3]{7}

     But

     .. math::
        A^3 = 3z - 4 = 5 - 3\sqrt[3]{7}, A = \sqrt[3]{5 - 3\sqrt[3]{7}}

     .. math::
        \therefore \sqrt[3]{\alpha} + \sqrt[3]{\beta} + \sqrt[3]{\gamma} =
        \sqrt[3]{2\cos\frac{2\pi}{7}} + \sqrt[3]{2cos\frac{4\pi}{7}} +
        \sqrt[3]{2cos\frac{8\pi}{7}} = \sqrt[3]{5 - 3\sqrt[3]{7}}.

256. This question can be solved like previous problem.
