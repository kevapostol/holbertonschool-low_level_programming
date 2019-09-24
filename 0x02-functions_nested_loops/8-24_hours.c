#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit
 * @n: the number passed to be tested
 *
 * Return: return the n's last digit
 *
 */

void jack_bauer(void)
{
	int t1;
	int t2;

	for (t1 = 0; t1 <= 23; t1 += 1)
	{
		for (t2 = 0; t2 <= 59; t2 += 1)
		{
			printf("%02d:%02d\n", t1, t2);
		}
	}
}
