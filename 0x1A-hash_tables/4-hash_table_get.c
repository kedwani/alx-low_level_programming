#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to look for.
 *
 * Description: This function searches for a key in hash table and returns
 * associated value if found.
 * It handles the possibility of collision
 * by searching through a linked list at the computed index.
 * Returns NULL if the key is not found or if the input parameters are invalid.
 *
 * Return: The value associated with the key, or NULL if the key isn't found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

    /* Check for null input */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key at the index matches, return the value if it does */
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

/* If not found at the first node, traverse the linked list at this index */
	tmp = ht->array[index]->next;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

    /* If the key was not found in the list, return NULL */
	return (NULL);
}
