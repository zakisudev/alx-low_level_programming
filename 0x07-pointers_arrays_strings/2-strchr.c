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

	for (index = 0; index < s; index++)
	{
		if (s[index] == c)
		{
			return (s[index]);
		}
		else
		{
			return (NULL);
		}
	}
}
