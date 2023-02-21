#include "main.h"

/**
 * print_alphabet -  prints lowercase alphabet letters
 *
 * Does not return a value (void)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
