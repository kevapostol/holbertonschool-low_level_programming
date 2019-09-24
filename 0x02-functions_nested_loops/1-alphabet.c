#include <stdio.h>
#include "holberton.h"

/**
 * main - Functions and Nested Loops
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints characters from a to z
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch += 1)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
