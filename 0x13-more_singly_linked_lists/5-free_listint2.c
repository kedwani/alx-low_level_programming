#include "lists.h"
/**
 *free_listint2 - is a function to free a list
 *@head : is the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *h;

	if (head == NULL)
		return;

	h = *head;
	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
	*head = NULL;
}
