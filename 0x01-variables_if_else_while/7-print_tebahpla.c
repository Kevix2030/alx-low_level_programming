#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);

	putchar('\n');

	return (0);
}

