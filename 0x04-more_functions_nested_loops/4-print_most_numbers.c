#include "main.h"
/**
 * print_most_numbers - Print 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 4 || n != 2)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
