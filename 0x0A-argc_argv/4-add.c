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
	int i;
	int num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		if (a > 0)
		{
			sum+=a;
		}
		if(a == 0 && argv[i] !='0')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n",sum);
	return (0);
}
