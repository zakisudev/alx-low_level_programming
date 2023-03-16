#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

unsigned int _strlen(char *str);
/**
 * string_nconcat - cocatenate n byte of string from s2 to s1
 * @s1: the first string
 * @s2: the string to be concatenated
 * @n: number of bytes in string s2
 * Return: Pointer topointer to a newly allocated sace or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (n > _strlen(s2))
		n = _strlen(s2);
		ptr = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = 0; j < _strlen(s1); i++, j++)
		ptr[i] = s1[j];

	for (j = 0; j < n; i++, j++)
		ptr[i] = s2[j];
		ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string used in the calculation
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
