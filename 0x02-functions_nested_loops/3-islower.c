#include "main.h"
#include <ctype.h>

/**
 * _islower - check lowercase
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
