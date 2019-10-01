#include "holberton.h"
/**
 * rev_string - reverses the string
 * @s: pointer
 *
 *
 * Return: returns int
 *
 */
void rev_string(char *s)
{
	int i, length = 0;
	char *t = s;


	for (; *t != '\0'; t++)
		length++;

	t--;
	length--;

	for (i = 0; i <= length / 2; i++)
	{
		char temp = *t;
		*t = *s;
		*s = temp;
		t--;
		s++;
	}
}
