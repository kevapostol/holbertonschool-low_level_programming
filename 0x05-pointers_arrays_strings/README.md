![Holberton Logo](https://i.ibb.co/nMtRXQR/Holberton.png)
# Tasks

#### 0. [reset to 98](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)
Write a function that takes a pointer to an  `int`  as parameter and updates the value it points to to  `98`.

-   Prototype:  `void reset_to_98(int *n);`

```
julien@ubuntu:~/0x05$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$ 

```

#### 1. [swap](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c)
Write a function that swaps the values of two integers.

-   Prototype:  `void swap_int(int *a, int *b);`  
    

```
julien@ubuntu:~/0x05$ cat 1-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$

```

#### 2. [strlen](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c)
Write a function that returns the length of a string.

-   Prototype:  `int _strlen(char *s);`

FYI: The standard library provides a similar function:  `strlen`. Run  `man strlen`  to learn more.

```
julien@ubuntu:~/0x05$ cat 2-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen 
10
julien@ubuntu:~/0x05$ 

```

#### 3. [puts](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c)
Write a function that prints a string, followed by a new line, to  `stdout`.

-   Prototype:  `void _puts(char *str);`

FYI: The standard library provides a similar function:  `puts`. Run  `man puts`  to learn more.

```
julien@ubuntu:~/0x05$ cat 3-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x05$ 


```

#### 4. [print rev](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)
Write a function that prints a string, in reverse, followed by a new line.

-   Prototype:  `void print_rev(char *s);`

```
julien@ubuntu:~/0x05$ cat 4-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x05$ 

```

#### 5. [rev string](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/5-rev_string.c)
Write a function that reverses a string.

-   Prototype:  `void rev_string(char *s);`  
    

```
julien@ubuntu:~/0x05$ cat 5-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x05$ ./5-rev_string 
Holberton
notrebloH
julien@ubuntu:~/0x05$ 

```

#### 6. [puts2](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c)
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

-   Prototype:  `void puts2(char *str);`

```
julien@ubuntu:~/0x05$ cat 6-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2 
02468
julien@ubuntu:~/0x05$ 

```

#### 7. [puts half](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)
Write a function that prints half of a string, followed by a new line.

-   Prototype:  `void puts_half(char *str);`
-   The function should print the second half of the string
-   If the number of characters is odd, the function should print the last  `n`  characters of the string, where  `n = (length_of_the_string - 1) / 2`

```
julien@ubuntu:~/0x05$ cat 7-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half 
56789
julien@ubuntu:~/0x05$ 

```

#### 8. [print array](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c)
Write a function that prints  `n`  elements of an array of integers, followed by a new line.

-   Prototype:  `void print_array(int *a, int n);`  
    
-   where  `n`  is the number of elements of the array to be printed
-   Numbers must be separated by comma, followed by a space
-   The numbers should be displayed in the same order as they are stored in the array
-   You are allowed to use  `printf`

```
julien@ubuntu:~/0x05$ cat 8-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$

```

#### 9. [strcpy](https://github.com/kevapostol/holbertonschool-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)
-   Prototype:  `char *_strcpy(char *dest, char *src);`

Write a function that copies the string pointed to by  `src`, including the terminating null byte (`\0`), to the buffer pointed to by  `dest`.

-   Return value: the pointer to  `dest`

FYI: The standard library provides a similar function:  `strcpy`. Run  `man strcpy`  to learn more.

```
julien@ubuntu:~/0x05$ cat 9-main.c
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *p;

    p = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", p);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$ 

```

## Requirements
- All files are created and compiled on Ubuntu 14.04.4 LTS using gcc 4.8.4
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)


## Author
**Kevin Apostol** - [Linkedin](https://www.linkedin.com/in/kevapostol/) & [Twitter](https://twitter.com/apostolkev)
