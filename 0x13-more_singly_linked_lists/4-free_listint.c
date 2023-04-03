#include "lists.h"

/**
 * free_listint - free list.
 * @head: head.
 */

void free_listint(listint_t *head)
{
	listint_t *freeList;

	while (head != NULL)
	{
		freeList = head;
		head = head->next;
		free(freeList);
	}
}
