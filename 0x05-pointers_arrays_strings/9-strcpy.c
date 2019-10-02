#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer
 * @src: pointer
 *
 * Return: returns char string array
 *
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}

	dest[counter] = '\0';
	return (dest);
}
