#include <stdio.h>
#include <string.h>
/**
 * main - Prints the name of arguments passed to it
 * @argc: counts of arguements on command line
 * @argv: pointer to the array of command line arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		
	}
	return (0);
}
