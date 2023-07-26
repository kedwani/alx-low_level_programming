#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A'

	do {
	putchar(ch);
	++ch;
	} while (ch <= 'z');
	do {
	putchar(CH),
	++CH;
	} while (CH <= 'Z');
	putchar (10);
}
