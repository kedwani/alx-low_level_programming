#include "lists.h"
/***/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *prv;
	if (!head)
		return (NULL);
	prv = (*head)->next;
	(*head)->next = NULL;

	while (!prv)
	{
		tmp = prv->next;
		prv->next = *head;
		*head = prv;
		prv = tmp;
	}
	return (*head);
}
