#include <stdio.h>
#include <unistd.h>
/**
 * main - C program that prints a new line, to the standard error
 * Return 1 (success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stderr);
	return (0);
}
