#include "main.h"



int _strlen_recursion(char *s)
{
	int i;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	else
		i = -1;
	i++;
	return (i);
}
