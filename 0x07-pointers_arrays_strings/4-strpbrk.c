#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - function that locates a character in a string
 * @s: pointer, an array
 * @accept: pointer, an array
 *
 * Return: count, integer
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int firstOccIdx = NULL;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				printf("found!");
				firstOccIdx = i;
			}
			j++;
		}

		i++;
	}

	return (&s[firstOccIdx]);
}
