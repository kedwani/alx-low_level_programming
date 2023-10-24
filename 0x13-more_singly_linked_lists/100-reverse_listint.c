#include "lists.h"
/**
*reverse_listint - is a function to reverse a list.
*@head : is the head of list
*Return: the head of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *prv;

	if (!head || !*head)
		return (NULL);

	prv = (*head)->next;
	(*head)->next = NULL;

	while (prv)
	{
		tmp = prv->next;
		prv->next = *head;
		*head = prv;
		prv = tmp;
	}
	return (*head);
}
