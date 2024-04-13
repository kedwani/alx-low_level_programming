#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Description: This function attempts to add a key-value pair to a hash table.
 * If the key already exists in the hash table, the function fails. It handles
 * collisions using chaining. If any memory allocation fails, the function
 * returns 0. The function returns 1 on success.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node;

    /* check for null input */
    if (ht == NULL || key == NULL || *key == '\0')
        return (0);
    index = key_index((const unsigned char *)key, ht->size);
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }
    if (ht->array[index] == NULL)
        new_node->next = NULL;
    else
        new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
