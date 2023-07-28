#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int s = n;
	while (n >= 98)
	{
		printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		--n;
	}

	while (s < 98)
	{
		printf("%d", s);
		if (s != 98)
		{
			_putchar(',');
			_putchar(' ');
			++s;
		}
	}
}
