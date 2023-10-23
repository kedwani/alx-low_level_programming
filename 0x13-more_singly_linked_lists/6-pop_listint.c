#include "lists.h"
/**
 *pop_listint - is a func to delete the head node of a listint_t linked list.
 * @head  :is the list.
 *Return: is the content of header
*/

int pop_listint(listint_t **head)
{
	int i;

	if (!head)
		return (0);
	i = (*head)->n;
	*head = (*head)->next;
	return (i);
}
