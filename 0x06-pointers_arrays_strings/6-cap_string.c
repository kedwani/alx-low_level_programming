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

	for (i = 1; i != '\0'; ++i)
	{
		j = i - 1;
		if ( i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'
			    || s[j] == ',' || s[j] == ';' || s[j] == '.'
			    || s[j] == '!' || s[j] == '?' || s[j] == '"'
			    || s[j] == '(' || s[j] == ')' || s[j] == '{'
			    || s[j] == '}')
				s[i] -= 32;
		}
	}
	return (s);
}
