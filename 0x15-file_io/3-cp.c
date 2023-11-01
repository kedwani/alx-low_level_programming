#include "main.h"
void err(int from, int to, int r, int w, int cfrom, int cto, char **argv);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char **argv)
{
	int from, to, r, w, cfrom, cto;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	err(from, 0, 0, 0, 0, 0, argv);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	err(0, to, 0, 0, 0, 0, argv);

	while (r != 0 && r != -1)
	{
		r = read(from, buf, 1024);
		w = write(to, buf, r);
	}
	err(0, 0, r, w, 0, 0, argv);

	cfrom = close(from);
	cto = close(to);
	err(0, 0, 0, 0, cfrom, cto, argv);

	return (0);
}
/**
 *err - is afunction to check for errors and print errors messages.
 *@from : is from fd.
 *@to : is to fd.
 *@r : is read return.
 *@w : is write return.
 *@cfrom : is close frome return.
 *@cto : is cose to return.
 *@argv : is the argumnets passed to main.
 **/
void err(int from, int to, int r, int w, int cfrom, int cto, char **argv)
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (cfrom == -1 || cto == -1)
	{
		if (cfrom == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		else
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
}
