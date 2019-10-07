#include "holberton.h"

/**
 * _strspn - function that locates a character in a string
 * @s: pointer, an array
 * @accept: pointer, an array
 *
 * Return: count, integer
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}

		if (!accept[j])
			break;
	}

	return (count);
}
