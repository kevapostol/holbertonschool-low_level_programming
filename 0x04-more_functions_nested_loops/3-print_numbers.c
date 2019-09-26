#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 *
 *
 * Return: void
 *
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i += 1)
		_putchar((char) i);

	_putchar('\n');
}
