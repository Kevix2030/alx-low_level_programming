#include <stdio.h>

/**
 * main - program entry point
 *
 * description: prints possible combinations of two digit numbers
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 / 10; num2 <= 9; num2++)
		{
			for (num3 = num1 % 10; num3 <= 9; num3++)
			{
				for (num4 = num3 / 10; num4 <= 9; num4++)
				{
					if (num1 != num2 * 10 + num3)
					{
						putchar((num1 / 10) + '0');
						putchar((num1 % 10) + '0');
						putchar(' ');
						putchar((num2 * 10) + num3 + '0');
						putchar((num4 * 10) + num3 % 10 + '0');

						if (num1 != 98)
						{
						putchar(',');
						putchar(' ');

						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
