#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - prints starting from 00:00 to 23:59
 *
 *
 * Return: void
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
