#include "holberton.h"

/**
 * _memset - function that copies memory area
 * @s: pointer, an array
 * @b: char, a constant byte
 * @n: int, bytes of memory
 * Return: returns array that is a pointer
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
