#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		putchar (i + '0');
		if (i != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar(10);
	return (0);
}
