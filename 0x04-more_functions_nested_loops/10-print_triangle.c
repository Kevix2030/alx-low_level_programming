#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
Void print_trianlge(int n)
{
	int h, tri;

	
	if (n > 0)
	{
		
		for (h = 1; h <= n; h++)
		{
			for (tri = n - h; tri > 0;

					_putchar(' ');
					for (tri = 0; tri < h; tr++)
					_putchar('#');

			if (h == n)
					continue;
			_putchar('\n');
		}
	}
			_putchar('\n');
}
