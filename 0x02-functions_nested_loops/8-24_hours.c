#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a=b=c=d=0;
	for (a = 0; a <= 2; ++a)
	{
			for (b = 0; b <= 9; ++b)
			{
				while (a != 2 || b != 4 || c != 0 || d != 0)
				{

					for (c = 0; c <= 5; ++c)
					{

						for (d = 0; d <= 9; ++d)
						{
							_putchar(a + '0');
							_putchar((b) + '0');
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
