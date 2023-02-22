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

	    printf("%lu %lu ", first, second); // print the first two Fibonacci numbers

	        for (i = 2; i < 98; i++) {
		        next = first + second; // calculate the next Fibonacci number
			        printf("%lu ", next);
				        first = second; // update the previous two Fibonacci numbers
					        second = next;
						    }

						        printf("\n"); // print a new line at the end
		   return 0;
}

