#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a;
	int sum = 0, rest, i;

	if (argc != 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	rest = a;
	if (a >= 25)
	{
		i = (rest / 25);
		sum += i;
		rest = a - (i * 25);
	}
	if (rest >= 10)
	{
		i = (rest / 10);
		sum += i;
		rest -= (i * 10);
	}
	if (rest >= 5)
	{
		i = (rest / 5);
		sum += i;
		rest -= (i * 5);
	}
	if (rest >= 2)
	{
		i = (rest / 2);
		sum += i;
		rest -= (i * 2);
	}
	if (rest >= 2)
		sum += (rest / 1);
	printf("%d\n", sum);
	return (0);
}
