#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *and returns the head node’s data (n).
 *
 *
 * @head: double pointer to the head of the list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
*head = temp->next;
n = temp->n;
free(temp);

return (n);
}
