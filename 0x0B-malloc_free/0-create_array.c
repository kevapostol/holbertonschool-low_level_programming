#include <stdlib.h>
#include "holberton.h"

/**
 * main - main function, passes n arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Return: void returns nothing
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char*) malloc(size * sizeof(char));

	unsigned int i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
