#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints the times table, starting with 0 to n
 * @n: integer
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int i, j;

	if (!(n > 15) && !(n < 0))
	{
		for (i = 0; i <= n; i += 1)
		{
			for (j = 0; j <= n; j += 1)
			{
				int prod = i * j;

				if (j == 0)
					printf("%d", prod);
				else if (prod < 10 && j != n)
					printf("   %d", prod);
				else if (prod >= 100 && j != n)
					printf(" %d", prod);
				else
					printf("  %d", prod);

				if (j != n)
					printf(",");
			}

			printf("\n");
		}
	}
}
