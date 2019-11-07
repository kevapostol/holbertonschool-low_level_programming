#include <stdlib.h>
#include "holberton.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: returns the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int i = 0;

	while (mask > 0)
	{
		if (i == index)
		{
			if ((mask & n) > 0)
				return (1);
			else
				return (0);
		}

		i += 1;
		mask = mask << 1;
	}

	return (-1);
}
