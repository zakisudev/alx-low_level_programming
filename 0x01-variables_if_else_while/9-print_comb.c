#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	if(num != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
