#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer dest
 * @src: pointer dest
 * @n: use at most n bytes from src
 * Return: returns character pointer
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

	return *s1 - *s2;
}
