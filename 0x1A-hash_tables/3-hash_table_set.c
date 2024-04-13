#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	
	if (hash_table_t == NULL)
		return (0);
	index = key_index(key, hash_table_t->size);
	if (hash_table_t->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == nuLL)
			return (0);
		new_node->key 
	}



}
