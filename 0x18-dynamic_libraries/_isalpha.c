#include "main.h"

/**
 * _isalpha - Checks if a characteris an alphabet
 * @c: character
 * Return: 1 if char is lower 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
