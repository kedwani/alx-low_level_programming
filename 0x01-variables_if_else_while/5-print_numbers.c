#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int num = 0;

	for(; num<=9; ++num)
		putchar (num);

	putchar (\n);

	return (0);
}
