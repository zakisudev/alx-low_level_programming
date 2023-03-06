#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: the string to be checked
 * @c: the character
 * Return: Pointer to the first occurrence of the character
*/

char *_strchr(char *s, char c)
{

	int index;
	char *fop;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			fop = &s[index];
			return (fop);
		}
		if (c == '\0')
		{
			fop = &s[index];
			return (fop);
		}
	}
	return (NULL);
}
