#include "holberton.h"
/**
 * _strlen - gets the lenght
 * @s: pointer
 *
 *
 * Return: returns int
 *
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return (n);
}

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
	int len = _strlen(s) - 1;

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
