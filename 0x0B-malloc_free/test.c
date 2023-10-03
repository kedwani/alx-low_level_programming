#include <stdio.h>
int main(void)
{
	int *p;
	p = (int) malloc(3 * sizeof(int));
	*p = 45;
	printf("first num is %d\n",*p);
	++p = 55;
	printf("second num is %d\n",*p);
	++p = 65;
	printf("third num is %d\n",*p);
	return (0);
}
