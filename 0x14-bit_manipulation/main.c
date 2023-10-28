#include <stdio.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	/* UINT_MAX */
	n = binary_to_uint("11111111111111111111111111111111");
	printf("%u\n", n);
	return (0);
}
