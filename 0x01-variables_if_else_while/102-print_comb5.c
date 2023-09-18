#include <stdio.h>
/**
 * main - write 4 combination
 *
 * Return: always zero(0)
 *
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; ++i)
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	return (0);
}
