#include <stdio.h>
#include "main.h"
/**
 * main -print num of arguments
 *
 * @argv : array of arguments
 *
 * @argc : number of arguments
 * Return: always (0)
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);
}
