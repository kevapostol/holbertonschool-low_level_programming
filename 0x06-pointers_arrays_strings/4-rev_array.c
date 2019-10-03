#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer, array
 * @n: integer, length of array
 *
 * Return: no return
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int half = n / 2;

	n--;

	for (i = 0; i < half; i++)
	{
		int temp = a[i];

		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
