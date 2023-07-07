#include "main.h"
/**
 * _memset - Program fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: change array with value of a byte
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(s + i) =  b;

return (s);
}
