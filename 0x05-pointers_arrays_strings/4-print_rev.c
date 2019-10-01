#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @*a: pointer
 * @*b: pointer
 *
 * Return: returns nothing
 *
 */
int _strlen(char *s)
{
	int n;
	
	for (n = 0; *s != '\0'; s++)
		n++;

	return n;
}

/**
 * swap_int - swaps the values of two integers
 * @*a: pointer
 * @*b: pointer
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
