#include "function_pointer.h"

/**
 * print_name-function that prints a name.
 * @name:given name
 * @f: function of the name
 * Return: 0
 */
void print_name(char *name, void (*f) (char *))
{
if(name != NULL && f != NULL)

f(name);
}
