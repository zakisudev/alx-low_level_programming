#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a dlistin_t list
 * @head: struct
 * @n: new node
 * Return - Address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	
	if (tmp == NULL)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
		*head = tmp;
	else
	{
		dlistint_t *tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
	tail->next = tmp;
	tmp->prev = tail;
	}
	return (tmp);
}
