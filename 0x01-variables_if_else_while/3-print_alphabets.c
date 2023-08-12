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

	do
	{
		putchar(ch);
		++ch;
			} while (ch <= 'z');


	for (;ch2 <= 'Z';++ch2)
	putchar(ch2);

	putchar ('\n');


	return (0);
}
