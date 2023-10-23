#include "lists.h"
/**
 *add_nodeint - is a function that adds a new node at the beginning of a list.
 * @head: is the header
 *@n : is the content of the new node .
 *Return: the new node address.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	/*intialize the new node */
	new_node->n = n;
	new_node->next = *head;
/*reassign the header*/
	*head = new_node;
	return (*head);
}
