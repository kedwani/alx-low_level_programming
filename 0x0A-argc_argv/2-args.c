#inculde < stdio.h >
#include "main.h"

/**
 * main - print all argu
 *
 * @argv : arguments to be printed
 *
 * @argc : numbers of argues
 *
 * Return: alwayes 0
 *
 **/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
