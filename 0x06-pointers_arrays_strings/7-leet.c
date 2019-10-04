#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @c: pointer, array
 *
 *
 * Return: pointer
 *
 */
char *leet(char *c)
{
	int ctr = 0;
	char letters[] = "aeotl";
	char numbers[] = "43071";

	while (c[ctr] != '\0')
	{
		int ltr_ctr = 0;

		while (letters[ltr_ctr] != '\0')
		{
			if (c[ctr] == letters[ltr_ctr] || c[ctr] == (letters[ltr_ctr] - 32))
				c[ctr] = numbers[ltr_ctr];

			ltr_ctr++;
		}
		ctr++;
	}
	return (c);
}
