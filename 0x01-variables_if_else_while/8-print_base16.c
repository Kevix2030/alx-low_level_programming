#include <stdio.h>

/**
 * main - print numbers in base 16
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char m;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');

	for (m = 'a'; m <= 'f'; m++)
	putchar(m);

	putchar('\n');

	Return(0);
}
