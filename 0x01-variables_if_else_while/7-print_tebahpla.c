#include <stdio.h>
/**
 * main - Prints lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
