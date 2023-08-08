#include <stdlib.h>
11;rgb:0000/0000/0000#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i, n;
	char *s;
/*check for null str*/
	if (str == NULL)
		return (NULL);
/*calculate first string length*/
	for (i = 0; str[i] != '\0'; i++)
/*allocate memmory for new string*/
		s = malloc(sizeof(char)*(i + 1));
	if (s == NULL)
		return (NULL);
/*intialize memmory*/
	for (n = 0; str[i] != '\0'; ++n)
		s[n] = str[n];
	return (s);
}
