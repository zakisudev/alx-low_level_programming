#include "main.h"

/**
 * reverse_array - Recerses the content of the array of integers
 * @a: array of integers to be reversed
 * @b: number of elements in the array
 * Return: void
 */

char reverse_array(int *a, int n)
{
	int tmp, index;
	
	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n- 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = temp;
	}
}
