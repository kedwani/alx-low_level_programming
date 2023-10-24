#include "lists.h"

/**
 *insert_nodeint_at_index - is a function that inserts a
 *                          new node at a given position.
 *@head : is the header
 *@idx : is the index
 *@n : is the content
 *Return: the address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *h = *head;

	if (!*head || !head || !idx || !n)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	for (i = 0; i < idx - 1; ++i)
	{
		if (!h)
		{
			free(new);
			return (NULL);
		}
		h = h->next;
	}
	if (!h)
	{
		free(new);
		return (NULL);
	}
	new->next = h->next;
	h->next = new;
	return (new);
}
