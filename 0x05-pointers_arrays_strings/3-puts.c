#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @*a: pointer
 * @*b: pointer
 *
 * Return: returns nothing
 *
 */
void _puts(char *str)
{	
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}	
	
	_putchar('\n');
}
