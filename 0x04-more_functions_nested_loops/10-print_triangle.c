#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle followed by a newline
 * @size: integer, the size of the triangle
 *
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int i, j;
	int char_num = 0;
	int space_num = size - 1;

	if (size == 0 || size < 0)
		printf("\n");
	else
	{
	for (i = 0; i < size; i += 1)
	{
			for (j = 0; j < space_num; j += 1)
				printf(" ");
			space_num -= 1;

			for (j = 0; j <= char_num; j += 1)
				printf("#");
			char_num += 1;

			printf("\n");
		}
	}
}
