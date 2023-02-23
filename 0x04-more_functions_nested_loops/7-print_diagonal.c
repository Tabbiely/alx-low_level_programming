#include "main.h"

/**
 * print_diagonal - prints diagonal lines.
 * @n: input variable
 *
 * Return: void
 */


void print_diagonal(int n)
{
int y, x;

if (n <= 0)
_putchar('\n');
for (y = 0; y < n; y++)
{
for (x = 0; x < y; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}
