#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	
	if (ht == NULL)
		exit (0);
	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i] == NULL)
			continue;
		printf("{")
		while (ht->array[i]->next)
		{
			if (flag == 0)
				printf("'%s': '%s'",ht->array[i]->next);
			if (flag == 1)
				printf(", '%s': '%s'",ht->array[i]->next);
			
			flag == 1;
		

		}



	}

}
