#include <stdio.h>
/**
 *main - Entry point to the program.
 *Description: - the program will print numbers from 0 to 9.

 *Returns: Always 0 (success)
 */
int main(void)
{
	int num;



	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}

