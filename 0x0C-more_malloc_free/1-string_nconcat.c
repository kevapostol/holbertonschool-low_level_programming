#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - gets the length
 * @str: str
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		i++;
		count++;
	}

	return (count);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: pointer to a char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2;
	int i, j;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	if (n >= (unsigned int) _strlen(s2))
		size2 = _strlen(s2);
	else
		size2 = n;

	cat = malloc(sizeof(char) * (size1 + size2 + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < (int) size1; i++)
		cat[i] = s1[i];

	for (j = 0; j < (int) size2; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';
	return (cat);
}
