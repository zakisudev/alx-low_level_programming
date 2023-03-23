#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - variadic function that prints a variable number of numbers
 *	followed by the string separator
 * @separator: const string used to separate the numbers printed
 * @n: cont int refering to the number of variable args
 *
 * Return: nothing (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n); /* initializes va_list ap */

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(ap, int));
		printf("\n");
	}
