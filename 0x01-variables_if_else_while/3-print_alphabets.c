#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char ch2 = 'A';

	do {
	putchar(ch);
	++ch;
	} while (ch <= 'z');
	do {
		putchar(ch2);
	++ch2;
	} while (ch2 <= 'Z');
	putchar (10);
	return (0);
}
