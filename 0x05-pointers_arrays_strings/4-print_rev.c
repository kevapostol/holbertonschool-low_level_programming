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
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	s--;
	len--;

	for (; len >= 0; len--, s--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
