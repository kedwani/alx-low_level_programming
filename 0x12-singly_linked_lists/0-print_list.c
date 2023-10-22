#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	list_t  *now;
	unsigned long int i;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)");
	else
		printf("[%u] %s\n", h->len, h->str);

	now = h->next;
	for (i = 1; now != NULL; ++i)
	{
		if (now->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", now->len, now->str);
		now = now->next;
	}
	return (i);
}
