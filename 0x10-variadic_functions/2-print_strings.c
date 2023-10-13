void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (n != 0);
	{
		va_start(ptr,n);
		for (i = 0, i < n;++i)
		{
			if (s != NULL)
				printf("%s", va_arg(ptr,*s));
			else
				printf("nil");
			if (separator != NULL && i != n-1)
				printf("%s", separator);
		}
		va_end(ptr);
	}
		printf("\n");
}
