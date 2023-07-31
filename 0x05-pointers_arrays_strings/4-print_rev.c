#include "main.h"
11;rgb:0000/0000/0000
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;
		for (i = 0; *s != '\0'; ++s)
			++i;
		for (; i != 0; --i)
			_putchar(str[i]);
		_putchar('\n');
}
