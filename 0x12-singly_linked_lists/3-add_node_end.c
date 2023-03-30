#include "lists.h"
#include <string.h>

int _strlen(const char *str);

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the pointer of the first node in the list
 * @str: the str value of the new node
 *
 * Return: the adress of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *ptr2new = malloc(sizeof(list_t));

	if (ptr2new == NULL)
		return (NULL);

	ptr2new->str = strdup(str);
	ptr2new->len = _strlen(str);
	ptr2new->next = NULL;

	if (*head == NULL) /* head pointer is not pointing to anything */
	{
		*head = ptr2new;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = ptr2new;
	}

	return (ptr2new);
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
