#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @*a: pointer
 * @*b: pointer
 *
 * Return: returns nothing
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	
	*b = *a;
	*a = temp;
}
