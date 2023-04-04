#include "lists.h"

/**
 * get_nodeint_at_index -returns the nth node of a listint_t linked list.
 *
 * @header: a pointer to the head node of the list.
 * @index: index of the node to return.
 *
 *
 *Return: pointer to the nth node of the list.
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
