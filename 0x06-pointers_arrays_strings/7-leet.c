#include "holberton.h"

/**
 * cap_string - capitalizes the string
 * @c: pointer, array
 *
 *
 * Return: no return
 *
 */
char *cap_string(char *c)
{
	int ctr = 0;

	while (c[ctr])
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			c[0] -= 32;
		else
		{
			if (c[ctr] == ' ' || c[ctr] == '\t' || c[ctr] == '\n' || c[ctr] == ',' ||
			c[ctr] == ';' || c[ctr] == '.' || c[ctr] == '!' || c[ctr] == '?' ||
			c[ctr] == '"' || c[ctr] == '(' || c[ctr] == ')' || c[ctr] == '{' ||
			c[ctr] == '}')
			{
				if (c[ctr + 1] >= 'a' && c[ctr + 1] <= 'z')
					c[ctr + 1] -= 32;
			}
		}
		ctr++;
	}
	return (c);
}
