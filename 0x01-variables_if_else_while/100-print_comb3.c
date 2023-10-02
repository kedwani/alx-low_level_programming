#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; ++i)
	{
		for (j = i + 1; j <= 57; ++j)
		{
			putchar (i);
			putchar (j);
			if (i != 56 || j != 57)
			{
				putchar(44);
				putchar (32);
			}
		}
	}
	putchar(10);
	return (0);
}
