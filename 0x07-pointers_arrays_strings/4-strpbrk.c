#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - search for a string in a set of bytes
 * @s: the string to be checked
 * @accept: the string to be matched
 * Return: the pointer to the bye in s
 */

char *_strpbrk(char *s, char *accept)
{

	unsigned int s_index, accept_index;
	char *ch;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		for (accept_index = 0; accept[accept_index] !='\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				ch = &accept[accept_index];
				return (ch);
			}
		}
	}
	return (NULL);
}
