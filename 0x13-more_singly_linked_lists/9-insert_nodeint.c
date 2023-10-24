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
	listint_t *new_node;

	if (!idx || !*head || !n)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	for (i = 0; i < idx - 1; ++i)
	{
		if (!*head)
		{
			free(new_node);
			return (NULL);
		}
		*head = (*head)->next;
	}
	new_node->next = (*head)->next;
	(*head)->next = new_node;
	return (new_node);
}
