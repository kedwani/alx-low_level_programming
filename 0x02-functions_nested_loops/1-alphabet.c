#include "stdio.h"
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	{
	char ch = 'a';

	do {
	putchar(ch);
	++ch;
	} while (ch <= 'z');
	putchar (10);
	return (0);
}
