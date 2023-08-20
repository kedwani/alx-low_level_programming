<<<<<<< HEAD
=======

>>>>>>> 786123c197076c3eb80b0ac67c6c41e17d71c883
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
<<<<<<< HEAD
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

=======

	int i = 0;
	int k = 0;

	while (src[i])
		i++;

	if (i >= n)
		for (k = 0; k < n; k++)
			dest[k] = src[k];
	else
	{
		for (k = 0; src[k] != '\0'; k++)
			dest[k] = src[k];
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
	}
>>>>>>> 786123c197076c3eb80b0ac67c6c41e17d71c883
	return (dest);
}
