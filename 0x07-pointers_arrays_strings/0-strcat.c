#include <stdio.h>
#include "main.h"

/**
 * _memset - Fills a memory with a constant byte, b
 * @index: values of the memory
 * Return: Pointer to the resulting string dest
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
