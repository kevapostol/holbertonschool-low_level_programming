#include "holberton.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer, an array
 * @src: pointer, an array
 * @n: int, bytes of memory
 * Return: returns array that is a pointer
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
