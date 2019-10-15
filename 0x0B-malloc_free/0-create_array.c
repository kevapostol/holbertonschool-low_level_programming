#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it
 * @size: int, to be the length of the array
 * @c: character, to be inserted to the array
 * Return: void returns nothing
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *arr = malloc(size * sizeof(char));
		unsigned int i = 0;

		if (arr == NULL)
			return (NULL);

		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		return (arr);
	}
}
