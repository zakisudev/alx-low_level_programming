#include "main.h"

/**
 * _strchr - Searches for a char in a string
 * @src: pointer to string
 * @c: character to search
 * Return: pointer to the char or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
