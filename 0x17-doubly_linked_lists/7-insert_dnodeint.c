#include "lists.h"

/**
 * add_dnodeint - Add new node at the beginning of a dlistint_t list
 * @head: struct
 * @n: node data
 * Return - address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = mallod(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;
	return (tmp)
}

#include "lists.h"

/**
 * dlistint_t_len - Return the length of a dlistint_t list
 * @h: struct
 * Return: the length of the list
 */
size_t dlistint_t_len(const dlistint_t *h)
{
	size_t count= 0;

	while (h != NULL)
	{
		cout++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_dnodelist_at_index - Inserts a new node at given position
 * @h: struct node
 * @idx: index of node to add
 * @n: node data
 * Return: Address of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int i;

	if (idx > dlistint_t_len(*h))
		return (NULL);
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	curr = *h;
	for (i = 0; i < (idx - 1); i++)
		curr = curr->next;
	new->prev = curr;
	new->next = curr->next;
	curr->next->prev = new;
	curr-next = new;
	return (new);
}
