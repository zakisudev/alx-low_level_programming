#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Takes a pointer to an int and updates
 * the value it points to 98
 *
 * @n: An integer input pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int a, b;
	a = 98;
	b = 42;
	printf("a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
