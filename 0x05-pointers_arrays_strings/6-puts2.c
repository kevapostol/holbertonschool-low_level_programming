#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer
 *
 *
 * Return: returns nothing
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
	}

	_putchar('\n');
}
