#include "lists.h"

/**
 *print_listint_safe - is a function to print content of linked list.
 *@head : is the header node.
 *Return: the number of printed nodes.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	if (!head)
		exit(98);
	while (head)
	{
		printf("[%p] %d\n",(void*)head, head->n);
		head = head->next;
		++i;
	}
	return (i);
}
