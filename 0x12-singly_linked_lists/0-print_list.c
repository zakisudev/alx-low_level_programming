#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: a pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int node_count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			node_count++;
			ptr = ptr->next;
		}
		printf("[%d] %s\n", ptr->len, ptr->str);
		node_count++;
		ptr = ptr->next;
	}
	return (node_count);
}
