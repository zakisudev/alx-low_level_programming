#include "lists.h"

/**
 * add_dnodeint - Add new node at the beginning of a dlistint_t list
 * @head: struct
 * @n: node data
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;
	return (tmp);
}
