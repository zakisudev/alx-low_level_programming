#include <stdio.h>

/**
 * before_main - a fuction that will run before the main() function
 *
 * Return: nothing (void)
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
