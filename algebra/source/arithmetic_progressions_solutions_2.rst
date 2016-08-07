Arithmetic Progression Solutions Part 2
***************************************
51. We have

    .. math::
       S_{n + 2} - S{n + 1} = a_{n + 2}, ~~~ S_{n + 3} - S_n = a_{n + 1} +
       a_{n + 2} + a_{n + 3}

    Thus, we only have to prove that

    .. math::
       a_{n + 1} + a_{n + 2} + a_{n + 3} - 3a_{n + 2} = 0

    Since :math:`a_{n + 2}` is the mean between :math:`a_{n + 1}` and
    :math:`a_{n + 3}`, therefore

    .. math::
       a_{n + 1} + a_{n + 3} = 2a_{n + 2}

    and, consequently

    .. math::
       a_{n + 1} + a_{n + 2} + a_{n + 3} - 3a_{n + 2} = 0.

52. According to our notation we have

    :math:`S_k = a_{(k - 1)n + 1} + a_{(k - 1)n+2} + ... + a_{kn}`
    and :math:`S_{k + 1} = a_{kn + 1} + a_{kn+2} + ... + a_{(k + 1)n}`

    .. math::
       \therefore S_{k + 1} - S_k = \left[a_{kn + n} - a_{kn} + ... +
       \left[a_{kn + 2} - a_{(k - 1)n + 2}\right]\right] + \left[a_{kn + 1} -
       a_{(k - 1)n + 1}\right]

    But since :math:`a_m - a_l = (m - l)d`, we have

    :math:`S_{k + 1} - Sk = nd + ... + nd + nd = n^2d.`

53. Let the given progression be :math:`a_1, a_2, ..., a_n`. Let
    :math:`a_{\overline{k}}` designate the :math:`kth` term from the end of the
    progression. Then

    :math:`a_{\overline{k}} = a_n - (k - 1)d, ~~~ a_k = a_1 + (k - 1)d`

    Considering the product :math:`a_ka_{\overline{k}}`, we have

    :math:`a_ka_{\overline{k}} = a_1a_n - (k - 1)^2d^2 + (k - 1)(a_n - a_1)`
    :math:`= a_1a_n - (k - 1)^2d^2 + (k - 1)(d - 1)d^2`.

    And so

    :math:`a_ka_{\overline{k}} = a_1a_n + d^2\left\{(k - 1)(n - 1) - (k -
    1)^2\right\}`.

    It only remains to prove that the expression :math:`P_k = (k - 1)(n - 1) -
    (k - 1)^2` increases with an increase in :math:`n` to :math:`\frac{n}{2}`
    or :math:`\frac{n + 1}{1}`.

    We have :math:`P_k = (k - 1)(n - k), ~~~ P_{k + 1} = k (n - k - 1)`

    Hence, :math:`P_{k + 1} - P_k = n -2k`. Consequently, :math:`P_{k + 1} >
    P_k` if :math:`n - 2k > 0` i.e. if :math:`k < \frac{n}{2}`, and thus, our
    proposition is proved.

54. Let the :math:`nth` term of the required progression by :math:`a_n`, its
    common difference be :math:`d`. Then

    .. math::
       S_x = \frac{a_1 + a_x}{2}x, ~~~ S_{kx} = \frac{a_1 + a_{kx}}{2}kx

    .. math::
       \Rightarrow \frac{S_{kx}}{S_x} = \frac{2a_1 -d + kxd}{2a_1 - d + kx}.k

    For the last relation to be independent of :math:`x` is it necessary and
    sufficient that :math:`2a_1 - d = 0`,

    i.e. the common difference of the required progression must equal the
    doubled first term.

55. We can prove the following proposition :math:`a_k + a_l = a_{k^{\prime}} +
    a_{l^{\prime}}` if :math:`k + l = k^{\prime} + l^{\prime}`.

    Indeed,

    :math:`a_k = a_1 + (k - 1)d, a_l = a_1 + (l - 1)d, a_{k^{\prime}} = a_1 +
    (k^{\prime} - 1)d, a_{l^{\prime}} = a_1 + (l^\prime - 1)d`


    :math:`a_k + a_l = 2a_1 + (k + l - 2)d, a_{k^\prime} + a_{l^\prime} =
    2a_1 + (k^{\prime}) + l^{\prime} - 2`, thus, :math:`a_k + a_l =
    a_{k^{\prime}} + a_{l^{\prime}}` if :math:`k + l = k^{\prime} +
    l^{\prime}`.

    And so we have :math:`a_i + a_{i + 2} = 2a_{i + 1}`

    The given sum is transformed as follows

    .. math::
       S = \frac{1}{2}\sum_{i = 1}^na_ia_{i + 2}

    .. math::
       S = \frac{1}{2}\sum_{i = 1}^n(a_{i + 1}^2 - d^2)

    .. math::
       S = \frac{1}{2}n\left\{a_1^2 + a_1d(n + 1) + \frac{(n - 1)(2n +
       5)}{6}d^2\right\}.

56. We have

    .. math::
       \frac{1}{a_1a_n} = \frac{1}{a_1 + a_n}.\frac{a_1 + a_n}{a_1a_n} =
       \frac{1}{a_1 + a_n}\left(\frac{1}{a_n} + \frac{1}{a_1}\right),

    .. math::
       \frac{1}{a_2a_{n - 1}} = \frac{1}{a_2 + a_{n - 1}}.\frac{a_2 + a_{n -
       1}}{a_na_{n - 1}} = \frac{1}{a_2 + a_{n - 1}}\left(\frac{1}{a_2} +
       \frac{1}{a_{n - 1}}\right)

    .. math::
       ...

    .. math::
       \frac{1}{a_na_1} = \frac{1}{a_1 + a_n}.\frac{a_1 + a_n}{a_1a_n} =
       \frac{1}{a_1 + a_n}\left(\frac{1}{a_1} + \frac{1}{a_n}\right)

    But :math:`a_1 + a_n = a_2 + a_{n - 1} + a_3 + a_{n - 1} = ... .`

    Therefore, adding our equalities termwise, we find

    .. math::
       \frac{1}{a_1a_n} + \frac{1}{a_2a_{n - 1}} + ... + \frac{1}{a_na_1} =
       \frac{2}{a_1 + a_n}\left(\frac{1}{a_1} + \frac{1}{a_2} + ... +
       \frac{1}{a_n}\right)

57. From the first equality we have

    .. math::
       :label: 1

       \frac{x_1 + x_n}{2}n = a, ~~~ nx_1 + d\frac{2(n - 1)}{1.2} = a

    On the other hand, :math:`x_k^2 = x_1^2 + 2x_1d(k - 1) + d^2(k - 1)^2`

    Therefore, from the second relation we get

    .. math::
       \sum_{k = 1}^nx_k^2 = ax_1^2 + 2x_1d \sum_{k = 1}^n(k - 1) + d^2 \sum_{k
       - 1}^n(k - 1)^2 = b^2

    Hence,

    .. math::
       :label: 2

       nx_1^2 + 2x_1d\frac{n(n - 1)}{1.2} + d^2\frac{n(n - 1)}{2n - 1}{6} = b^2

    Squaring both member of :eq:`1` and diving by :math:`n`, we find

    .. math::
       :label: 3

       nx_1^2 + 2x_1d\frac{n(n - 1)}{1.2} + d^2\frac{n(n - 1)^2}{4} =
       \frac{a^2}{n}.

    Subtracting :eq:`2` from :eq:`1`, we get

    .. math::
       \frac{d^2n(n^2 - 1)}{12} = \frac{b^n - a^2}{n}

    Consequently

    .. math::
       d = \pm\frac{2\sqrt{3(b^n - a^2)}}{n\sqrt{n^2 - 1}}

    Substituting :math:`d` into equality :eq:`1`, we find :math:`x_1`, and,
    consequently, we can construct the whole arithmetic progression.

58. It is obvious that

    .. math::
       tan^{-1}a_k + tan^{-1}(-a_{k - 1}) = tan^{-1}\frac{a_k - a_{k  - 1}}{1 +
       a_ka_{k - 1}} = tan^{-1}\frac{r}{1+ a_ka_{k - 1}}.

    Now we find easily that our sun is equal to

    .. math::
       tan^{-1}\frac{a_{n + 1} - a_1}{1 + a_1a_{n + 1}}.

59. :math:`d = \alpha_2 - \alpha_1 = \alpha_3 - \alpha_2 = ... = \alpha_n -
    \alpha_{n - 1}`

    .. math::
       T_1 = \frac{\sin d}{\sin \alpha_1 - \sin\alpha_2} =
       \frac{\sin(\alpha_2 - \alpha_1)}{\sin\alpha_1.\sin\alpha_2}

    .. math::
       = \cot\alpha1 - \cot\alpha_2

    .. math::
       \therefore S = \cot\alpha_1 - \cos\alpha_n

60. This problem is similar to 49 and has been left as an exercise for the
    reader.

61. Expanding the sum, we get

    .. math::
       S = \log a + \log \frac{a^2}{b} + \log \frac{a^3}{b^2} + ...

    .. math::
       = \log a + 2\log a - \log b + 3\log a - 2\log b + ...

    This is an A. P with common difference :math:`d = \log a - \log b` and
    :math:`a = \log a`

    .. math::
       \therefore S_n = \frac{n}{2}\left[\log \frac{a^{n + 1}}{b^{n -
       1}}\right]
