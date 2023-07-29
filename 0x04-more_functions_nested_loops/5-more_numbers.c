#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int a, b;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar((a % 10) + '0');
			if (a > 9 && a != 14)
				_putchar('1');

		}



			_putchar('\n');
	}
}
