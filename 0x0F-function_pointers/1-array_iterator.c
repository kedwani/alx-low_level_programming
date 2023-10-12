#include "function_pointers.h"


/**
 * array_iterator - is a fumction to give all elemnts of array @array as
 * a parameter of funtion @action
 *
 * @array : is the array to pass itis elemnts
 *
 * @size : is the size of @array
 *
 * @action : is the pointer to function to pass parameter to
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size != '\0' && action != NULL)
		for (i = 0; i < size; ++i)
			action(array[i]);
}
