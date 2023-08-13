#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int loop = 0;
	int ret;

	while (s1[loop] == s2[loop] && (s1[loop] != '\0' && s2[loop] != '\0'))
		++loop;
	ret = s1[loop] - s2[loop];
	return (ret);
}
