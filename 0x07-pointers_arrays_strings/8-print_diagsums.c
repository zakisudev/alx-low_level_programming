#include <stdio.h>
#include "main.h"

int _strlen(char *s);
/**
 * print_diagsums - Prints sum of a diagonal
 * @a: square matrix of diagonals
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_mat = 0, sum_tam = 0, index;

	for (index = 0; index <= size * size - 1; index += size + 1)
	{
		sum_mat += a[index];
	}
	printf("%d, ", sum_mat);
	for (index = (size * size - 1) - (size - 1); index <= size - 1;
	index -= size - 1)
	{
		sum_tam += a[index];
	}
	printf("%d\n", sum_tam);
}
