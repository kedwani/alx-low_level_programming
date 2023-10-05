#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *p;
	p = malloc(3 * sizeof(int));
	*p = 45;
	printf("first num is %d\n",*p);
	*(p+1) = 55;
	printf("second num is %d\n",*(p+1));
	*(p+2) = 65;
	printf("third num is %d\n",*(p+2));
	free(p);
	return (0);
}
