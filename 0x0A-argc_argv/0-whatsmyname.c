#include <stdio.h>

/**
 * main - prints the name of the program followed by a new line
 * @argc: count of arguments on command line
 * @argv: pointer to the array of command line arguments
 *
 * Return: 0 (success)
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
