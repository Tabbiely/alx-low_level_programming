#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  function that frees a listint_t list.
 *
 * @head: Head of the list.
 *
 * Return : void
 */

void free_listint(listint_t *head)
{

if (head == NULL)
return;

free_listint(head->next);
free(head);

}
