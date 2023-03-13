#include <stddef.h>
#include <stdlib.h>
#include "main.h"

unsigned int _strlen(char *str);

/**
 * _strdup - allocate new memory and copy string
 * @str: the string to be copied
 *
 * Return: Pointer to the new memory or NULL otherwise
 */

char *_strdup(char *str)
{
	unsigned int i, n;
	char *ptr;

	if (str == '\0')
                return (NULL);
	n = _strlen(str);

	ptr = malloc(sizeof(char) * (n + 1));

	if (str == '\0')
		return (NULL);
	for (i = 0; i != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

/**
 * _strlen - get the length of string str
 * @str: the string that the length will be calculated
 *
 * Return: the length of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++);
	return (i);
}
