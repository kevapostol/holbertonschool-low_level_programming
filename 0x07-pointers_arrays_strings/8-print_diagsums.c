#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer, double pointer
 * @to: pointer
 *
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;
	int j;
	int (*p)[size] = &a[0];

	for (i = 0; i < size; i++)
		sum1 += p[i][i];

	for (i = 0, j = size - 1; i < size; i++, j--)
		sum2 += p[i][j];

	printf("%d, %d\n", sum1, sum2);
}
