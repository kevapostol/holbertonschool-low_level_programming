#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer, pointed to int array
 * @size: int, size of array
 *
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
		sum1 += a[i * (size + 1)];

	for (i = 0; i < size; i++)
		sum2 += a[(i + 1) * (size - 1)];

	printf("%d, %d\n", sum1, sum2);
}
