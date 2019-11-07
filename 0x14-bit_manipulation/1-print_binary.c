#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to an array of numbers which are binary
 *
 * Return: Unsigned int
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = mask << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((mask & n) > 0)
		{
			flag = 1;
			if (flag == 1)
				_putchar('1');
		}
		else if (flag == 1)
			_putchar('0');

		mask = mask >> 1;
	}
}
