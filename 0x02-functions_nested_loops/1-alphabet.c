#include "holberton.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 *
 * Return: void
 * Prints from a to z with a newline
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
