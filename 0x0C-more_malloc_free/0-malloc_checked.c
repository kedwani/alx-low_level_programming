#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
