#include <stdlib.h>
#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: returns 1 if succes else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int i = 0;

	while (mask > 0)
	{
		if (i == index)
		{
			*n = (mask | *n);
			return (1);
		}

		i += 1;
		mask = mask << 1;
	}

	return (-1);
}
