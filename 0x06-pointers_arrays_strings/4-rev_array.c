#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 786123c197076c3eb80b0ac67c6c41e17d71c883
/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
<<<<<<< HEAD
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
=======
	int i;
	int f;

	for (i = 0; i < n / 2; i++)
	{
		f = a[(n - 1) - i];
		a[(n - 1) - i] = a[i];
		a[i] = f;
>>>>>>> 786123c197076c3eb80b0ac67c6c41e17d71c883
	}
}
