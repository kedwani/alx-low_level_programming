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

	for (i = 0; i != '\0'; ++i)
	{
		j = i - 1;
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (j == 10 || j == 34 || j == 9 || j == 32 || j == 40
			    || j == 41 || j == 44 || j == 46 || j == 59 || j ==
			    33 || j == 63 || j == 123 || j == 125)
				s[i] -= 32;
		}
	}
	return (s);
}
