#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			c = a * b;
			_putchar((c);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');

			}
		_putchar('$');
		_putchar('\n');
	}
}
