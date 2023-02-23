#include "main.h"
/**
 * print_line - Print line
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		else
		{
		_putchar('_');
		n--;
		}
	}
	_putchar('\n');
}
