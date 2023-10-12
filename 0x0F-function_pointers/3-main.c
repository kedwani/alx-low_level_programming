include "3-calc.h"

int main(int arg,char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char op = argv[2];

	if ((op == '/' || op == '%' ) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	get_op_func(argv[2])(num1,num2);

}
