#include "main.h"

/**
 * _memset - Fills a memory with specified value
 * @s: pointer to a block of memory
 * @b: byte
 * @n: number of bytes to fill
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{	
	while (n > 0)
	{
		*s = b;
		n--;
	}
	return (s);
}
