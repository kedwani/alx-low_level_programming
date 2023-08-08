#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

		s = malloc(size);
		for (i = 0; i < size; ++i)
		s[i] = c;
	if (size == 0)
		return ("/0");
	else
		return (s);
}
