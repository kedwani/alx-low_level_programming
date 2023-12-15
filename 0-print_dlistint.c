#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (!h)
		return(0);
	for (;h != NULL;++i)
	{
		printf("%d\n",h->n);
		h = h->next;
	}
	return(i);
}
