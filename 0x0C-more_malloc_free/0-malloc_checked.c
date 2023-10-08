#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - is a function to check if we can malloc memmory in heap
 *
 *Return: (pointer to memmory) if succeful or
 *(98) if not
 *
 *@b : is the size needed to be allocated in memmory
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
