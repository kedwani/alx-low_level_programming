#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i;
	int j;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		  s[0] -= 32;
	}
	for (i = 1; i != '\0'; ++i)
	{
		j = i - 1;
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[j] == 10 || s[j] == 34 || s[j] == 9 || s[j] == 32
			    || s[j] == 40 || s[j] == 41 || s[j] == 44 || s[j] ==
			    46 || s[j] == 59 || s[j] == 33 || s[j] == 63 || s[j]
			    == 123 || s[j] == 125)
				s[i] -= 32;
		}
	}
	return (s);
}
