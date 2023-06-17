#include <stdio.h>


/**
 * main - print the alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m++)
		putchar(m);
	putchar('\n');

	return (0);
}
