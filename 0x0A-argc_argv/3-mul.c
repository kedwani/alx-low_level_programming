#include <stdio.h>
#include "main.h"

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
		printf("%d/n", argv[1] * argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
