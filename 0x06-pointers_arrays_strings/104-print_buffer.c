#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints a buffer 10 bytes at a time,
 * starting with byte position, then showing the hex
 * content then displaying printable characters
 * @b: the buffer to be printed
 * @size: the number of bytes to be printed from the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int byte, index;

	if (size <= 0)
		printf("\n");
	
	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
			{
				printf(" ");
			}
			else if ((index % 2) != 0 && index != 0)
			{
				printf(" ");
			}
			else
			{
			printf("%02x", *(b + index + byte));

			}
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;

			else if (*(b + index + byte) >= 31 && *(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));

			else
				printf(",");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}
}
