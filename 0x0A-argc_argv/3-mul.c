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
	if (argc > 1)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d/n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
