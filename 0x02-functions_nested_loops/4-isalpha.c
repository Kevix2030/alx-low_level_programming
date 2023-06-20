#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks for alphabetic order
 *
 * @c: alpabet to check for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
void _putchar(int c); test_isalpha(void);
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	_putchar('\n');
}
