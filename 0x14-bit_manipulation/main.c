#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(ULONG_MAX, 20000);
	printf("%d\n", n);
	return (0);
}
