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
	listint_t *h = *head, *new_node;

	if (!idx || !*head)
		return (NULL);
	/* go for the desired position */
	for (i = 0; (i < idx - 2) && h != NULL; ++i)
	{
		if (!h->next)
			return (NULL);
		h = h->next;
	}
	if (h == NULL)
		return (NULL);
	h = h->next;
	/*create the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
/*intialize the new node & append it*/
	new_node->n = n;
	new_node->next = h->next;
	h->next = new_node;
	return (new_node);
}
