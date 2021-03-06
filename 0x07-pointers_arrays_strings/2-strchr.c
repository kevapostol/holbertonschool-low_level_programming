#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: pointer, an array
 * @c: char, to be compared
 *
 * Return: returns array that is a pointer / NULL
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
