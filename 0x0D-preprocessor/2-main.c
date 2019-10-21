#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the name of the file it was compiled from
 * @argc: number of arguments
 * @argv: argument vector
 * Return: void returns nothing
 *
 */
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
