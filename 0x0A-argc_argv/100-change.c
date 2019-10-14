#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: argument vector
 * Return: void returns nothing
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cent[5] = {25, 10, 5, 2, 1};
		int i, count = 0, num = atoi(argv[1]);

		for (i = 0; i < 5; i += 1)
		{
			while (num >= cent[i])
			{
				num -= cent[i];
				count += 1;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
