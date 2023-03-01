#include "main.h"

/**
 *print_number - Prints an integer
 * @n: the integer to be printed
 * Return: void
 */

char print_number(int n)
{
	unsigned int num = n;
	
	if (n < 0)
	{
		_putchar('-');
		num = - num;
	}
	if ((num / 10) > 0)
	print_numbers(num / 10);
	_puchar((sum % 10) + '0');
}
