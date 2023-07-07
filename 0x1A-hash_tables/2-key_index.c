#include "hash_tables.h"

/**
 * key_index - Retrieves an index of a key
 * @key: the key
 * @index: the size of the array of the hash table
 *
 * Return: Returns the index at which the key/value
 * pair should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
