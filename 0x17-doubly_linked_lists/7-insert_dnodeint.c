dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new;
    dlistint_t *hd = *h;
    unsigned int i = 0;

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = NULL;

    if (idx > 0 && !*h)
    {
        free(new);
        return (NULL);
    }

    if (idx == 0)
    {
        if (hd)
        {
            new->next = hd;
            hd->prev = new;
        }
        *h = new;
        return (new);
    }

    while (hd && i < idx - 1)
    {
        hd = hd->next;
        ++i;
    }

    if (!hd)
    {
        free(new);
        return (NULL);
    }

    new->prev = hd;
    if (hd->next != NULL)
    {
        new->next = hd->next;
        new->next->prev = new;
    }

    hd->next = new;
    return (new);
}
