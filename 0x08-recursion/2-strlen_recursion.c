#include "main.h"

/**
 * _strlen_recursion - prints the lengt of a string
 * @s: the string to be checked
 * Return: Lengthe of the string
 */

int _strlen_recursion(char *s)
{

	int length;

	if (*s == '\0')
		return (0);
	len = 1 +  _strlen_recursion(s + 1);
	return (len);
}
