#include "lists.h"

/**
 * insert_nodeint_at_index - new node given position
 * @head: head.
 * @idx: index of the list.
 * @n: integer.
 * Return: nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *node_temp;

	if (!head && !*head)
		return (NULL);

	node_temp = *head;
	if (idx == i)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		while (node_temp)
		{
			if (idx == i + 1)
			{
				node = malloc(sizeof(listint_t));
				if (!node)
					return (NULL);
				node->n = n;
				node->next = node_temp->next;
				node_temp->next = node;
				return (node);
			}
			node_temp = node_temp->next;
			i++;
		}
	}
	return (NULL);
}
