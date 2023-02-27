#include "main.h"
/**
 * _strlen - return the length of a string
 * @z: char to check
 * Description: returns the length of a string
 * Return: 0 is success
 */
int _strlen(char *z)
{
int y = 0;

for (; *z++;)
y++;
return (y);
}
