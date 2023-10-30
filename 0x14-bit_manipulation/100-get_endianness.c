#include "main.h"
int get_endianness(void)
{
	unsigned int i = 1 ;
	unsigned char *ptr = (unsigned char*)&i;

	if (*ptr == '1')
		return (1);
	else
		return (0);
}
