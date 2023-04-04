#include "lists.h"

/**
 * sum_listint -  returns the sum of data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of ll th edata in the list.
 */
int sum_listint(listint_t *head)
{
if (head == NULL)
return (0);
return (head->n + sum_listint(head->next));
}
