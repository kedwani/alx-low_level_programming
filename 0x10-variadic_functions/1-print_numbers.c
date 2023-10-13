#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
		exit(1);
	va_start(ptr, n);
	for (i=0;i<n;++i)
	{
		printf("%d",va_arg(ptr,int));
		if (separator != NULL && i != n-1)
			printf("%s",separator);
	}
	va_end(ptr);
	printf("\n");
}
