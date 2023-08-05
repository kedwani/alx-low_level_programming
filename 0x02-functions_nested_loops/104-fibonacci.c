#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long double a = 1;
	unsigned long double b = 2;
	unsigned long double sum = 0;
	int c;

	printf("%Lf, ", a);
	printf("%Lf, ", b);
	for (c = 3; c < 95; ++c)
	{
		sum = a + b;
		a = b;
		b = sum;

		printf("%Lf, ", sum);
	}
	printf("%Lf\n", (a + b));
	return (0);
}
