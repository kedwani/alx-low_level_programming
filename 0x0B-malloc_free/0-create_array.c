#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char*) malloc(size);
		for (i = 0; i < size; ++i)
		s[i] = c;
		*(s + i) = '\0';
		if (size == 0)
			return NULL;
		else
			return (s);
}
