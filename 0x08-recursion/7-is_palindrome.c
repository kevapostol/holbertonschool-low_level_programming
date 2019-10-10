#include "holberton.h"

/**
 * is_palindrome_helper - helper function for finding a palindrome
 * @c: char, pointer to array
 * @count: int, length of array
 *
 * Return: returns int boolean if palindrome or not
 *
 */
int is_palindrome_helper(char *c, int count, int count2)
{
	if (count == 0 && c[count2] == c[count])
		return (1);
	if (c[count2] != c[count])
		return (0);

	return (is_palindrome_helper(c, count - 1, count2 + 1));
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to char, an array
 *
 * Return: returns in 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		count += 1;

	return (is_palindrome_helper(s, count - 1, 0));
}
