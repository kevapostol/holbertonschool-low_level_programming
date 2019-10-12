#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: void returns nothing
 *
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		printf("0\n");

	for (i = 1; i < argc; i += 1)
	{
		char *num = argv[i];
		int j = 0;

		while (num[j])
		{
			if (!(num[j] >= '0' && num[j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
