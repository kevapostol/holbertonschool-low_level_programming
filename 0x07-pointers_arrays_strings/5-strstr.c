#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - unction that locates a substring
 * @haystack: pointer, an array
 * @needle: pointer, an array
 *
 * Return: string, char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[j + 1] == '\0')
				return ((haystack + i));
		}
	}

	return (NULL);
}
