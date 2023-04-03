#include "lists.h"

/**
 * free_listint2 - free list.
 * @head: head.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *freeList2;

	if (!head)
		return;

	while (*head != NULL)
	{
		freeList2 = *head;
		*head = (*head)->next;
		free(freeList2);
	}
}
