#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- lets dogs free
 * @d: pointer to dog to free
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
