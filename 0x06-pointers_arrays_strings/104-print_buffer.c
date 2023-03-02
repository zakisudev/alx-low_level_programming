#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * Description:
 *	first column is position of the first byte (in hexadecimals)
 *		of that line
 *	each line represents 10 bytes from the buffer
 *	the next 5 columns is the content in hexadecimals, 2 bytes at a time,
 *		separated by a space
 *	then the content of the buffer is printed, if it's not a printable
 *		character then print.
 * @b: the buffer that will be printed
 * @size: the number of bytes to be printed from buffer
 *
 * Return: void - nothing
 */
void print_buffer(char *b, int size)
{
	int line_num, lines_to_be_printed, byte_num, remainder = (10 - size % 10);

	if (size % 10 != 0)
		lines_to_be_printed = size / 10 + 1;
	else
		lines_to_be_printed = size / 10;
	for (line_num = 0; size > 0; line_num += 10)
	{
		printf("%08x: ", line_num);
		for (byte_num = line_num; byte_num < line_num + 10 &&
				byte_num < size; byte_num++)
		{
			if (isprint(b[byte_num]) == 0)
				printf("%02x", b[byte_num]);
			else
				printf("%02x", b[byte_num]);
			if (byte_num % 2 != 0)
				printf(" ");
		}
		if ((line_num / 10 == lines_to_be_printed - 1) &&
				remainder != 0 && remainder != 10)
			for (; remainder > 0; remainder--)
			{
				printf("  ");
				if (remainder % 2 != 0)
					printf(" ");
			}
		for (byte_num = line_num; byte_num < line_num + 10 &&
				byte_num < size; byte_num++)
			if (isprint(b[byte_num]) == 0)
				printf(".");
			else
				printf("%c", b[byte_num]);
		printf("\n");
		if (byte_num >= size)
			break;
	}
	if (size <= 0)
		printf("\n");
}
