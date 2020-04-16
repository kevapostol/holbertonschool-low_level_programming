#include "search_algos.h"
/**
 * jump_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array to be searched
 * @size: the length of the array
 * @value: the value to be searched in the array
 * Return: returns the index of the array found, if not found or the array is
 * empty it returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	int step = (int)floor(sqrt(size));

	if (array == NULL || size == 0)
		return (-1);

	/*Jump Serch*/
	while (array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		idx += step;
		if (idx >= size)
			break;
	}

	/*Step Back*/
	printf("Value found between indexes [%lu] and [%lu]\n", idx - step, idx);
	idx -= step;

	/*Linear Search*/
	while (array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		idx += 1;
		if (idx == size)
			return (-1);
	}

	if (array[idx] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		return (idx);
	}

	return (-1);
}
