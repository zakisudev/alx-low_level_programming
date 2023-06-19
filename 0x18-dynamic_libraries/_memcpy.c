#include "main.h"

/**
 * _memcpy - Copies value from src to dest
 * @src: pointer to src string
 * @dest: pointer to dest string
 * @n: number of bytes to fill
 * Return: pointer to dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
