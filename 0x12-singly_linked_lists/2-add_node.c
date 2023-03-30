#include "lists.h"
#include <string.h> /* for strdup */

int _strlen(const char *str);

/**
 * add_node - adds a node to the beginning of a list_t list
 * @head: a pointer to the pointer of the first node
 * @str: the string element of the new node
 *
 * Return: the new address of the element or NULL if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = _strlen(str);

	ptr->next = *head;
	*head = ptr;

	return (*head);
}

/**
 * _strlen - calculates the length of a string
 * @str: the string used for the calculation
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
