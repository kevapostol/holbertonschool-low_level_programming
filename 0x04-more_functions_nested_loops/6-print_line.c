#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer, number of times the character '_' should print
 *
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i += 1)
			_putchar('_');

		_putchar('\n');
	}
}
