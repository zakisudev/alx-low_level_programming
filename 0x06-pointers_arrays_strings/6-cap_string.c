#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: THe string to be capitalized
 * Return: pointer to the changed string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if (str[index] == ' ' || str[index] == '\t' ||
			str[index] == '\n' || str[index] == ',' ||
			str[index] == ';' || str[index] == '.' ||
			str[index] == '!' || str[index] == '?' ||
			str[index] == '"' || str[index] == '{' ||
			str[index] == '}' || str[index] == '(' ||
			str[index] == ')' || str[index] == 0)
		{
			if (str[index + 1] >= 97 && str[index + 1] <= 122)
			{
				str[index + 1] = str[index + 1] - 32;
			}
		}
		index++;
	}
	return (str);
}
