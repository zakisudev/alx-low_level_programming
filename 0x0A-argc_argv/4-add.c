#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long digit_count(int num);

/**
 * main - adds positive numbers
 * @argc: the count of arguments
 * @argv: a pointer to an array of the arguments
 * Return: 1 if an argument isn't only digits, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int sum = 0, index;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (index = 1; index < argc; index++)
	{
		if (atoi(argv[index]) < 0)
		{
		printf("Error\n");
		return (1);
		}
		if (strlen(argv[index]) != digit_count(atoi(argv[index])))
		{
			printf("Error\n");
		return (1);
		}
		if ((atoi(argv[index]) == 0) && (strcmp(argv[index], "0") != 0))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * digit_count - counts the number of digits in a positive integer
 * @num: the integer that the number of digits will be counted
 * Return: the count of the digits
 */
unsigned long digit_count(int num)
{
	int count = 0;

	if (num == 0)
		return (1);
	for (; num > 0; num /= 10)
		count++;

	return (count);
}
