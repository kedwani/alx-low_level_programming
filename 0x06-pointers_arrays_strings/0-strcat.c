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
int i = 0;
int j = 0;
int n;
int f = 0;

while (dest[i])
	i++;
while (src[j])
	j++;
for (n = i; src[f] != '\0'; n++)
{
	dest[n] = src[f];
	++f;
}
dest[n] = '\0';
return (dest);
}
