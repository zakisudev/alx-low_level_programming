#include "main.h"

int factors(int n, int n_check);

/**
 * is_prime_number - HCeck for prime numbers
 * @n: the number to be checked
 * Return: 1 if input has a prime number 0 otherwise
 */

int is_prime_number(int n)
{
	return (factors(n, n - 1));
}

/**
 * factors - Check if a number has factors other than itself or 1
 * @n: the number to be checked
 * @n_check: factors that will be checkd against number
 *
 * Return: 1 if number is a prime number, 0 otherwise
 */

int factors(int n, int n_check)
{
	if (n <= 1)
		return (0);
	if (n_check == 1)
		return (1);
	if (n % n_check == 0)
		return (0);
	return (factors(n, n_check - 1));
}
