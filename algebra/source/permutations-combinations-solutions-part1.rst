Permutations and Combinations Solutions Part 1
**********************************************
1. Given, :math:`^nP_4 = 360 \therefore \frac{n!}{(n - 4)!} = 360`

   or, :math:`n(n - 1)(n - 2)(n - 3) = 360 = 6\times5\times4\times3`

   :math:`\therefore n = 6`

2. Given, :math:`^nP_3 = 9240 \therefore \frac{n!}{(n - 3)!} = 9240`

   or, :math:`n(n - 1)(n - 2) = 9240 = 22\times21\times20`

   :math:`\therefore n = 22`

3. Given, :math:`^{10}P_r = 720 \therefore \frac{10!}{(10 - r)!} = 720`

   :math:`10\times9\times8 = 720 \therefore r = 3`

4. Given, :math:`^{2n + 1}P_{n - 1}:^{2n - 1}P_n = 3:5`

   :math:`\therefore \frac{(2n + 1)!}{(n + 2)!}.\frac{(n - 1)!}{(2n - 1)!} = \frac{3}{5}`

   :math:`\frac{2n(2n + 1)}{n(n + 1)(n + 2)} = \frac{3}{5}`

   :math:`3n^2 - 11n - 4 = 0`

   :math:`\therefore n = 4`

5. :math:`t_n = n.^nP_n = n.n! = [n + 1 - 1]n! = (n + 1)n! - n! = (n + 1)! - n!`

   :math:`t_1 = 2! - 1!`

   :math:`t_2 = 3! - 2!`

   ...

   Adding, we get :math:`= (n + 1)! - 1! =` R.H.S
6. Unit's position can be filled in :math:`5` ways, ten's position can be
   filled in :math:`4` ways and so on.

   :math:`\therefore` Total no. of numbers :math:`= 5\times 4\times 3\times 2`

   :math:`= 120`
7. Hundred's place can be filled by :math:`4, 5` or :math:`6` i.e. :math:`3`
   ways. Remaining two places can be filled by :math:`^5P_2` ways.

   :math:`\therefore` Total no. of numbers :math:`= 3\times ^5P_2`

   :math:`= 60`
8. **Case I:** When the number is of three digits.

   Hundred's place can be filled by :math:`3, 4` or :math:`5` i.e. :math:`3`
   ways. Remaining two places can be filled by :math:`^5P_2` ways.

   :math:`\therefore` Total no. of three digit numbers :math:`= 60`

   **Case II:** When the number is of four digits.

   Thousand's place can be filled by :math:`1` or :math:`2` i.e. :math:`2` ways.
   Remaining :math:`3` positions can be filled by :math:`^5P_3` ways i.e.
   :math:`120` ways.

   Total no. of numbers that can be formed :math:`= 60 + 120 = 180`
9. **Case I:** When :math:`0` occurs at unit's  place.

   Total no. of numbers :math:`= 1\times ^6P_3 = 120`

   **Case II:** When :math:`0` does not occur at unit's place.

   Unit's place can be filled by :math:`3` ways using :math:`2, 4` or :math:`6`

   Thousand's place can be filled by any of remaining numbers except :math:`0`
   i.e. :math:`5` ways.

   Remaining :math:`2` places can be filled in :math:`^5P_2` ways.

   :math:`\therefore` Total no. of numbers :math:`= 5\times 3\times ^5P_2`

   :math:`= 300`

   :math:`\therefore` Total no. of such four digit numbers
   :math:`= 120 + 300 =420`
