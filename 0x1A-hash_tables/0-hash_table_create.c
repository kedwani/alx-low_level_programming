#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array of the hash table.
 *
 * Description: This function allocates memory for a new hash table
 * and initializes it. The hash table's array elements are set to NULL,
 * preparing the table for use with a hash function.
 *
 * Return: A pointer to the newly created hash table, or NULL if
 * memory allocation fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *created;
	unsigned long int i;

/* Check if size is valid */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the hash table structure */
	created = malloc(sizeof(hash_table_t));
	if (created == NULL)
		return (NULL);

	/* Allocate memory for the array within the hash table */
	created->size = size;
	created->array = malloc(sizeof(hash_node_t *) * size);
	if (created->array == NULL)
	{
		free(created);
		return (NULL);
	}

	/* Initialize elements of the array to NULL */
	for (i = 0; i < size; i++)
		created->array[i] = NULL;
	return (created);
}
