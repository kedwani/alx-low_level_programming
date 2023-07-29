#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
		int a;

	for (a = 48; (a >= 48) && (a <= 57); a++)
	{
		if (a == 2 || a == 4)
		{
			break;
		_putchar(a);
		}
	}
	_putchar('\n');
}
