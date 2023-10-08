#include "main.h"

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return(NULL);
	p = malloc(((max - min)+2) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; p[i] != max; ++i)
		p[i] = min + i;
	p[i] = max;
	return (p);
}
