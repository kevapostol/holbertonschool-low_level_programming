#include "holberton.h"

/**
 * string_toupper - reverses the content of an array of integers
 * @c: pointer, array
 *
 *
 * Return: no return
 *
 */
char *string_toupper(char *c)
{
	int ctr = 0;

	while (c[ctr])
	{
		if (c[ctr] >= 'a' && c[ctr] <= 'z')
		{
			c[ctr] -= 32;
		}

		ctr++;
	}

	return (c);
}
