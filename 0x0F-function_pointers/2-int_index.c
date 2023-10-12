#include "function_pointers.h"

/**
 * int_index  - is a fumction to searh for an intger
 *
 * Return:- (index) if matched or -1 ifnot
 *
 * @array : is the array to search in its  elements
 *
 * @size : is the size of @array
 *
 * @cmp : is the pointer to function to search for the intger
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int res;

	if (size <= 0)
		return (-1);
	if (array != NULL && size != '\0' && cmp != NULL)
		for (i = 0; i < size; ++i)
		{
			res = cmp(array[i]);
			if (res != 0)
				return (i);
		}
	return (-1);
}
