#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	do
	{
	putchar(ch);
	++ch;
	}
	while (ch <= 'z');
	putchar (10);
}
