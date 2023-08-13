#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int f;

	for (i = 0; i != ((n - 1) / 2); i++)
	{
		f = a [n - i];
		a[n - i] = a[i];
		a[i] = f;
	}
