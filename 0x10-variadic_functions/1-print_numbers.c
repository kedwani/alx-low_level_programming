#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (n != 0)
	{
		va_start(ptr, n);
		printf("%d", va_arg(ptr, int));
		for (i = 1; i < n; ++i)
		{
			if (separator != NULL)
				printf("%s", separator);
			printf("%d", va_arg(ptr, int));
		}
		va_end(ptr);
	}
		printf("\n");
		
}
