#include "lists.h"

/**
 * sum_dlistint - Return the sum of node data
 * @head: struct node
 * Return: the sum of node values or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
