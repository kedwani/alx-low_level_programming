#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	char ary[999];
	int a=0;

		for (i = 0; *s != '\0'; ++s)
			++i;
		--s;
		for (; i != 0; --s)
		{
			i--;
			ary[a] = *s;
			a++;
		}
		ary[a+1] = '\0';
		*s = ary;
}
