#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer dest
 * @src: pointer dest
 * @n: use at most n bytes from src
 * Return: returns character pointer
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
