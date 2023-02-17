#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
*main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		return ("%i, is positive", n);
	}
	else if (n < 0)
	{
		return ("%i, is negative", n);
	}
	else
	{
		return ("%i, is zero", n);
	}
	return (0);
}
