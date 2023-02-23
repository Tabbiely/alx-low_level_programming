#include "main.h"

/**
 *print_numbers -function that prints the numbers, from 0 to 9, except 2 and 4
 *Returns: void
 */

void print_numbers(void)

{
for (int i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
putchar(i + '0');
putchar('\n');
