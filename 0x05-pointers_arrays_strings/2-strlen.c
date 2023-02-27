#include <stdio.h>

/**
 * _strlen - Prints the length of a string
 *
 * @str: the string to check
 *
 * Return: The length of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
