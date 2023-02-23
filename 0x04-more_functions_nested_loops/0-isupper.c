#include "main.h"
/**
 * _isupper - Check for upper case letter
 *
 * @c: character to be checked
 *
 * Return: 1 if c is upper case 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
