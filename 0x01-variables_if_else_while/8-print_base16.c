#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int num;

	for (num = 48 ; num < 58 ; ++num)
		putchar(num);
	for (num = 97 ; num < 103 ; ++num)
		putchar(num);
	putchar(10);
	return (0);
}
