#include "main.h"

/**
 * reverse_array - Reverse the content of an array on integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	n = n - 1;
	while (index <= n)
	{
		tmp = a[index];
		a[index++] = a[n];
		a[n--] = tmp;
	}
}
