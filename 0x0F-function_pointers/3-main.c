#include "3-calc.h"

int main(int argc, char *argv[])
{

	if (argc == 4)
	{
		int res ;
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		char *s = argv[2];

		if ((s[0] == '/' || s[0] == '%' ) && num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
		res = (*get_op_func(s))(num1, num2);
		if (res == '\0')
		{
			printf("Error\n");
			return (99);
		}
		printf("%d",res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (98);
	}
}
