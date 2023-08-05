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
	int sum;

	printf("%d, ", a);
	printf("%d, ", b);
	while (sum <= 50)
	{
		sum = a + b;
		a = b;
		b = sum;

		printf("%d, ", sum);
		return (0);
	}
}
