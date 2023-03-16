#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates and allocates memory for
 * an array of integers from int min to int max
 * @min: starting point integer
 * @max: ending point integer
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
