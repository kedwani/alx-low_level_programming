#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum = 0;
	int c;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (c = 3; c < 50; ++c)
	{
		sum = a + b;
		a = b;
		b = sum;

		printf("%lu, ", sum);
	}
	printf("%lu", (a + b));
	return (0);
}
