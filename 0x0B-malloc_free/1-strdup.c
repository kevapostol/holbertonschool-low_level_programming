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
	char *s;

	while (str[ctr])
		ctr++;

	s = (char *) malloc((ctr + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
