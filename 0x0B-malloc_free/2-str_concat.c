#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, j = 0;
	char *s;
	
/*lengs of chars*/
	while (s1[n1] != '\0')
	{++n1}

	while (s2[n2] != '\0')
	{++n2}
	++n2;
/*allocat memmory*/
	s = malloc(sizeof(char) * (n1+n2))
		if (s == null)
			return (null);
/*intialize memmory*/
	for (i1 = 0; i1 <= n1; i1++)
		s[i1]=s1[i1];
	for (i2 = na + 1 ;i2 <= (n1+n2); ++i2)
	{
		s[i2] = s2[j];
		j++;
	}
	return (s);
