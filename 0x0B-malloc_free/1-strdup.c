#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i;
	char *s;
/*check for null str*/
	if (str == 0)
		return (0);
/*calculate first string length*/
	for (i = 0; str[i] != "\0"; i++)
/*allocate memmory for new string*/
	s = malloc(i+1);
	if (s == 0)
		return (0);
/*intialize memmory*/
	for (n = 0; n <= i+1; ++n)
		s[n] = str[n];
	return (s);
}
