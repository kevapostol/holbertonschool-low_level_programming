#include "holberton.h"

/**
 * _abs - returns the absolute value
 * @n: the number passed to be tested
 *
 * Return: return the absolute value of n
 *
 */
int _abs(int n)
{
	if (n < 0)
		return (n *= -1);
	else
		return (n);
}
