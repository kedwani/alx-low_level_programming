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
	hash_node_t *tmp;
/* check for null input */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
/*search for exist key*/
	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = malloc(sizeof(char) * (strlen(value) + 1));
			if (ht->array[index]->value == NULL)
				return (0);
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		tmp = ht->array[index]->next;
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = malloc(sizeof(char) * (strlen(value) + 1));
				if (tmp->value == NULL)
					return (0);
				strcpy(tmp->value, value);
				return (1);
			}
			tmp = tmp->next;
		}
	}
/*creating a new node and append it to the array*/
	return (node_create(ht, key, value, index));
}

int node_create(hash_table_t *ht, const char *key,
		const char *value, unsigned long int index)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = malloc(sizeof(char) * (ht->size) + 1);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);

	new_node->value = malloc(sizeof(char) * (ht->size) + 1);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	strcpy(new_node->value, value);


	if (ht->array[index] == NULL)
		new_node->next = NULL;
	else
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
