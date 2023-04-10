#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX std-output.
 * @filename: the file to open.
 * @letters: number of letters it should read and print.
 * Return: number of letters it could read and print, or 0 if:
 * - filename is NULL.
 * - the file can not be opened or read.
 * - write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = -1;
	ssize_t output = 0;
	char *ch;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	ch = malloc(sizeof(char) * letters);
	if (!ch)
	{
		close(fd);
		return (0);
	}

	output = read(fd, ch, letters);
	if (output < 0)
	{
		free(ch);
		close(fd);
		return (0);
	}

	output = write(STDOUT_FILENO, ch, output);
	free(ch);
	close(fd);
	if (output < 0)
		return (0);
	return (output);
}
