#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	double a = 1;
	double b = 2;
	double sum = 0;
	int c;

	printf("%.0lf, ", a);
	printf("%.0lf, ", b);
	for (c = 3; c < 98; ++c)
	{
		sum = a + b;
		a = b;
		b = sum;

		printf("%.0lf, ", sum);
	}
	printf("%.0lf\n", (a + b));
	return (0);
}
