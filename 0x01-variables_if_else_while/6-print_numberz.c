#include <stdio.h>


/**
 * main - Program entry point
 *
 * Description: This function prints the numbers from 0 to 9 using putchar.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);
}
