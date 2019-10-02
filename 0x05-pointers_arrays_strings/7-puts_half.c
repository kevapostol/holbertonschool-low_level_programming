#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
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
