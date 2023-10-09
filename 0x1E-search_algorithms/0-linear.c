#include "search_algos.h"
/**
 * linear_search - function to search for a value in an array and
 * - then return its index.
 *
 * @array: Array to be searched
 * @size: Size of the array to be searched
 * @value: Value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
