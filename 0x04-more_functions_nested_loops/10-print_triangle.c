#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a, b;

	if (size != 0)
	{
		for (a = 1; a <= size; ++a)
		{
			for (b = a; (size - b) != 0; ++b)
			{
				_putchar(' ');
			}

			for (b = a; b != 0; --a)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
	_putchar('\n');
}
