#include "holberton.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: pointer
 *
 *
 * Return: returns nothing
 *
 */
void print_rev(char *s)
{
	int n, len;

	for (n = 0; *s != '\0'; s++)
		n++;

	len = n;

	for (; len >= 0; len--, s--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
