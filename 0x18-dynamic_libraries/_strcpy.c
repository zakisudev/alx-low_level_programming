#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @src: pointer to src string
 * @dest: pointer to dest string
 * Return: pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
