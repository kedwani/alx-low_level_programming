#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
/*
while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

for (ch ='a'; ch <= 'z'; ++ch)
{
	putchar(ch);
}
*/

	do
	{
		putchar (ch);
		++ch;
	}while (ch <= 'z');


	putchar('\n');
	return (0);


}
