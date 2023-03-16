#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory for b
 * @b: size of memory
 *
 * Return: Pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
