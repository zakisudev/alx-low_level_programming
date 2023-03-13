#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int count_words(char *str);
int *_strlen_array(char *str);
int _strlen(char *str);

/**
 * strtow - splits a string to an array of word, 
 * last element of array = NULL
 * @str: the string that will be split into words
 *
 * Return: pointer to the array of words
 */
char **strtow(char *str)
{
	int i, j, k = 0, *ptr2strlen, num_of_words;
	char **ptr2str;

	if (str == NULL || _strlen(str) == 0 || count_words(str) == 0)
		return (NULL);
	num_of_words = count_words(str);
	ptr2strlen = _strlen_array(str);
	if (ptr2strlen == NULL)
		return (NULL);
	ptr2str = malloc(sizeof(char *) * (num_of_words + 1));
	for (i = 0; i < num_of_words; i++)
	{
		ptr2str[i] = malloc(sizeof(char) * (ptr2strlen[i] + 2));
		if (ptr2str[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr2str[i]);
			free(ptr2str);
		}
	}
	for (i = 0; i < num_of_words; i++)
	{
		for (j = 0; j <= ptr2strlen[i] && str[k] != '\0'; j++, k++)
		{
			for (; str[k] == ' '; k++)
				;
			ptr2str[i][j] = str[k];
		}
		ptr2str[i][j] = '\0';
	}
	ptr2str[i] = NULL;
	free(ptr2strlen);
	return (ptr2str);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string used in the calculation
 *
 * Return: the number of words in a string
 */
int count_words(char *str)
{
	int i, k = 0;

	for (i = 0; str[k] != '\0'; i++)
	{
		for (; str[k] != '\0'; k++)
		{
			if (i == 0 && str[k] == ' ' && k == 0)
			{
				while (str[k] == ' ')
					k++;
				if (str[k] == '\0')
					return (0);
			}
			if (str[k] == ' ')
			{
				while (str[k] == ' ')
					k++;
				break;
			}
		}
	}
	return (i);
}

/**
 * _strlen_array - calculates the length of the words in a string
 * @str: the string used in the calculation
 *
 * Return: an array of string lengths
 */
int *_strlen_array(char *str)
{
	int i, k = 0, len, *ptr2strlen;

	ptr2strlen = malloc(sizeof(int) * count_words(str) + 1);
	if (ptr2strlen == NULL)
		return (NULL);
	for (i = 0; i <= count_words(str); i++)
	{
		len = 0;
		for (; str[k] != '\0'; k++)
		{
			if (i == 0 && str[k] == ' ' && k == 0)
			{
				while (str[k] == ' ')
					k++;
			}
			if (str[k] == ' ')
			{
				while (str[k] == ' ')
					k++;
				break;
			}
			ptr2strlen[i] = len++;
		}
	}
	return (ptr2strlen);
}

/**
 * _strlen - calculates the length of a string
 * @str: string involved in the calculation
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
