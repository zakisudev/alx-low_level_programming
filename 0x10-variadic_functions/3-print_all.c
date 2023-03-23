#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list vargs);
void print_int(va_list vargs);
void print_float(va_list vargs);
void print_str(va_list vargs);

/**
 * print_all - prints according to type indicated by string format
 * @format: const string used to show type of upcoming variable arguments
 *
 * Return: nothing (void)
 */
void print_all(const char * const format, ...)
{

	char *choice_format[4] = {"c", "i", "f", "s"};
	void (*choice_func[4])() = {print_char, print_int, print_float,
		print_str};
	int i = 0, j = 0;
	va_list vargs;
	char *separator = "";

	va_start(vargs, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == choice_format[j][0])
			{
				printf("%s", separator);
				choice_func[j](vargs);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(vargs);
}

/**
 * print_char - prints a char
 * @vargs: pointer to current position in va_list
 *
 * Return: nothing (void)
 */
void print_char(va_list vargs)
{
	printf("%c", va_arg(vargs, int));
}

/**
 * print_int - prints a float
 * @vargs: pointer to current position in va_list
 *
 * Return: nothing (void)
 */
void print_int(va_list vargs)
{
	printf("%d", va_arg(vargs, int));
}

/**
 * print_float - prints a float
 * @vargs: pointer to current position in va_list
 *
 * Return: nothing (void)
 */
void print_float(va_list vargs)
{
	printf("%f", va_arg(vargs, double));
}

/**
 * print_str - prints a string
 * @vargs: pointer to current position in va_list
 *
 * Return: nothing (void)
 */
void print_str(va_list vargs)
{
	char *str = va_arg(vargs, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
