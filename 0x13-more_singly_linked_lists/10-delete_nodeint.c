#include "lists.h"

/**
 *delete_nodeint_at_index - is a function that inserts a
 *                          new node at a given position.
 *@head : is the header
 *@index : is the index
 *Return: the address of new node.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index);
{
	unsigned int i;
	listint_t *h = *head, *temp;
/*check for NULL*/
	if (!head)
		return (-1);
/*check for idx == 0 <the only case that need cutom code>*/
	if (idx == 0)
	{
		free(h);
		h = NULL
		return (1);
	}
/*try reaching the desired position*/
	for (i = 0; i < index - 1; ++i)
	{
		if (!h)
			return (-1);
		else if (i == index - 1)
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
