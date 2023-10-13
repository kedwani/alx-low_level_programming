#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr,n);
	printf("%d",va_arg(ptr,int));
	for (i = 0; i < n; ++i)
	{
		if(separator != NULL)
			printf("%c",separator);
		printf("%d",va_arg(ptr,int));}
	va_end(ptr);
}
