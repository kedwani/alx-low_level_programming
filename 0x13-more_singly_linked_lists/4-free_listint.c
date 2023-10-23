#include "lists.h"
/**
 *free_listint - is a function to free a list
 *@head : is the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
