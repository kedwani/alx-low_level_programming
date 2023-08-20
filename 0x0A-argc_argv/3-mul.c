#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiply two arg
 * @argv : arguments to be multiplyed
 * @argc : numbers of argues
 * Return: alwayes 0
 **/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1 && argc < 4)
	{
		printf("%d\n", (atoi(argv[1])) * (atoi(argv[2])));
		return (0);
	}
}
