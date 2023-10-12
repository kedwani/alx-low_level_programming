#include "3-calc.h"

int main(int argc, char *argv[])
{
	long int res ;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char s = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if ((s == '/' || s == '%' ) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	res = (*get_op_func(argv[2]))(num1, num2);
	if (res == '\0')
	{
		printf("Error\n");
		return (99);
	}
	printf("%ld",res);
	return (0);
}
