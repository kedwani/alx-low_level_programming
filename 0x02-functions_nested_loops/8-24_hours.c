#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, b, c, d;


	for (a = 0; a <= 2; ++a)
	{
		for (b = 0; b <= 10; ++b)
		{
			for (c = 0; c <= 5; ++c)
			{

				for (d = 0; d <= 9; ++d)
				{
					if (a !=3 && b != 3 && c != 5 && d != 9)
					{
						_putchar(a + '0');
						_putchar((b % 10) + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
