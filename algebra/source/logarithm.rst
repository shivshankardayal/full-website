Logarithm
*********
**Definition:** A number :math:`x` is called the logarithm of a number
:math:`y` to the base :math:`b` if :math:`b^x = N` where :math:`b > 0, b\neq 1,
y > 0`

Mathematically, it is represented by the equation :math:`\log_b y = x` or
:math:`b^x = y`

**Notes:**

1. The conditions :math:`b>0, b\neq 1` and :math:`N>0` are necessary in the
   definition of logarithm.

2. When :math:`b = 1` suppose logarithm is defined, and we have to find the
   value of :math:`\log_1 y.` Let

   :math:`\log_1 y = x\Rightarrow 1^x = y \Rightarrow 1 = y`

   If :math:`\log_1 2` is defined then :math:`1 = 2.` So we see that :math:`b =
   1` leads to meaningless result. Similarly, it is true for :math:`b \neq 0`

3. Similarly if :math:`y < 0,` then :math:`b^x = y` which is meaningless as
   L.H.S. is positive while R.H.S. is negative

4. Let the condition to be true when :math:`b = 0.` Thus, :math:`0^x = N` or
   :math:`0 = N` i.e. if :math:`=log_0 2` is defined will mean that :math:`0 =
   2` Hence our assumption leads to failure.

5. No number can have two different logarithms to a given base. Assume that a
   number :math:`N` has two different logarithms :math:`x` and :math:`y` with
   base :math:`N`. Thenm

   :math:`\log_b N = x` and :math:`\log_b N = y`

   :math:`N = b^x` and :math:`b^y = N`

   :math:`\Rightarrow b^x = b^y \Rightarrow x = y`

6. When the number or base is negative the value of logarithm comes out to be a
   complex number with non-zero imaginary part.

   Let :math:`\log_e (-5) = x`

   :math:`\log_e 5.e^{i\pi} = x` (recall from complex numbers that
   :math:`e^{i\pi} = -1`)

   :math:`x = \log_e 5 + i\pi`

Important Results
=================
1. :math:`\log_b 1 = 0`

   **Proof:** Let :math:`\log_b 1 = x\Rightarrow b^x = 1 \Rightarrow x = 0`

2. :math:`=log_b b = 1`

   **Proof:** Let :math:`\log_b b = x\Rightarrow b^x = b\Rightarrow x = 1`

3. :math:`b^{\log_b N} = N`

   **Proof:** Let :math:`\log_b N = x \Rightarrow b^x = N`

   :math:`b^{\log_b N} = N [\because x = \log_b N]`

Important Formulae
==================
1. :math:`\log_b (x.y) = \log_b x + \log_b y, (x > 0, y > 0)`

   **Proof:** Let :math:`\log_b x = m \Rightarrow b^m = x` and :math:`\log_b y
   = n \Rightarrow b^n = y`

   :math:`x.y = b^m.b^n = b^{m + n} = b^{o}(say)`

   :math:`m + n = o`

   :math:`\log_b{x.y} = \log_b x + \log_b y`

   **Corollary:** :math:`\log_m(x.y.z) = \log_b x + \log_b y + \log_b z`

   If :math:`x <0, y< 0, \log_b (x.y) = \log_b |x| + \log_b |y|`

2. :math:`\log_b\left(\frac{x}{y}\right) = \log_b x - log_b y [x > 0, y > 0]`

   **Proof:** Let :math:`\log_b x = m \Rightarrow b^m = x` and :math:`\log_b y
   = n \Rightarrow b^n = y`

   :math:`\log_b\left(\frac{x}{y}\right) = o\Rightarrow b^o = \frac{x}{y}`

   :math:`\frac{x}{y} = \frac{b^m}{b^n} = b^{m - n} = b^o \Rightarrow m - n =
   o`

   :math:`\log_b\left(\frac{x}{y}\right) = \log_b x - log_b y`

   :math:`\log_b\left(\frac{x}{y}\right) = \log_b |x| - log_b |y|~[x < 0, y <
   0]`

3. :math:`\log_b N^k = k.\log_b N`

   **Proof:** Let :math:`\log_b N = x \Rightarrow b^x = N`

   Let :math:`\log_b N^k = y \Rightarrow b^y = N^k \Rightarrow b^y = b^{x^k} =
   b^{kx}`

   :math:`y = kx \Rightarrow \log_b N^k = k.\log_b N`

4. :math:`\log_b a = \log_c a\log_b c`

   **Proof:** Let :math:`\log_b a = x~\therefore b^x = a`

   :math:`\log_c a = y \therefore c^y = a`

   :math:`\log_b c = z \therefore b^z = c`

   :math:`b^x = a = c^y = b^{yz} \Rightarrow x = yz[\because b \neq 1]`

   Alternatively we can also write it as :math:`\log_b a = \frac{\log_c
   a}{\log_c b}`

5. :math:`\log_{(b^k)} N = \frac{1}{k}\log_b N [b > 0]`

   **Proof:** From previous point we can infer that :math:`\log_{(b^k)} N =
   \frac{\log N}{\log b^k} = \frac{\log N}{k.\log b} = \frac{1}{k}\log_b N`

   :math:`\log_{(b^k)} N = \frac{1}{k}\log_|b| N [b < 0, k = 2m, m\in N]`

6. :math:`\log_b a = \frac{1}{\log_a b}`

   **Proof:** Let :math:`\log_b a = x \therefore b^x = a`

   :math:`\log_a b = y \therefore a^y = b`

   :math:`a = b^y = a^{xy} \Rightarrow xy = 1`

   :math:`\Rightarrow \log_b a \log_a b = 1`

Bases of Logarthims
===================
There are two popular bases for logarithms. Common base is :math:`10` and
another is :math:`e`. When base is :math:`10,` logarithm is known as *common
logarithm* and when base is :math:`e,` logarithm is known as *natural* or
*Napierian* logarithm.

:math:`\log_10 x` is also written as :math:`lg~x` and :math:`\log_e x` as
:math:`ln~x`

Characteristics and Mantissa
============================
Typically a logarithm will have an integral part and a fractional part. The
integral part is called *characteristics* and fractional part is called
*mantissa.*

For example, if :math:`\log x = 4.7` then :math:`4` is characteristics and
:math:`.7` is mantissa of algorithm. If characteristics is less that zero then
at times it is written with a bar above it. For example, :math:`\log x = -5.3 =
\overline{5}.3`

As you can easily figure out the number of possitive integers having base
:math:`b` and characteristics :math:`n` is :math:`b^{n + 1} - b^n.`

Inequality of Logarithms
========================
If :math:`b > 1,` and :math:`\log_b x_1 > \log_b x_2` then :math:`x_1 > x_2.`
If :math:`b < 1,` and :math:`\log_b x_1 > \log_b x_2` then :math:`x_1 < x_2.`

Expansion of Logarithm and its Graph
====================================
The logarithm series is given below:

:math:`\log(1 + x) = x - \frac{x^2}{2} + \frac{x^3}{3} - \frac{x^4}{4} +
\ldots`
      
Given below is an example how logarithm function behaves.

.. tikz:: Plot of logarithm with base 2

   \draw [help lines] (0,-4) grid [step=1] (100,7);
   \draw (0,0) -- (100,0);
   \draw plot [domain=0.1:100,samples=1000] (\x,{log2(\x)});
   \draw plot [domain=0.1:100,samples=1000] (\x,{log2(\x)});

So you can see the rate of increment of logarithm decreases.
