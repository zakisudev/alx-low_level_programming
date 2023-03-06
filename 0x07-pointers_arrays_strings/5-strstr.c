#include <stdio.h>
#include "main.h"

int _strlen(char *s);
/**
 * _strstr - Locates a substring
 * @haystack: the string to be checked
 * @needle: the string to be matched
 * Return: the pointer to the beginning of the substring match
 */

char *_strstr(char *haystack, char *needle)
{

	int n = 0, m = 0, len_needle = 0;

	len_needle = _strlen(needle) - 1;
	if (_strlen(needle) == 0)
	{
		return (haystack);
	}
	for (n = 0; *(haystack + n) != '\0'; n++)
	{
		for (m = 0; *(needle + m) != '\0'; m++)
		{
			while (*(haystack + n) == *(needle + m))
			{
				n++;
				m++;
				if ((m == len_needle) && *(haystack + n) == *(needle + len_needle))
					{
					return (haystack + (n - len_needle));
					}
			}
		}
	}
	return ('\0');
}


/**
 * _strlen - calculates the length of a string
 * @s: The string that the length will be calculated on
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
