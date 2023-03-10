#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - prints the minimum number of coins to make change for a money amount
 *   * @argc: the number of arguments in the command line
 *    * @argv: a pointer to an array of the arguments in the command line
 *     *
 *      * Return: 1 if the arguments passed into function is not 1, 0 otherwise
 *       */
int main(int argc, char *argv[])
{
	int count = 0, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; amount >= 25; amount -= 25)
		count++;
	for (; amount >= 10; amount -= 10)
		count++;
	for (; amount >= 5; amount -= 5)
		count++;
	for (; amount >= 2; amount -= 2)
		count++;
	for (; amount >= 1; amount -= 1)
		count++;

	printf("%d\n", count);

	return (0);
}
