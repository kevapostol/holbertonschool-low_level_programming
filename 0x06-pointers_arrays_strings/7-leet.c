#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @c: pointer, array
 *
 *
 * Return: no return
 *
 */
char *leet(char *c)
{
	int ctr = 0;

	while (c[ctr] != '\0')
	{
		if (c[ctr] == 'a' || c[ctr] == 'A')
			c[ctr] = '4';
		else if (c[ctr] == 'e' || c[ctr] == 'E')
			c[ctr] = '3';
		else if (c[ctr] == 'o' || c[ctr] == 'O')
			c[ctr] = '0';
		else if (c[ctr] == 't' || c[ctr] == 'T')
			c[ctr] = '7';
		else if (c[ctr] == 'l' || c[ctr] == 'L')
			c[ctr] = '1';
		ctr++;
	}
	return (c);
}
