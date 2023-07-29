#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int a, b, c;

	for (b = 0; b <= 10; b++)
	{
		for (a = '0'; a >= '9'; a++)
			_putchar(a);
		for (c = '0'; c <= '4'; c++)
		{
			_putchar('1');
			_putchar(c);
		}
		_putchar('\n');
	}
}
