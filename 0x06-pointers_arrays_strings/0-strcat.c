#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination of the string
 * @src: source of the string
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dLen = 0, i;

	while (dest[dLen])
	{
		dLen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dLen] = src[i];
		dLen++;
	}
	dest[dLen] = '\0';
	return (dest);
}
