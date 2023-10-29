#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b, a;

	while (index < 64)
	{
		a = *n >> index;
		if ((1 & a) == 0)
		{
			if (index == 0)
				b = 1;
			else
				b = 2 << (index - 1);
			*n += b;
			return (1);
		}
	}
	return (-1);
}
