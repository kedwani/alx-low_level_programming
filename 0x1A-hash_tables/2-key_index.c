#include "hash_tables.h"

/**
 * key_index - Generates an index for a key in a hash table.
 * @key: The key to hash.
 * @size: The number of slots in the hash table.
 * Return: index at which key/value pair should be stored in the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
