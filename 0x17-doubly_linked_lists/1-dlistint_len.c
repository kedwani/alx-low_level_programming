#include "lists.h"
/**
 * dlistint_len - Counts the number of nodes in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while(h)
	{
		h = h->next;
		++i;
	}
	return (i);
}
