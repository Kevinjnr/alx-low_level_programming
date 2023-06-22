#include "main.h"

/**
 * print alphabet - print all alphabet in lowercase
 * description: this print all alphabet in from 'a' to 'z'
 * in lowercase using _putchar function
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
