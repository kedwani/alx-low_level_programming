#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Description: Frees all nodes in a doubly linked list and the head itself.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
/*	free(tmp);*/
}
