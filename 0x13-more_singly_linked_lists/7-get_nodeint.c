#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head node of the list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the nth node of the list, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;

while (current != NULL && index > 0)
{
current = current->next;
index--;
}

return (current);
}
