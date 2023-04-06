#include "main.h"

/**
 * print_binary - print binary representation
 * @n: number
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int now;

	for (i = 63; i >= 0; i--)
	{
		now = n >> i;

		if (now & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
