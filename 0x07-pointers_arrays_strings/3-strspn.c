#include <stdio.h>
#include "main.h"

/**
 * _strspn - Get a length of substring
 * @s: the strig to be checked
 * @accept: the string to be matched
 * Return: the length of the substring that is a match
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int s_index, accept_index, count = 0, count_before;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		count_before = count;
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
		if (s[s_index] == accept[accept_index])
			count++;
		}
		if (count_before == count)
			return (count);
	}
	return (count);
}
