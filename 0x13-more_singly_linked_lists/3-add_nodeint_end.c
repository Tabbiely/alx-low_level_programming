#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: Pointer to pointer to the head node.
 * @n : The integer to be added to the list.
 *
 * Return: Pointer to the new node, or null if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new_node, *current;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

current = *head;
while (current->next != NULL)
current = current->next;

current->next = new_node;
return (new_node);


}
