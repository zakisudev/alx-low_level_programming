#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: the string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{

	int index = 0;

	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[index]);
	_puts_recursion(s - 1);
}
