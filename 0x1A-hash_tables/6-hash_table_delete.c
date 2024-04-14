#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees its memory.
 * @ht: pointer to the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *tmp, *tmp2; /* Temporary pointers for node traversal */
    unsigned long int i;      /* Index for iterating through the hash table */

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
            /* Point to the first node in the linked list at array[i] */
            tmp = ht->array[i];
            
            /* Free the key and value of the head node, then the node itself */
            free(tmp->key);
            free(tmp->value);
            free(tmp);
            
            /* Traverse the rest of the linked list */
            while (tmp->next)
            {
                tmp2 = tmp->next; /* Save next node */
                
                /* Free current node's key and value if not NULL */
                if (tmp2->key != NULL)
                    free(tmp2->key);
                if (tmp2->value != NULL)
                    free(tmp2->value);

                free(tmp2); /* Free current node */
                tmp = tmp2; /* Move to next node */
            }
        }
    }
    /* Finally, free the array and the hash table struct */
    free(ht->array);
    free(ht);
}
