#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: integer
 *
 *
 * Return: void
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n += 1)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n -= 1)
		{
			printf("%d, ", n);
		}
	}

	printf("98\n");
}
