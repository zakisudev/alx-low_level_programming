#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		if (num == 9)
		{
		putchar(57);
		}
		else
		{
		putchar(48 + num);
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
