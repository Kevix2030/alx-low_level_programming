#include <stdio.h>

/**
 * main - Entry point to the program.
 * Description: -  print alphabets in lower case, skip q and e.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m != 'e' && m != 'q')
			putchar(m);
	}

	putchar('\n');
	return (0);
}





















