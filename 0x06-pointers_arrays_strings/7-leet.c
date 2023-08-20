#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, j;
<<<<<<< HEAD

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

=======
	char let[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; ++i)
		for (j = 0; j < 5; j++)
			if (s[i] == let[j] || s[i] == (let[j] + 32))
				s[i] = num[j];
>>>>>>> 786123c197076c3eb80b0ac67c6c41e17d71c883
	return (s);
}
