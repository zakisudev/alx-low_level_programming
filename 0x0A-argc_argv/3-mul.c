#include <stdio.h>
#include <string.h>
/**
 * main - Prints the of two arguments passed to it
 * @argc: counts of arguements on command line
 * @argv: pointer to the array of command line arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;

	for (i = 0; i < argc; i++)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		prod = atoi(argv[1] * atoi(argv[2]));
		printf("%d\n", prod);
	}
	return (0);
}
