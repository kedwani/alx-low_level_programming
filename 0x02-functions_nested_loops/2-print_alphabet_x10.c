#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	char ch;
	int  num;

		for (num = 1; num <=10; num++)
		{
			for (ch = 'a';ch <= 'z'; ch++)
			{
				_putchar(ch);

			}
			_putchar ('\n');
		}
}
