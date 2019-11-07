#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: ul int
 *
 * Return: none
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
