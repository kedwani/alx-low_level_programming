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
	int a = atoi(argv[1]);
	int sum = 0, rest = a, i;
/*check for argc not equal 2*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
/*the prog*/
	if (a / 25 > 0)
	{
		i = (rest / 25);
		sum += i;
		rest = a - (i * 25);
	}
	if (rest / 10 > 0)
	{
		i = (rest / 10);
		sum += i;
		rest -= (i * 10);
	}
	if (rest / 5 > 0)
	{
		i = (rest / 5);
		sum += i;
		rest -= (i * 5);
	}
	if (rest / 2 > 0)
	{
		i = (rest / 2);
		sum += i;
		rest -= (i * 2);
	}
	if (rest / 1 > 0)
		sum += (rest / 1);
	printf("%d\n", sum);
	return (0);
}
