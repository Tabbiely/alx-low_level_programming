#include "main.h"

/**
 * _puts - prints a string
 * @string: the string
 *
 * Return: the length of the string
 */
void _puts(char *string)
{
int x = 0;

while (string[x] != '\0')
{
_putchar(string[x]);
x++;
}
_putchar('\n');
}
