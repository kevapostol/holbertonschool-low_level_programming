#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: argument vector
 * Return: void returns nothing
 *
 */
int main(int argc ,char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
