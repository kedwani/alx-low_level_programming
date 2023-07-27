#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main (void)
{
	print_alphabet() ;
	return (0);
		}
void print_alphabet(void)
	{
	char ch = 'a';

	do {
	_putchar(ch);
	++ch;
	} while (ch <= 'z');
	_putchar (10);
}
