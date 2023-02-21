#include "main.h"
#include <ctype.h>

/**
 * _islower - check lowercase
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		_putchar('1');
	}
	else if (!islower(c))
	{
		_putchar('0');
	}
	return (0);
}
