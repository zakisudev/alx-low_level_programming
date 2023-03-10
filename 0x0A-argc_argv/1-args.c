#include <stdio.h>
#include <string.h>
/**
 * main - Prints the number of arguments passed to it
 * @argc: counts of arguements on command line
 * @argv: pointer to the array of command line arguements
 * Return: Always 0
 */

int main(int argc, __attribute__ ((unused))char *argv[])
{
	printf("%i\n", argc);
	return (0);
}
