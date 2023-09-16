#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		putchar (i);
		if (i != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar(10);
	return (0);
}
