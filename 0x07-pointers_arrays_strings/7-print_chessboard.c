#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int x, y;

for (x = 0; x < 8; x++)
{
for (j = 0; y < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
