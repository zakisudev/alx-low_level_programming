#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to append the text.
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;
	if (write(fd, text_content, len) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
