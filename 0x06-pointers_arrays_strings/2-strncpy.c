#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: strings source
 * @dest: string destination
 * @n: length of int
 *
 * Return: The resulting string des pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int s;

for (s = 0; s < n && *(src + s); s++)
{
*(dest + s) = *(src + s);
}
for (; s < n; s++)
{
*(dest + s) = '\0';
}
return (dest);

}
