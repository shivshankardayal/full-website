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
10. **Case I:** When :math:`2` occurs at thousand's place.

    Thousand's place can be filled in one way and hundred's place can be filled
    by :math:`3, 4, 5` or :math:`6`. Remaining two places can be filled in
    :math:`^5P_2` ways.

    :math:`\therefore` Total no. of numbers :math:`= 1\times 4\times ^5P_2`

    :math:`= 80`

    **Case II:** When anyone of :math:`3, 4, 5` or :math:`6` occurs at
    thousand's place.

    Thousand's place can be filled in :math:`4` ways. Rest of three places can
    be filled in :math:`^6P_3` ways.

    No. of numbers formed in this case :math:`= 4\times ^6P_3 = 480`

    Combining both cases we have our desired answer as :math:`560`.
11. **Case I:** When number is of five digits.

    Ten Thousand's place can be filled in :math:`4` ways using :math:`1, 2, 3`
    and :math:`4`. Rest of :math:`4` places can be filled in :math:`^4P_4` ways.

    No. of numbers formed in this case :math:`= 4\times ^4P_4 = 96`

    **Case II:** When number is of four digits.

    Thousand's place can be filled in :math:`4` ways as in previous case. Rest
    of :math:`3` places can be filled in :math:`^4P_3` ways.

    No. of numbers formed in this case :math:`= 4\times ^4P_3 = 96`

    **Case III:** When the number is of three digits.

    Hundred's place can be filled in :math:`4` ways as in previous case. Rest of
    :math:`2` places can be filled in :math:`^4P_2` ways.

    No. of numbers formed in this case :math:`= 4\times ^4P_2 = 48`

    **Case IV:** When the number is of two digits.

    Ten's place can be filled in :math:`4` ways. Rest of places can be filled in
    :math:`^4P_1` ways.

    No. of numbers formed in this case :math:`= 4\times ^4P_1` ways.

    **Case V:** When the number is of one digit.

    No. of positive numbers found in this case :math:`= 4`

    Total no. of numbers formed :math:`= 96 + 96 + 48 + 16 + 4 = 260`
12. Total no. of numbers formed :math:`= ^4P_4 = 24`

    When :math:`1` occurs at unit's place, total no. of numbers formed
    :math:`= 1\times ^3P_3 = 6`

    When :math:`1` occurs at ten's place, total no. of numbers formed
    :math:`= 1\times ^3P_3 = 6`

    Similarly when :math:`1` will occur at hundred's and thousand's place and
    :math:`6` numbers will be formed in each case.

    :math:`\therefore` Sum of the digits at unit's, ten's, hundred's and
    thousand's will be each :math:`6(1 + 2 + 3 + 4) = 60`

    :math:`\therefore` Sum of the numbers formed :math:`= 60\times 1 + 60\times
    10 + 60\times 100 + 60\times 1000 = 66660`
13. Occurrence of zero at any place will not affect the sum of the digits at
    that place.

    Number of numbers formed having :math:`1` at unit's, ten's and hundred's
    place :math:`= 12`. In each case thousand's place can be filled in
    :math:`2` ways using :math:`2` and :math:`3`. Rest of two places can be
    filled in :math:`^2P_2` ways. Thus, total no. of numbers :math:`= 3\times
    2\times ^2P_2 = 12`

    Number of numbers formed when :math:`1` is at thousand's place
    :math:`= 1\times ^3P_3 = 6`

    Sum of digits at unit's, ten's and hundred's place will be each
    :math:`= 4(1 + 2 + 3) = 24`

    Sum of digits at thousand's place will be :math:`= 6(1 + 2 + 3) = 36`

    Thus, sum of all numbers :math:`= 24\times 1 + 24\times 10 + 24\times 100 +
    36\times 1000 = 38664`
14. This is similar to last two problems and has been left as an exercise.
15. Invitation cards can be sent to each of the six friends by any of the three
    servants in :math:`3` ways.

    Thus, our answer is :math:`3^6 = 729`
16. Each prize can be given to any of buys in :math:`7` different ways. Thus,
    total no. of ways in which prizes can be distributed :math:`= 7^3 = 343`.
17. Each of the :math:`5` arms can have any one of the positions in :math:`4`
    ways. But all the five arms can be at position of rest in only :math:`1`
    ways.

    Thus, total no. of signals that can be made :math:`= 4 \times 4\times 4
    \times 4\times 4 - 1 = 1023`
18. Total no. of possible arrangements :math:`= 10\times 10\times 10 = 1000`

    But one of these will be successful attempt so total no. of unsuccessful
    attempts that can be made :math:`= 1000 - 1 = 999`
19. Thousand's place can be filled in :math:`3` ways using :math:`1, 2` or
    :math:`3`. Rest of the places can be filled in :math:`5` ways.

    Thus, total no. of numbers :math:`= 3\times 5\times 5\times 5 = 375`
20. Treating people of same nationality as one entity we have :math:`3!` ways
    of seating them in a row.

    However, :math:`8` Indians can be seated in :math:`8!` ways, :math:`4`
    Americans can be seated in :math:`4!` ways and :math:`4` Englishmen can
    be seated in :math:`4!` ways.

    Thus, total no. of ways they can be seated together :math:`= 3!8!4!4!`
21. Treating books of same volume as one book we have :math:`4 + 1 + 1 + 1` i.e.
    :math:`7` books which can be arranged in :math:`7!` ways.

    Following as previous problem total no. of ways in which these books can be
    put on self :math:`= 7!8!5!3!`
22. Treating all copies of a book as one book we have :math:`5` books which can
    be arranged in :math:`5!` ways.

    All copies being identical can be arranged only in :math:`1` ways.

    Thus, total no. of arrangements :math:`= 5! = 120`
23. Total no. of permutations when there is no restriction :math:`= ^{10}P_{10}`
    i.e. :math:`10!`.

    Treating best and worst paper as one we have :math:`9!` ways of arranging
    them. However, best of worst can be arranged in :math:`2!` ways, making
    total no. of ways as :math:`2!9!`.

    Thus, total no. of ways of in which these papers can be arranged
    :math:`= 10! - 9!2! = 8.9!`
24. Total no. of permutations when there is no restriction :math:`= ^8P_8` i.e.
    :math:`8!` ways.

    Treating three girls as one we have :math:`6!` ways of seating them.
    However, three girls can be seated in :math:`3!` ways among themselves.
    Thus, total no. of ways :math:`= 6!3!`

    Hence, required no. of ways of seating :math:`= 8! - 6!3!`
25. Since there is no restriction on I.A. students, let us fix their positions.

    x I.A. x I.A. x I.A. x I.A. x I.A. x I.A. x I.A. x

    Here, 'x' indicated vacant positions which can be filled by I.Sc. students.
    Total no. of ways of seating I.A. students :math:`= 7!` ways.

    I.Sc. students can be seated in :math:`= ^8P_5` ways as there are :math:`8`
    vacant positions.

    Thus, total no. of ways of seating them :math:`= 7!^8P_5`
26. Following last two problems, total no. of seating them :math:`= 7!^8P_3`
27. **Case I:** When a boy sits at the first place, possible arrangements are

    B G B G B G B G

    Thus, no. of ways of seating them :math:`= 4!4!`

    **Case II:** When a girl sits at the first place, possible arrangements are

    G B G B G B G B

    Again, no. of arrangements :math:`= 4!4!`

    Thus, total no. of arrangements :math:`= 4!4! + 4!4! = 1152`
28. The only possible arrangement is B G B G B G B but boys can be arranged in
    :math:`4!` ways and girls can be arranged in :math:`3!` ways.

    Thus, total no. of possible seating arrangements :math:`= 4!3! = 144`
29. There are :math:`12` letters in the word civilization out of which :math:`4`
    letters are i.

    Thus, total no. of arrangements :math:`= \frac{12!}{4!}`

    But one word is civilization itself. Thus, total no. of rearrangements are
    :math:`= \frac{12!}{4!} - 1`
30. Total no. of letters are :math:`10` out of which :math:`4` are vowels with
    'i' occurring twice. Treating all vowels as one we have seven letters.

    Total no. of arrangements of these seven letters :math:`= 7!`

    However, :math:`4` vowels with 2 'i' can be arranged in
    :math:`\frac{4!}{2!}` ways among themselves.

    Thus, total no. of ways :math:`= 7!\frac{4!}{2!}`
31. Total no. of letters :math:`= 8`; total no. of vowels :math:`= 3` and 'r'
    occurs twice.

    Total no. of words with no restriction :math:`= \frac{8!}{2!}`

    Considering three vowels as one total no. of words :math:`= \frac{6!}{2!}`

    But three vowels can be arranged in :math:`3!` ways.

    Thus, no. of words when vowels are together :math:`3!\frac{6!}{2!}`

    Total no. of words when vowels are not together :math:`= \frac{8!}{2!} -
    3!\frac{6!}{2!}`
32. Total no. of letters are :math:`7` with 'e' repeating once.

    Total no. of words that can be formed :math:`= \frac{7!}{2!}`

    With o's position fixed at end we have :math:`6` letters with 'e' occurring
    twice.

    Thus, no. of words where 'o' occurs at last place :math:`= \frac{6!}{2!}`
33. There are :math:`5` vowels and :math:`5` consonants. Among vowels 'a' and
    'i' occur twice.

    With relative positions fixed total no. of ways of arranging consonants
    :math:`= 5!`

    Total no. of ways of arranging vowels :math:`= \frac{5!}{2!2!}`

    Thus, total of no. of words :math:`= \frac{5!5!}{2!2!}`
34. Possible places for vowels are second, fourth and sixth position.

    Thus, no. of ways of arranging vowels :math:`= ^3P_2`

    Total no. of arranging consonants are :math:`= 4!`

    Therefore, desired no. of words :math:`= ^3P_2.4! = 144`
35. Possible arrangement can be V C V C V with three vowels, two consonants and
    no two vowels coming together.

    Thus, desired no. of words :math:`= 3!.2! = 12`
36. Numbers greater than a million have :math:`7` digits. We have seven digits
    with :math:`2` occurring twice and :math:`3` occurring thrice.

    Total no. of numbers :math:`= \frac{7!}{3!2!}`

    But these also include numbers where :math:`0` is at first position making
    them smaller than a million.

    No. of numbers with :math:`0` at first place :math:`= \frac{6!}{3!2!}`

    :math:`\therefore` Desired no. of numbers :math:`= \frac{7!}{3!2!} -
    \frac{6!}{3!2!} = 360`
37. For circular permutations :math:`n` objects can be arranged in
    :math:`(n - 1)!` ways.

    i. When there is no restriction :math:`9` persons can be arranged in
       :math:`8!` ways.

    ii. Treating all British as one person we have six persons which can be
        seated in :math:`5!` ways.

        But four British can be seated in :math:`4!` ways among themselves.
        Thus total no. of seating arrangement :math:`= 5!4!`

    iii. Total no. of arrangements with no restriction :math:`=8!`

         Total no.of arrangements with all British seating together
         :math:`=5!4!`

         Therefore, total no. of seating arrangements when all four British are
         not together :math:`= 8! - 5!4!`

    iv. :math:`5` Indians can be seated in :math:`4!` ways around the table.

        Now there will be five empty positions so that no two British sit
        together. Thus, no. of ways of seating British :math:`= ^5P_4`

        Desired number :math:`= 4!. ^5P_4`
38. :math:`5` Indians can be seated in :math:`4!` ways. Now, 5 British can be
    arranged in :math:`^5P_5` i.e. :math:`5!` ways on :math:`5` positions.

    Thus, desired number :math:`= 4!5!`
39. Treating two delegated as one we have :math:`19` delegates which can
    seated in :math:`18!` ways.

    But the two delegated themselves can be arranged in :math:`2!` ways. Thus,
    total no. of numbers :math:`= 18!2!`
40. Since in a necklace clockwise or anticlockwise arrangement does not make
    a difference, total no. of necklaces which can be formed with :math:`n`
    beads :math:`= \frac{(n - 1)!}{2}`
41. :math:`^nP_4 = 12\times ^nP_2`

    :math:`n.(n - 1).(n - 2).(n - 3) = 12.n.(n - 1)`

    :math:`(n - 2)(n - 3) = 12`

    :math:`n^2 - 5n - 6 = 0`

    :math:`(n - 6)(n + 1) = 0`

    Thus, :math:`n = 6` as :math:`n` cannot be negative.

Rest of the problems are left as exercises.
