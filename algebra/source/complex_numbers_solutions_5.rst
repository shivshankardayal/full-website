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
        -\cos\frac{2\pi}{5}\right)\left(\cos\theta +\cos\frac{\2pi}{5}\right)

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

     :math:`\therefore x = \left(\cos\pi + i \sin\pi\right)\frac{1}{7} =
     \cos\frac{2r\pi + \pi}{7} + i \sin \frac{2r\pi + \pi}{7}, r = 0, 1, 2,
     ..., 6`

     .. math::
        
     
Rest of the problems are left as exercises for the reader.
