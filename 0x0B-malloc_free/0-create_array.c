#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array
 * @c: character to assign to array
 * @size: Size of the array
 *
 * Return: Pointer to array or NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
