#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", (int) sizeof(char));
	printf("Size of a int: %u byte(s)\n", (int) sizeof(int));
	printf("Size of a long: %u byte(s)\n", (int) sizeof(long));
	printf("Size of a long long: %u byte(s)\n", (int) sizeof(long long));
	printf("Size of a float: %u byte(s)\n", (int) sizeof(float));
	return (0);
}
