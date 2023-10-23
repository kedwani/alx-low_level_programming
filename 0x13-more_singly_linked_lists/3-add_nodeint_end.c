#include "lists.h"

/**
*add_nodeint_end - is a function that adds a new node at the end of a list.
*@head : is the list
*@n : is the content of the new node.
*Return: the address of new node.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;
/* create the new node*/
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
/* intialize the new node */
	new_node->n = n;
	new_node->next = NULL;
/* append the new node */
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
