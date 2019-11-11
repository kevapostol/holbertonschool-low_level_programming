#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: ul int
 *
 * Return: none
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char*) &x;
	return (int)*c;
}
