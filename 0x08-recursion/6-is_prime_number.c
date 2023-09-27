#include "main.h"
int prime (int n ,int i);

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime(n, 2));
}
int prime (int n ,int i)
{
	if (n != i && n % i == 0)
		return (0);
	if (i > n)
		return (1);
	if (n % i != 0)
		return (1);
	return (1 * prime(n,i+1));
}
