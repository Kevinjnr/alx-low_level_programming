#include "main.h"

/**
 * void print_alphabet(void) - print all alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)

{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
