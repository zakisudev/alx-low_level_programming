#include "main.h"

/**
 * _strncat - Returns a portion of concatenated string
 * @dest: pointer to string dest
 * @src: pointer to string src
 * @n: portion to select
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (c = 0; src[c] != '\0' && n > 0; c++)
	{
		dest[i] = src[c];
	}

	return (dest);
}
