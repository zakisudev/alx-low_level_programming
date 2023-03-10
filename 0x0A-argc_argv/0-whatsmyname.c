#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count of arguments on command line
 * @argv: pointer to the array of command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
