#include "holberton.h"

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
	int i;
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	int num;

	if (n > 98)
	{
		for (i = n; i >= 98; i -= 1)
		{
			num0 = (i / 100) % 10;
			num1 = (i / 10) % 10;
			num2 = i % 10;

			if (i >= 100)
				_putchar(num0 + '0');

			if (i >= 10)
				_putchar(num1 + '0');

			_putchar(num2 + '0');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i <= 98; i += 1)
		{
			if (i < 0)
				num = -i;
			else
				num = i;

			num1 = (num / 10) % 10;
			num2 = num % 10;

			if (i < 0)
				_putchar('-');

			if (i >= -9 && i <= 9)
				_putchar(num2 + '0');
			else
			{
				_putchar(num1 + '0');
				_putchar(num2 + '0');
			}

			_putchar(' ');
		}
	}

	_putchar('\n');
}
