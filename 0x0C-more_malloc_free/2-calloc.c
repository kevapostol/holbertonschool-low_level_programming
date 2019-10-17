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
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: int, array
 * @size: int, size
 *
 * Return: pointer points to void
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
