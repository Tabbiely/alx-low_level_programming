#include "main.h"

/**
* print_rev -> printing a string in reverse
* @y: string printed in reverse
*/

void print_rev(char *y)
{
int x, n;

n = 0;
while (y[n] != '\0')
n++;

for (x = n - 1; x >= 0; x--)
{
_putchar(y[x]);
}
_putchar('\n');
}
