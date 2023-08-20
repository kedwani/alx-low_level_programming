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
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int mult = a * b;
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
