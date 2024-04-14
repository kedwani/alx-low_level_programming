#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees its memory.
 * @ht: pointer to the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp2; /* Temporary pointers for node traversal */
	unsigned long int i; /* Index for iterating through the hash table */
	/* Return immediately if the hash table pointer is NULL */
	if (ht == NULL)
		return;

	/* Iterate over each slot of the array in the hash table */
	for (i = 0; i < ht->size; ++i)
	{
		/* If the slot is empty, just continue to the next */
		if (ht->array[i] == NULL)
		{
			continue;
		}
		else
		{
			/* Point to the first node in linked list at array[i] */
			tmp = ht->array[i]->next;
			/* Free key and value of head node, then node itself */
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);

			/* Traverse the rest of the linked list */
			while (tmp)
			{
				tmp2 = tmp->next; /* Save next node */
				free(tmp->key); /* Free current node's key */
				free(tmp->value); /* Free curent node's value */
				free(tmp); /* Free current node */
				tmp = tmp2; /* Move to next node */
			}
		}
	}
	/* Finally, free the array and the hash table struct */
	free(ht->array);
	free(ht);
}
