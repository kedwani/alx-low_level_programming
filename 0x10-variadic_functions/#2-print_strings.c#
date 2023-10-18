#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *s;
	if (n != 0)
	{
		va_start(ptr,n);
		for (i = 0; i < n;++i)
		{
			s = va_arg(ptr,char*);
			if (s != NULL)
				printf("%s", s);
			else
				printf("nil");
			if (separator != NULL && i != n-1)
				printf("%s", separator);
		}
		va_end(ptr);
	}
		printf("\n");
}
