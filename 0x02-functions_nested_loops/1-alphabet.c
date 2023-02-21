#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
		_putchar(v);

	_putchar('\n');
}
