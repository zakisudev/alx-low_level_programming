#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a dlistint_t list
 * @head: struct node
 * @index: position of node
 * Return: node or Null if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}
