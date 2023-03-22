#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - pointer to a function
 * @s: the string used to determine which function to use in return
 *
 * Return: int calculated through function that was chosen to be pointed to,
 * NULL if string s is not "+", "-", "*", "/", or "%"
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}
	return (0);
}
