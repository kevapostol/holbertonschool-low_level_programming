#include "holberton.h"

/**
 * print_alphabet_x10 - prints a to z ten times
 *
 *
 * Return: void
 * Prints from a to z 10 times with a newline
 */
void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 0; i < 10; i += 1)
	{
		for (ch = 'a'; ch <= 'z'; ch += 1)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
