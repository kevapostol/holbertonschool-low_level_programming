#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char pointer pointed to 1st idx of the array
 *
 */
char *str_concat(char *s1, char *s2)
{
	int ctrS1 = 0, ctrS2 = 0, i = 0, j = 0;
	char *st;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[ctrS1] != '\0')
		ctrS1++;

	while (s2[ctrS2] != '\0')
		ctrS2++;

	st = malloc((ctrS1 + ctrS2 + 1) * sizeof(char));

	if (st == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		st[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		st[i] = s2[j];
		i++;
		j++;
	}
	st[i] = '\0';
	return (st);
}
