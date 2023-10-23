#include "lists.h"

/**
 *get_nodeint_at_index - is a function that returns the nth node
 *of a linked list.
 *@head : is the header
 *@index : is the index start by 0.
 *Return: the address of the desired node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
	if (head == NULL || head->next == NULL)
		return (NULL);
	head = head->next;
	}
	return (head);
}
