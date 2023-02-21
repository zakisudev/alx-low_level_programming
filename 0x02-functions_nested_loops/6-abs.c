#include "main.h"
#include <stdlib.h>

/**
 *_abs - check absolte value of integer
 *
 * Return: Always 0
 */

int _abs(int r)
{
	if (abs(r) > 0)
	{
		_putchar(r);
	}
	else if (abs(r) < 0)
	{
		_putchar(r * -1);
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
