#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 *write(2, "and that part is useful\" - Dora Korpar, 2015-10-19\n", 59);
	 *return (1);
	 */
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; arr[i] != '\0'; ++i)
		putchar(arr[i]);
	putchar(10);
	return (1);
}
