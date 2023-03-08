#include "main.h"
/**
 * _strlen_recursion - strings length
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
int p = 0;

if (*s)
{
p++;
p += _strlen_recursion(s + 1);

}
return (p);
}
