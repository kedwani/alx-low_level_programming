#include "main.h"
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(*p) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
