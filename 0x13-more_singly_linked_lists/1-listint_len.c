#include "lists.h"

/**
 *listint_len - is a function to calc the num of nodes of a linked list.
 *@h : is the list .
 *Return: is the len of list.
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; ++i)
		h = h->next;
	return (i);
}
