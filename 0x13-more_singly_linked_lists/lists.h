#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>



/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;



size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);



/**
 *add_nodeint - is a function that adds a new node at the beginning of a list.
 * @head: is the heade
 *@n : is the content of the new node
 *Return: the new node address.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	/*intialize the new node */
	new_node->n = n;
	new_node->next = *head;
/*reassign the header*/
	*head = new_node;
	return (*head);
}


#endif
