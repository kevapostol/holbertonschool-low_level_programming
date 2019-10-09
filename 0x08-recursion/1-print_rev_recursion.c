#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer, an array
 *
 *
 * Return: void, returns nothing
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	if (*s != '\0')
		_putchar(*s);
}
