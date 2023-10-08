#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return(NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i != (max - min); ++i)
		p[i] = min + i;
	p[i] = max;
	return (p);
}
