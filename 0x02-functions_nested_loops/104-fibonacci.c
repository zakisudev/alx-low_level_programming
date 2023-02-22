#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers starting from 1 and 2
 *
 * Return: Al
*/

#include <stdio.h>

int main() 
{
    int i;
        unsigned long first = 1, second = 2, next;

	    printf("%lu, %lu, ", first, second);

	        for (i = 2; i < 98; i++) {
		        next = first + second;
			        printf("%lu, ", next);
				        first = second;
					        second = next;
						    }

						        printf("\n");
		   return 0;
}
