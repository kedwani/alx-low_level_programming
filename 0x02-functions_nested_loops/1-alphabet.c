#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
	print_alphabet() ;
void print_alphabet(void)
	{
	char ch = 'a';

	do {
	_putchar(ch);
	++ch;
	} while (ch <= 'z');
	_putchar (10);
}
