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
	int i = 0, n;
	char *s;
/*check for null str*/
	if (str == NULL)
		return (NULL);
/*calculate first string length*/
	while (str[i])
		i++;
/*allocate memmory for new string*/
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
/*intialize memmory*/
	for (n = 0; n <= i; ++n)
		s[n] = str[n];
	return (s);
}
