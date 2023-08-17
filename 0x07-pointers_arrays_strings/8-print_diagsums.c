#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, s;
	int sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		s = (size + 1) * i;
		sum += *(a + s);
	}
	for (i = 1; i <= size; ++i)
	{
		s = (size - i) * i;
		sum2 += *(a + s);
	}
	printf("%d, %d\n", sum, sum2);
}
