#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int _strlen(char *str);

/**
 * argstostr - allocates memory to a concatenation all arguments to a program
 * with \n between each argument
 * @ac: number of arguments
 * @av: array of string arguments
 *
 * Return: the pointer to new string, NULL if failure or ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, totalStrLen = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{ /* calculate length of all arguments +1 for '\n' after each arg */
		totalStrLen += _strlen(av[i]) + 1;
	}

	ptr = malloc(sizeof(char) * totalStrLen + 1);
	/* +1 for final null teminator */
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; j < _strlen(av[i]); j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n'; /* add '\n' after each argument */
	}

	ptr[k] = '\0';

	return (ptr);
}

/**
 * _strlen - calculated the length of string str
 * @str: the string that the length will be calculated
 *
 * Return: the length of the string str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
