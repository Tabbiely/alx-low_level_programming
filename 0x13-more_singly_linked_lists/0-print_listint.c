#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list.
 *
 * @h : head of the list node.
 *
 * Return: number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		num_nodes++;
	}
	return (num_nodes);
}
