#include <stdio.h>
#include "main.h"

int _strlen(char *s);
/**
 * print_chessboard - Prints a chessboard
 * 
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int fc, sc;

	for (fc = 0; fc < 8; fc++)
	{
		for (sc = 0; sc < 8; sc++)
		{
			_putchar(a[fc][sc]);
		}
		_putchar('\n');
	}
}
