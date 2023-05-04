#include "main.h"

/**
 * set_bit - set the value of bit to 1
 * @n: pointer to the number to be changed
 * @index: index of number
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}

	num <<= index;
	*n = *n | num;

	return (1);
}
