#include <stdio.h>

/**
 * main - a prog to print 3 comoination of digits
 *
 * Return: always zero (0)
 *
 *
 *
 *
 */


int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; ++i)
	{
		for (j = i; j <= 57; ++j)
		{
			for (k = j; k <= 57; ++k)
			{
				if (i != j && j != k && i != k)
				{
					putchar (i);
					putchar (j);
					putchar (k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(44);
						putchar (32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
