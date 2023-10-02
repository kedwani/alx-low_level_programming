#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

=======
	int i;
	int j;

	for (i = 0;dest[i] != '\0';i++)
		;
	for (j = 0;src[j] != '0';j++)
	{if(n>=j)
	 {
		dest[i] = src[j];
		i++;
	 }
		else
			dest[i]='\0';
	}
	if(
	dest[i] = '\0';
>>>>>>> 786123c197076c3eb80b0ac67c6c41e17d71c883
	return (dest);
}
