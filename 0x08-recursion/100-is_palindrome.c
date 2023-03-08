#include "main.h"

int _strlen_recursion(char *s);
int check_chars(char *s, int in_start, int in_end);

/**
 * is_palindrome - Check whether a string is palindrome
 * @s: the string to be checked
 * Return: 1 if string is palindrome 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_chars((s), 0, len - 1));
}

/**
 * check_chars - Check if string is palindrome
 * @s: the string to be checked
 * @in_start: checking chars starting from beginning of string
 * @in_end: checking chars starting from end of string
 *
 * Return: 1 if string is palindrome 0 otherwise
 */

int check_chars(char *s, int in_start, int in_end)
{
	if (in_end < 0)
		return (0);
	if (s[in_start] == s[in_end] && (in_start + 1) == in_end)
		return (1);
	if (in_start == in_end)
		return (1);
	if (s[in_start] == s[in_end])
		return (check_chars(s, in_start + 1, in_end - 1));
	else
		return (0);
}
