#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 *
 * Return: value associated with the element or
 * NULL if the key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *old;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	i = key_index((unsigned char *) key, ht->size);

	if ((ht->array)[i] == NULL)
		return (NULL);
	old = (ht->array)[index];
	while (old)
	{
		if (strcmp(old->key, key) == 0)
			return (old->value);
		old = old->next;
	}
	return (NULL);
}
