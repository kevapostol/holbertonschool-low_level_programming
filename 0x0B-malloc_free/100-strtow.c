#include <stdlib.h>
#include "holberton.h"

/**
 * freeMemchar -  frees a 2 dimensional grid
 * @grid: the grid
 * @height: height
 * Return: void, returns nothing
 *
 */
void freeMemchar(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);

		free(grid);
	}
}

/**
 * wordCount - counts the word in a string
 * @str: the string
 *
 * Return: int, number of words
 */
int wordCount(char *str)
{
	int i;
	int wc = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			wc++;
			i++;
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				;
		}
	}
	return (wc);
}

/**
 * wordLen - gets the len of the word
 * @str: the string
 * Return: int, len of the word
 */
int wordLen(char *str)
{
	int i;
	int wl = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		wl++;
	return (wl);
}

/**
 * strtow - function that splits a string into words
 * @str: the string
 *
 * Return: char pointing to a char array of pointers
 */
char **strtow(char *str)
{
	int i, j = 0;
	int k;
	char **s;

	s = malloc(sizeof(char *) * (wordCount(str) + 1));
		if (s == NULL)
			return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			s[j] = malloc((wordLen(str + i) + 1) * sizeof(char));
			if (s[j] == NULL)
			{
				freeMemchar(s, wordCount(str) + 1);
				return (NULL);
			}
			for (k = 0; str[i] && str[i] != ' '; i++, k++)
				s[j][k] = str[i];
			s[j][k] = '\0';
			j++;
		}
	}
	s[wordCount(str) + 1] = '\0';
	return (s);
}
