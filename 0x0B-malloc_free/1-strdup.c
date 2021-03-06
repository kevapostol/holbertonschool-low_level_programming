#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - creates an array of chars, and initializes it
 * @str: returns a pointer to a newly allocated space in memory
 *
 * Return: char pointer pointed to 1st idx of the array
 *
 */
char *_strdup(char *str)
{
	int ctr = 0, i = 0;
	char *st;

	if (str == NULL)
		return (NULL);

	while (str[ctr] != '\0')
		ctr++;

	st = malloc((ctr + 1) * sizeof(char));

	if (st == NULL)
		return (NULL);

	while (i < ctr)
	{
		st[i] = str[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}
