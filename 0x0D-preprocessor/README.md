![Holberton Logo](https://i.ibb.co/nMtRXQR/Holberton.png)
# Tasks

#### 0. [object_like_macro](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h)
Create a header file that defines a macro named  `SIZE`  as an abbreviation for the token  `1024`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 

```

#### 1. [Pi](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h)
Create a header file that defines a macro named  `PI`  as an abbreviation for the token  `3.14159265359`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$ 

```

#### 2. [main](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/2-main.c)
Write a program that prints the name of the file it was compiled from, followed by a new line.

-   You are allowed to use the standard library

```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 

```

#### 3. [Function-like macro](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h)
Write a function-like macro  `ABS(x)`  that computes the absolute value of a number  `x`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 

```

#### 4. [SUM](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/4-sum.h)
Write a function-like macro  `SUM(x, y)`  that computes the sum of the numbers  `x`  and  `y`.

```
julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 

```

## Requirements
- All files are created and compiled on Ubuntu 14.04.4 LTS using gcc 4.8.4
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)


## Author
**Kevin Apostol** - [Linkedin](https://www.linkedin.com/in/kevapostol/) & [Twitter](https://twitter.com/apostolkev)
