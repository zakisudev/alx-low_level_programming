#include "main.h"

/**
 * _strlen_recursion - prints the lengt of a string
 * @s: the string to be checked
 * Return: Lengthe of the string
 */

int _strlen_recursion(char *s)
{

	int count = 0, index = 0;

	if (*s == '\0')
		return;
	else
		count++;
		return (count + _strlen_recursion(*(s + 1)));
}
