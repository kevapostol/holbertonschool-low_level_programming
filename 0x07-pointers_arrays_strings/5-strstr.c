#include "holberton.h"
#include <stdio.h>
/**
 * comp - compares 2 strings
 * @x: string 1
 * @y: string 2
 *
 * Return: true or false, integer
 *
 */
int comp(char *x, char *y)
{
	while (*x && *y && *x != '\0' && *y != '\0')
	{
		if (*x != *y)
			return (0);
		x++;
		y++;
	}

	return (*x == *y);
}

/**
 * _strstr - unction that locates a substring
 * @haystack: pointer, an array
 * @needle: pointer, an array
 *
 * Return: string, char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack && *haystack != 0)
	{
		if (*haystack == *needle && comp(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
