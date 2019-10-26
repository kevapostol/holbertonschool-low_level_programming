#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: pointer that has a string separator
 * @n: int, number of args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	int i = 0;
	char *s;

	va_start(var, n);

	for (i = 0; i < (int) (n - 1); i++)
	{
		s = va_arg(var, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL)
			printf("%s", separator);
	}

	s = va_arg(var, char *);

	if (s == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", s);
	va_end(var);
}
