#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap values of integers
 *
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp
}
