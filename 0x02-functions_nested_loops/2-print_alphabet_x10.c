#include "main.h"

/**
 * print_alphabet_x10 - 10 Alphabets
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 1;

	for (n = 1; n < 10; n++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	}
	_putchar('\n');
}
