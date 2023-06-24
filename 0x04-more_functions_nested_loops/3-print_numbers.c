#include "main.h"

/**
 * print_numbers - print the number from 0 to 9
 * Return: void
 */

void print_nubers(void)
{
	int y = 0, x = 9;

	while (y <= x)
	{
		_putchar(y + '0');
		y++;
	}
	_putchar('\n');
}
