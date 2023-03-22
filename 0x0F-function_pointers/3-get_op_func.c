#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - pointer to a function. Function is determined by string s
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
		if (*s == *ops[i].op)
			break;
			i++;
	}
	if (i == 5)
	{
		return (NULL);
	}
	return (ops[i].f);
}
