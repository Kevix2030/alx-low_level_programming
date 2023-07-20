#include "functions_pointers.h"

/**
 * print_name: prints names
 * @name: name of the person
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
