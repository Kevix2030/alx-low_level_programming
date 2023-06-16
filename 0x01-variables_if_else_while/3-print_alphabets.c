#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: - This function serves as an entry point of the program.
 * 		It will print  upper and lowercase alphabets.
 * Return: Always 0 (success)
 */

int main(void)
{
	char m;

	char k;

	m = 'a';
	k = 'A';
	while
		(m <= 'z') {
			putchar(m);
			m++;
		}
	while
		(k <= 'Z') {
			putchar(k);
			k++;
		}
	putchar('\n');
	return (0);
}
