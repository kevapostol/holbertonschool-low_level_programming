#include "holberton.h"

/**
 * print_diagonal - draws a diagonal
 * @n: integer, number of times the character \ should be printed
 *
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int line_num;
	int space_incrementor = 0;
	int space_loop = 0;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (line_num = 0; line_num < n; line_num++)
		{
			while (space_incrementor < n)
			{
				for (space_loop = 0; space_loop < space_incrementor; space_loop++)
					_putchar(' ');

				space_incrementor += 1;
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
