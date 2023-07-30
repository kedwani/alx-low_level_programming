#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
			_putchar('\n');
			if (i != n)
			_putchar(' ');
		}
	}
	else
		_putchar('\n');
}
