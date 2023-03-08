#include "main.h"

int _sqrt(int n, int sqrt);
/**
 * _sqrt_recursion - print squareroot of a n
 * @n: the number to be squarerooted
 * Return: -1 if no natural squareroot else squareroot of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

/**
 * _sqrt - square root of n recursively
 * @n: the number that the natural square root will be found
 * @sqrt: the trial numbers to see if it's the square root
 *
 * Return: -1 if no natural square root is found, the square root otherwise
 */

int _sqrt(int n, int sqrt)
{
	if (n < 0 || sqrt > n)
		return (-1);
	if (sqrt * sqrt == n)
		return (sqrt);
	return (_sqrt(n, sqrt + 1));
}
