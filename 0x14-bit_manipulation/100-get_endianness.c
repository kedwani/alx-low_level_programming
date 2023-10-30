#include "main.h"
/**
 *get_endianness- if a function to check endianness.
 *Return: check.
 */
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *) &i;

	if (*ptr == '1')
		return (0);
	else
		return (1);
}
