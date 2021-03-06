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

	if (dest == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		dest[i] = malloc(width * sizeof(int));
		if (dest[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(dest[j]);
			free(dest);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			dest[i][j] = 0;
		}
	}
	return (dest);
}
