#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;
	ptr = head->next;

	while (temp)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;

	}
	free(head);
}
