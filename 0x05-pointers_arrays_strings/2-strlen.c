#include "holberton.h"

/**
 * _strlen - returns the len of a string
 * @s: string
 *
 *
 * Return: returns nothing
 *
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return (n);
}
