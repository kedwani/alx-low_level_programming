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
	return (dest);
}
