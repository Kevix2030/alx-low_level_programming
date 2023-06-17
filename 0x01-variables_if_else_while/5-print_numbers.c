#include <stdio.h>

/**
 *Main - This is the main function of the program
 *it prints numbers from 1 to 9
*Return: 0 indicate successful execution.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
