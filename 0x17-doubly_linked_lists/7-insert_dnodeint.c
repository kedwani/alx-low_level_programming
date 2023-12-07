#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a node at an index in a  linked list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index at which to insert the new node.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL if insertion fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *hd = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!*head)
	{
		free(new);
		return (NULL);
	}

	while (hd)
		if (i == idx - 1)
		{
			new->next = h->next;
			new->prev = h;
			h->next = new;
			return (new);
		}
	free(new);
	return (NULL);
}
