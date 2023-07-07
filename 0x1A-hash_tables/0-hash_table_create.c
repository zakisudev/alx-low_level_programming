#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with size
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_table_t *) * size);

	if (!new_ht->array)
		return (NULL);

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}
