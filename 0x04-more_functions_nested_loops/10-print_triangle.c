#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a;
	int b = 0;

	if (size != 0)
	{
		for (a = 1; a <= size; ++a)
		{
			while (b != (size - a))
			{
				_putchar(' ');
			}

			while (a != 0)
			{
				_putchar('#');
				--a;
			}
			_putchar('\n');

		}
	}
	_putchar('\n');
}
