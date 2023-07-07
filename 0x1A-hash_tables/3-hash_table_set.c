#include "hash_tables.h"

/**
 * hash_table_set - Adds elements to the hash table
 * @ht: hash table
 * @key: the key
 * @value: the value to be added
 *
 * Return: 1 if it succeeded 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	new_item = (ht->array)[index];
	while (new_item != NULL)
	{
		if (strcmp(new_item->key, key) == 0)
		{
			free((new_item->array)[index]->value);
			new_item->value = strdup(value);
			return (1);
		}
		new_item = new_item->next;
	}
	new_item = malloc(sizeof(hash_node_t));

	if (new_item == NULL)
		return (0);
	new_item->key = strdup(key);
	new_item->value = strdup(value);
	new_item->next = (ht->array)[index];
	(ht->array)[index] = new_item;
	return (1);
}
