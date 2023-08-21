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
	/*sum is the change .. rest is the rest of money after every operation */
	int a = atoi(argv[1]);
	int sum = 0;
	int rest = a;
/*check for argc not equal 2*/
	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
/*check for negative*/
	if (a < 0)
		printf("0\n");
/*the prog*/
	if (a / 25 > 0)
	{
		sum += (a / 25);
		rest = a - (sum * 25);
	}
	if (rest / 10 > 0)
	{
		sum += (rest / 10);
		rest -= (sum * 10);
	}
	if (rest / 5 > 0)
	{
		sum += (rest / 5);
		rest -= (sum * 5);
	}
	if (rest / 2 > 0)
	{
		sum += (rest / 2);
		rest -= (sum * 2);
	}
	if (rest / 1 > 0)
		sum += (rest / 1);
	printf("%d\n", sum);
	return (0);
}
