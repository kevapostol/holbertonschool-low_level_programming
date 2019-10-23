#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: integer array
 * @size: size of array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
