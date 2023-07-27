#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
	{
	char ch = 'a';

	do {
	_putchar(ch);
	++ch;
	} while (ch <= 'z');
	_putchar (10);
}
