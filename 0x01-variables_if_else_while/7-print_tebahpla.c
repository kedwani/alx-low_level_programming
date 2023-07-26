#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	do {
	putchar(ch);
	--ch;
	} while (ch >= 'a');
	putchar (10);
	return (0);
}
