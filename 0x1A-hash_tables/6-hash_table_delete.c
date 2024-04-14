#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp2;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i] == NULL)
		{
			free(ht->array[i]);
			continue;
		}
		else
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			while (tmp)
			{
				free(tmp->key);
				free(tmp->value);
				tmp2 = tmp->next;
				free(tmp);
				tmp = tmp2;
			}
		}
	}
	free(ht);
}
