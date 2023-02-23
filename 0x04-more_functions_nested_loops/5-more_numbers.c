#include "main.h"
/**
 * more_numbers - Print 0 to 14 10 times
 * @c: numbers to be printed
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int c;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
