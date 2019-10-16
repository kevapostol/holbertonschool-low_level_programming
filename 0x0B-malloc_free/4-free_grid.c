#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: the grid
 * @height: height
 * Return: void, returns nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);

		free(grid);
	}
}
