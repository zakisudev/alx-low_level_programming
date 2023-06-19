#include "main.h"

/**
 * _puts - prints string to stdout
 * @s: pointer to string
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
