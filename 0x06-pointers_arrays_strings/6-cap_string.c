#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: source string
 * Return: String capitalized
 */

char *cap_string(char *str)
{
	int con, index, count;
	char chars[] = {' ', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}',  '\t', '\n', '\0'};

	con = 32;
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'index' && str[index] <= 'z')
		{
			str[index] =  str[index] - con;
		}
		con = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[index])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
