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
			if ((c / 10) != 0)
			{
			_putchar((c / 10) + '0');
			}
			_putchar(c % 10 + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');

			}
		_putchar('$');
		_putchar('\n');
	}
}
