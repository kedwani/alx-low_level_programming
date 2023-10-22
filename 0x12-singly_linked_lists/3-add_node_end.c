#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *last, *new;
	unsigned int i = 0;
/*create a new node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	while (str[i])
		++i;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	ptr = *head;
/* check for NULL head*/
	if (!(*head))
	{
		*head = new;
		return (new);

	}
/*append new node to list */
	while (ptr)
	{
		last = ptr;
		ptr = ptr->next;
	}
	last->next = new;
	return (new);
}
