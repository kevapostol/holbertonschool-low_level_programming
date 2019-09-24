#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number passed to be tested
 *
 * Return: return the n's last digit
 *
 */
int print_last_digit(int n)
{
	int last_num = n % 10;

	if (last_num < 0)
	{
		last_num *= -1;
		_putchar(last_num + '0');
		return (last_num);
	}
	else
	{
		_putchar(last_num + '0');
		return (last_num + '0');
	}
}
