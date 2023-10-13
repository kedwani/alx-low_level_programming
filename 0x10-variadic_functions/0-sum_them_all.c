#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	else
	{
		va_list ptr = n;
		va_start(ptr,n);
		va arg;
		for (i = 0; i < n; ++i)
			sum += va_arg;
		va_end;
		return(sum);
	}
}
