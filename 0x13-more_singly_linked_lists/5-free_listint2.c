#include "lists.h"
/**
 *free_listint2 - is a function to free a list
 *@head : is the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *h;

	h = *head;
	if (h == NULL)
		exit(1);
	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
	*head = NULL;
	*head = h;
}
