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
		_putchar(c + '0');
	}
	else if (!islower(c))
	{
		_putchar(c + '1');
	}
	return (0);
}
