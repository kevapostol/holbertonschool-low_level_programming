#include "holberton.h"

/**
 * print_alphabet prints characters from a to z
 *
 * Returns void
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch += 1)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
