#include "holberton.h"

/**
 * _memset - function that copies memory area
 * @s: pointer, an array
 * @b: char, a constant byte
 * @n: int, bytes of memory
 * Return: returns array that is a pointer
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	if (*s != '\0')
		_putchar(*s);

	_puts_recursion(s + 1);
}
