#include "main.h"
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char*) &i;

	if (*ptr == '1')
		return (0);
	else
		return (1);
}
