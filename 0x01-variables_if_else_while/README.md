
![Holberton Logo](https://i.ibb.co/nMtRXQR/Holberton.png)
# Tasks

#### 0. [Positive or Negative](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c)
This program will assign a random number to the variable  `n`  each time it is executed. Complete the source code in order to print whether the number stored in the variable  `n`  is positive or negative.

-   You can find the source code  [here](https://intranet.hbtn.io/rltoken/7UBSgP4-dX9UI_R-fz7yYQ "here")
-   The variable  `n`  will store a different value every time you will run this program
-   You don’t have to understand what  `rand`,  `srand`,  `RAND_MAX`  do. Please do not touch this code
-   The output of the program should be:
    -   The number, followed by
        -   if the number is greater than 0:  `is positive`
        -   if the number is 0:  `is zero`
        -   if the number is less than 0:  `is negative`
    -   followed by a new line

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 

```

#### 1. [Last Digit](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c)
This program will assign a random number to the variable  `n`  each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable  `n`.

-   You can find the source code  [here](https://intranet.hbtn.io/rltoken/oFiQttJDmwMElxNT6fqSiA "here")
-   The variable  `n`  will store a different value every time you run this program
-   You don’t have to understand what  `rand`,  `srand`, and  `RAND_MAX`  do. Please do not touch this code
-   The output of the program should be:
    -   The string  `Last digit of`, followed by
    -   `n`, followed by
    -   the string  `is`, followed by
        -   if the last digit of  `n`  is greater than 5: the string  `and is greater than 5`
        -   if the last digit of  `n`  is 0: the string  `and is 0`
        -   if the last digit of  `n`  is less than 6 and not 0: the string  `and is less than 6 and not 0`
    -   followed by a new line

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$

```

#### 2. [Print Alphabet](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c)
Write a program that prints the alphabet in lowercase, followed by a new line.

-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   All your code should be in the  `main`  function
-   You can only use  `putchar`  twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$

```

#### 3. [Print Alphabets](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c)
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   All your code should be in the  `main`  function
-   You can only use  `putchar`  three times in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 

```

#### 4. [Print Alphabt](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c)
Write a program that prints the alphabet in lowercase, followed by a new line.

-   Print all the letters except  `q`  and  `e`
-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   All your code should be in the  `main`  function
-   You can only use  `putchar`  twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 

```

#### 5. [Print Numbers](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c)
Write a program that prints all single digit numbers of base 10 starting from  `0`, followed by a new line.

-   All your code should be in the  `main`  function

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 

```

#### 6. [Print Numberz](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c)
Write a program that prints all single digit numbers of base 10 starting from  `0`, followed by a new line.

-   You are not allowed to use any variable of type  `char`
-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   You can only use  `putchar`  twice in your code
-   All your code should be in the  `main`  function

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 

```

#### 7. [Print tebahpla](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c)
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   All your code should be in the  `main`  function
-   You can only use  `putchar`  twice in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$

```

#### 8. [Print Base16](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c)
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   All your code should be in the  `main`  function
-   You can only use  `putchar`  three times in your code

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$

```

#### 9. [Print Comb](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c)
Write a program that prints all possible combinations of single-digit numbers.

-   Numbers must be separated by  `,`, followed by a space
-   Numbers should be printed in ascending order
-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   All your code should be in the  `main`  function
-   You can only use  `putchar`  four times maximum in your code
-   You are not allowed to use any variable of type  `char`

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 

```

#### 10. [Print Comb2](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/10-print_comb2.c)
Write a program that prints the numbers from  `00`  to  `99`.

-   Numbers must be separated by  `,`, followed by a space
-   Numbers should be printed in ascending order, with two digits
-   You can only use the  `putchar`  function (every other function (`printf`,  `puts`, etc…) is forbidden)
-   You can only use  `putchar`  five times maximum in your code
-   You are not allowed to use any variable of type  `char`
-   All your code should be in the  `main`  function

```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 10-print_comb2.c -o 10-print_comb2
julien@ubuntu:~/0x01$ ./10-print_comb2 
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
julien@ubuntu:~/0x01$ 

```

## Requirements
- All files are created and compiled on Ubuntu 14.04.4 LTS using gcc 4.8.4
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)


## Author
**Kevin Apostol** - [Linkedin](https://www.linkedin.com/in/kevapostol/) & [Twitter](https://twitter.com/apostolkev)
