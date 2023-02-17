#include <stdio.h>
#include <string.h>
/**
 * main - Prints lowercase alphabets except q and e
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
