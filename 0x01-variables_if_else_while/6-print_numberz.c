#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
	putchar(num);
	++num;
	}
	putchar(10);
	return (0);
}
