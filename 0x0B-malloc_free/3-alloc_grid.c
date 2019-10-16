#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: char pointer pointed to 1st idx of the array
 *
 */
int **alloc_grid(int width, int height)
{
	int **dest;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dest = malloc(height * sizeof(int *));

	for (; i < height; i++)
	{
		dest[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			dest[i][j] = 0;
		}
		free(dest[i]);
	}
	return (dest);
}
