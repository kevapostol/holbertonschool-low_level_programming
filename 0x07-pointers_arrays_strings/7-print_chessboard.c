#include "holberton.h"
#include <stdio.h>
/**
 * comp - compares 2 strings
 * @x: string 1
 * @y: string 2
 *
 * Return: true or false, integer
 *
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				printf("%c", a[i][j]);
			}
			printf("\n");
		}
}

