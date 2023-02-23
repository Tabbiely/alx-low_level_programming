#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: 0
 */
int main(void)
{
int y;

for (y = 1; y <= 100; y++)
{
if (y % 15 == 0)
printf("FizzBuzz");
else if (y % 3 == 0)
printf("Fizz");
else if (y % 5 == 0)
printf("Buzz");
else
printf("%i", y);
if (y < 100)
printf(" ");
}
printf("\n");
return (0);
}
