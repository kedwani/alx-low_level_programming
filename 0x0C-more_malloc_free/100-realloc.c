#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		void *p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}
	else if (new_size > old_size)
	{
		char *old= (char*)ptr;
		char *p = malloc(new_size);
		int i;

		for (i = 0; i < old_size; i++)
			p[i] = old[i];
		free(ptr);
		return(p);
	}
	else if (new_size < old_size)
	{
		char *old= (char*)ptr;
		char *p = malloc(new_size);
		int i;

		for (i = 0; i < new_size; i++)
                        p[i] = old[i];
		free(ptr);
		return(p);
	}
}
