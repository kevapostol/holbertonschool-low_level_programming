#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: character pointer constant
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list var;
	int i = 0;
	char *separator = ", ", *strTemp = "(nil)", *temp;

	va_start(var, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(var, int));
				break;
			case 'i':
				printf("%d", va_arg(var, int));
				break;
			case 'f':
				printf("%f", va_arg(var, double));
				break;
			case 's':
				temp = va_arg(var, char *);
				if (temp != NULL)
					strTemp = temp;
				printf("%s", strTemp);
				break;
			default:
				i++;
				continue;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[i + 1] != '\0')
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(var);
}
