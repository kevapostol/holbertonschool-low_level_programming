#include "holberton.h"

/**
 * reset_to_98 - updates the parameter to 98
 * @n: pointer
 *
 *
 * Return: returns nothing
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
	return dest;
}
