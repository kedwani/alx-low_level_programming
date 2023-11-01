#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
		w = write(o, text_content, strlen(text_content));
	if (w == -1 || o == -1)
		return (-1);
	close(o);
	return (1);

}
