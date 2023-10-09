#include "main.h"

int main(int argc , char **argv)
{
	int i, j;
  long unsigned int num1 = atoi(argv[1]);
  long unsigned int num2 = atoi(argv[2]);
  long unsigned int mul = num1 * num2;

  if (argc != 3)
  {
    printf("ERROR\n");
    return (98);
  }
  for (i=1; argv[i] != NULL; i++)
    for (j=0;argv[i][j] != '\0';j++)
      if (argv[i][j] > '9' || argv[i][j] <'0')
	{
	  printf("ERROR\n");
	  return (98);
	}

  printf ("%lu\n",mul);
  return (0);
}











char *s3 gmul(char *s1,char *s2)
{
	int i, j;

	for (i=0;s1[i] != '\0' ; i++)
		;
	for (j=0;s2[i] != '\0'; ++j)
		;
	--i;
	--j;
	if(i < j)
	{
		for (;i <-1;k--)


			}


}
