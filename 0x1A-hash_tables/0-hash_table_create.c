#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with size
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* new_ht = (hash_table_t*) malloc(sizeof(hash_table_t));

	new_ht->size = size;
	return (new_ht);
}
