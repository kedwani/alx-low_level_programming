#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (src[i])
		i++;
	while (dest[j])
		j++;
	if (i >= n)
		for (k = 0; k < n; k++)
			dest[j + k] = src[k];
	else
	{
		for (k = 0; src[k] != '\0'; k++)
			dest[j + k] = src[k];
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
	}
/*
	for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';
*/
	return (dest);
}
