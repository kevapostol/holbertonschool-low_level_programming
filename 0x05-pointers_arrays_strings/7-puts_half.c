#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer
 *
 *
 * Return: returns nothing
 *
 */
void puts_half(char *str)
{
	int count = 0;
	int half;

	while (str[count])
	{
		count++;
	}

	if (count / 2 == 0)
		half = count / 2;
	else
		half = (count + 1) / 2;

	while (str[half])
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
