#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
{
	char ch;
	int i;
	for (i = 1; i <= 10; ++i)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar (ch);
		_putchar (10);
	}
}
