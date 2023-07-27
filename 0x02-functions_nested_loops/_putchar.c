#include <stdio.h>
#include <main.h>
void print_alphabet(void);
{
	char ch = 'a';

	do {
	putchar(ch);
	++ch;
	} while (ch <= 'z');
	putchar (10);
}
