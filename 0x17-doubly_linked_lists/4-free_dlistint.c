#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 * @head: struct node
 * Return - void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;

	while (new != NULL)
	{
		dlistint_t *next = new->next;

		free(new);
		new = next;
	}
}
