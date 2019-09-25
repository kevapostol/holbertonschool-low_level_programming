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
	int t1 = 0;
	int t2 = 0;
	int t3 = 0;
	int t4 = 0;

	while (1)
	{
		_putchar(t1 + '0');
		_putchar(t2 + '0');
		_putchar(':');
		_putchar(t3 + '0');
		_putchar(t4 + '0');
		_putchar('\n');
		t4 += 1;

		if (t4 == 10)
		{
			t4 = 0;
			t3 += 1;

			if (t3 == 6)
			{
				t3 = 0;
				t2 += 1;

				if (t1 == 2 && t2 == 4)
				{
					break;
				}

				if (t2 == 10)
				{
					t2 = 0;
					t1 += 1;
				}
			}
		}
	}
}
