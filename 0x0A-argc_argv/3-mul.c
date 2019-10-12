#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: void returns nothing
 *
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
