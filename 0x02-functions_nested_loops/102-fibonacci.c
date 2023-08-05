#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int c;

	printf("%d, ", a);
	printf("%d, ", b);
	for (c = 0; c < 47; ++c)
	{
		sum = a + b;
		a = b;
		b = sum;

		printf("%d, ", sum);
	}
	printf("%d", (a + b));
	return (0);
}
