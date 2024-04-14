#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i] == NULL)
			continue;

		tmp = ht->array[i];

		while (tmp)
		{
			if (flag == 0)
				printf("'%s': '%s'", tmp->key, tmp->value);
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);

			flag = 1;
			tmp = tmp->next;
		}
	}

	printf("}\n");
}
