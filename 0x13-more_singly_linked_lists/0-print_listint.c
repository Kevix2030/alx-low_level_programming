#include "lists.h"

/**
 * print_listint - print element on the list
 * @h: head of the list
 *
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
        size_t nnodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nnodes++;
}
return (nnodes);
}
