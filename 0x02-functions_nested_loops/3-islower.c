#include "holberton.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c: the character passed to check
 *
 * Return: return 1 if c is lower | else return 0
 *
 */
int _islower(int c)
{
	if (islower(c) == 0)
		return 0;
	else
		return 1;
}
