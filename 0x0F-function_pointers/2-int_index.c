#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches an array for an integer
 * @array: the array used in the search
 * @size: the number of elements in an array
 * @cmp: pointer to function that returns int and takes an int as an argument
 *
 * Return: return the index of the first element that matches in search,
 * -1 if not element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]) != 0)
			return (i);
		}
	return (-1);
}
