#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{

int t;

t = 0;
while (*(s + t))
{
if (*(s + t) >= 'a' && *(s + t) <= 'z')
*(s + t) -= 'a' - 'A';
t++;
}
return (s);
}
