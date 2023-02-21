#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - Print last digit
 *
 * @r: number to be checked
 *
 * @lDigit: last digit if r
 *
 * Return: Always 0
 */

int print_last_digit(int r)
{
	int lDigit;

	lDigit = r % 10;

	_putchar(lDigit);
	return (0);
}
