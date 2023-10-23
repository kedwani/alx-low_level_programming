#include "lists.h"
/**
 *sum_listint - is a function that returns the sum of all the data(n) of a list
 *@head : is the head
 *Return: the sum.
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (!head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
