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
	unsigned int i;

	now = h;
	for (i = 0; now != NULL; ++i)
	{
		if (now->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s", next->str);
		now = now->next;
	}
	return (i);
}
