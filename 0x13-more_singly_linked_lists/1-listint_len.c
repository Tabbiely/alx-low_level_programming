#include "lists.h"

/*
 * listint_len- function that returns the number of elements in a list.
 *
 * @h: pointer to head.
 *
 * Return: num_node.
 */


size_t listint_len(const listint_t *h)
{
size_t num_node = 0;
for (; h != NULL; h = h->next)
num_node++;
return (num_node);
}

