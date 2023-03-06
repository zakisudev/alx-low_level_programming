#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: the string to be checked
 * @needle: the string to be matched
 * Return: the pointer to the beginning of the substring match
 */

char *_strstr(char *haystack, char *needle)
{

	unsigned int index;
	char *ptr;

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (index = 0; needle[index] != '\0'; index++)
		{
			if (haystack[index] == needle[index])
			{
				ptr = &haystack[index];
				return (prt);
			}
		}
	}
	return (NULL);
}
