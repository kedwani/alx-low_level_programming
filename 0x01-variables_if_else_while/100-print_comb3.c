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

	for (i = 48; i <= 57; ++i)
	{
		for (j = i; j <= 57; ++j)
		{
			if (i != j)
			{
				putchar (i);
				putchar (j);
				if (i != 56 && j != 57)
				{
					putchar(44);
					putchar (32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
