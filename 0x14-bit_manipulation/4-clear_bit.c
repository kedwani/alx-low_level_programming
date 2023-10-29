#include "main.h"

/**
 * clear_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b, a;

	if (index >= 64)
		return (-1);
	while (index < 64)
	{
		a = *n >> index;
		if ((1 & a) == 1)
		{
			if (index == 0)
				b = 1;
			else
				b = 2 << (index - 1);
			*n -= b;
			return (1);
		}
		else
			break;
	}
	return (1);
}
