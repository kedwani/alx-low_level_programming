#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index in a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if the operation fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	unsigned int i = 0;

	h = *head;
	if (!h)
		return (-1);
	if (index == 0)
	{
		if (!h->next)
		{
			free(h);
			*head = NULL;
		}
		else
		{
			h->next->prev = NULL;
			*head = h->next;
			free(h);
		}
		return (1);
	}
	while (h)
	{
		if (i == index)
		{
			h->prev->next = h->next;
			if (h->next)
				h->next->prev = h->prev;
			free(h);
			return (1);
		}
		h = h->next;
		++i;
	}
	return (-1);
}
