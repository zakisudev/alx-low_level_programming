#include "main.h"
#include <stdlib.h>

/**
 *_abs - check absolte value of integer
 *
 * Return: Always 0
 */

int _abs(int r)
{
	if (r > 0)
	{
	return (r);
	}
	else if (r < 0)
	{
	return (r * -1);
	}
	else
	{
	return (r);
	}
	return (0);
}
