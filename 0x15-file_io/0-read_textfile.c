#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int o, r, w;

	buf = malloc(sizeof(size_t) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (0);
		free(buf);
	}
	r = read(o, buf, letters);
	if (r == -1)
	{
		return (0);
		free(buf);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		return (0);
		free(buf);
	}
	free(buf);
	return (w);
}
