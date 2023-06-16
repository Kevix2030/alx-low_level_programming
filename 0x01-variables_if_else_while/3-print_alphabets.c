#include <stdio.h>
/**
 * mai - Program entry point
 * Description: - this function will generate upper and lowercase alphabets
 * Return: Always return 0 (success)
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
