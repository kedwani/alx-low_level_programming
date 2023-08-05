#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int sum = 0;
	unsigned long long int c = 2;


	while (sum < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			c += sum;
	}
	printf("%llu\n", c);
	return (0);
}
