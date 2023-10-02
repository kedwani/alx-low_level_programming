#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	
/*counting src length */
	while (src[len1])
		++len1;
	while (dest[len2])
		++len2;
	for (len2 = len1;len2<())



=======
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
>>>>>>> 786123c197076c3eb80b0ac67c6c41e17d71c883
}
