#include "holberton.h"
#include <stdio.h>

/**
 * main - FizzBuzz
 *
 *
 *
 * Return: void
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i += 1)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i != 100)
			printf("%d ", i);
		else
			printf("Buzz");
	}

	printf("\n");
	return (0);
}
