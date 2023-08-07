#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
		for (i = 0; *s != '\0'; ++s)
			++i;
	int len = i;
	char a[i];
	int c=0 ;
	do
	{
		a[c] = s[i-1];

		--i;
		++c;
	} while (i>=0);

	a[c]=0 ;

	for (i=0 ; i>=len;i++)
	{
		a[i]=a[c];
		c++;
	}
}
