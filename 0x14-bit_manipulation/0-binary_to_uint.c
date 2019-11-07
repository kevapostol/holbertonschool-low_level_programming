#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to an array of numbers which are binary
 *
 * Return: Unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0, pow = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else if (b[i] == '1')
			deci += pow;

		pow += pow;
	}

	return (deci);
}
