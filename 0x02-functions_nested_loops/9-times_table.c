#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 * Return: void
 *
 */

void times_table(void)
{
	int i;
	int j;
	int num1;
	int num2;

	for (i = 0; i < 10; i += 1)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j < 10; j += 1)
		{
			int num = i * j;
			num1 = (num / 10) % 10;
			num2 = num % 10;

			if (num1 >= 1)
				_putchar(num1 + '0');
			else
				_putchar(' ');

			_putchar(num2 + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
