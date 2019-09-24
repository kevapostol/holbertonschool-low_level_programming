#include "holberton.h"

/**
 * _isalpha - checks for lowercase and uppercase characters
 * @c: the character passed to check
 *
 * Return: return 1 if it's an alphabet | else return 0
 *
 */
int _isalpha(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch += 1)
	{
		if (ch == (char) c)
			return (1);
	}

	for (ch = 'A'; ch <= 'Z'; ch += 1)
	{
		if (ch == (char) c)
			return (1);
	}

	return (0);
}
