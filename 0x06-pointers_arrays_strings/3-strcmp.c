#include "holberton.h"

/**
 * _strcmp - function that compares 2 strings
 * @s1: pointer
 * @s2: pointer
 *
 * Return: returns integer
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
