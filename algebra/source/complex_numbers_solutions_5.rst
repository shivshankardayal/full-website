Complex Numbers Solutions Part 5
********************************
201. Let :math:`1 + \sin\phi + i \cos\phi = r(\cos\theta + i \sin\theta)`

     :math:`\therefore 1 + \sin\phi = r\cos\theta` and :math:`\cos\phi =
     r\sin\theta`

     Now :math:`(1 + \sin\phi + i \cos\phi)^n = r^n(\cos n\theta + i\sin n\theta)`

     Taking conjugates, we get

     :math:`(1 + \sin\phi - i \cos\phi)^n = r^n(\cos n\theta - i\sin n\theta)`

     From these two, we get

     .. math::
        \left(\frac{1 + \sin\phi + i \cos\phi}{1 + \sin\phi - i
        \cos\phi}\right)^n = \frac{\cos n\theta + i\sin n\theta}{\cos
        n\theta - i\sin n\theta} = \frac{e^{in\theta}}{e^{-in\theta}}

     :math:`= e^{2in\theta} = \cos 2n\theta + \sin 2n\theta`

     .. math::
        \tan \theta = \frac{\cos \phi}{1 + \sin \phi} =
        \frac{\cos^2\frac{\phi}{2} - \sin^2\frac{\phi}{2}}{\left(\cos
        \frac{\phi}{2} + \sin\frac{\phi}{2}\right)^2}

     .. math::
        = \frac{\cos\frac{\phi}{2} - \sin\frac{\phi}{2}}{\cos\frac{\phi}{2} +
        \sin\frac{\phi}{2}} = \frac{1 - \tan\frac{\phi}{2}}{1 +
        \tan\frac{\phi}{2}} = \tan\left(\frac{\pi}{4} - \frac{\phi}{2}\right)

     .. math::
        \therefore \theta = \frac{\pi}{4} - \frac{\phi}{2}~~
        \therefore 2n\theta = \left(\frac{n\phi}{2} - n\phi\right)

     Hence, proved.

202. Let :math:`a = \cos\alpha + i \sin\alpha, b = \cos\beta + i \sin\beta, c =
     \cos\gamma + i \sin\gamma`

     Now, :math:`a + b + c = (\cos\alpha + \cos\beta + \cos\gamma) +
     i(\sin\alpha + \sin\beta + \sin\gamma) = 0 + i.0 = 0`

     Now, :math:`a^3 + b^3 + c^3 - 3abc = (a + b + c)(a^2 + b^2 + c^2 - ab - bc
     - ca) = 0` :math:`[\because a + b + c = 0]`

     :math:`\therefore a^3 + b^3 + c^3 = 3abc`

     :math:`\therefore \cos3\alpha + \cos3\beta + \cos3\gamma = 3\cos(\alpha +
     \beta + \gamma)` and :math:`\sin3\alpha + \sin3\beta + \sin3\gamma = 3\sin(\alpha +
     \beta + \gamma)`

203. Proceeding similarly as last problem and with an extra calculation we have

     :math:`\frac{1}{a} + \frac{1}{b} + \frac{1}{c} = (\cos\alpha + \cos\beta +
     \cos\gamma) - i(\sin\alpha + \sin\beta + \sin\gamma) = 0`

     :math:`\therefore a^2 + b^2 + c^2 = (a + b + c)^2 - 2(ab + bc + ca) = (a +
     b + c)^2 - 2 abc\left(\frac{1}{a} + \frac{1}{b} + \frac{1}{c}\right)`

     :math:`\Rightarrow 0^2 - 2abc.0 = 0`

     :math:`\therefore L.H.S. = (\cos2\alpha + \cos2\beta + \cos2\gamma) +
     i(\sin2\alpha + \sin2\beta + \sin2\gamma) = 0`

     Equating real and imaginary parts we have our desired result.

204. :math:`t^2 -2t + 2 = 0 \Leftrightarrow t = \frac{2 \pm \sqrt{4 - 8}}{2} =
     1 \pm i`

     Let :math:`\alpha = 1+ i` and :math:`\beta = 1 - i`

     :math:`\therefore x + \alpha = (x + 1) + i, x + \beta = (x + 1) - i` and
     :math:`\alpha - \beta = 2i`

     Let :math:`x + 1 = r\cos\phi` and :math:`1 = r\sin\phi`

     We have,

     .. math::
        \frac{(x + \alpha)^n - (x + \beta)^b}{(\alpha - \beta)} =
        \frac{\sin\theta}{\sin^n\theta}

     .. math::
        \Leftrightarrow \frac{r^n(\cos n\phi + i \sin n\phi) - r^2(\cos n\phi -
        i \sin n\phi)}{2i} = \frac{\sin\theta}{\sin^n\theta}

     .. math::
        \Leftrightarrow r^n \sin n\phi = \frac{\sin\theta}{\sin^n\theta}

     .. math::
        \Leftrightarrow \frac{\sin n\phi}{\sin^n\phi} =
        \frac{\sin\theta}{\sin^n\theta}

     :math:`\Leftrightarrow` one of the values of :math:`\phi` is
     :math:`\theta.`
                 
     :math:`\therefore x + 1 = r \cos\theta` and :math:`1 = r \sin\theta`

     Dividing and evaluating we get :math:`x = \cot\theta - 1.`

205. Given, :math:`(1 + x)^n = p_0 + p_1x + p_2x^2 + ... + p_nx^n`

     putting :math:`x = i`, we get

     :math:`(1 + i)^n = p_0 + p_1i + p_2i^2 + ... + p_ni^n`

     :math:`(p_0 - p_2 + p_4 - ...) + i(p_1 - p_3 + p_5 - ...)`

     or :math:`\left[\sqrt{2}\left(\cos\frac{\pi}{4} +
     i\sin\frac{\pi}{4}\right)\right]^n = (p_0 - p_2 + p_4 - ...) + i(p_1 -
     p_3 + p_5 - ...)`

     Equating real and imaginary parts, we have

     :math:`p_0 - p_2 + p_4 ... = 2^{\frac{n}{2}}\cos\frac{n\pi}{4}` and

     :math:`p_1 - p_3 + p_5 + ... = 2^{\frac{n}{2}}\sin\frac{n\pi}{4}.`

206. Given, :math:`(1 - x + x^2)^n = a_0 + a_1 + a_2x^2 + ... a_{2n}x^{2n}`.

     Putting :math:`x = 1, \omega` and :math:`\omega^2`, we get

     :math:`1 = a_0 + a_1 + a_2 + ... + a_{2n}`

     :math:`(-2\omega)^n = a_0 + a1\omega + a_2\omega^2 + ... +
     a_{2n}\omega^{2n}`

     :math:`(-2\omega^2)^n = a_0 + a_1\omega^2 + a_2\omega^4 + ... +
     a_{2n}\omega^{4n}`

     Adding these we get,

     :math:`3(a_0 + a_3 + a_6 + ...) = 1 + (-2)^n(\omega^n + \omega^{2n})`

     Now :math:`\omega = \frac{-1 + \sqrt{3}i}{2} = \left(\cos\frac{2\pi}{3} +
     i\sin \frac{2\pi}{3}\right)`

     :math:`\omega^n = \cos\frac{2n\pi}{3} + i\sin\frac{2n\pi}{3}`

     Now :math:`\omega^2 = \frac{-1 - \sqrt{3}i}{2} = \left(\cos\frac{2\pi}{3} -
     i\sin \frac{2\pi}{3}\right)`

     :math:`\therefore \omega^n + \omega^{2n} = 2\cos\frac{2n\pi}{3} =
     2\cos\left(n\pi - \frac{n\pi}{3}\right)`

     :math:`= 2(-1)^n\cos\frac{n\pi}{3}`
     
     Thus, :math:`3(a_0 + a_3  a_6 + ...) = 1 + (-2)^n2(-1)^n\cos\frac{n\pi}{3}
     = 1 +2^{n + 1}\cos\frac{n\pi}{3}.`

     :math:`a_0 + a_3 + a_6 + ... = \frac{1}{3}\left(1 +
     2^{n+1}\cos\frac{n\pi}{3}\right)`

207. Given, :math:`(1 + x)^n = c_0 + c_1x + c_2x^2 + ... + c_nx^n`

     Putting :math:`x = 1` and :math:`x = -1`, we get

     :math:`2^n = c_0 + c_1 + c_2 + ... + c_n`

     and :math:`0 = c_0 - c_1 + c_2 - ... + (-1)^nc_n`

     Adding these two, we get

     :math:`2^n = c_0 + c_2 + c_4 + ...`

     or :math:`c_0 + c_2 + c_4 + ... = 2^{n - 1}`

     Putting :math:`x = i`, we get

     :math:`(1 + i)^n = c_0 + c_1i + c_2i^2 + c_3i^3 + ... + c_ni^n`

     :math:`\left[\sqrt{2}\left(\cos\frac{\pi}{4}+i\sin\frac{\pi}{4}\right)\right]^n
     = (c_0 -c_2 + c_4 - ...) + i(c_1 - c_3 + ...)`

     or
     :math:`2^{\frac{n}{2}}\left(\cos\frac{n\pi}{4}+i\sin\frac{i\pi}{4}\right)
     = (c_0 -c_2 + c_4 - ...) + i(c_1 - c_3 + ...)`

     Equating real parts, we get

     :math:`c_0 - c_2 + c_4 - ... = 2^\frac{n}{2}\cos\frac{n\pi}{4}`

     Adding this result with the one obtained previously, we have

     :math:`2[c_0 + c_4 + c_8 + ...] = 2^{n - 1} +
     2^\frac{n}{2}cos\frac{n\pi}{4}`

     Hence, we have our desired result.

208. :math:`z^8 + 1 = 0 \Rightarrow z^8 = -1 = \cos\pi + i \sin\pi`

     :math:`\therefore z = (\cos\pi + i \sin\pi)^\frac{1}{8} =
     \cos\frac{2r\pi + \pi}{8} + i \sin\frac{2r\pi + \pi}{8}, r = 0, 1, 2, ...,
     7`

     :math:`\therefore z = \cos\frac{\pi}{8} \pm \sin\frac{\pi}{8},
     \cos\frac{3\pi}{8} \pm \sin\frac{3\pi}{8}, \cos\frac{5\pi}{8} \pm
     \sin\frac{5\pi}{8}, \cos\frac{7\pi}{8} \pm \sin\frac{7\pi}{8}`

     These are the roots of the above equation.

     Now, quadratic equation whose roots are :math:`\cos\frac{\pi}{8} \pm
     \sin\frac{\pi}{8},` is

     :math:`z^2 - 2\cos\frac{\pi}{8}z + 1 = 0`

     Similarly, we can find the quadratic equations for remaining three pairs
     of roots. Thus,

     :math:`z^8 + 1 = \left(z^2 - 2\cos\frac{\pi}{8}z + 1\right)\left(z^2 -
     2\cos\frac{3\pi}{8}z + 1\right)\left(z^2 - 2\cos\frac{5\pi}{8}z +
     1\right)\left(z^2 - 2\cos\frac{7\pi}{8}z + 1\right)`

     Dividing both sides by :math:`z^4`, we get

     :math:`z^4 + \frac{1}{z^4} = \left(z + \frac{1}{z} -
     2\cos\frac{\pi}{8}\right)\left(z + \frac{1}{z} -
     2\cos\frac{3\pi}{8}\right)\left(z + \frac{1}{z} -
     2\cos\frac{5\pi}{8}\right)\left(z + \frac{1}{z} -
     2\cos\frac{7\pi}{8}\right)` 

     Putting :math:`z = \cos\theta + i \sin\theta`, so that :math:`z^n +
     \frac{1}{z^n} = 2n\cos n\theta`, we get

     :math:`2\cos 4\theta = 2\left(\cos \theta -
     \cos\frac{\pi}{8}\right)2\left(\cos \theta -
     \cos\frac{3\pi}{8}\right)2\left(\cos \theta -
     \cos\frac{5\pi}{8}\right)2\left(\cos \theta -
     \cos\frac{5\pi}{8}\right)` 

     :math:`\therefore \cos 4\theta = 8\left(\cos \theta -
     \cos\frac{\pi}{8}\right)\left(\cos \theta -
     \cos\frac{3\pi}{8}\right)\left(\cos \theta -
     \cos\frac{5\pi}{8}\right)\left(\cos \theta -
     \cos\frac{7\pi}{8}\right)`

209. Let :math:`z = \cos\theta + i \sin\theta`, then :math:`z^7 = \cos
     7\theta + i \sin 7\theta`

     If

     .. math::
        \theta = \frac{\pi}{7}, \frac{3\pi}{7}, \frac{5\pi}{7},
        \frac{7\pi}{7}, \frac{9\pi}{7}, \frac{11\pi}{7}, \frac{13\pi}{7}

     then :math:`z^7 = \cos 7\theta + i \sin 7\theta = 1` or :math:`z^7 + 1 =0`

     Thus, z = \cos\theta + i \sin\theta`, where

     .. math::
        \theta = \frac{\pi}{7}, \frac{3\pi}{7}, \frac{5\pi}{7},
        \frac{7\pi}{7}, \frac{9\pi}{7}, \frac{11\pi}{7}, \frac{13\pi}{7}

     are the roots of the equation.

     Also, when :math:`\theta = \pi, z = -1`

     Now, :math:`z^7 + 1 = 0 \Rightarrow (z + 1)(z^6 - z^5 + z^4 - z^3 + z^2 - z
     + 1) = 0`

     Root of equation :math:`z + 1 = 0` is :math:`\cos \theta + i \sin \theta,`
     where :math:`\theta = \pi`

     Roots of equation :math:`z^6 - z^5 + z^4 - z^3 + z^2 - z + 1 = 0~~~~~(1)`

     are
     :math:`\cos \theta + i \sin \theta,` where

     .. math::
        \theta = \frac{\pi}{7}, \frac{3\pi}{7}, \frac{5\pi}{7},
        \frac{7\pi}{7}, \frac{9\pi}{7}, \frac{11\pi}{7}, \frac{13\pi}{7}

     Let :math:`x = \cos \theta`, then

     .. math::
        z + \frac{1}{z} = \cos \theta + i \sin \theta + \frac{1}{\cos \theta +
        i \sin \theta} = 2\cos\theta = 2x

     But
     
     .. math::
        \cos\left(\frac{13\pi}{7}\right) = cos\left(2\pi -
        \frac{\pi}{7}\right) = \cos\frac{\pi}{7}, \cos\frac{11\pi}{7} =
        \cos\frac{3\pi}{7}, \cos\frac{9\pi}{7} = \cos\frac{5\pi}{7}

     Dividing (1) by :math:`z^3`, we get

     .. math::
        z^3 - z^2 + z - 1 + \frac{1}{z} - \frac{1}{z^2} + \frac{1}{z^3} = 0

     .. math::
        \left(z^3 + \frac{1}{z^3}\right) - \left(z^2 + \frac{1}{z^2}\right) +
        \left(z + \frac{1}{z}\right) - 1 = 0

     .. math::
        \left(z + \frac{1}{z}\right)^3 - 3z.\frac{1}{z}\left(z +
        \frac{1}{z}\right) - \left[\left(z + \frac{1}{z}\right)^2 -
        2z.\frac{1}{z}\right] + z + \frac{1}{z} - 1 = 0

        \Rightarrow 8x^3 - 4x^2 -4x + 1 = 0

     Roots of this equation are :math:`\cos \frac{\pi}{7}, \cos \frac{3\pi}{7}`
     and :math:`\cos \frac{5\pi}{7}`.

210. Given, :math:`z^{10} - 1 = 0 \Rightarrow z^{10} = 1 = \cos 0 + i \sin 0`

     :math:`\therefore z = (\cos 0 + i \sin 0)\frac{1}{10} =
     \cos\frac{2r\pi}{10} + i \sin\frac{2r\pi}{10}`

     .. math::
        = \pm 1, \cos\frac{\pi}{5} \pm i\sin\frac{\pi}{5}, \cos\frac{2\pi}{5}
        \pm i\sin\frac{2\pi}{5}, \cos\frac{3\pi}{5} \pm i\sin\frac{3\pi}{5},
        \cos\frac{4\pi}{5} \pm i\sin\frac{4\pi}{5}

     Quadratic equation whose roots are :math:`\pm 1` is :math:`z^2 - 1 = 0`.

     And quadratic equation whose roots are :math:`\cos\frac{\pi}{5} \pm
     \sin\frac{\pi}{5}` is :math:`z^2 - 2\cos\frac{\pi}{5}z + 1 = 0`

     Thus,

     .. math::
        z^{10} - 1 = (z^2 - 1)\left(z^2 - 2\cos\frac{\pi}{5}z +
        1\right)\left(z^2 - 2\cos\frac{2\pi}{5}z + 1\right)\left(z^2 -
        2\cos\frac{3\pi}{5}z + 1\right)\left(z^2 - 2\cos\frac{4\pi}{5}z +
        1\right)
        
     Dividing both sides by :math:`z^5`, we get

     .. math::
        z^5 - \frac{1}{z^5} = \left(z - \frac{1}{z}\right)\left(z + \frac{1}{z}
        - 2\cos\frac{\pi}{5}\right)\left(z + \frac{1}{z}
        - 2\cos\frac{2\pi}{5}\right)\left(z + \frac{1}{z}
        - 2\cos\frac{3\pi}{5}\right)\left(z + \frac{1}{z}
        - 2\cos\frac{4\pi}{5}\right)

     Putting :math:`z = \cos \theta + i \sin \theta` in the above equation, so
     that :math:`z^5 - \frac{1}{z^5} = 2i\sin 5\theta`, we get

     .. math::
        2i\sin 5\theta = 2i\sin\theta.2\left(\cos \theta -
        \cos\frac{\pi}{5}\right)2\left(\cos \theta -
        \cos\frac{2\pi}{5}\right)2\left(\cos \theta -
        \cos\frac{3\pi}{5}\right)2\left(\cos \theta - \cos\frac{4\pi}{5}\right)

     .. math::
        \therefore \sin 5\theta = 16 \sin \theta\left(\cos \theta -
        \cos\frac{\pi}{5}\right)\left(\cos \theta -
        \cos\frac{2\pi}{5}\right)\left(\cos \theta -
        \cos\frac{3\pi}{5}\right)\left(\cos \theta - \cos\frac{4\pi}{5}\right)

     .. math::
        = 16\sin \theta\left(\cos\theta
        -\cos\frac{\pi}{5}\right)\left(\cos\theta
        +\cos\frac{\pi}{5}\right)\left(\cos\theta
        -\cos\frac{2\pi}{5}\right)\left(\cos\theta +\cos\frac{2\pi}{5}\right)

     .. math::
        = 16\sin \theta\left(\cos^2\theta -
        \cos^2\frac{\pi}{5}\right)\left(\cos^2\theta -
        \cos^2\frac{2\pi}{5}\right)

     .. math::
        = 16\sin \theta\left(\sin^2\frac{\pi}{5} -
        \sin^2\theta\right)\left(\sin^2\frac{2\pi}{5} - \sin^2\theta\right)

     .. math::
        = 16\sin\theta\sin^2\frac{\pi}{5}\sin^2\frac{2\pi}{5}\left(1 -
        \frac{\sin^2\theta}{\sin^2\frac{\pi}{5}}\right)\left(1 -
        \frac{\sin^2\theta}{\sin^2\frac{2\pi}{5}}\right)

     .. math::
        = 16\sin\theta\sin^2{36^\circ}\sin^2{72^\circ}\left(1 -
        \frac{\sin^2\theta}{\sin^2\frac{\pi}{5}}\right)\left(1 -
        \frac{\sin^2\theta}{\sin^2\frac{2\pi}{5}}\right)

     .. math::
        = 16\sin\theta\left(\frac{\sqrt{10 -
        2\sqrt{5}}}{2}\right)^2\left(\frac{\sqrt{10 +
        2\sqrt{5}}}{2}\right)^2\left(1 -
        \frac{\sin^2\theta}{\sin^2\frac{\pi}{5}}\right)\left(1 -
        \frac{\sin^2\theta}{\sin^2\frac{2\pi}{5}}\right)

     Thus,

     .. math::
        \sin5\theta = 5\sin\theta\left(1 -
        \frac{\sin\theta}{\sin^2\frac{\pi}{5}}\right)\left(1 -
        \frac{\sin\theta}{\sin^2\frac{2\pi}{5}}\right)

211. Given, :math:`x^7 + 1 = 0` or :math:`x^7 = -1 = \cos\pi + i \sin\pi`

     .. math::
        \therefore x = \left(\cos\pi + i \sin\pi\right)\frac{1}{7} =
        \cos\frac{2r\pi + \pi}{7} + i \sin \frac{2r\pi + \pi}{7}, r = 0, 1, 2,
        ..., 6

     .. math::
        = \cos \frac{\pi}{7} \pm i \sin\frac{\pi}{7}, \cos \frac{2\pi}{7} \pm i
        \sin\frac{2\pi}{7}, \cos \frac{3\pi}{7} \pm i \sin\frac{3\pi}{7}, \cos
        \pi + i \sin \pi(= -1)

     .. math::
        x^7 + 1 = (x + 1)\left(x^2 - 2\cos\frac{\pi}{7}x + 1\right)\left(x^2 -
        2\cos\frac{2\pi}{7}x + 1\right)\left(x^2 - 2\cos\frac{3\pi}{7}x +
        1\right)

     Putting :math:`x = i`, we get

     .. math::
        i^7 + 1 = (1 +
        i)\left(-2i\cos\frac{\pi}{7}\right)\left(-2i\cos\frac{2\pi}{7}\right)\left(-2i\cos\frac{3\pi}{7}\right)

     .. math::
        1 - i = 8(1 + i)\cos\frac{\pi}{7}\cos\frac{2\pi}{7}\cos\frac{3\pi}{7}

        = -8(1 - i)\cos\frac{\pi}{7}\cos\frac{2\pi}{7}\cos\frac{3\pi}{7}

     .. math::
        \therefore \cos\frac{\pi}{7}\cos\frac{2\pi}{7}\cos\frac{3\pi}{7} =
        -\frac{1}{8}

212. .. math::
       (\cos\alpha + i \sin\alpha)^n = \cos^n\alpha + i{^nC_1}\cos^{n-1}\alpha
       \sin\alpha + i^2{^nC_2}\cos^{n-2}\alpha \sin^2\alpha + ... +
       i^n{^nCn}\sin^n\alpha

     .. math::
        \Rightarrow \cos n\alpha + i \sin n\alpha = (\cos^n\alpha -
        {^nC_2}\cos^{n-2}\alpha \sin^2\alpha) + i({^nC_1}\cos^{n-1}\alpha
        \sin\alpha)

     Equating imaginary parts, we get

     .. math::
        \therefore \sin n\alpha = {^nC_1}\cos^{n-1}\alpha \sin\alpha -
        {^nC_3}\cos^{n-3}\alpha \sin^3\alpha + ...

     .. math::
        \therefore \sin (2n+1)\alpha = {^{2n+1}C_1}\cos^{2n}\alpha \sin\alpha -
        {^{2n+1}C_3}\cos^{2n-2}\alpha \sin^3\alpha + ...

     .. math::
        :label: Equation

        \Rightarrow \sin (2n+1)\alpha = =
        \sin^{2n+1}\alpha[{^{2n+1}\cot^{2n}}\alpha -
        {^{2n+1}C_3}cot^{2n-2}\alpha + ...]

     .. math::
        \text{when} \alpha = \frac{\pi}{2n+1}, \frac{2\pi}{2n+1}, ..., \frac{n\pi}{2n+1},
        \sin(2n+1)\alpha = 0

     .. math::
        \therefore \cot^2\frac{\pi}{2n+1}, \cot^2\frac{2\pi}{2n+1}, ...,
        \cot^2\frac{n\pi}{2n+1}

     are the roots of the equation. From the second term coefficient we get sum
     of roots in a polynomial.

     .. math::
        \therefore \cot^2\frac{\pi}{2n+1}+ \cot^2\frac{2\pi}{2n+1}+ ...+
        \cot^2\frac{n\pi}{2n+1} = \frac{{^{2n+1}C_3}}{^{2n+1}C_1}

213. Let

     .. math::
        :label: Equation 2

        C = \cos\theta \cos\theta + \cos^2\theta \cos 2\theta + ... +
        cos^n\theta \cos n\theta

     and

     .. math::
        :label: Equation 3

        C = \cos\theta \sin\theta + \cos^2\theta \sin 2\theta + ... +
        cos^n\theta \sin n\theta

     Now,

     .. math::
        C + iS = \cos\theta(cos\theta + i \sin\theta) + \cos^2\theta(\cos
        2\theta + i \sin 2\theta) + ... + \cos^n\theta(\cos n\theta + i \sin
        n\theta)

     .. math::
        = \cos\theta.e^{i\theta} + \cos^2\theta.e^{2i\theta} + ... +
        \cos^n\theta.e^{ni\theta}

     :math:`= x + x^2 + ... + x^n`, where :math:`x = \cos\theta e^{i\theta}`

     .. math::
        = \frac{x(x^n - 1)}{x - 1} = \frac{\cos\theta e^{i\theta}(\cos^n\theta
        e^{in\theta - 1})}{\cos\theta e^{i\theta} - 1}

     .. math::
        =\frac{\cos\theta[\cos^n\theta(\cos n\theta + i \sin n\theta) -
        1]}{\cos\theta - e^{-i\theta}}

     .. math::
        \frac{\cos\theta[(\cos^n]theta\cos n\theta -1) + i cos^n\theta\sin
        n\theta]}{\cos\theta - (\cos\theta - i \sin\theta)}

     .. math::
        = -i \cot\theta(\cos^n\theta \cos n\theta - 1) + i \cos^n\theta \sin]
        n\theta

     Equating imaginary parts, we get

     .. math::
        S = -\cot\theta(\cos^n\theta \cos n\theta - 1) = \cot\theta(1 -
        \cos^n\theta\cos n]theta)

214. :math:`L.H.S. = -3 -4i`

     .. math::
        = 5\left(-\frac{3}{5} - i\frac{4}{5}\right) = 5\left(\cos\left(\pi + tan^{-1}\frac{4}{5}\right) +
        i \sin\left(\pi + tan^{-1}\frac{4}{5}\right)\right)

     .. math::
        = 5e^{i\left(\pi + tan^{-1}\frac{4}{5}\right)}

215. Putting

     .. math::
        x^4 = \frac{\sqrt{3} - 1}{2\sqrt{2}} + \frac{\sqrt{3} + 1}{2\sqrt{2}}

     in polar form we get

     .. math::
        x^4 = \cos\frac{5\pi}{12} + i \sin\frac{5\pi}{12}

     .. math::
        \therefore x = \cos\frac{(24r + 5)\pi}{48} + i \sin\frac{(24r +
        5)\pi}{48}, r = 0, 1, 2, 4

216. .. math::
       L.H.S. = \left(\frac{1 + \cos \phi + i \sin\phi}{1 + \cos \phi - i
       \sin\phi}\right)^n

     .. math::
        = \left(\frac{(1 + \cos\phi + i \sin\phi)(1 + \cos\phi + i
        \sin\phi)}{(1 + \cos\phi)^2 + \sin^2\phi}\right)^n

     .. math::
        = \left(\frac{1+ 2\cos\phi + \cos^2\phi - \sin^2\phi + 2i \sin\phi(1 +
        \cos\phi)}{1 + 2\cos\phi + \cos^2\phi + \sin^2\phi}\right)^n

     .. math::
        = \left(\frac{2\cos\phi(1 + \cos\phi) + 2i \sin\phi(1 +
        \cos\phi)}{2\cos\phi(1 + \cos\phi)}\right)^n

     .. math::
        = (\cos\phi + i \sin\phi^n) = \cos n\phi + i \sin n\phi

217. This problem has been left as an exercise for the reader.

218. This problem has been left as an exercise for the reader.

219. This problem has been left as an exercise for the reader.

220. This problem has been left as an exercise for the reader.

221. Given, :math:`Ae^{2i\theta} + Be^{-2i\theta} = 5cos2\theta - 7sin2\theta`

     Let, :math:`A = a + ib` and :math:`B = c + id`. Substituting and equating
     real and imaginary parts we have :math:`a + c = 5, d - b = 7` and :math:`b
     + a + d - c = 0`. Since we have four unknowns and three equations it is
     impossible to find their values by simple calculation. However, by trial
     and error we can arrive at multiple solutions of these equation. For
     example, for :math:`a, b, c` and :math:`d` values of :math:`1, -2, 4` and
     :math:`5` satisfy the equations. Similarly, :math:`2, -3, 3` and :math:`4`
     also satisfy these equations. Similarly, more values for these can be
     found and there exists infinite solutions for these unknowns as is evident
     from theory of equations.

222. Given :math:`\sqrt{1 - c^2} = nc - 1,` squaring and solving we have
     :math:`1 - c^2 = n^2c^2 - 2nc + 1` i.e. :math:`(1 + n^2)c^2 - 2nc = 0`
     which has two solutions :math:`c = 0` and :math:`c = \frac{2n}{1 +
     n^2}`. Clearly, the solution :math:`c = 0` does not satisfy our desired
     equation as substituting :math:`c = 0` makes it :math:`1 = 0` which is
     false. Thus, substituting the other value and taking R.H.S.

     .. math::
        R.H.S. = \frac{c}{2n}(1 + nx)\left(1 + \frac{n}{x}\right)

     .. math::
        \Rightarrow \frac{1}{1 + n^2}(1 + n(\cos\theta + i
        \sin\theta)) + \left(1 + n(\cos\theta + i \sin\theta)\right)

     .. math::
        \Rightarrow \frac{1}{1 + n^2}(1 + n^2 + 2n \cos\theta)

     .. math::
        \Rightarrow 1 + c \cos\theta

223. From the given equality, we have

     .. math::
        \left(\frac{1+z}{1-z}\right)^n = 1

     .. math::
          1 + z = (1 - z)(\cos\frac{2r\pi}{n} +i \sin\frac{2r\pi}{n})

     Let :math:`\frac{2r\pi}{n} = \theta`

     .. math::
        1 + z = (1 - z)(\cos\theta + i \sin\theta)

     .. math::
        z((1 + \cos\theta) + i \sin\theta) + (\cos\theta - 1) + i \sin\theta

     .. math::
        z = \frac{(\cos\theta - 1) + i \sin\cos\theta}{(1 + \cos\theta) + i \sin\theta}

     .. math::
        z = i \tan\frac{\theta}{2} = i \tan\frac{2\pi}{n}, ~ r = 0, 1, 2, ..., (n - 1)

     Clearly, the above equation is invalid if :math:`n` is even and :math:`r =
     \frac{n}{2}` as it will cause the value of :math:`tan` function to reach infinity.

224. .. math::
       L.H.S. = \frac{xy(x + y) - (x + y)}{xy(x - y)+(x - y)}

     Dividing numerator and denominator by :math:`xy`

     .. math::
        = \frac{x + y - \frac{1}{x} - \frac{1}{y}}{x - y + \frac{1}{y} -
        \frac{1}{x}}

     .. math::
        = \frac{\cos\alpha + i \sin\alpha + \cos\beta + i \sin\beta -
        \cos\alpha + i\sin\alpha - \cos\beta - i \sin\beta}{\cos\alpha + i
        \sin\alpha - \cos\beta - i \sin\beta - \cos\alpha - i\sin\alpha +
        \cos\beta - i \sin\beta}

     .. math::
        = \frac{\sin\alpha + \sin\beta}{sin\alpha - \sin\beta}

225. .. math::
       (1 + x)^n = {^nC_0} + {^nC_1}x + {^nC_3}x^2 + {^nC_3}x^3 + ...

     Substituting :math:`x = 1, \omega` and :math:`\omega^{2}` and adding we
     get(from :math:`1 + \omega + \omega^2 = 0`)

     .. math::
        2^n = {^nC_0} + {^nC_1} + {^nC_3} + {^nC_3} + ...

     .. math::
        (-w)^2n = {^nC_0} + {^nC_1}\omega + {^nC_3}\omega^2 + {^nC_3}\omega^3 +
        ...

     .. math::
        (-w)^4n = {^nC_0} + {^nC_1}\omega^2 + {^nC_3}\omega^4 +
        {^nC_3}\omega^6 + ...

     Now there can be three cases as n is a multiple of 3 and n is not multiple
     of 3. Adding all those we get the desired result.

226. Hint: Put :math:`x = 1, \omega, \omega^2` and multiply the three equations
     thus obtained with :math:`1, \omega^2` and :math:`\omega` respectively and
     add.

227. Hint: Put :math:`x = 1, \omega, \omega^2` and multiply the three equations
     thus obtained with :math:`1, \omega` and :math:`\omega^2` and respectively
     add.

228. Hint: Put :math:`1, \omega, \omega^2` and add.

229. Hint: Put :math:`1, \omega, \omega^2` and add.

230. Solving the system of linear equations we get

     .. math::
        x^{\prime\prime} = \frac{AA^{\prime} + BB^{\prime} + CC^{\prime}}{3}

        y^{\prime\prime} = \frac{AA^{\prime} + BB^{\prime}\omega^2 +
        CC^{\prime}\omega}{3}

        z^{\prime\prime} = \frac{AA^{\prime} + BB^{\prime}\omega +
        CC^{\prime}\omega^2}{3}

     Further :math:`AA^{\prime} + BB^{\prime} + CC^{\prime} = 3(xx^{\prime} +
     zy^{\prime} + yz^{\prime})`

     And so :math:`x^{\prime\prime = xx^{\prime}} + zy^{\prime} + yz^{\prime}`.
     Analogously :math:`y^{\prime\prime = yy^{\prime} + xz^{\prime} +
     zx^{\prime}}, z^{\prime\prime} = zz^{\prime} + yx^{\prime} + xy^{\prime}`
     (the last two expressions emerge from the first one as a result of
     circular permutation).

231. We have the identity

     .. math::
        (\alpha\delta - \beta\gamma)(\alpha^{\prime}\delta^{\prime} -
        \beta^{\prime}\gamma^{\prime}) = (\alpha\alpha^{\prime} +
        \beta\gamma^{\prime}) + (\gamma\beta^{\prime} +
        \delta\delta^{\prime}) - (\alpha\beta^{\prime} +
        \beta\delta^{\prime})(\gamma\alpha^{\prime} + \delta\gamma^{\prime})

     Let us put there

     .. math::
        \alpha = x + yi, \beta = z + ti, \gamma = -(z - ti), \delta = x - yi

     .. math::
        \alpha^{prime} = a + bi, \beta^{\prime} = c + di, \gamma^{\prime} = -(c
        - di), delta^{\prime} = a - bi

     Then,

     .. math::
        \alpha\delta - \beta\gamma = x^2 + y^2 + z^2 + t^2

     .. math::
        \alpha^{\prime}\delta^{\prime} = beta^{\prime}\gamma^{\prime} = a^2 +
        b^2 + c^2 + d^2

     .. math::
        \alpha\alpha^{\prime} + \beta\gamma^{\prime} = (ax - by - cz - dt) +
        i(bx + ay + dz - ct)

     .. math::
        \gamma\beta^{\prime} + \delta\delta^{\prime} =
        \overline{\alpha\alpha^{\prime} + \beta\gamma^{\prime}}

     .. math::
        \therefore (\alpha\alpha^{\prime} +
        \beta\gamma^{\prime})(\gamma\beta^{\prime} + \delta\delta^{\prime}) =
        (ax - by - cz - dt)^2 + (bx + ay + dz - ct)^2

     Further

     .. math::
        \alpha\beta^{\prime} + \beta\delta^{\prime} = (cx - dy + az + bt) +
        i(dx + cy -bz + at)

     .. math::
        \gamma\alpha^{\prime} + \delta\gamma^{\prime} = -(cx - dy + az + by) +
        i(dz + cy - bz + at)

     i.e.

     .. math::
        -(\alpha\beta^{\prime} + \beta\delta^{\prime})(\gamma\alpha^{\prime} +
        \delta\gamma^{\prime}) = (cx - dy + az + bt)^2 + (dx + cy - bz + at)^2

     Substituting the obtained expressions into the original identity, we find

     .. math::
        (a^2 + b^2 + c^2 + d^2)(x^2 + y^2 + z^2 + t^2) =

     .. math::
        (ax - by -cz -dt)^2 + (bx + ay -dz + ct)^2 + (cx
        + dy + az -bt)^2 + (dx - cy + bz + at)^2

232. Expanding the expression :math:`(\cos\theta + i \sin\theta)^n` using
     binomial expansion, using De Moivre's formula and
     comparing real and imaginary parts we have

     .. math::
        \cos n\theta = \cos^n\theta - {^nC_2}\cos^{n-1}\theta\sin^2\theta + ...

     .. math::
        \sin n\theta = n\cos^{n-1}\theta\sin\theta -
        (^nC_3)\cos^{n-3}\theta\sin^3\theta + ...

     Taking into account the parity of n and dividing both members of these
     equalities by :math:`\cos^n\theta`, we get the desired result.

233. We have,

     .. math::
        \cos x = \frac{(\cos x + i \sin x)+(\cos x - i \sin x)}{2}

     Put :math:`z = \cos x + i \sin x`. Then :math:`\cos x - i \sin x = z^{-1}`

     .. math::
        cos^{2m}x = \left(\frac{z + z^{-1}}{2}\right)^{2m} =
        \frac{1}{2^{2m}}\sum_{k=0}^{2m} C^k_{2m}z^{-k}z^{2m - k}

     Further

     .. math::
        2^{2m}\cos^{2m}x = \sum_{k=0}^{m-1}C^k_{2m} z^{2(m - k)} + C^m_{2m} +
        \sum_{k = m + 1}^{2m}C^k_{2m}z^{2(m - k)}

     In the second term we put :math:`m-k =-(m-k^{\prime})`. Then this sum is
     rewritten in the following manner

     .. math::
        \sum_{k^{\prime}=m-1}^0C_{2m}^{2m-k^{\prime}}z^{-2(m-k^{\prime})} =
        \sum_{k=0}^{m-1}C_{2m}^kz^{-2(m-k)}

     And so

     .. math::
        2^{2m}\cos^{2m}\theta = \sum_{k=0}^{m-1}C^k_2m
        \left(z^{2(m-k)}+z^{-2(m-k)}\right)+C^m_{2m}

     However,

     .. math::
        z^{2(m-k)} + z^{-2(m-k)} = 2\cos 2(m-k)

     .. math::
        \therefore 2^{2m}cos^{2m}x = \sum_{k = 0}^{k = m - 1} 2 {2m \choose k}
        cos2(m - k)x + {2m \choose m}

234. Replacing :math:`x` by :math:`\frac{\pi}{2} -x` we can solve this one.

235. This can be done 233.

236. This can be done as 234.

237. From the expression

     .. math::
        u_n + iv_n = (\cos\alpha + i \sin\alpha) + r[\cos(\alpha + \theta) + i
        \sin(\alpha + \theta)] + ... + r^n[\cos(\alpha + b\theta) + i
        \sin(\alpha + b\theta)]

     Putting :math:`\cos \theta + i \sin\theta = z`, then

     .. math::
        u_n + iv_n = (\cos\alpha + i\sin\alpha{1 + rz + ... + (rz)^n})

     .. math::
        = (\cos\alpha + i \sin\alpha)\frac{(rz)^{n+1} - 1}{rz - 1}

     Let us transform the fraction :math:`\frac{(rz)^{n+1} - 1}{rz - 1}`,
     separating the real part from the imaginary one.

     We have

     .. math::
        \frac{(rz)^{n+1} - 1}{rz - 1} = \frac{[(rz)^{n+1}][r\overline{z} -
        1]}{(rz -1)r\overline{z} - 1}

     .. math::
        = \frac{r^{n+1}[\cos n\theta + i \sin n\theta] - r[\cos\theta - i
        \sin\theta]}{1 -2 r\cos\theta + r^2} + \frac{-r^{n+1}[\cos(n+1)\theta +
        i\sin(n+1)\theta] + 1}{1 -2r \cos\theta + r^2}

     Multiplying the last fraction by :math:`\cos\alpha + i \sin\alpha` and
     separating the real and imaginary parts, we get the required result

     .. math::
        u_n + iv_n = \frac{r^{n+1}[\cos (n\theta + \alpha) + i \sin (n\theta +
        \alpha)] - r[\cos(\alpha -\theta) - i \sin(\alpha - \theta)]}{1 -2
        r\cos\theta + r^2}

        + \frac{-r^{n+1}\{\cos[(n+1)\theta + \alpha] +
        i\sin[(n+1)\theta + \alpha]\} + \cos\alpha + i \sin\alpha}{1 -2r
        \cos\theta + r^2}

     Hence,

     .. math::
        u_n = \frac{\cos\alpha - r\cos(\alpha - \theta) -
        r^{n+1}\cos[(n+1)\theta + \alpha] + r^{n+2}\cos(n\theta + \alpha)}{1 -
        2r \cos\theta + r^2}

     .. math::
        v_n = \frac{\sin\alpha - r\sin(\alpha - \theta) -
        r^{n+1}\sin[(n+1)\theta + \alpha] + r^{n+2}\sin(n\theta + \alpha)}{1 -
        2r \cos\theta + r^2}

     Putting in these formulas :math:`\alpha = 0, r =1`, we find

     .. math::
        1 + \cos\theta + \cos 2\theta + ... + \cos n\theta =
        \frac{\sin\frac{n+1}{2}\theta\cos\frac{n}{2}\theta}{\sin\frac{\theta}{2}}

     .. math::
        \sin\theta + \sin 2\theta + ... + \sin n\theta =
        \frac{sin\frac{(n+1)\theta}{2}\sin\frac{n\theta}{2}}{\sin\frac{\theta}{2}}

238. We have,

     .. math::
        S + S^{\prime}i = \sum_{k=0}^nC^k_n(\cos k\theta + i \sin k\theta) =
        \sum_{k=0}^n(\cos\theta + i \sin\theta)^k


     .. math::
        = (1 + \cos\theta + i \sin\theta)^n = \left[2\cos^2\frac{\theta}{2} +
        2i \sin\frac{\theta}{2}\cos\frac{\theta}{2}\right]^n

     .. math::
        = 2^n\cos^n\frac{\theta}{2}\left(\cos\frac{\theta}{2} + i
        \sin\frac{\theta}{2}\right)^n

     .. math::
        = 2^n\cos^n\frac{\theta}{2}\left(\cos\frac{n\theta}{2} + i
        \sin\frac{n\theta}{2}\right)

     Equating real and imaginary parts, we have

     .. math::
        S = 2^n\cos^n\frac{\theta}{2}\cos\frac{n\theta}{2},~~~ S^{\prime} =
        2^n\cos^n\frac{\theta}{2}\sin\frac{n\theta}{2}

239. This problem is solved in previous one where :math:`S` of this problem has
     been considered as :math:`S^{\prime}`.

240. Putting

     .. math::
        S = \sin^{2p}\alpha + \sin^{2p}2\alpha + \sin^{2p}n\alpha =
        \sum_{l=1}^n \sin^{2p}l\alpha

     But from problem 234

     .. math::
        \sin^{2p}l\alpha = \frac{1}{2^{2p -1}}(-1)^p\sum_{k=0}^{p-1}(-1)^k\cos
        2(p-k)l\alpha + \frac{1}{2^{2p}}C^p_{2p}

     .. math::
        \therefore s = \frac{(-1)^p}{2^{2p - 1}}\sum_{k = 0}^{p -
        1}(-1)^kC^k_2p\sum_{l=1}^n\cos2(p - k)l\alpha + \frac{n}{2^{2p}}C^p_{2p}

     Putting :math:`2(p-k)\alpha = \xi`. Then

     .. math::
        \sum_{l = 1}^n \cos 2(p - k)l\alpha = \cos\xi + ... + \cos n\xi =
        \frac{sin\frac{n\xi}{2}\cos\frac{n+1}{2}\xi}{sin\frac{\xi}{2}}

     (from 237). Let us denote

     .. math::
        \frac{sin\frac{n\xi}{2}\cos\frac{n+1}{2}\xi}{sin\frac{\xi}{2}} =
        \sigma_k

     Then we can prove that :math:`\sigma_k = 0` if :math:`k` is of the same
     parity as :math:`p \{k\equiv p(mod 2)\}` and :math:`\sigma_k = -1` if
     :math:`k` and :math:`p` are of different parity :math:`\{k \equiv p +
     1(mode 2)\}`, and we get

     .. math::
        S = \frac{(-1)^p+1}{2^{2p - 1}}\sum_{\substack{k=0\\k\equiv p + 1(mod
        2)}}^{p-1} (-1)^kC^k_{2p} + n\frac{1}{2^{2p}}C^p_{2p}.

     Hence,

     .. math::
        S = \frac{1}{2^{2p - 1}}\sum_{\substack{k=0\\k\equiv p + 1(mod
        2)}}^{p-1} C^k_{2p} + n \frac{1}{2^{2p}}C^p{2p}

     But we can prove that

     .. math::
        \sum_{\substack{k=0\\k\equiv p + 1(mod 2)}}^{p-1} C^k_{2p} = 2^{2p -2}

     Hence, out formula is deduced.

241. Rewriting the polynomial as

     .. math::
        x^n - a^n - nxa^{n-1} + na^n = (x^ - a^n) -na^{n-1}(x-a) = (x -
        a)(x^{n-1} + ax^{n-2} + ... + a^{n-1} - na^{n-1})

     At :math:`x = a` the second factor of the last product vanishes and,
     consequently, is dividiable by :math:`x - a`; therefore the given
     polynomial is divisible by :math:`(x - a)^2`.

242. Let us denote the polynomial by :math:`P_n` and set up the difference
     :math:`P_n - P_{n+1}`. Transforming the difference, we can easily that it
     is divisible by :math:`(1 - x)^3`. Since it is true for any positive
     :math:`n`, we obtain a number of equalities

     .. math::
        P_n - P_{n-1} = (1 - x)^3\phi_n(x),

     .. math::
        P_{n-1} - P_{n-1} = (1 - x)^3\phi_{n-1}x,

     .. math::
        ...

     .. math::
        P_3 - P-2 = (1 - x)^3\phi_2(x),

     .. math::
        P_2 - P_1 = (1 - x)^3\phi_1(x).

     Hence, :math:`P_n - P_1 = (1 - x)^3\psi(x)`. But since :math:`P_1 = (1 -
     x)^3` it follows that :math:`P_n` is divisible by :math:`(1 - x)^3` and
     our proposition is proved.

243. Considering the given expression as a polynomial in :math:`y`, let us put
     :math:`y = 0`. We see that at :math:`y = 0` the polynomial vanishes (for
     any :math:`x`). Therefore out polynomial is divisible by :math:`y`. Since
     it is symmetrical both with respect to :math:`x` and :math:`y` (remains
     unchanged on permutation of these letters), it is divisible by :math:`x`
     as well. Thus, the polynomial is divisible by :math:`xy`. To prove that it
     is divisible by :math:`x + y` let us put in it :math:`y = -x`. It is
     evident that for odd :math:`n` we have

     .. math::
        (x - x)^n - x^n -(-x)^n = 0.

     Consequently, out polynomial is divisible by :math:`x + y`. It only
     remains to prove the divisibility of the polynomial by

     .. math::
        x^2 + xy + y^2 = (y - x\omega)(y - \omega^2)

     where :math:`1 + \omega + \omega^2 = 0`.

     For this purposed it only remains to replace :math:`y` first by
     :math:`x\omega` and then by :math:`x\omega^2` and to make sure that with
     these substitutions the polynomial vanishes. Since, by hypothesis,
     :math:`n` is not divisible by three, it follows that :math:`n = 3l + 1` or
     :math:`n = 3l + 2`. At :math:`y = x\omega` the polynomial attains the
     following value:

     .. math::
        (x + x\omega)^n - x^n - (x\omega)^n = x^n(\omega^{2n} + 1 + \omega^n) =
        0

     Likewise we prove that at :math:`y = x\omega^2` the polynomial vanishes as
     well and consequently, its divisibility by :math:`xy(x+y)(x^2+xy+y^2)` is
     proved.
     
244. Let the quantities :math:`-x, -y` and :math:`x + y` be the roots of the
     cubic equation :math:`\alpha^3 - r\alpha^2 - p\alpha - q = 0`.

     Then by virtue of the known relations between the roots of an equation and
     its coefficients(we will study this in next chapter), we have

     :math:`r = -x -y + (x + y) = 0`, :math:`-p = xy - x(x +y) - y(x + y)`, and
     :math:`q = xy(x + y)`.

     Thus, :math:`-x , -y` and :math:`x + y` are the roots of the following
     equation

     :math:`\alpha^3 - p\alpha -q = 0` where :math:`p = x^2 + xy + y^2, q =
     xy(x + y)`.

     Putting:math:`(-x)^n + (-y)^n + (x + y)^n = S_n`.

     Between successive values of :math:`S_n` there exists the following
     relationships, :math:`S_{n+3} + pS_{n+1} + qS_n`,

     :math:`S_1` being equal to zero. Let us prove that :math:`S_n` is
     divisible by :math:`p^2` if :math:`n\equiv 1 (mod 6)` using the method of
     mathematical induction(we have not studies this as well). Supposed
     :math:`S_n` is divisible by :math:`p^2` and prove that :math:`S_{n+6}` is
     also divisible by :math:`p^2`. We have

     :math:`S_{n+6} = pS_{n+4} + qS_{n+3}`, :math:`S_{n+4} = pS_{n+2} +
     qS_{n+1}`.

     :math:`\therefore S_{n+6} = p(pS_{n+2} + qS_{n+1}) + q(pS_{n+1} + qS_N) =
     p^2S_{n+2} + 2pqS_{n+1} + q^2S_n`.

     Since, by superposition, :math:`S_n` is divisible by :math:`p^2`, it
     suffices to prove that :math:`S_{n+1}` is divisible by :math:`p`. Thus, we
     only have to prove that

     :math:`(x + y)^n + (-x)^n + (-y)^n` is divisible by :math:`x^2 + xy + y^2`
     if :math:`n\equiv = 2(mod 6)`. Proceeding in the same way as previous
     problem we can easily prove our assertion. And so, assuming :math:`S_n` is
     divisible by :math:`p^2`, we have proved that :math:`S_{n+6}` is also
     divisible by :math:`p^2`. But :math:`S_1 = 0` is divisible by
     :math:`p^2`. Consequently, :math:`S_n = (x + y)^n - x^n - y^n` is
     divisible by :math:`x^2 + xy + y^2` at any :math:`n \equiv 1(mod 6)`. It
     only remains to prove its divisibility by :math:`x + y` and by :math:`xy`
     which can be proved by proceeding in the same way as previous problem.

245. It is known that

     .. math::
        (x + y + z)^3 - x^3 - y^3 - z^3 = 3(x+y)(x+z)(y+z)

     Considering our polynomial rearranged in powers of x we put in it :math:`x
     = -y`. We have

     :math:`(-y + y + z)^m - (-y)^m = y^m -z^m = 0` since :math:`m` is odd.

     Thus, our polynomial is divisible by :math:`(x+y)`. Likewise we make sure
     it is divisible by :math:`(x + z)` and by :math:`(y + z)`.

246.
     
     
Rest of the problems are left as exercises for the reader.
