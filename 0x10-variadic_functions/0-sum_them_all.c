#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function that will sum all variable args
 * @n: a constant unsigned int that tells the amount of variable args
 *
 * Return: the sum of the variable args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	return (sum);
}
