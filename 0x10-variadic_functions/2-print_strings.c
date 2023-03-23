#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - variadic function that prints strings separated by separator
 * @separator: const string used to separate the printed variable strings
 * @n: the number of the variable strings passed to the function
 *
 * Return: nothing (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap1, ap2;

	va_start(ap1, n);
	va_copy(ap2, ap1); /* copies list ap1 to ap2 */

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap1, char *) == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(ap2, char *));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap1, char *) == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(ap2, char *));
		}
		printf("\n");
	}
}
