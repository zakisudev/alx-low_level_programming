#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function action on all elements of array
 * @array: the array used in the execution
 * @size: size of the array
 * @action: pointer to fuction that returns void and takes in parameter
 *
 * Return: nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
