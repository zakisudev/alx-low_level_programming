#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the pointer to the first node of the list
 *
 * Return: nothing (void)
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
