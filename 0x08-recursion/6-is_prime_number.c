#include "main.h"
int prime(int n, int i);
/**
 *is_prime_number - is the main function
 *
 *Return: alwayes (0) if num is
 *
 *@n : is the num
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime(n, 2));
}

/**
 *prime - is the main function
 *
 *Return: alwayes (0) if num is
 *
 *@n : is the num
 *
 *@i : is parameter
 */
int prime(int n, int i)
{
	if (n >= i )
	  return (1);
	if (n % i == 0)
	  return (0);
	if (n % i != 0)
	  return (1 * prime(n, i + 1));
	return (1);
}
