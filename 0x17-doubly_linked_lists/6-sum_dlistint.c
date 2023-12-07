#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the integers in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the integers in the doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
