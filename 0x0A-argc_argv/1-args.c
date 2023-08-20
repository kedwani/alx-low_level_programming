#include <stdio.h>
#include "main.h"
/**
 * main -print num of arguments
 *
 *Return : alwayes zero
 *
 **/
int main (int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);
}
