#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
int x = 0, y;

char a[] = " \t\n,;.!?\"(){}";

while (*(s + x))
{
if (*(s + x) >= 'a' && *(s + x) <= 'z')
{
if (y == 0)
*(s + x) -= 'a' - 'A';
else
{
for (x = 0; x <= 12; x++)
{
if (a[x] == *(s + y - 1))
*(s + y) -= 'a' - 'A';
}
}
}
y++;
}
return (s);
}
