#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer dest
 * @src: pointer dest
 * @n: use at most n bytes from src
 * Return: returns character pointer
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int countDestLen = 0;
	int i = 0;

	while (dest[countDestLen])
		countDestLen += 1;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[countDestLen + i] = src[i];
	}

	dest[countDestLen + i] = '\0';
	return (dest);
}
