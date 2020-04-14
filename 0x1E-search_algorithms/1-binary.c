#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array to be searched
 * @size: the length of the array
 * @value: the value to be searched in the array
 * Return: returns the index of the array found, if not found or the array is
 * empty it returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	int lower_bound = 0;
	int upper_bound = (int)size - 1;

	if (array == NULL || size == 0)
		return (-1);

	return (binarySearch(array, lower_bound, upper_bound, value));
}

/**
 * binarySearch - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @arr: the array to be searched
 * @l: the lower bound of the array
 * @r: the upper bound of the array
 * @x: the value to be searched in the array
 * Return: returns the index of the array found, if not found or the array is
 * empty it returns -1
 */
int binarySearch(int *arr, int l, int r, int x)
{
	if (l <= r)
	{
		int mid = l + (r - l) / 2;

		printArray(arr, l, r);

		if (arr[mid] == x)
			return (mid);

		if (arr[mid] > x)
			return (binarySearch(arr, l, mid - 1, x));

		return (binarySearch(arr, mid + 1, r, x));
	}
	return (-1);
}

/**
 * printArray - prints the array
 * using the Linear search algorithm
 * @arr: the array to be searched
 * @l: the lower bound of the array
 * @r: the upper bound of the array
 * Return: no return value
 * empty it returns -1
 */
void printArray(int *arr, int l, int r)
{
	printf("Searching in array: ");
	for (; l < r; l += 1)
	{
		printf("%d, ", arr[l]);
	}
	printf("%d\n", arr[r]);
}
