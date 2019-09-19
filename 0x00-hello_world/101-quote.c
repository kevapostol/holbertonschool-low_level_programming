#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char myStr[] = "and that piece of art is useful\"";
	char myStr2[] = " - Dora Korpar, 2015-10-19\n";

	write(2, myStr, 32);
	write(2, myStr2, 27);
	return (1);
}
