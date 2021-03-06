#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: num of args
 * @argv: vector/arr of arg
 * Return: none
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
