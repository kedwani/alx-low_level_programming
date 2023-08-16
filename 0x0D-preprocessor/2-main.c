#include <stdio.h>

/**
 * main - to print file name
 *
 * Return: Alwayes 0 (success)
 */

int main(void)
{
	char s[];
	s= __FILE__;
	printf("%s\n ", s);
	return (0);
}
