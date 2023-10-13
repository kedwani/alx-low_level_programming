#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;

	if (n == 0)
	{
		printf("\n");
		exit(1);
	}
	va_start(ptr,n);
	for (i=0;i<n;++i)
	{
		s = va_arg(ptr,char*);
		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s",s);
			if (separator != NULL && i != n-1)
				printf("%s",separator);
		}
		va_end(ptr);
	}
	printf("\n");
}
