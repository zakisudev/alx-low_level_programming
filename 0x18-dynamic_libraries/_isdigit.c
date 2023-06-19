#include "main.h"

/**
 * _isdigit - Checks a character if number
 * @c: char
 * Return: 1 if char is digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
