#include <stdlib.h>
#include "holberton.h"
/**
 * _memset - function that copies memory area
 * @s: pointer, an array
 * @b: char, a constant byte
 * @n: int, bytes of memory
 * Return: returns array that is a pointer
 *
 */
char *_memset(char *s, char b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: pointer to a char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	p = _memset(p, 0, nmemb * size);
	return (p);
}
