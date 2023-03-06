#include <stdio.h>
#include "main.h"

/**
 * _memset - Fills a memory with a constant byte, b
 * @s: memory that is going to be filled
 * @n: amount of bytes to fill the memory
 * @b: the constant to fill the memory
 * Return: Pointer to the memory
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
