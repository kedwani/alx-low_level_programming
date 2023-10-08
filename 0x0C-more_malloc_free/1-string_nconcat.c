#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat :- is a function that concatenates two strings in NEW MEMMORY
 *by adding s1 and concatenate N number of s2;
 *
 *NULL  equal to empty string,
 *
 *@s1 : is the first string
 *@s2 : is the second string
 *@n : is the number of @s2 chars to concatenate with @s1
 * Return: (pointer) to the first char in new string if success or (NULL) if
 * fails  to allocat.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, i2 = 0;
	char *p;

/* calculate s1 length after check for null*/
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			;
/*calculate s2 length after check for null */
	if (s2 != NULL)
		for (i2 = 0; s2[i2] != '\0'; i2++)
			;
/*memmory allocation then check for null*/
	if (n == i2)
		p = malloc(i + i2 + 1);
	else
		p = malloc(n + i + 1);
	if (p == NULL)
		return (NULL);
/*intialize s1 after check for null */
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; ++i)
			p[i] = s1[i];
/*intialize n of s2 after check for null*/
	if (s2 != NULL)
		for (i2 = 0; i2 < n; i2++)
			p[i + i2] = s2[i2];
/*adding null terminates */
	p[i + i2] = '\0';
	return (p);
}
