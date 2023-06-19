#include "main.h"

/**
 * _islower - Checks for lower characters
 * @c: character
 * Return: 1 if char is lower 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
