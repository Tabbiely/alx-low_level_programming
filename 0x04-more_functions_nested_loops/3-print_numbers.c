#include "main.h"

/**
*print_numbers-  prints the numbers, from 0 to 9
*
*Return: void
*/

void print_numbers(void)
{
char y;

for (y = '0'; y <= '9'; y++)
{
_putchar(y + '0');
}
_putchar('\n');
}
