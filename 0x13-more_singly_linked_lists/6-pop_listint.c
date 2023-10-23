#include "lists.h"
/**
 *pop_listint - is a func to delete the head node of a listint_t linked list.
 * @head  :is the list.
 *Return: is the content of header
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;
/*check for NULL entry */
	if (!*head)
		return (0);
	/*assign the content &the next node address before deleting */
	i = (*head)->n;
	temp = (*head)->next;
/*free the node */
	free(*head);
/*reassign the header*/
	*head = temp;
	return (i);
}
