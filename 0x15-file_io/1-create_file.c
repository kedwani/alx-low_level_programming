#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;

	if (!filename)
		return (-1);

	o = open(filename, O_RDWR | O_CREAT | O_EXCL | O_TRUNC, 0600);
	if (o == -1)
		return (-1);
	if (text_content)
	{

		w = write(o, text_content, strlen(text_content));
		if (w == -1)
			return (-1);
	}
	close(o);
	return (1);
}
