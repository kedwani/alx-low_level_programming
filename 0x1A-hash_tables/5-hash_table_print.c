#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		exit (0);
	for (i = 0; i <= ht->size; ++i)
	{
		if (ht->array[i] == NULL)
			continue;
		printf("{");
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag == 0)
				printf("'%s': '%s'", tmp->key, tmp->value);
			if (flag == 1)
				printf(", '%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
		printf("}\n");
	}
}
