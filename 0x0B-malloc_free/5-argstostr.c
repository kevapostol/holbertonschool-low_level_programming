#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - gets the length
 * @str: str
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		i++;
		count++;
	}

	return (count);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count of args
 * @av: argument vector
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, c = 0, length = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += _strlen(av[i]);

	cat = malloc(sizeof(char) * (length + ac + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *temp = av[i];

		for (j = 0; temp[j] != '\0'; j++)
		{
			cat[c] = temp[j];
			c++;
		}
		cat[c] = '\n';
		c++;
	}
	cat[c] = '\0';

	return (cat);
}
