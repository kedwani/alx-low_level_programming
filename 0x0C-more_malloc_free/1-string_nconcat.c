#include "main.h"
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, i2 = 0;
	char *p;
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			;
	if (s2 != NULL)
		for (i2 = 0; s2[i2] != '\0'; i2++)
			;
	if (n == i2)
		p = malloc(i+i2+1);
	else
		p = malloc(n+i+1);
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	for (i = 0; s1[i] !='\0'; ++i)
		p[i] = s1[i];
	if (s2 != NULL)
		for (i2 = 0; i2 < n; i2++)
			p[ i + i2] = s2[i2];
	p[i+i2] = '\0';
	return (p);
}
