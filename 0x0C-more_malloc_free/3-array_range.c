#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - creates an array of integers
 * @min: int, min number
 * @max: int, max number
 *
 * Return: pointer to int array
 */
int *array_range(int min, int max)
{
	int *p, len, i;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	p = malloc(sizeof(int) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
