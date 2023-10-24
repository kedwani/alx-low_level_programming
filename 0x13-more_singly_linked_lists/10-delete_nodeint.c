#include "lists.h"

/**
 *delete_nodeint_at_index - is a function that inserts a
 *                          new node at a given position.
 *@head : is the header
 *@index : is the index
 *Return: the address of new node.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *h = *head, *temp;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	for (i = 0; i < index; ++i)
	{
		if (!h)
			return (-1);
		if (i == index - 1)
		{
			temp = h->next;
			h->next = temp->next;
			free(temp);
			return (1);
		}
		else
			h = h->next;
	}
	return (-1);
}
