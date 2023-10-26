#include "main.h"
unsigned int getsquar(int a, int b);

/**
 *print_binary - is a function to convert a unit to bin.
 *@n : s the uint num.
 */

void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;


	for (i = 31; i >= 0; --i)
	{
		if (n >= getsquar(2, i))
		{
			_putchar('1');
			n -= getsquar(2, i);
			flag = 1;
			continue;
		}
		else if (flag == 1)
		{
			_putchar('0');
			continue;
		}
		if (n == 0)
			exit (0);
	}

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
