#include "main.h"

/**
 * _strncmp - Compare two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 * Return: If s1 < s2, the negetive difference
 * If s1 = s2, 0
 * If s1 > s2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
