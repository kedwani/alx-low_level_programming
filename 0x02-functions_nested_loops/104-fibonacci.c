#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long double a = 1;
	long double b = 2;
	long double sum = 0;
	int c;

	printf("%.0Lf, ", a);
	printf("%.0Lf, ", b);
	for (c = 3; c < 98; ++c)
	{
		sum = a + b;
		a = b;
		b = sum;

		printf("%.0Lf, ", sum);
	}
	printf("%.0Lf\n", (a + b));
	return (0);
}
