#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int i;

<<<<<<< HEAD
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

=======
	for (i = 0; s[i] != '\0'; ++i)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
>>>>>>> 786123c197076c3eb80b0ac67c6c41e17d71c883
	return (s);
}
