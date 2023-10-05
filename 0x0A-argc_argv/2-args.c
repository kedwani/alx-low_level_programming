#include <stdio.h>
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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
