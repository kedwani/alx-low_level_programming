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
	int n1 = 0, n2 = 0, j = 0;
	char *s;
	int i1, i2;

/*lengs of chars*/
	while (s1[n1])
	{
		++n1;
	}

	while (s2[n2])
	{
		++n2;
	}
	++n2;
/*CHECH FOR NULL*/
	if (s1 == NULL)
		n1 = 0;
	else if (s2 == NULL)
		n2 = 0;
	else if (s1 == NULL && s2 == NULL)
		n1 = n2 = 0;
/*allocat memmory*/
	s = malloc(sizeof(char) * (n1+n2));
		if (s == NULL)
			return (NULL);
/*intialize memmory*/
	for (i1 = 0; i1 < n1; i1++)
		s[i1]=s1[i1];
	for (i2 = n1 ;i2 <= (n1+n2); ++i2)
	{
		s[i2] = s2[j];
		j++;
	}
	s[i2] = '\0';
	return (s);
}
