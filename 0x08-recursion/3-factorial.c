#include "main.h"

/**
 * factorial - prints the factorial of n
 * @n: the factorial number
 * Return: factorial of n
 */

int factorial(int n)
{

	if (n < 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
