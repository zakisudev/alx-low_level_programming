#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	while (text_content && text_content[len])
		len++;
	if (write(fd, text_content, len) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
