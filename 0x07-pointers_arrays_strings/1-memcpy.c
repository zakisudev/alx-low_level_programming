#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy a memory area
 * @dest: memory destination
 * @src: memory source
 * @n: the amount of bytes to copy
 * Return: Pointer to the destination memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
