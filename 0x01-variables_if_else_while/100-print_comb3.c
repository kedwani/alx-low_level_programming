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
int h;

for (i = 48; i <= 57; ++i)
{
	for (h = 48; h <= 57; ++h)
	{
		if (i != h && i < h)
			putchar (i);
		putchar (h);
if (i != 8)
{
	putchar(44);
			putchar (32);
}	}}
putchar(10);
return (0);
}
