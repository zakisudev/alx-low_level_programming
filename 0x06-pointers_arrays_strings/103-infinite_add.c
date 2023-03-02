#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);

/**
 * add_strings - adds the numbers sorted in two strings
 * @n1: the string contaning the first number to be added
 * @n2: the buffer to store the result
 * @r_index: the current index of the buffer
 * @r: result of the buffer
 * Return: the current index of the buffer
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
	}
	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
		return (0);
	return (r + r_index + 1);
}

/**
 * infinite_add - adds two numbers
 * @n1: the string contaning the first number to be added
 * @n2: the buffer to store the result
 * @size_r: the current index of the buffer
 * @r: result of the buffer
 * Return: the current index of the buffer
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;
	for (index = 0; *(n2 + index); index++)
		n2_len++;
	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);
	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}
