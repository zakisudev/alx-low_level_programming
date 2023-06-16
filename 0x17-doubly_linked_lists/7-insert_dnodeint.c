#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: head
 * @idx: index
 * @n: data to be added
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newN, *tmp = *h;
	unsigned int i = 0;

	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp || (i == idx - 1 || idx == 0))
	{
		newN = malloc(sizeof(dlistint_t));
		if (newN)
		{
			newN->n = n;
			if (idx == 0)
			{
				newN->next = *h;
				if (newN->next)
					newN->next->prev = newN;
				newN->prev = NULL;
				*h = newN;
			}
			else
			{
				newN->next = tmp->next;
				newN->prev = tmp;
				tmp->next = newN;
				if (newN->next)
					newN->next->prev = newN;
			}
			return (newN);
		}
	}
	return (NULL);
}
