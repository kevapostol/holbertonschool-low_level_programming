#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: pointer that has a string separator
 * @n: int, number of args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	int i = 0, temp;

	va_start(var, n);

	for (i = 0; i < (int) (n - 1); i++)
	{
		temp = va_arg(var, int);
		printf("%d%s", temp, separator);
	}

	printf("%d\n", va_arg(var, int));
	va_end(var);
}
