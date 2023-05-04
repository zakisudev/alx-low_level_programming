#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @num1: number one.
 * @num2: number two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int nbits;

	for (nbits = 0; num1 || num2; num1 >>= 1, num2 >>= 1)
	{
		if ((num1 & 1) != (num2 & 1))
			nbits++;
	}

	return (nbits);
}
