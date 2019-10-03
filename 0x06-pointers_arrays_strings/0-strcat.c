#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer dest
 * @src: pointer dest
 *
 * Return: returns character pointer
 *
 */
char *_strcat(char *dest, char *src)
{
	int countDestLen = 0;
	int i = 0;

	while (dest[countDestLen])
		countDestLen += 1;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[countDestLen + i] = src[i];
	}

	dest[countDestLen + i] = '\0';
	return (dest);
}
