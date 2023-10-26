#include "main.h"
unsigned int getsquar(int a, int b);

/**
 *binary_to_uint- is a function to convert a bin to uint.
 *@b : s the bin num.
 *Return: the uint.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += getsquar(2, len - 1);
		--len;
	}
	return (sum);
}

/**
 *getsquar- is a function to getsquar.
 *@b : s the power.
 *@a : is the num
 *Return: the result.
 */

unsigned int getsquar(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * getsquar(a, b - 1));
}
