#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}
