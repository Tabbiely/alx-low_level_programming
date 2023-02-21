#include "main.h"

/**
 * main -prints the alphabet in lowercase
 *
 * Returns: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
