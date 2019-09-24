#include <stdio.h>
#include "holberton.h"

void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch += 1)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
