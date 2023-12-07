#include "lists.h"
/**
 * sum_dlistint - Computes the sum of stored in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the integers in the doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *h;

	while (h)
	{
		i = h->n;
		h = h->next;
	}
	return (i);
}
