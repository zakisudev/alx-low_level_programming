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
	char *o_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return o_dest;
}
