#include "main.h"
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
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; ++i)
	{
		if (b[i] == '1' && i == (len - 1))
			sum += 1;
		else if (b[i] == '1')
			sum += 2 << (len - 2 - i);
	}
	return (sum);
}
