main(int argc , char **argv)
{

  if (argc != 3)
  {
    printf("ERROR");
    return (98);
  }
  for (i=1; argv[i] != '\0';i++)
    for (j=0;argv[i][j] != '\0';j++)
      if (argv[i][j] > '9' || argv[i][j] <'0')
	{
	  printf("ERROR");
	  return (98);
	}
  long unsigned int num1 = atoi(argv[1]);
  long unsigned int num2 = atoi(argv[2]);
  long unsigned int mul = num1 * num2;
  printf 

}
