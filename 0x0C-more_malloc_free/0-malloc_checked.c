#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - is a f
 *
 *Return: (p) is
 *
 *@b : is
 *
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
		return (p);
}
