#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @y: char to check
 *
 * Return: 0 (true)
 */
void rev_string(char *y)
{
int a = 0, b, c;
char d;

while (y[a] != '\0')
{
a++;
}
c = a - 1;
for (b = 0; c >= 0 && b < c; c--, b++)
{
d = y[b];
y[b] = y[c];
y[c] = d;
}
}
