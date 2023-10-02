#include "main.h"
/**
 * factorial - prog to get factorial
 *
 * Return: alwayes (fact)
 *
 *@n : is the fact
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
