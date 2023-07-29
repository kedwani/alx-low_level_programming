#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int a, b, c;
	int i;

	b = '9';
	for (i = 0; i < 10; i++)
	{
		for (a = '0'; a <= b; a++)
		{
			_putchar (a);
			if (a == '9')
			{
				b = '4';
				if (a != '4')
					_putchar('1');
			}
		}
		_putchar('\n');
	}
}
