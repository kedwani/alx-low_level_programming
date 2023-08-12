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
int j = 0;
int i;

while (dest[j])
	++j;

for (i = 0; i <= n; ++i)
{
	dest[j + i] = src[i];
	if (src[i] == '\0')
		break;
}
if (src[i] == '\0')
	;
else
	dest[j + i] = '\0';

return (dest);
}
