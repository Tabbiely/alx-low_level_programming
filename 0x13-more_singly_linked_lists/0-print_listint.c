#include "lists.h"
#include <stdio.h>

/*
 * print_listint- prints all the elements.
 * @h: the linklist nodes head.
 *
 * Return : nodes number.
 *
 */

size_t print_listint(const listint_t *h)
{
size_t num_nodes;
for (num_nodes = 0 ; h != NULL ; num_nodes++)
{
printf("%d\n", h->n);
h = h->next;

}

return (num_nodes);

}
