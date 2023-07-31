#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;
		for (i = 0; *s != '\0'; ++s)
			++i;
		for (; s != 0; --s)
			_putchar('*s');
		_putchar('\n');
}
