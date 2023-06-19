#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: compare value
 */
int _strcmp(char *s1, char *s2)
{
	int count, cmp;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;

	cmp = s1[count] - s2[count];
	return (cmp);
}
