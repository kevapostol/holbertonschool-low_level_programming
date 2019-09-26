#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: number
 *
 *
 * Return: 1 if c is a number else return 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
