#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Prints the last digit stored in th variable n
*Return: Always 0 (success)
*/

int main(void)
{
	int n, lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDgt = n % 10;

	if (lastDgt > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDgt);
	}
	else if (lastDgt < 6 && lastDgt != 0)
	{
		printf("Last digit of %i if %i and is less than 6 and not 0\n", n, lastDgt);
	}
	else if (lastDgt == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDgt);
	}
	return (0);
}
