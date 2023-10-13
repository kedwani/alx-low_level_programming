#include "variadic_functions.h"
void printona(int);
int _putchar(char c);

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr,n);
	printona(va_arg(ptr,int));
	for (i = 0; i < n; ++i)
	{
		if(separator != NULL)
			puts(separator);
		printona(va_arg(ptr,int));
	}
	va_end(ptr);
}

void printona(int niga)
{
	int nflag = 0;
	if (niga < 0)
		nflag = 1;
	if (niga /10 == 0)
	{
		if (nflag == 1)
			_putchar('-');
		_putchar(niga + '0');
	}
	else if (niga / 100 == 0)
	{
		if (nflag == 1)
			_putchar('-');
		_putchar(niga / 10 + '0');
		_putchar(niga % 10 + '0');
	}
	else if (niga / 1000 == 0)
	{
		if (nflag == 1)
			_putchar('-');
		_putchar(niga / 100  + '0');
		_putchar(niga / 10  + '0');
		_putchar(niga % 10  + '0');
	}
	else if (niga / 10000 == 0)
	{
		if (nflag == 1)
			_putchar('-');
		_putchar(niga / 1000  + '0');
		_putchar(niga / 100  + '0');
		_putchar(niga / 10  + '0');
		_putchar(niga % 10  + '0');
	}

}
