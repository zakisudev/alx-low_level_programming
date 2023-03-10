#include <stdio.h>
#include <string.h>
/**
 * main - Prints the number of arguments passed to it
 * @argc: counts of arguements on command line
 * @argv: pointer to the array of command line arguements
 * Return: Always 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
