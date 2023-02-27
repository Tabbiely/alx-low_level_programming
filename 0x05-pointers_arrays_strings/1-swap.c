#include "main.h"
/**
* swap_int - swaps the value of int x and int y
* @x: first int
* @y: second int
* Return 0
*/
void swap_int(int *x, int *y)
{
int z;

z = *x;
*x = *y;
*y = z;
}
